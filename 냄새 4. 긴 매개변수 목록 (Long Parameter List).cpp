// ❌ Before — 매개변수 4개 이상은 위험 신호
void createOrder(std::string customerName,
                 std::string address,
                 std::string city,
                 std::string zipCode,
                 double price,
                 int quantity,
                 std::string paymentMethod) { ... }

// ✅ After 1: 매개변수 객체 만들기
// struct Address {
//     std::string street, city, zipCode;
// };
// struct OrderInfo {
//     std::string customerName;
//     Address     address;
//     double      price;
//     int         quantity;
//     std::string paymentMethod;
// };
// void createOrder(const OrderInfo& info) { ... }

// ✅ After 2: 객체 통째로 넘기기 (Preserve Whole Object)
// Before:
void setRange(int low, int high) { ... }
int low  = range.getLow();
int high = range.getHigh();
setRange(low, high);

// After:
// void setRange(const Range& range) {
//     // low = range.getLow(), high = range.getHigh() 직접 사용
// }
// setRange(range); // 객체를 통째로 전달

// ✅ After 3: 매개변수를 질의 함수로 바꾸기
// Before: double discount(double price, double taxRate)
// After:  double discount(double price)
//         { return price * getTaxRate(); }

// ❌ 냄새 10 — 항상 같이 다니는 데이터 → 클래스로 묶기
// Before: 전화번호 3개가 항상 함께 전달
void print(const std::string& areaCode,
           const std::string& prefix,
           const std::string& number) { ... }

// ✅ After — 클래스 추출하기 (Extract Class)
// struct PhoneNumber {
//     std::string areaCode, prefix, number;
//     std::string format() const {
//         return "(" + areaCode + ") " + prefix + "-" + number;
//     }
// };
// void print(const PhoneNumber& phone) {
//     std::cout << phone.format();
// }

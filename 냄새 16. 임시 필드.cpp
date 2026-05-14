// ❌ 냄새 16 — 조건에 따라 의미 없는 필드
class Order {
    std::string customerName;
    std::string shippingAddress;
    // 인터넷 주문일 때만 유효 — 매장 주문이면 항상 empty!
    std::string trackingNumber;
};

// ✅ After — 특이 케이스 클래스 추출
// class Order {
//     std::string customerName;
//     virtual bool requiresShipping() const = 0;
//     virtual ~Order() = default;
// };
// class OnlineOrder : public Order {
//     std::string shippingAddress;
//     std::string trackingNumber; // 온라인 전용
//     bool requiresShipping() const override { return true; }
// };
// class StoreOrder : public Order {
//     bool requiresShipping() const override { return false; }
// };

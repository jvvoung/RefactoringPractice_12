// ❌ 냄새 7 — 하나의 클래스가 DB도 하고 가격 계산도
class Order {
    void saveToDatabase() { ... }  // DB 역할
    void loadFromDatabase() { ... }
    double calculateDiscount() { ... } // 가격 계산 역할
    double applyTax(double price) { ... }
};
// DB 변경할 때도, 가격 정책 바꿀 때도 이 클래스 수정!

// ✅ After — 단계 쪼개기 / 클래스 추출
// class OrderRepository {      // DB 전담
//     void save(const Order& o) { ... }
//     Order load(int id) { ... }
// };
// class PricingEngine {         // 가격 전담
//     double discount(const Order& o) { ... }
//     double applyTax(double price) { ... }
// };
// ::calculate(amount); } };

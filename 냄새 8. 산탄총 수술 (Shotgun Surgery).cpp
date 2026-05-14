// ❌ 냄새 8 — 세금 정책 변경 시 여러 클래스 수정 필요
class Order    { double tax() { return price * 0.1; } };
class Receipt  { double tax() { return amount * 0.1; } };
class Invoice  { double tax() { return total * 0.1; } };
// 세율 0.1 → 0.12로 바꾸면? 3곳 모두 수정!

// ✅ After — 함수 옮기기 (Move Function)
// class TaxCalculator {
//     static double calculate(double amount) {
//         return amount * TAX_RATE;
//     }
//     static constexpr double TAX_RATE = 0.1;
// };
// class Order   { double tax() { return TaxCalculator::calculate(price); } };
// class Receipt { double tax() { return TaxCalculator::calculate(amount); } };

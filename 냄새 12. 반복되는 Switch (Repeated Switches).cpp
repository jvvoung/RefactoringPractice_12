// ❌ 냄새 12 — switch가 여러 곳에 반복
// 새 타입 추가 시 모든 switch 수정 필요!
double calcBonus(EmployeeType t, double sal) {
    switch(t) {
        case ENGINEER: return sal * 0.1;
        case MANAGER:  return sal * 0.2;
        default: throw std::invalid_argument("unknown");
    }
}
std::string describe(EmployeeType t) {
    switch(t) { // 또 switch!
        case ENGINEER: return "Engineer";
        case MANAGER:  return "Manager";
    }
}

// ✅ After — 다형성으로 교체 (Replace Conditional with Polymorphism)
// class Employee {
// public:
//     virtual double bonus(double sal) const = 0;
//     virtual std::string describe() const = 0;
//     virtual ~Employee() = default;
// };
// class Engineer : public Employee {
// public:
//     double bonus(double s) const override { return s * 0.1; }
//     std::string describe() const override { return "Engineer"; }
// };
// class Manager : public Employee {
// public:
//     double bonus(double s) const override { return s * 0.2; }
//     std::string describe() const override { return "Manager"; }
// }; 

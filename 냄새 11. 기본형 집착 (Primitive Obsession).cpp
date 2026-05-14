// ❌ 냄새 11 — 기본형으로 의미 있는 개념 표현
double price = 19.99; // 그냥 double — 음수 방지 로직 어디?

// ✅ After 1 — 기본형을 객체로 바꾸기 (Replace Primitive with Object)
class Price {
    double value_;
public:
    explicit Price(double v) {
        if (v < 0) throw std::invalid_argument("Price cannot be negative");
        value_ = v;
    }
    double value() const { return value_; }
    std::string toString() const {
        return "$" + std::to_string(value_);
    }
};

// ✅ After 2 — 타입 코드를 서브클래스로 바꾸기
// Before: int type = 1(Engineer)/2(Manager)
// After:
// class Employee { public: virtual double bonus(double sal) const = 0; };
// class Engineer : public Employee { double bonus(double s) const override { return s*0.1; } };
// class Manager  : public Employee { double bonus(double s) const override { return s*0.2; } };

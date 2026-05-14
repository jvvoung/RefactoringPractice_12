// ❌ 냄새 23 — 상속 포기: Stack이 vector 기능 모두 상속받는 문제
// std::stack이 vector 상속하는 경우를 상상해보면:
class MyStack : public std::vector<int> {
    // push/pop 기능만 필요한데 vector의 모든 것이 상속됨!
    // insert, erase 등 스택에 부적절한 메서드도 노출
};

// ✅ After — 위임으로 교체 (Replace Inheritance with Delegation)
// class MyStack {
//     std::vector<int> data_; // 상속 → 위임!
// public:
//     void push(int val) { data_.push_back(val); }
//     int  top()  const  { return data_.back(); }
//     void pop()         { data_.pop_back(); }
//     bool empty() const { return data_.empty(); }
//     // vector의 다른 메서드는 노출 안 됨
// };

// ✅ Extract Superclass — 공통 부분을 부모로
// class Party {
//     std::string name_;
// public:
//     virtual int annualCost() const = 0;
//     std::string name() const { return name_; }
// };
// class Employee   : public Party { int annualCost() const override { return salary_; } };
// class Department : public Party { int annualCost() const override {
//     int total = 0;
//     for (auto& e : staff_) total += e.annualCost();
//     return total;
// } };

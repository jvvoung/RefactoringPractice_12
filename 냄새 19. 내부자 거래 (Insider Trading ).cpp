// ❌ 냄새 19 — 내부자 거래 (결합도 과도)
class Department {
    Employee boss_; // private
    friend class Payroll; // Payroll이 내부 직접 접근!
};
class Payroll {
    void process(Department& d) {
        // d.boss_ 직접 접근 → 강한 결합!
        std::cout << d.boss_.salary;
    }
};
// ✅ After — Hide Delegate: 인터페이스 제공
// class Department {
//     Employee boss_;
// public:
//     double getBossSalary() const { return boss_.salary; }
// };
// class Payroll {
//     void process(const Department& d) {
//         std::cout << d.getBossSalary(); // 공개 인터페이스 사용
//     }
// };

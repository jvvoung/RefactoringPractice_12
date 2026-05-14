// ❌ 냄새 22 — 데이터 클래스 (getter/setter만 있는 클래스)
class Department {
    std::string name_;
    std::vector<Employee> staff_;
    int studentCount_ = 0;
public:
    std::string getName() const { return name_; }
    void setName(const std::string& n) { name_ = n; }
    std::vector<Employee>& getStaff() { return staff_; }
    void setStaff(const std::vector<Employee>& s) { staff_ = s; }
    // 관련 행위가 전혀 없음!
};

// ✅ After — 행위를 클래스로 이동 + setter 제거 + 컬렉션 캡슐화
// class Department {
//     std::string name_;
//     std::vector<Employee> staff_;
// public:
//     Department(std::string name) : name_(std::move(name)) {}
//     std::string getName() const { return name_; } // setter 제거 (불변)
//     void addEmployee(Employee e) { staff_.push_back(e); } // 캡슐화
//     size_t headCount() const { return staff_.size(); }    // 행위 추가
//     double totalSalary() const {
//         return std::accumulate(staff_.begin(), staff_.end(), 0.0,
//             [](double s, const Employee& e){ return s + e.salary; });
//     }
// };

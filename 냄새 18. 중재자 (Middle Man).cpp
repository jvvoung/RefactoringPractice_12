// ❌ 냄새 18 — 중재자 (모든 메서드가 위임만)
class Person {
    Department dept;
public:
    Manager getManager() { return dept.getManager(); } // 위임만
    int numReports()     { return dept.numReports(); }  // 위임만
    // Person이 하는 일이 없음!
};

// ✅ After — 중재자 제거 (Remove Middle Man)
// Person을 거치지 않고 dept에 직접 접근
// person.dept.getManager(); — 또는:
// class Person {
//     Department dept; // public으로 노출
// };

// ✅ After — 상속 대신 위임으로 (Replace Superclass with Delegate)
// Before: AdvancedPrinter extends Printer (불필요한 상속)
class AdvancedPrinter {
    Printer printer_; // 위임!
public:
    explicit AdvancedPrinter(Printer p) : printer_(p) {}
    void print(const std::string& msg) {
        printer_.print(msg); // 위임
    }
    void printWithTimestamp(const std::string& msg) {
        auto ts = std::chrono::system_clock::now();
        std::cout << "[" << ts.time_since_epoch().count() << "] " << msg;
    }
};

// ❌ 냄새 17 — 긴 메시지 체인 (Law of Demeter 위반)
// 내부 구조에 강하게 결합!
std::string dept = company.getHead()
                          .getDepartment()
                          .getHead()
                          .getName();

// ✅ After — 위임 숨기기 (Hide Delegate)
// Company 클래스에 편의 메서드 추가
// class Company {
//     std::string getDepartmentHeadName() const {
//         return head_.getDepartment().getHead().getName();
//     }
// };
// 사용처: company.getDepartmentHeadName();

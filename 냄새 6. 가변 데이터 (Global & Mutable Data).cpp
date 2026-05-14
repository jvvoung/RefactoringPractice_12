// ❌ 냄새 6 — 가변 데이터
struct Point { int x, y; };
Point p{0, 0};
p.x = 10; // 어디서든 변경 가능 → 추적 어려움

// ✅ After 1 — 불변 값 객체 (const)
// struct ImmutablePoint {
//     const int x, y;
//     ImmutablePoint(int x, int y) : x(x), y(y) {}
// };

// 변경 대신 새 객체 생성

// ✅ After 2 — 변수 쪼개기 (Split Variable): 용도별 다른 변수 사용
// Before:
double temp = 2 * (height + width); // 둘레
temp = height * width;              // 면적 (재사용 → 혼란!)
// After:
// double perimeter = 2 * (height + width);
// double area      = height * width;

// ✅ After 3 — 질의/변경 함수 분리
// 읽기와 쓰기를 항상 분리!
int  getTotalCount() const { return count_; } // 질의만
void increment()            { ++count_; }      // 변경만

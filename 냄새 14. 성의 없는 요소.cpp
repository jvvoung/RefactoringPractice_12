// ❌ 냄새 14 — 너무 단순한 클래스 (가치 없음)
class Multiplier {
    int multiply(int a, int b) { return a * b; }
};
// ✅ After — 함수 인라인 (Inline Function), 클래스 제거
// 그냥 a * b 사용하거나 static 유틸로 이동


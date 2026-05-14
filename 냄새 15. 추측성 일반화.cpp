// ❌ 냄새 15 — 미래를 위해 만든 불필요한 추상화
class AbstractDataProcessor {
    virtual void process() = 0; // 구현체가 딱 하나뿐!
    virtual void preProcess() {} // 아무도 안 씀
    virtual void postProcess() {}
};
// ✅ After — 추상 클래스 제거, 구체 클래스 직접 사용
// 죽은 코드 제거 (Remove Dead Code)

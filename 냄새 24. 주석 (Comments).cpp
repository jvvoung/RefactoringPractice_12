// ❌ 냄새 24 — 주석이 코드를 설명해야 하는 경우
// 두 조건이 모두 참이어야 배너를 렌더링함 (Mac + IE + 초기화됨 + 크기 변경됨)
if ((platform.find("MAC") != std::string::npos) &&
    (browser.find("IE") != std::string::npos) &&
    wasInitialized && resize > 0) { ... }

// ✅ After — 변수 추출 (Extract Variable) → 주석 불필요
// bool isMacOs    = platform.find("MAC") != std::string::npos;
// bool isIE       = browser.find("IE") != std::string::npos;
// bool wasResized = resize > 0;
// if (isMacOs && isIE && wasInitialized && wasResized) { ... }

// ✅ Introduce Assertion — 가정을 코드로
// double getExpenseLimit() {
//     assert(expenseLimit != NULL_EXPENSE || primaryProject != nullptr);
//     return expenseLimit != NULL_EXPENSE ? expenseLimit
//                                        : primaryProject->getMemberExpenseLimit();
// }

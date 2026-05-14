// ❌ 냄새 13 — 고전적 반복문
std::vector<std::string> names;
for (const auto& emp : employees)
    if (emp.office == "London")
        names.push_back(emp.name);

// ✅ After — 파이프라인으로 바꾸기 (C++20 ranges)
// #include <ranges>
// auto names = employees
//     | std::views::filter([](const auto& e){ return e.office=="London"; })
//     | std::views::transform([](const auto& e){ return e.name; });

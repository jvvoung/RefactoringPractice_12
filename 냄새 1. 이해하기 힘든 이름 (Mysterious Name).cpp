// ❌ Before — 이름만 봐서는 의도를 알 수 없음
int calc(int x, int y) { return x + y; }

struct U {
    std::string nm;  // 무슨 뜻?
    int ag;
};

// ✅ After — 이름만으로 의도 전달
// int calculateTotalPrice(int basePrice, int tax) {
//     return basePrice + tax;
// }

// struct User {
//     std::string name;
//     int age;
// };
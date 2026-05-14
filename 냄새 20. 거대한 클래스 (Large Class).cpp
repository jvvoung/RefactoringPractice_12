// ❌ 냄새 20 — 거대한 클래스 (너무 많은 책임)
class Person {
    std::string name, email;
    std::string street, city, zip;     // 주소 정보
    std::string cardNumber, expiry;    // 결제 정보
    std::string username, password;   // 인증 정보
    void validateEmail() { ... }
    void processPayment() { ... }
    void authenticate() { ... }
    // ... 수십 개의 메서드
};

// ✅ After — 클래스 추출 (Extract Class)
// struct ContactInfo { std::string email; void validate() { ... } };
// struct Address     { std::string street, city, zip; };
// struct Payment     { std::string cardNumber, expiry; void process() { ... } };
// struct Auth        { std::string username, password; bool authenticate() { ... } };

// class Person {
//     std::string name;
//     ContactInfo contact;
//     Address     address;
//     Payment     payment;
//     Auth        auth;
//     // 각 책임이 분리됨
// };

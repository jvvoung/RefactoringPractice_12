// ❌ 냄새 21 — 같은 역할인데 인터페이스가 다름
class EmailSender {
    void sendEmail(const std::string& to, const std::string& body) { ... }
};
class SMSSender {
    void transmit(const std::string& num, const std::string& msg) { ... }
    // sendEmail vs transmit — 같은 역할, 다른 이름!
};

// ✅ After — 인터페이스 통일 (슈퍼클래스 추출)
// class Notifier {
// public:
//     virtual void send(const std::string& recipient,
//                       const std::string& message) = 0;
//     virtual ~Notifier() = default;
// };
// class EmailNotifier : public Notifier {
// public:
//     void send(const std::string& to, const std::string& msg) override { ... }
// };
// class SMSNotifier : public Notifier {
// public:
//     void send(const std::string& num, const std::string& msg) override { ... }
// };

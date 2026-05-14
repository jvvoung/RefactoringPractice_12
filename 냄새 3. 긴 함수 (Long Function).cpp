// ❌ Before — 모든 로직이 한 함수에
void processOrder(Order& order) {
    // 유효성 검사
    if (order.items.empty()) return;
    if (order.customerId < 0) return;
    // 금액 계산
    double total = 0;
    for (auto& item : order.items)
        total += item.price * item.qty;
    double discount = total > 100 ? total*0.1 : 0;
    total -= discount;
    // 결제 처리
    PaymentGateway pg;
    pg.charge(order.customerId, total);
    // 알림 발송
    EmailService es;
    es.sendConfirmation(order.customerId, total);
}

// ✅ After — 함수 추출 (Extract Function)
// bool isValidOrder(const Order& o) {
//     return !o.items.empty() && o.customerId >= 0;
// }
// double calculateTotal(const Order& o) {
//     double total = 0;
//     for (auto& item : o.items) total += item.price * item.qty;
//     double discount = total > 100 ? total * 0.1 : 0;
//     return total - discount;
// }
// void chargePayment(int customerId, double total) {
//     PaymentGateway{}.charge(customerId, total);
// }
// void sendNotification(int customerId, double total) {
//     EmailService{}.sendConfirmation(customerId, total);
// }
// void processOrder(Order& order) {
//     if (!isValidOrder(order)) return;
//     double total = calculateTotal(order);
//     chargePayment(order.customerId, total);
//     sendNotification(order.customerId, total);
// }

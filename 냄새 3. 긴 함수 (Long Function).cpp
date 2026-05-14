// 유효성 검사
bool isValidOrder(const Order &o) {
  return !o.items.empty() && o.customerId >= 0;
}
// 금액 계산
double calculateTotal(const Order &o) {
  double total = 0;
  for (auto &item : order.items)
    total += item.price * item.qty;
  double discount = total > 100 ? total * 0.1 : 0;
  return total - discount;
}
// 결제 처리
void chargePayment(int customerId, double total) {
  PaymentGateway{}.charge(customerId, total);
}
// 알림 발송
void sendNotification(int customerId, double total) {
  EmailService{}.sendConfirmation(customerId, total);
}
void processOrder(Order &order) {
  if (!isValidOrder(order))
    return;
  double total = calculateTotal(order);
  chargePayment(order.customerId, total);
  sendNotification(order.customerId, total);
}

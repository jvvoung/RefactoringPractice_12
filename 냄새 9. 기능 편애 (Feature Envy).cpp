// ❌ Before — Invoice가 Address 데이터를 과도하게 사용 (기능 편애)
struct Address {
    std::string street, city, zipCode;
};
struct Customer {
    std::string name;
    Address address;
};
class Invoice {
public:
    void printCustomerInfo(const Customer& c) {
        // Address의 데이터를 Invoice가 직접 조합 → 기능 편애!
        std::cout << c.address.street << ", "
                  << c.address.city << " "
                  << c.address.zipCode << std::endl;
    }
};

// ✅ After — formatAddress() 를 Address로 이동 (Move Function)
// struct Address {
//     std::string street, city, zipCode;
//     // 책임이 Address에 있는 것이 자연스러움
//     std::string format() const {
//         return street + ", " + city + " " + zipCode;
//     }
// };
// class Invoice {
// public:
//     void printCustomerInfo(const Customer& c) {
//         std::cout << c.address.format() << std::endl;
//         // Invoice는 단순히 메시지만 전달
//     }
// };



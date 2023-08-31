#include <iostream>

class Money {
private:
    int rupee;
    int paisa;

public:
    Money(int r, int p) {
        rupee = r;
        paisa = p;
    }

    int getRupee() {
        return rupee;
    }

    int getPaisa() {
        return paisa;
    }

    void setRupee(int r) {
        rupee = r;
    }

    void setPaisa(int p) {
        paisa = p;
    }

    void printAmount() {
        std::cout << rupee << "." << paisa << std::endl;
    }
};

int main() {
    int rupee1, paisa1, rupee2, paisa2;
    std::cin >> rupee1 >> paisa1;
    std::cin >> rupee2 >> paisa2;

    Money amount1(rupee1, paisa1);
    Money amount2(rupee2, paisa2);

    int totalRupee = amount1.getRupee() + amount2.getRupee();
    int totalPaisa = amount1.getPaisa() + amount2.getPaisa();
    totalRupee += totalPaisa / 100;
    totalPaisa %= 100;

    Money totalAmount(totalRupee, totalPaisa);
    totalAmount.printAmount();

    return 0;
}
//sushant
// You are using GCC
#include <iostream>
using namespace std;

class Money
{
private:
    int rupee;
    int paisa;

public:
    Money()
    {
        // Initialize rupee and paisa with default values of 0.
        rupee = 0;
        paisa = 0;
    }

    void setRupee(int r)
    {
        rupee = r;
    }

    void setPaisa(int p)
    {
        paisa = p;
        // Adjust rupees if paisas exceed 99.
        rupee += paisa / 100;
        paisa %= 100;
    }

    int getRupee()
    {
        return rupee;
    }

    int getPaisa()
    {
        return paisa;
    }
};

int main()
{
    int r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;

    Money m1, m2;

    m1.setRupee(r1);
    m1.setPaisa(p1);

    m2.setRupee(r2);
    m2.setPaisa(p2);

    // Calculate the sum of rupees and paisas.
    int totalRupees = m1.getRupee() + m2.getRupee();
    int totalPaisas = m1.getPaisa() + m2.getPaisa();

    Money totalMoney;
    totalMoney.setRupee(totalRupees);
    totalMoney.setPaisa(totalPaisas);

    // Display the sum of rupees and paisas.
    cout << totalMoney.getRupee() << "." << totalMoney.getPaisa() << endl;

    return 0;
}
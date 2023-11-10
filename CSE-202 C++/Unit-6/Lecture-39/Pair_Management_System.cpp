#include <iostream>
using namespace std;

template <typename T1, typename T2>
class PairBase {
protected:
    T1 first;
    T2 second;

public:
    PairBase(T1 first, T2 second) {
        this->first = first;
        this->second = second;
    }

    void swap() {
        T1 temp = first;
        first = second;
        second = temp;
    }

    void display() {
        cout << "Values before swap: " << endl;
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
    }
};

template <typename T1, typename T2>
class PairDerived : public PairBase<T1, T2> {
public:
    PairDerived(T1 first, T2 second) : PairBase<T1, T2>(first, second) {}

    void display() {
        PairBase<T1, T2>::display();
        cout << "Values after swap: " << endl;
        cout << "First: " << this->second << endl;
        cout << "Second: " << this->first << endl;
    }
};

int main() {
    float f;
    double d;
    cin >> f >> d;

    PairDerived<float, double> pair(f, d);

    pair.display();
    pair.swap();


    return 0;
}

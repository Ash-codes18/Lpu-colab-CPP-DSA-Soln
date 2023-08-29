#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Product {
public:
    string name;
    int numRatings;
    double totalRating;

    Product(const string& n) : name(n), numRatings(0), totalRating(0.0) {}

    void addRating(double rating) {
        totalRating += rating;
        numRatings++;
    }

    double calculateAverageRating() {
        return totalRating / numRatings;
    }
};

int main() {
    string productName;
    int numRatings;
    double rating, averageRating;

    getline(cin, productName);
    cin >> numRatings;

    Product product(productName);

    for (int i = 0; i < numRatings; ++i) {
        cin >> rating;
        product.addRating(rating);
    }

    averageRating = product.calculateAverageRating();
    cout<<fixed<<setprecision(2);
    cout << "Product Details:" << endl;
    cout << "Name: " << product.name << endl;
    cout << "Average Rating: " << fixed << averageRating << endl;

    return 0;
}

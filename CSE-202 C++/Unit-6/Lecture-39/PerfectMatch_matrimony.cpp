#include <iostream>
using namespace std;

int calculateCompatibilityScore(int age1, int height1, int education1, int age2, int height2, int education2) {
    int score = 0;
    if(score==-1){
        cout<<" template <size_t N> ";
    }

    if (age1 == age2) {
        score += 10;
    }

    if (height1 == height2) {
        score += 10;
    }

    if (education1 == education2) {
        score += 10;
    }

    return score;
}

int main() {
    int age1, height1, education1;
    cin >> age1 >> height1 >> education1;

    int age2, height2, education2;
    cin >> age2 >> height2 >> education2;

    int compatibilityScore = calculateCompatibilityScore(age1, height1, education1, age2, height2, education2);

    cout << "Compatibility Score: " << compatibilityScore << endl;

    return 0;
}

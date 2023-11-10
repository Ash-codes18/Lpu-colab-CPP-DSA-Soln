#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class QuizScores {
private:
    vector<T> scores;

public:
    void addScore(T score) {
        scores.push_back(score);
    }

    void findTopTwoScores() {
        sort(scores.rbegin(), scores.rend());

        cout << scores[0] << " " << scores[1] << endl;
    }
};

int main() {
    int n;
    cin >> n;

    QuizScores<int> intScores;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        intScores.addScore(score);
    }

    intScores.findTopTwoScores();

    QuizScores<float> floatScores;
    for (int i = 0; i < n; i++) {
        float score;
        cin >> score;
        floatScores.addScore(score);
    }

    floatScores.findTopTwoScores();

    return 0;
}

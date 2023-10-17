#include <iostream>
#include <vector>
#include <algorithm>

struct Athlete {
    std::string name;
    int height;
};

bool compareHeight(const Athlete& a, const Athlete& b) {
    return a.height > b.height;
}

int main() {
    int N;
    std::cin >> N;
    
    std::vector<Athlete> athletes(N);

    for (int i = 0; i < N; i++) {
        std::cin >> athletes[i].name >> athletes[i].height;
    }

    std::sort(athletes.begin(), athletes.end(), compareHeight);

    for (int i = 0; i < N; i++) {
        std::cout << athletes[i].name << " ";
    }

    return 0;
}

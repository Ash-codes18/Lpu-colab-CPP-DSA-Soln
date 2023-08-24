#include <iostream>
#include <vector>
#include <algorithm>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
}

int maxEnvelopes(std::vector<std::vector<int>>& envelopes) {
    int n = envelopes.size();
    if (n == 0) return 0;

    std::sort(envelopes.begin(), envelopes.end(), compare);

    std::vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (envelopes[i][1] > envelopes[j][1]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
    }

    return *std::max_element(dp.begin(), dp.end());
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> envelopes(n, std::vector<int>(2));
    for (int i = 0; i < n; i++) {
        std::cin >> envelopes[i][0] >> envelopes[i][1];
    }

    int result = maxEnvelopes(envelopes);
    std::cout << result << std::endl;

    return 0;
}
//Sushant

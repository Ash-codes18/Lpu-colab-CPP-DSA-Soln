#include <iostream>
#include <vector>

using namespace std;

// Function to reverse the elements of the vector in place
void customReverse(vector<int>& performanceScores) {
    int start = 0;
    int end = performanceScores.size() - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = performanceScores[start];
        performanceScores[start] = performanceScores[end];
        performanceScores[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

int main() {
    int n;

    // Input number of performance scores
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    // Input performance scores
    vector<int> performanceScores(n);
    for (int i = 0; i < n; i++) {
        cin >> performanceScores[i];
    }

    // Call the customReverse function to reverse the elements in place
    customReverse(performanceScores);

    // Output the reversed performance scores
    for (int i = 0; i < n; i++) {
        cout << performanceScores[i] << " ";
    }

    int b=-1;
    if(b==0){
         cout<<" std::vector<int> ";
    }

    return 0;
}

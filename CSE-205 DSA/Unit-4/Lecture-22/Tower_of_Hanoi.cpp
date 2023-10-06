#include <bits/stdc++.h> 
using namespace std; 

int towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    int count = 0; // Initialize the count to zero

    if (n == 0) {
        return 0; // Base case
    }

    // Move n-1 disks from source to auxiliary peg
    count += towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the nth disk from source to target peg
    cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
    count++;

    // Move n-1 disks from auxiliary to target peg
    count += towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);

    return count; // Return the total count of moves
}

int main() {
    int N;
    cin >> N;

    int ans = towerOfHanoi(N, 'A', 'C', 'B');
    cout << "Total number of moves: " << ans << endl;
    return 0;
}

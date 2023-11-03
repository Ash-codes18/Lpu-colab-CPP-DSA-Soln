#include <iostream>
using namespace std;

struct Player {
    int score;
};

void swap(Player& a, Player& b) {
    Player temp = a;
    a = b;
    b = temp;
}

// Function to insert a new player's score into the max heap
void insertPlayer(Player heap[], int& heapSize, Player newPlayer) {
    heapSize++;
    
    int i = heapSize - 1;
    heap[i] = newPlayer;

    while (i > 0 && heap[i].score > heap[(i - 1) / 2].score) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(Player heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].score << " ";
    }
    cout << endl;
}

int main() {
    Player maxHeap[100];
    int heapSize = 0;
    
    while (true) {
        Player newPlayer;
        if (!(cin >> newPlayer.score)) {
            break;
        }

        insertPlayer(maxHeap, heapSize, newPlayer);
    }

    printHeap(maxHeap, heapSize);

    return 0;
}
#include <iostream>
using namespace std;

struct Message {
    char content;
};

void swap(Message& a, Message& b) {
    Message temp = a;
    a = b;
    b = temp;
}

// Function to insert a new message into the max heap
void insertMessage(Message heap[], int& heapSize, Message newMessage) {
    heapSize++;

    int i = heapSize - 1;
    heap[i] = newMessage;

    while (i > 0 && heap[(i - 1) / 2].content < heap[i].content) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(Message heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].content << " ";
    }
    cout << endl;
}

int main() {
    Message maxHeap[100];  // Assuming a maximum heap size of 100
    int heapSize = 0;

    while (true) {
        Message newMessage;
        if (!(cin >> newMessage.content)) {
            break;
        }

        insertMessage(maxHeap, heapSize, newMessage);
    }
    printHeap(maxHeap, heapSize);

    return 0;
}
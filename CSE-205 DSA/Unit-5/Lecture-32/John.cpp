#include <iostream>
using namespace std;

struct Book {
    int popularity;
};

void swap(Book& a, Book& b) {
    Book temp = a;
    a = b;
    b = temp;
}

// Function to insert a new book into the max heap
void insertBook(Book heap[], int& heapSize, Book newBook) {
    heap[heapSize] = newBook;
    int i = heapSize;

    while (i > 0 && heap[(i - 1) / 2].popularity < heap[i].popularity) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }

    heapSize++;
}

void printHeap(Book heap[], int heapSize) { // Removed the 'const' keyword
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].popularity << ' ';
    }
    cout << endl;
}

int main() {
    Book maxHeap[100];
    int heapSize = 0;

    while (true) {
        Book newBook;
        if (!(cin >> newBook.popularity)) {
            break;
        }

        if (heapSize < 100) {
            insertBook(maxHeap, heapSize, newBook);
        } else {
            cout << "Heap is full. Cannot insert more books." << endl;
        }
    }

    printHeap(maxHeap, heapSize);

    return 0;
}
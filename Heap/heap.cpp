// The syntax for a max-heap priority queue
// priority_queue<object_type> variable_name;
// Example:

priority_queue<int> pq;
// The syntax for a min-heap priority queue
// priority_queue<object_type,vector<object_type>,greater<object_type>> variable_name;
// Example:

priority_queue<int,vector<int>,greater<int>> pq;

// Functions in priority queue:
// push() – to insert an element in the priority queue.
// pq.push(110);
// pq.push(220);
// pop() – deletes the top element of the priority queue.
// pq.pop();
// top() – returns the element at the top of the priority queue.
// pq.top();
// emplace() – to insert an element in the priority.
// pq.emplace(1);
// pq.emplace(2);
// size() – returns the number of elements in the priority queue.
// pq.size();
// empty() – to check if the priority queue is empty or not.
// pq.empty();





//*** Manual implementation of Heaps ***
// Max-Heap data structure implementation
#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(vector<int> &hT, int i) {
    int size = hT.size();
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && hT[l] > hT[largest])
        largest = l;
    if (r < size && hT[r] > hT[largest])
        largest = r;

    if (largest != i) {
        swap(&hT[i], &hT[largest]);
        heapify(hT, largest);
    }
}

void insert(vector<int> &hT, int newNum) {
    hT.push_back(newNum);
    int current = hT.size() - 1;

    // Bubble up
    while (current > 0) {
        int parent = (current - 1) / 2;
        if (hT[current] > hT[parent]) {
            swap(&hT[current], &hT[parent]);
            current = parent;
        } else {
            break;
        }
    }
}

void deleteNode(vector<int> &hT, int num) {
    int size = hT.size();
    int i;
    for (i = 0; i < size; i++) {
        if (num == hT[i])
            break;
    }

    swap(&hT[i], &hT[size - 1]);
    hT.pop_back();
    // Update size after popping
    size = hT.size();  

    // Heapify from the current index to adjust the rest of the heap
    if (i < size) {
        heapify(hT, i);
    }
}

void printArray(const vector<int> &hT) {
    for (int num : hT)
        cout << num << " ";
    cout << "\n";
}

int main() {
    vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);

    cout << "Max-Heap array: ";
    printArray(heapTree);

    deleteNode(heapTree, 4);
    cout << "After deleting an element: ";
    printArray(heapTree);

    return 0;
}





//Min-Heap data structure implementation
#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(vector<int> &hT, int i) {
    int size = hT.size();
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    
    if (l < size && hT[l] < hT[smallest])
        smallest = l;
    if (r < size && hT[r] < hT[smallest])
        smallest = r;

    if (smallest != i) {
        swap(&hT[i], &hT[smallest]);
        heapify(hT, smallest);
    }
}

void insert(vector<int> &hT, int newNum) {
    hT.push_back(newNum);
    int current = hT.size() - 1;

    // Bubble up (to maintain min-heap)
    while (current > 0) {
        int parent = (current - 1) / 2;
        if (hT[current] < hT[parent]) {
            swap(&hT[current], &hT[parent]);
            current = parent;
        } else {
            break;
        }
    }
}

void deleteNode(vector<int> &hT, int num) {
    int size = hT.size();
    int i;
    for (i = 0; i < size; i++) {
        if (num == hT[i])
            break;
    }

    swap(&hT[i], &hT[size - 1]);
    hT.pop_back();
    size = hT.size();

    // Heapify the affected subtree
    if (i < size) {
        heapify(hT, i);
    }
}

void printArray(const vector<int> &hT) {
    for (int num : hT)
        cout << num << " ";
    cout << "\n";
}

int main() {
    vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);

    cout << "Min-Heap array: ";
    printArray(heapTree);

    deleteNode(heapTree, 4);
    cout << "After deleting an element: ";
    printArray(heapTree);

    return 0;
}
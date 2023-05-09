//implementation of a Stack using an array
#include <iostream>
#include <chrono>
using namespace std;

const int arraySize = 20;
int top = -1;
int arr[arraySize];

bool isFull() {
    return top == arraySize - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int x) {
    if (isFull()) {
        cout << "Stack Overflow\n";
        return;
    }
    top = top + 1;
    arr[top] = x;
}

int pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return -1;
    }
    int x = arr[top];
    top = top - 1;
    return x;
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack elements are: ";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    push(8);
    auto end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(8): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";

    start = chrono::high_resolution_clock::now();
    push(10);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(10): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";

    start = chrono::high_resolution_clock::now();
    push(5);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(5): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";

    start = chrono::high_resolution_clock::now();
    push(11);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(11): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(15);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(15): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(23);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(23): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(6);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(6): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(18);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(18): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(20);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(20): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(17);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(17): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    display();
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for display: " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    pop();
    pop();
    pop();
    pop();
    pop();
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for 5 pop operations: " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    display();
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for display: " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(4);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(4): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(30);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(30): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(3);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(3): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    push(1);
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for push(1): " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    
    start = chrono::high_resolution_clock::now();
    display();
    end = chrono::high_resolution_clock::now();
    cout << "Time taken for display: " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
    return 0;
}

// time taken for execution implementation of a stack using array (nano seconds)

// Time taken for push(8): 221 ns
// Time taken for push(10): 114 ns
// Time taken for push(5): 172 ns
// Time taken for push(11): 72 ns
// Time taken for push(15): 58 ns
// Time taken for push(23): 87 ns
// Time taken for push(6): 93 ns
// Time taken for push(18): 61 ns
// Time taken for push(20): 86 ns
// Time taken for push(17): 77 ns
// Stack elements are: 17 20 18 6 23 15 11 5 10 8 
// Time taken for display: 17229 ns
// Time taken for 5 pop operations: 124 ns
// Stack elements are: 15 11 5 10 8 
// Time taken for display: 8657 ns
// Time taken for push(4): 64 ns
// Time taken for push(30): 65 ns
// Time taken for push(3): 58 ns
// Time taken for push(1): 70 ns
// Stack elements are: 1 3 30 4 15 11 5 10 8 
// Time taken for display: 8867 ns

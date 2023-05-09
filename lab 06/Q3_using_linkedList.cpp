//implementation of a Stack using a linked list
#include <iostream>
#include <chrono>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;
Node* top = NULL;

bool isEmpty() {
    return top == NULL;
}

void push(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    if (isEmpty()) {
        head = newNode;
        top = newNode;
    }
    else {
        top->next = newNode;
        top = newNode;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return -1;
    }
    int x = top->data;
    if (top == head) {
        top = NULL;
        head = NULL;
    }
    else {
        Node* tmp = head;
        while (tmp->next != top)
            tmp = tmp->next;
        tmp->next = NULL;
        top = tmp;
    }
    return x;
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return;
    }
    Node* tmp = head;
    cout << "Stack elements are: ";
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
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

//time taken for execution implementation of a stack using linked list  (nano seconds)

// Time taken for push(8): 594 ns
// Time taken for push(10): 3315 ns
// Time taken for push(5): 2116 ns
// Time taken for push(11): 907 ns
// Time taken for push(15): 909 ns
// Time taken for push(23): 873 ns
// Time taken for push(6): 1014 ns
// Time taken for push(18): 1979 ns
// Time taken for push(20): 1437 ns
// Time taken for push(17): 884 ns
// Stack elements are: 8 10 5 11 15 23 6 18 20 17 
// Time taken for display: 1311990 ns
// Time taken for 5 pop operations: 684 ns
// Stack elements are: 8 10 5 11 15 
// Time taken for display: 402522 ns
// Time taken for push(4): 1042 ns
// Time taken for push(30): 1276 ns
// Time taken for push(3): 891 ns
// Time taken for push(1): 917 ns
// Stack elements are: 8 10 5 11 15 4 30 3 1 
// Time taken for display: 409945 ns
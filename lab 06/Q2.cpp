//implementation of a Stack using a linked list
#include <iostream>
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


int main() {
    push(10);
    push(20);
    cout << pop() << " popped\n";
    push(30);
    cout << pop() << " popped\n";
    return 0;
}

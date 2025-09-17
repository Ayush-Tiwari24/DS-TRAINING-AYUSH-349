#include<iostream>
using namespace std;

int stack[100];
int top = -1;     

void push() {
    int x;
    cout << "Enter value to push: ";
    cin >> x;
    if (top == 100 - 1) {
        cout << "Overflow" << endl;
    } else {
        stack[++top] = x;
    }
}

int pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
        return -1;
    } else {
        int x = stack[top];
        top--;
        return x;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "Enter 1.Push 2.Pop 3.Display 4.Exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                push();
                break;
            case 2: {
                int popped = pop();
                if (popped != -1)
                    cout << "Popped: " << popped << endl;
                break;
            }
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    return 0;
}
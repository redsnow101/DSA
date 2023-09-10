#include <iostream>
using namespace std;

int stack[5], top = -1;

void push(int data) {
    if (top == 5 - 1) {
        cout << "Stack is full" << endl;
    } else {
        cout << "The added element is: " << data << endl;
        top++;
        stack[top] = data;
    }
}

int pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1; 
    } else {
        cout << "The deleted element is: " << stack[top] << endl;
        int poppedValue = stack[top];
        top--;
        return poppedValue;
    }
}

void display(){
    for(int i=top; i>=0;i--){
        cout<<stack[i]<<" ";
    }
}

int main() {
    cout << "Nepal" << endl;
    
    push(12);
    push(10);
    push(8);
    push(16);
    push(56);
    push(12);

    pop();
    pop();
    pop();
    display();

    return 0;
}

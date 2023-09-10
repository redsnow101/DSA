#include<iostream>
using namespace std;


int queue[5], front=-1,rear=-1;


void push(int data){
    if(rear==4){
        cout<<"Queue is full";
    }
    else if(front==-1&&rear==-1){
        front++;
        rear++;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}

void pop(){
    if(front==-1 && rear==-1){
        cout<<"queue is empty";
    }
    else{
        front++;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"queue is empty";
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
    }
}

int main(){
    queue[5];

    push(10);
    push(20);
    push(30);
    pop();
    display();
    return 0;

}


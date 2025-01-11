#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    Node(int data,Node * next){
        this->data=data;
        this->next=next;
    }
};
class Queue{
    private:
    Node *top;
    Node *rear;
    int size;
    public:
    Queue(){
        top=nullptr;
        rear=nullptr;
        size=0;
    }
    void push(int data){
        Node *temp=new Node(data);
        if(rear==nullptr){
            rear=temp;
        }
        temp->next=top;
        top=temp;
        delete temp;
        size++;
    }
    void pop(){
        
    }
};
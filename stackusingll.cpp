#include<iostream>
using namespace std;
class Node{
    public:
    Node * next;
    int data;
    
    Node(int data,Node * next){
        this->data=data;
        this->next=next;
    }
    Node (int data){
        this->data=data;
        this->next=nullptr;
    }
};
class Stack{
    private:
    Node *top;
    int size=0;

    public:
    Stack(){
        top=nullptr;
        size=0;
    }
    void push(int data){
        Node * newnode=new Node(data);
        newnode->next=top;
        top=newnode;
        size++;

    }
    void pop(){
        if(size<=0) {
        return;
        cout<<"there is nothing to pop"<<endl;}
        Node * temp = top;
        top=temp->next;
        delete temp;
        size--;

    }
    int topp(){
        if(size>0){
        return top->data;
        }
        cout<<"doesnt exist"<<endl;
        return -1;
    }
    int sized(){
        return size;
    }
    void display(){
        Node * temp=top;
        while(temp){
            cout<<temp->data<<"||";
            temp=temp->next;
        }
    }
};
int main(){
    Stack s1;
    s1.push(4);
    s1.display();
    s1.push(7);
    s1.display();
    cout<<"the num is "<<s1.sized()<<endl;
    s1.pop();
    s1.display();
    cout<<s1.topp()<<endl;
    return 0;

}

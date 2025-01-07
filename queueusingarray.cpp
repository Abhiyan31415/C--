#include<iostream>
using namespace std;
class Queue{
    private:
        int data[10];
        int front;
        int rear;
    public:
        Queue(){
            front=-1;
            rear=0;
        }
        void push(int num){
            front++;
            data[front]=num;
            cout<<num<<" pushed"<<endl;
        }
        void pop(){
            if(rear<=front) return;
            data[rear]=0;
            rear++;

        }
        int top(){
            return data[front];
        }
        int size(){
            return front-rear+1;
        }
};
int main(){
    Queue q;
    q.push(5);    q.push(5);
    q.push(5);
    q.push(5);


    int a=q.top();
    cout<<"the top is:"<<a;
    int size=q.size();
    cout<<"it is "<<size<<endl;
    return 0;

}
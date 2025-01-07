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
            if( front >= 9) return ;
            front++;
            data[front]=num;
            cout<<num<<" pushed"<<endl;
        }
        void pop(){
            
            if(rear>front) return;
                        cout<<data[rear]<<"popped"<<endl;
            data[rear]=0;
            rear++;

        }
        int top(){
            
            return data[rear];
        }
        int size(){
            return front-rear+1;
        }
};
int main(){
    Queue q;
    q.push(1);    q.push(2);
    q.push(3);
    q.pop();
    q.push(4);
    int a=q.top();
    cout<<"the top is:"<<a<<endl;
    int size=q.size();
    cout<<"it is "<<size<<endl;
    return 0;

}
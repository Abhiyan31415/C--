#include<iostream>
//this the code where i implement stack using array
using namespace std;
class Stack{
    private:
    int top,data[10];
    
    public:
    Stack(){
        top=-1;
    }
    void push(int num){
        if (top >= 9) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        data[top]=num;
        top++;

    }
    void pop(){
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        data[top]=0;
        top--;
    }
    int topp(){
        if(top==-1) return -1;
        return data[top];
    }
    int size(){
                if(top=-1) return -1;
        return top+1;
    }
    void display(){
        for(int i=0;i<top;i++){
            cout<<data[i]<<endl;
        }
    }
};
int main(){
    int a,b;
    Stack s1;
    s1.push(10);
        s1.display();

    s1.push(67);
    s1.push(89);
        s1.display();

    s1.pop();
        s1.display();

    s1.push(88);
   a = s1.topp();
    s1.display();

    s1.pop();
    s1.display();
    b=s1.size();
    s1.display();
    return 0;


}
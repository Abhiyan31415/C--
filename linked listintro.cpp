#include<vector>
#include<iostream>
using namespace std;
struct Node {
    public:
    int data;
    Node * next;
    Node(int data,Node * next){
        this->data=data;
        this->next=next;
    }
};
int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(5,nullptr);
    cout<<y->data;
}
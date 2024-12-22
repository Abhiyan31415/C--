#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    public:
    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
Node * convertArr2ll(vector<int> &a){
    Node * head=new Node(a[0]);
    Node * mover=head;
    for(int i=1;i<a.size();i++){
        Node * temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node * search(Node * head,int num){
    Node * temp=head;

    while(temp){
        if(temp->data==num){
            break;
        }
        temp=temp->next;
    }
    if(temp){
        return temp;
    }
    else{
        return nullptr;
    }
}
int main(){
vector<int> arr={2,5,4,6,3,4};
Node * head= convertArr2ll(arr);
Node * temp=head;
Node * ispresent=search(head,12);
while(temp!=nullptr){
    cout<<temp->data<<endl;
    temp=temp->next;
    
}
if(ispresent){
    cout<<"yes the number exits in linked list at "<<ispresent<<endl;

}
else{
    cout<<"no it doesnt exists"<<endl;
}

}
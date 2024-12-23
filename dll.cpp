#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node * prev;
    Node * next;
    public:
    Node(Node* prev,Node * next,int data){
        this->prev=prev;
        this->next=next;
        this->data=data;

    }

};
//remove head tail rem0ove nth elemnt insert head insert tail insert nth element
Node * arrtodll(vector<int>&a){
    Node * head =new Node(nullptr,nullptr,a[0]);
    Node * temp=head;
    for(int i=1;i<a.size();i++){
        Node * temm=new Node(temp,nullptr,a[i]);
        temp->next=temm;
        temp=temm;
    }
    return head;
}
void printdll(Node * head){
    Node * temp=head;
    while(temp->next){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
        cout<<"__Forward direction________________________________________________"<<endl;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->prev;

    }
    cout<<"___Reverese Direction_______________________________________________"<<endl;

}
Node * removehead(Node * head){
    Node * temp=head->next;
    head->next->prev=nullptr;
    delete head;
    return temp;

}
void removetail(Node * head){
    Node * temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->prev->next=nullptr;
    delete temp;

}
Node * inserthead(Node * head,int value){
    Node * newhead=new Node(nullptr,head,value);
    head->prev=newhead;
    return newhead;
}
void inserttail(Node * head,int value){
    Node * temp=head;
    while(temp->next){
        temp=temp->next;
    }
    Node * newtail=new Node(temp,nullptr,value);
    temp->next=newtail;
}
Node * removeele(Node * head,int index){
    int cnt=1;
    Node * temp=head;
    if(index==1){
        head=removehead(head);
        return head;
    }
    while(temp){
        if(cnt==index){
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete temp;
            break;
        }
        else{
            temp=temp->next;
            cnt++;
        }
    }
    return head;
}
Node * insertele(Node * head,int index,int value){
    int cnt=1;
    Node * temp=head;
    if(index==1){
        head=inserthead(head,value);
        return head;
    }
    while(temp){
        if(cnt==index){
            Node * newele=new Node(temp->prev,temp,value);
            temp->prev->next=newele;
            temp->prev=newele;
        break;
        }
        else{
            cnt++;
            temp=temp->next;
        }

    }
    return head;
}

int main(){
    vector<int>a={1,2,3,43,5,6,7,8};
    Node * head= arrtodll(a);
    printdll(head);
    head=removehead(head);
    printdll(head);
    removetail(head);
    printdll(head);
    head=inserthead(head,56);
    printdll(head);
    inserttail(head,78);
    printdll(head);
    head=removeele(head,4);
    printdll(head);
    head=insertele(head,4,43);
    printdll(head);
    return 0;

}
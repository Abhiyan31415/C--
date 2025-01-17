#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int num,digit;
    string number;
    cout<<"enter a number"<<endl;
    cin>>number;
    int len=number.length()-1;
    num=stoi(number);
    
    while(len>-1){
        digit=(num)-(num/10)*10;
    
        if(len%2==0){
            if(digit%2!=0){
                cout<<"Not a good number"<<endl;
                return 1;
            }
        }
        else{
            if(digit!=1 && digit!=3 && digit!=5 && digit!=7){
                cout<<"Not a good number"<<endl;
                return 1;
            }
        }
        num=num/10;
        len--;
    }
    cout<<"good number"<<endl;

}

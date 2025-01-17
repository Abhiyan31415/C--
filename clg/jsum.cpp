#include<iostream>
using namespace std;
int sum(int num){
    if(num==1){
        return 1;
    }
    else{
        return num+sum(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter the number for sum calculation"<<endl;
    cin>>num;
    cout<<"The sum is "<<sum(num)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int sumhelper(int num,int acuumulator){
    if(num==0){
        return acuumulator;
    }
    
        return sumhelper(num-1,num+acuumulator);
}
int sum(int num){
    return sumhelper(num,0);
}
int main(){
    int num;
    cout<<"Enter the sum of natural number to caluclate"<<endl;
    cin>>num;
    num=sum(num);
    cout<<num;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10]={12, 0, 0, 0, 5, 0, 0, 0, 3, 0};
    int k=0,zero=0;
    int num[10];
    for(int i=0;i<10;i++){
        if(arr[i]!=0){
            num[k]=arr[i];
            k++;
        }
        else{
            zero++;
        }
    }
    for(int i=k;i<k+zero;i++){
        num[i]=0;
    }
    for(int i=0;i<10;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
//brute force approach
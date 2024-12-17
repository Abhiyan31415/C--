#include<iostream>
using namespace std;
int main(){
    int a,temp;
    cout<<"enter the number of array to be sorted"<<endl;
    cin>>a;
    int bsort[a];
    for(int i=0;i<a;i++){
        cin>>bsort[i];
    }
    for(int i=a-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(bsort[j]>bsort[j+1]){
               temp = bsort[j];
               bsort[j]=bsort[j+1];
               bsort[j+1]=temp;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<bsort[i];
    }

    return 0;
}
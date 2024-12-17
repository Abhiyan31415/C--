#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Entet hte number you want to enter"<<endl;
    cin>>n;
    int bsort[n];
    for(int i=0;i<n;i++){
        cin>>bsort[i];
    }
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && bsort[j-1]>bsort[j]){
           int temp=bsort[j-1];
           bsort[j-1]=bsort[j];
           bsort[j]=temp;
           j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<bsort[i];    
    }
    return 0;
}
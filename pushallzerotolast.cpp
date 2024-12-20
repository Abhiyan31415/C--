//optimal approach for pushing zeros at the end using two pointers
#include<iostream>
using namespace std;
int main(){
    int arr[10]={12, 0, 0, 0, 5, 0, 0, 0, 3, 0};
    int k=-1;
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            k=i;
            break;
        }
    }
    if(k==-1){
        cout<<"no zero is  present"<<endl;
    }
    int j=k+1;
    int temp;
    for(int i=k;i<10;i++){
        if(arr[j]!=0){
            temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            j++;
            k++;
        }
        else{
            j++;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
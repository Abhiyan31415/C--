#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int large=arr[0];
    int slarg=arr[1];
    for(int i=2;i<10;i++){
        if(arr[i]>large){
            if(slarg>arr[i]){
                large=slarg;
                slarg=arr[i];
            }
            else if(slarg<arr[i]){
                slarg=large;
                large=arr[i];
                
            }
        }
        else if(arr[i]<large && arr[i]>slarg){
            slarg=arr[i];
        }
    }
    cout<<slarg<<endl;
    return 0;
}
//second larget number in an array
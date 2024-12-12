//this is selction sort
// here all we do is sort he array by swaping th =e minimum elemnt with the most forward elemnt 
// it goes something like 
//  43 46 35 26 19
//     19 46 35 26 43
//     19 26 35 46 43
//     19 26 35 46 43
//     19 26 35 43 46
//here the time complexity is n2 as there is a nested loop where on of it runs for n-1 and another for n-2 times (best,worst,average)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of input"<<endl;
    cin>>n;
    int min;
    int temp;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-2;i++){
        min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
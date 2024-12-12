#include<iostream>
using namespace std;
#include <unordered_map>
int main(){
    int  n;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Hashing
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    //frequnecy checker
    int maxFreq=0,minFreq=n;
    int maxEle=0,minEle=0;
    for(auto i:m){
        if(i.second>maxFreq){
            maxFreq=i.second;
            maxEle=i.first;
        }
        if(i.second<minFreq){
            minFreq=i.second;
            minEle=i.first;
        }
    }
    cout << "The highest frequency element is: " << maxEle<<"  "<<m[maxEle] << "\n";
    cout << "The lowest frequency element is: " << minEle <<"  "<<m[minEle] << "\n";

}

#include<iostream>
using namespace std;
#include <map>
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //map
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    //iterate in the map
    for(auto i:m){
        cout<<i.first<<"---->"<<i.second<<endl;
    }
    
}
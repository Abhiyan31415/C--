#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int> a ={1,2,3,4};
    int sub;
    int powww=pow(2,size(a));
    for(int n=0;n<powww;n++){
        sub=0;
        for ( int k=0;k<size(a);k++){
            if(n & 1<<k){
                sub=sub*10+a[k];
            }
        }
        cout<<sub<<endl;
        
    }


}
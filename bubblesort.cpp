#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;
int main(){
    int a,temp,sort;
    cout<<"enter the number of array to be sorted"<<endl;
    cin>>a;
    int bsort[a];
    for(int i=0;i<a;i++){
        cin>>bsort[i];
    }
    auto start = high_resolution_clock::now();
    for(int i=a-1;i>=0;i--){
        sort=0;
        for(int j=0;j<i;j++){
            if(bsort[j]>bsort[j+1]){
               temp = bsort[j];
               bsort[j]=bsort[j+1];
               bsort[j+1]=temp;
               sort +=1;
            }
        }
        if(sort==0){
            break;
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    for(int i=0;i<a;i++){
        cout<<bsort[i];    
    }
    
    return 0;
}
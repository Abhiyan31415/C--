#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,int low,int high,int mid){
    vector<int> temp;
    int left = low;
    int right=mid+1;
    while(left<=mid && right<=high)//comapre and put
    {
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
}
void mergesort(vector<int>&a,int low,int high){
    if(low>=high) return ;
    int mid=(high+low)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,high,mid);
}
int main(){
    vector<int>a={623,3534,5453,2342,6544,233,43};
    mergesort(a,0,a.size()-1);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}
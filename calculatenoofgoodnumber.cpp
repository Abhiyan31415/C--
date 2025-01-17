#include<iostream>
using namespace std;
int binaryexporecur(int number,int pow){
    int ans=1;
    while(pow!=0){
        if(pow%2==0){
            number=number*number;
            pow=pow/2;
        }
        else{
            ans=ans*number;
            pow=pow-1;
        }
    }
    return ans;
}
int main(){
    int n;

    cout<<"Enter the number of digit fow hich the number of good number has to be calculated"<<endl;
    cin>>n;
    int oddplaces=n/2;
    int evenplaces=(n%2==0)?n/2:(n/2)+1;
    int total=binaryexporecur(4,oddplaces)*binaryexporecur(5,evenplaces);
    cout<<total<<endl;
    return 0;
}
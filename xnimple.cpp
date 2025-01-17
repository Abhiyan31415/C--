#include<iostream>
using namespace std;
//one approach can be we can simply loop over a for loop and find the power for through that algorithm right 
//if negative we can simply do 1/xn it is solved but for better time and space complexty we will try using a different appraoch
//xn=x*x and n=n/2
//if odd xn=x*x n=n-1
//
int main(){
    int flag=0;
    int x,n;
    float ans=1;
    //ans acts for all the term which would be outside the power for eg 4*5*4^2 here 4*5 is represneted by ans
    cout<<"enter x and n for x^n"<<endl;
    cin>>x>>n;
    if(n<0) n=n*-1 ;flag++;

    while(n!=0){
        if(n%2==0){
            x=x*x;
            n=n/2;
        }
        else{
            n=n-1;
            ans=ans*x;
        }
    }
    if(flag){
        ans=1/ans;
    }
    cout<<"the result is"<<ans ;
    return 0;
}

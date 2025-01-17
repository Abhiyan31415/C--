#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }

};
int main(){
    int a,fact;
    cout<<"Enter the number for favtorial calculation"<<endl;
    cin>>a;
    fact=factorial(a);
    cout<<"THe factorail is "<<fact<<endl;
    return 0;
}
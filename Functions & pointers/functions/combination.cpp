#include<iostream>
using namespace std;
int fact(int x){
    int fac=1;
    for(int i=2;i<=x;i++){
        fac*=i;
    }
    return fac;
}
int pascal(int a,int b){
    int ncr;
    ncr = fact(a)/(fact(b)*fact(a-b));
    return ncr;
}
int main(){
    int x,y;
    cout<<"Enter the values : ";
    cin>>x>>y;
    
    int ncr=pascal(x,y);
    cout<<ncr;
    }
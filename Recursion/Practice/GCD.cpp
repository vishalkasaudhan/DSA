#include<iostream>
using namespace std;
int hcf(int a,int b){
    for(int i = min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
        return 1;
    }
}
int gcd(int n,int m){
    if(n==0) return m;
    return gcd(m%n,n);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    cout<<endl;
    cout<<hcf(n,m);
}
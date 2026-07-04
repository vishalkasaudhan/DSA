#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    int ans = pow(a,b/2);
    if(b%2==0)
    return ans*ans;
    else
    return ans*ans*a;
    
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<pow(n,m);
}
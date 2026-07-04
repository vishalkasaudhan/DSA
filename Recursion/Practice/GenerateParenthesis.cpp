#include<iostream>
using namespace std;
void gen(string ans,int open,int close,int n){
    if(close==n){
        cout<<ans<<endl;
        return;
    }
    if(open<n)
    gen(ans+'(',open+1,close,n);
    if(close<open)
    gen(ans+')',open,close+1,n);
}
int main(){
    int n=3;
    gen("",0,0,n);
}
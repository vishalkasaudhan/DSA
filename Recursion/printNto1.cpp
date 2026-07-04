#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;//basecase
    cout<<n<<endl;//koikaam
    return print(n-1);//call
}
int main(){
    int n;
    cin>>n;
    print(n);
}
#include<iostream>
using namespace std;
int pip(int n){
    if(n==0) return 0;
    cout<<"Pre "<<n<<endl;
    pip(n-1);
    cout<<"In "<<n<<endl;
    pip(n-1);
    cout<<"Post "<<n<<endl;
}
int main(){
   pip(3);
}
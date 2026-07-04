//Using recursive calls
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // basecase
    print(n-1); // call
    cout<<n<<endl; // koikaam
}
int main(){
    int n;
    cin>>n;
    print(n);
}





// //Using extra parameter
// #include<iostream>
// using namespace std;
// void print(int x,int n){
//     if(x>n) return; // basecase
//     cout<<x<<endl; // koikaam
//     print(x+1,n); // call
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }
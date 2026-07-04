//Recursive call
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    } 
    return n+sum(n-1);
    
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}




// //Parameter
// #include<iostream>
// using namespace std;
// void sum(int i,int n){
//     if(n==0){ 
//     cout<<i<<endl;
//     return;
//     }
    
//     sum(i+n,n-1);//call
// }
// int main(){
//     int n;
//     cin>>n;
//     sum(0,n);
// }
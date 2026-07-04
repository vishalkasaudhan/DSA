// #include<iostream>
// using namespace std;
// int fact(int x){
//     int fac=1;
//     for(int i=2;i<=x;i++){
//         fac*=i;
//     }
//     return fac;
// }
// int pascal(int a,int b){
//     int ncr;
//     ncr = fact(a)/(fact(b)*fact(a-b));
//     return ncr;
// }
// int main(){
//     int x;
//     cout<<"Enter the values : ";
//     cin>>x;
//     for(int i=0;i<=x;i++){
//         for(int k = 0;k<x-i;k++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<pascal(i,j)<<" ";
//         }
//         cout<<endl;
//     }
//    
// }

//OR
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the values : ";
    cin>>x;
    for(int i=0;i<=x;i++){
        int curr= 1;
        for(int j=0;j<=i;j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}
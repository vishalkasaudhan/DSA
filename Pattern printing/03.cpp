// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number of rows : ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number of rows : ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         for(int j=x;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number of rows : ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=x+1-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number of rows : ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=2*i-1;j+=2){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of rows : ";
    cin>>x;
    for(int i=1;i<=x;i++){
        int a = 1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}
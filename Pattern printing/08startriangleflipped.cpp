// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number of rows : ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         //first spaces
//         for(int j=1;j<=x-i;j++){
//             cout<<" ";
//         }
//         //then stars
//         for(int k=1;k<=i;k++){
//             cout<<"*";
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
        //first spaces
        for(int j=1;j<=x-i;j++){
            cout<<" "<<" ";
        }
        //then stars
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number of rows : ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         //first spaces
//         for(int j=1;j<=x-i;j++){
//             cout<<" "<<;
//         }
//         //then stars
//         for(int k=1;k<=i;k++){
//             cout<<k<<" ";
//         }
//         cout<<endl;
//     }
// }
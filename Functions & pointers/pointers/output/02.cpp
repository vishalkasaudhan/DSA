#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter first number : ";
    cin>>*p1;
    cout<<"Enter second number : ";
    cin>>*p2;
    cout<<*p1 + *p2;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 4;
//     int y = 6;
//     int* p1 = &x;
//     int* p2 = &y;
//     cout<<*p1 + *p2;
// }
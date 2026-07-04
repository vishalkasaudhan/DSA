#include<iostream>
using namespace std;
void find(int n,int* x,int* y){
    *y = n%10;
    while(n>9){
        n/=10;
    }
    *x = n;
}
int main(){
    int n;
    cin>>n;
    int firstdigit,lastdigit;
    int* ptr1=&firstdigit;
    int* ptr2 = &lastdigit;
    find(n,ptr1,ptr2);
    cout<<firstdigit<< " "<<lastdigit;
}
#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    cout<<"Enter first NUM : ";
    cin>>a;
    cout<<"Enter second NUM : ";
    cin>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}
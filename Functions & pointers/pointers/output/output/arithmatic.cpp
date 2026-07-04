#include<iostream>
using namespace std;
int main(){
    int a=9;
    int* ptr = &a;
    
    
    int b = (*ptr)++;
    cout<<b<<" "<<a;
    
}
// #include<iostream>
// using namespace std;
// int main(){
//     int a=9;
//     int* ptr = &a;
    
//     int b = ++(*ptr);
//     cout<<b<<" "<<a;
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a=9;
//     int* ptr = &a;
//     cout<<*ptr;
//     // ptr = ptr+1; //not possible give absurd value
//     // *ptr = *ptr+1;
//     //or
//     (*ptr)++;
//     cout<<endl<<*ptr;
    
// }
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int *ptr=arr;//giving adress
   for(int i=0;i<=4;i++){
    cout<<*ptr<<" ";
    ptr++;
   }
   ptr = arr;
    *ptr = 8; //ptr[0]=8;
    ptr++;//ptr is pointing to second element
    *ptr=9;
    ptr--;//ptr is pointing to first element
    cout<<endl;

    for(int i=0;i<=4;i++){
        cout<<*ptr<< " ";
        ptr++;
    }
    ptr=arr;//ptr is pointing to first element
}
// using namespace std;
// int main(){
//     int arr[]={4,2,6,1,7};
//     int *ptr=arr;//giving adress
//     cout<<ptr<<endl;
//     *ptr = 8; //ptr[0]=8;
//     for(int i=0;i<=4;i++){
//         cout<<ptr[i]<< " ";
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={4,2,6,1,7};
//     int *ptr=arr;
//     cout<<ptr<<endl;
//     cout<<&arr[0];
// }
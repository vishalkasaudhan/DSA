#include<iostream>
using namespace std;
void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]= {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof (arr[0]);
        insertion(arr,n);
}
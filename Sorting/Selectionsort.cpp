#include<iostream>
using namespace std;
void selection(int arr[], int n){
    int min;
    for(int i = 0;i<n;i++){
         int mindx = i;
         for(int j = i+1;j<n;j++){
             if(arr[j]<arr[mindx]){
                 min = arr[j];
                 mindx=j;
                }
            }
            swap(arr[i],arr[mindx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]= {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof (arr[0]);
        selection(arr,n);
}
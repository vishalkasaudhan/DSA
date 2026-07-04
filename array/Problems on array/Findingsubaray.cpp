
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    //1 12 123
    for(int i = 0;i<n;i++){//start the subarray
        for(int j = i;j<n;j++){//j denotes no. of round in k
            for(int k = i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    } 
}
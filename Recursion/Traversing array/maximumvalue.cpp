#include<iostream>
#include<vector>
using namespace std;
//return
int maxInarray(vector<int>&v,int idx){
    if(idx==v.size()){
        return INT8_MIN;
    }
    return max(v[idx], maxInarray(v,idx+1));
    
}
int main(){
    int arr[]={8,7,0,4,9,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(size);
    for(int i=0;i<size;i++){
        v[i]=arr[i];
    }
    cout<<maxInarray(v,0);

}







// #include<iostream>
// #include<vector>
// using namespace std;
// //print max
// void max1(vector<int>&v,int idx,int max){
//     if(idx==v.size()){
//         cout<<max;
//         return;
//     }
//     if(v[idx]>max){
//         max = v[idx];
//     }
//     max1(v,idx+1,max);
// }
// int main(){
//     int arr[]={8,7,0,4,9,6,3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(size);
//     for(int i=0;i<size;i++){
//         v[i]=arr[i];
//     }
//     max1(v,0,INT8_MIN);

// }
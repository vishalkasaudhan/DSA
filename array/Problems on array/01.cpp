//TWO POINTERS
#include<iostream>
#include<vector>
using namespace std;
// void swap(int x,int y){
//     int temp = x;
//     x = y;
//     y = temp;
// }
void sort01(vector<int> &v){
    int n = v.size();
    int i=0;
    int j = n-1;
    while(i<j){
        if(v[i]==1 && v[j]==0){
           
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
        if(v[j]==1) j--;
        if(v[i]==0) i++;
     if(i>j) break;
        }
    }
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //kaam
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


//METHOD 01


// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int> &v){
//     int n = v.size();
//     int noz = 0;
//     int noO = 0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) noz++;//no. of zeros kitne hain
//         else noO++;//no. of 1 kiotne
//     }
//     //filling elements
//     for(int i= 0;i<n;i++){
//         if(i<noz) v[i]=0;
//         else v[i]=1;
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     //kaam
//     sort01(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
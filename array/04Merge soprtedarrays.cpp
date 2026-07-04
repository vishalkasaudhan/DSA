#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &a1,vector<int> &a2){
    int n1 = a1.size();
    int n2 = a2.size();
    vector<int>r(n1+n2);
    int i = 0;//for a1
    int j=0;//for a2
    int k=0;//for a3
    while(i<=n1 && j<=n2){
        if(a1[i]<a2[j]){
            r[k]=a1[i];
            // k++;
            i++;
        }
        else{
            r[k]=a2[j];
            // k++;
            j++;
        }
        k++;
    }
    //for remaining element
    if(i==n1){
        while(j<=n2-1){
            r[k]=a2[j];
            k++;
            j++;
        }
    }
    if(j==n2){
        while(i<=n1-1){
            r[k]=a1[i];
            k++;
            i++;
        }
    }
    return r;
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(10);
    v.push_back(12);
    vector<int> v3 = merge(v1,v);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}
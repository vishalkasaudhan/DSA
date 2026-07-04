//Find the doublet in the array whose sum is equal to the qivenvalue x
#include<iostream>
#include<vector>;
using namespace std;
int main(){
    vector<int>v;
    int x;
    int n=8;
    cout<<"Enter the target : ";
    cin>>x;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<" "<<j<<")";
            }
        }
    }
}

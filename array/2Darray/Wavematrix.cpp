//change matrixt to transpose
#include<iostream>
using namespace std;
int main(){
int m;
cout<<"Enter 1st row : ";
cin>>m;
int n;
cout<<"Enter 1st column : ";
cin>>n;
    int a[m][n];
    cout<<" Enter first matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<m;i++){
    if(i%2==0){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
}
    else{
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
}
    cout<<endl;
}

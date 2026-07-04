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
int p;
cout<<"Enter 2nd row : ";
cin>>p;
int q;
cout<<"Enter 2nd column : ";
cin>>q;
if(n==p){
    int a[m][n];
    cout<<" Enter first matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[p][q];
    cout<<" Enter second matrix : ";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
int res[m][q];
cout<<endl<<"Result : ";
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
        for(int k=0;k<p;k++){
            res[i][j]+=a[i][k]*b[k][j];
        }
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
       cout<<res[i][j]<<" ";
    }
    cout<<endl;
}
}
else{
    cout<<"Multiplication not possible";
}
}
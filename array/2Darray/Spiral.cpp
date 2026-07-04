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

int minr = 0,minc=0;
int maxr = m-1 , maxc = n-1;
while(minr<=maxr && minc<=maxc){
    //Right
    for(int i=minc;i<=maxc;i++){
        cout<<a[minr][i]<<" ";
    }
    minr++;
    //Bottom
    for(int i=minr;i<=maxr;i++){
        cout<<a[i][maxc]<<" ";
    }
    maxc--;
    //left
    if(minr<=maxr){
        for(int i=maxc;i>=minc;i--){
            cout<<a[maxr][i]<<" ";
        }
        maxr--;
    }
    //up
    if(minc<=maxc){
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }
}
}

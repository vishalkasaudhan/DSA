#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the number of rows : ";
    cin>>x;
    cout<<"Enter the number of cols : ";
    cin>>y;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
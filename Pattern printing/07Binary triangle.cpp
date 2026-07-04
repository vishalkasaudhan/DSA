#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of rows : ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2!=0){
                cout<<"0"<<" ";
            }
            else{
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
}
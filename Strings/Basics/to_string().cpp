#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s = to_string(x);
    int len = s.length();
    cout<<len;
}
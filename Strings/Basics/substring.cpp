#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
//s.substr(idx)
    cout<<s.substr(2)<<endl;
    string str = "abcde";
    //c ka index hai 2, string len = 5(0-4)
    string left = str.substr(0,2);
    cout<<left<<endl;
    string right = str.substr(2+1);
    cout<<right;
    cout<<endl<<left+right;
}
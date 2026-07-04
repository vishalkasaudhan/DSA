#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string t;
    cout<<"Enter first string : ";
    cin>>s;
    cout<<"Enter second string : ";
    cin>>t;
     sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
    
}

// wrong  method1
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     string t;
//     cout<<"Enter first string : ";
//     cin>>s;
//     cout<<"Enter second string : ";
//     cin>>t;
//     int count = 0;
//     int n = s.length();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(s[i]==t[j]){
//                count++;
//             }
//         }
//     }
//     if(count == n) cout<<"true";
//     else cout<<"false";
// }
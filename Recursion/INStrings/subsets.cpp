//store
#include<iostream>
#include<vector>
using namespace std;
void subset(string original,string ans,vector<string>&v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    subset(original.substr(1),ans,v);
    subset(original.substr(1),ans+ch,v);
}
int main(){
    string str = "abc";
    vector<string>v;
   subset(str,"",v); 
   for(string ele : v){
    cout<<ele<<endl;
   }
}


//print
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(string original,string ans){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     subset(original.substr(1),ans+ch);
//     subset(original.substr(1),ans);
// }
// int main(){
//     string str = "abc";
//    subset(str,""); 
// }
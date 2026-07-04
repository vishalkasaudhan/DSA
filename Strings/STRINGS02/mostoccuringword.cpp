#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;//ek string mana
    int count = 1;
    int maxCount = 1;
    getline(cin,str);
    stringstream ss(str);//isme store kara diya
    string temp;//ek string mana 
    vector<string> v;//vector mana
    while(ss>>temp){//jo string mana tha wo word by word store kar sake
        v.push_back(temp);//har word ko vector me push kara diya
    }
    sort(v.begin(),v.end());//saare words ko sort kar liya jisse har word ko saare word se compare na karna pade
   
    //max count nikalne ke liye 
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        maxCount = max(maxCount,count);
    }

    //max bar jo word aya hai uske liye
  count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count == maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }
    cout<<maxCount;
}




// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<string>
// #include<sstream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     stringstream ss(str);
//     string temp;
//     vector<string> v;
//     while(ss>>temp){
//         v.push_back(temp);
//     }
//     //vector print
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     //print
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
  
// }

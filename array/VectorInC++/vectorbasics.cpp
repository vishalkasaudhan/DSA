// #include<iostream>;
// #include<vector>;
// using namespace std;
// int main(){
//     vector<int> v; //You need not mention size
//     v.push_back(6);
//     cout<<v.capacity()<<" ";
//     v[0]=1;
//     v.push_back(7);
//     cout<<v.capacity()<<" ";
//     v.push_back(8);
//     cout<<v.capacity()<<" ";
//     v.push_back(9);
//     cout<<v.capacity()<<" ";
//     // cout<<v[0]<<" ";
//     // cout<<v[1]<<" ";
//     // cout<<v[2]<<" ";
//     // cout<<v[3]<<" ";
// }


// #include<iostream>;
// #include<vector>;
// using namespace std;
// int main(){
//     vector<int> v; //You need not mention size
//     v.push_back(6);
//     cout<<v.size()<<" ";
//     v[0]=1;
//     v.push_back(7);
//     cout<<v.size()<<" ";
//     v.push_back(8);
//     cout<<v.size()<<" ";
//     v.push_back(9);
//     cout<<v.size()<<" ";
//     // cout<<v[0]<<" ";
//     // cout<<v[1]<<" ";
//     // cout<<v[2]<<" ";
//     // cout<<v[3]<<" ";
// }



#include<iostream>;
#include<vector>;
using namespace std;
int main(){
    vector<int> v; //You need not mention size
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
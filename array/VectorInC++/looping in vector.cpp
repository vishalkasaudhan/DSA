//Find the last occourence of x in the array
#include<iostream>;
#include<vector>;
using namespace std;
int main(){
    vector<int> v; 
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(9);
    v.push_back(5);
    v.push_back(5);
    int x = 9;
    int idx = -1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==9) idx = i;
    // }

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx;
}
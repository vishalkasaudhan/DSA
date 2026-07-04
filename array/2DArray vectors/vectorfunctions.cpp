#include<iostream>
#include<vector>
using namespace std;
void change2D(vector<vector<int> >&v){
    v[1][1]=100;
}
void length(vector<vector<int> >&v){
    cout<<v.size()<<endl;//number of rows
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(5);
    v2.push_back(4);
    v2.push_back(9);
    v2.push_back(10);
    vector<int> v3;
    v3.push_back(5);
    v3.push_back(4);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(16);
    vector<vector<int> >v;//{ {1,2,3} ,{5,4,9,10},{5,4,9,10,11,16}}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    change2D(v);
    length(v);
    cout<<v[1][1];
}
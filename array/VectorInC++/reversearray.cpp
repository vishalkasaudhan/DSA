//ReversePart
#include<iostream>;
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(1);
    display(v);
    reversePart(1,3,v);
    display(v);
}


// #include<iostream>;
// #include<vector>
// using namespace std;
// void display(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     v.push_back(1);
//     display(v);
//     //reverse
//     for(int i=0,j=v.size()-1;i<=j;i++,j--){
//         int temp = v[i];
//         v[i]=v[j];
//         v[j]=temp;
//     }

//     display(v);
// }



// #include<iostream>;
// #include<vector>
// using namespace std;
// void display(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     v.push_back(1);
//     display(v);
//     //reverse
//     int i = 0;
//     int j = v.size()-1;
//     while(i<=j){
//         int temp = v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     display(v);
// }
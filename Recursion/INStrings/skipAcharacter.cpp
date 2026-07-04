#include<iostream>
#include<vector>
using namespace std;
void removechar(string ans,string original){
   if(original.length()==0){
    cout<<ans;
    return;
   }
   char ch = original[0];
   if(ch=='a') removechar(ans,original.substr(1));
   else removechar(ans+ch,original.substr(1));
}
void removechar1(string ans,string original,int idx){
   if(idx == original.length()){
    cout<<ans;
    return;
   }
   char ch = original[idx];
   if(ch=='a') removechar1(ans,original,idx+1);
   else removechar1(ans+ch,original,idx+1);
}
int main(){
    string str = "Vishal kasaudhan";
    removechar("",str);
    cout<<endl;
    removechar1("",str,0);

}
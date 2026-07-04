#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string str = "Kasaudhan";
    cout<<str<<endl;
    str = str+"Vishal";//append
    reverse(str.begin(),str.end());//Reverse complete
    cout<<str<<endl;
    reverse(str.begin()+2,str.end()-1);//Reverse part

    cout<<str<<endl;
}



// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "Kasaudhan";
//     cout<<str<<endl;
//     str.pop_back();
//     str.pop_back();
//     cout<<str;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "abcd";
//     cout<<str<<endl;
//     str.push_back('e');
//     cout<<str;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "Vishal is at home";
//     cout<<str.length();
// }
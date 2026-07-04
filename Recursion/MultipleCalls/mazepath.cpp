#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int total =  rightways + downways;
    return total;
}
int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways = maze2(row,col-1);//right
    int downways = maze2(row-1,col);//left
    int total =  rightways + downways;
    return total;
}
void path2(int row,int col,string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    path2(row,col-1,s+"R");//right
    path2(row-1,col,s+"D");//left
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){//destination reached
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+"R");//right
    printpath(sr+1,sc,er,ec,s+"D");//left
}
int main(){
    cout<<maze(0,0,2,2)<<endl;
    printpath(0,0,2,2,"");
    cout<<maze2(4,4)<<endl;
    path2(4,4,"");
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void printsubset(string str,string subset){
    char ch=str[0];
    if (str.size()==0)
    {
        cout<<subset<<"\n";
        return;
    }
    
    //print if yes
    printsubset(str.substr(1,str.size()-1),subset+ch);
    //print if no
    printsubset(str.substr(1,str.size()-1),subset);
}
int main(){
    string str="abc";
    string subset="";
    printsubset(str,subset);
 }
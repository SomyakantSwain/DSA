#include<iostream>
#include<string>
using namespace std;
 int search(string &s,int i,int j){
    int n=s.size();
    if(i==n)return 0;
    if(j==n)return search(s,i+1,i+1);
    int count=0;
    if(s[i]==s[j])count++;
    return count+search(s,i,j+1);

 }
int main(){
string s="abcab";
cout<<search(s,0,0);
}
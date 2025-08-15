#include<iostream>
#include<string>
using namespace std;
 long search(string &s,int i,int j,char &tar){
    int n=s.size();
    if(i==n)return 0;
    if(j==n)return search(s,i+1,i+1,tar);
    int count=0;
    if(s[i]==tar&&s[j]==tar)count++;
    return count+search(s,i,j+1,tar);

 }
int main(){
string s="abada";
char tar='a';
cout<<search(s,0,0,tar);
}
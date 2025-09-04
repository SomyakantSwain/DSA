#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void permutations(string str,string subset){
    int n=str.length();
    if (str.size()==0)
    {
        cout<<subset<<"\n";
        return;
    }
    
    for (int  i = 0; i < n; i++)
    {
      char ch=str[i];
      string nextstr=str.substr(0,i)+str.substr(i+1,n-i-1);
      permutations(nextstr,subset+ch);
    }
    
}
int main(){
     string str="abc";
    string subset="";
    permutations(str,subset);

}
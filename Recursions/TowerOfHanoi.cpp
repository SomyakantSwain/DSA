#include<iostream>
#include<string>
using namespace std;
void TOH(int n,string A ,string B,string C){  //DISK,SOURCE,HELPER,DESTINATION
    if (n>0)
    {
        TOH(n-1,A,C,B);
        cout<<"Transfer the disk   "<<A<<"  to  "<<C<<endl;
        TOH(n-1,B,A,C);
    }
    
}
int main(){
    int n=2;
    TOH(n,"A","B","C");

}
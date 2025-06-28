#include <iostream>
using namespace std;

int main(){
    int fact=1;
    int n;
    cout<<"Enter a num for factorail"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"Factorial of n is"<<fact;

}
#include <iostream>
#include<cmath>
using namespace std;
int main(){
     int num,rem,res=0;
     cout <<"Enter a number";
     cin>>num;
     int original=num;
     while (num>0)
     {
        rem=num%10;
        res+= rem*rem*rem;
        num=num/10;
       
     }
     if (original==res)
     {
        cout<<"Number is an Armstrong number"<<endl;
     }else
     {
        cout<<"Number is not an Armstrong number"<<endl;
     }
        return 0;
}
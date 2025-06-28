#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;
 void  maxProfit(int *prices,int n ){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for (int i = 1; i < n; i++)
    {
      bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }
    int maxProfit=0;
    for (int i = 1; i < n; i++)
    {
      int currentProfit=prices[i]-bestBuy[i];
      maxProfit=max(maxProfit,currentProfit);
    }
    cout<<"Maximum Profit: "<<maxProfit<<endl;
 }


int main(){
     int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    maxProfit(arr,n);
    return 0;
}

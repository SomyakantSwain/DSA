#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

void maxSubarray(int *arr,int n)  // brute force approach not optimized
{
    int max_sum=INT_MIN; // negative infinity
    for (  int start = 0; start < n; start++)
    {
      for (int  end = start; end < n; end++)
      {
        int cur_sum=0;
        for (int i = start; i<=end; i++)
        {
           cur_sum+=arr[i];
        }
        
        max_sum=max(cur_sum,max_sum);
      }
      
    }
    cout<<"Maximum subarray Sum="<<max_sum<<endl;
}

void maxSubarray2(int *arr,int n)  // realtively optimized approach, still not fully optimized
{
    int max_sum=INT_MIN; // negative infinity
    for (  int start = 0; start < n; start++)
    {
        int cur_sum=0;
      for (int  end = start; end < n; end++)
      {
        
           cur_sum+=arr[end];
        
        max_sum=max(cur_sum,max_sum);
      }
      
    }
    cout<<"Maximum subarray Sum="<<max_sum<<endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
     maxSubarray2(arr,n);
     return  0;

}
#include <iostream>
#include<climits>
using namespace std;

void maxSubarraySum(int *arr,int n){ // Fully Optimized and very beautiful
    int max_sum=INT_MIN;
    int currsum=0;
    for(int i=1;i<n;i++){
        currsum+=arr[i];
        max_sum=max(currsum,max_sum);
        if (currsum<0)
        {
           currsum=0;
        }
        
    }
    cout<<"Max current array sum"<<currsum;
}


int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
     maxSubarraySum(arr,n);
     return  0;

}
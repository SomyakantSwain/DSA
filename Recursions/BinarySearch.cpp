#include <iostream>
#include<vector>
using namespace std;
 
int binarySearch(vector<int>&nums,int low,int high,int target){
    if(low>high)return -1;
    int mid=(low+high)/2;
    if (nums[mid]==target)
    {
        return mid;
    }else if(nums[mid]<target){
        return binarySearch(nums,mid+1,high,target);
    }else if(nums[mid]>target){
        return binarySearch(nums,low,mid-1,target);
    }
    
}
int search(vector<int>& nums, int target) {
    return binarySearch(nums,0,nums.size()-1,target);
        
}

int main(){
    vector <int>nums={-1,0,3,5,9,12};
    int target=9;
    int res=search(nums,target);
    cout<<res<<endl;
    return 0;

}
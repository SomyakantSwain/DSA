// #include <bits/stdc++.h
#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int> &nums){
    int n=nums.size();
    int duplicate=-1,missing=-1;
    vector<int>freq(n+1,0);
    for(int num:nums){
        freq[num]++;
    }
    for (int i = 1; i <= n; i++)
    {
       if(freq[i]==2){
        duplicate=i;
       }
       else if(freq[i]==0){
        missing=i;
       }
       
    }
    return {duplicate,missing};
    
}
 int main(){
    int n;
    cout <<"Enter the size";
    cin >>n;
    vector<int>nums(n);
      cout <<"Enter the num";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
     vector <int> ans= findErrorNums(nums); 
     cout <<ans[0]<<   "  "<<ans[1]<<endl;

 }

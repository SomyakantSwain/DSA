#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int> &height){
    int n=height.size();
    int leftmax[20000],rightmax[20000];
    leftmax[0]=height[0];
    rightmax[n-1]=height[n-1];
    for (int i = 1; i < n; i++)
    {
        leftmax[i]=max(leftmax[i-1],height[i-1]);
    }
    for (int i = n-2; i >=0; i--)
    {
        rightmax[i]=max(rightmax[i+1],height[i+1]);
    }
    int trappedwater=0;
    for (int i = 0; i < n; i++)
    {
        int currentwater=min(leftmax[i],rightmax[i])-height[i];
        if (currentwater>0)
        {
            trappedwater+=currentwater;
        }
        
    }
    return trappedwater;
}
int  main(){
    vector<int> height= {4, 2, 0, 6, 3, 2, 5};
    cout <<"Trapped water"<<trap(height)<<endl;

}
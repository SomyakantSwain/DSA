#include <iostream>
#include <vector>
using namespace std;
 int maxArea(vector<int> &height){
    int n=height.size();
    int left=0,right=n-1;
    int maxarea=0;
    while (left < right)
    {
            int h=min(height[left],height[right]);
            int  w=right-left;
            int area=h*w;
            maxarea=max(maxarea,area);
            if (height[left]<height[right])
            {
               left++;
            }
            else
            {
               right--;
            }
            
    }
     return maxarea;
 }

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<"max-area" " "<<maxArea(height)<<endl;


}
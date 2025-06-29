#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
void trap(int *height, int n)
{
    int leftmax[20000], rightmax[20000];
    leftmax[0] = height[0];
    rightmax[n - 1] = height[n - 1];
    cout << "leftmax is"<<endl;
     
    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i - 1], height[i - 1]);
        cout << leftmax[i] << ",";
    }
    cout << endl;
     cout << "rightmax is"<<endl;
    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], height[i + 1]);
        cout << rightmax[i] << ",";
    }
     cout<<endl;
    int trappedwater = 0;
    for (int i = 0; i < n; i++)
    {
        int currentWater = min(leftmax[i], rightmax[i]) - height[i];
        if (currentWater > 0)
        {
            trappedwater += currentWater;
        }
    }
    cout << "Trapped water amount  is =" << trappedwater;
}
int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(height[0]);
    trap(height, n);
}
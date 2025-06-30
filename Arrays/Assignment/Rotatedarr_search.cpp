#include <iostream>
using namespace std;
int search(int *arr, int n, int t)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == t)
        {
            return mid;
        }

        if (arr[left] <= arr[mid])
        {
            if (arr[left] <= t && t < arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if(arr[right] >= t && arr[mid] < t)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return -1;
}
int main()
{
    int arr[] = { 5, 6, 7,1, 2, 3, 4,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    cout << search(arr, n, target);
    return 0;
}
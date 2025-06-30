#include<iostream>
#include<climits>
using namespace std;

void maxProductSubarray(int *arr, int n) {
    int max_prod = arr[0];
    int curr_max = arr[0];
    int curr_min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0)
            swap(curr_max, curr_min);

        curr_max = max(arr[i], curr_max * arr[i]);
        curr_min = min(arr[i], curr_min * arr[i]);

        max_prod = max(max_prod, curr_max);
    }

    cout << "Max product = " << max_prod;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxProductSubarray(arr, n);
    return 0;
}

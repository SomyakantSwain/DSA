#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter a n" << endl;
    cin >> n;

    for (int j = 2; j <= n; j++)
    {
        int curr = j;
        bool isPrime = true;
        for (int i = 2; i <= sqrt(curr); i++)
        {
            if (curr % i == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << curr << "  ";
        }
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

long long friendsPairing(int n) {
    if (n == 1 || n == 2)
        return n;
    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}

int main() {
    int n;
    cout<<"Enter the value of n";
    cin >> n;
    cout << friendsPairing(n) << endl;
    return 0;
}

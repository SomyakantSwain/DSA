#include <iostream>
using namespace std;

long long ways(int n) {
    if (n == 0) return 1; // empty board
    if (n == 1) return 1; // only vertical domino possible
    return ways(n - 1) + ways(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << ways(n) << endl;
    return 0;
}

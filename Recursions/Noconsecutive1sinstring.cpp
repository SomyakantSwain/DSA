#include <iostream>
using namespace std;

void generateStrings(int n, string str, int last) {
    if (n == 0) {
        cout << str << endl;
        return;
    }

    // Always place '0'
    generateStrings(n - 1, str + "0", 0);

    // Place '1' only if last was not '1'
    if (last == 0) {
        generateStrings(n - 1, str + "1", 1);
    }
}

int main() {
    int n;
    cin >> n;
    generateStrings(n, "", 0);
    return 0;
}

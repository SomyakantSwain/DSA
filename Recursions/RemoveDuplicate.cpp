#include <iostream>
#include <string>
using namespace std;
string rmDuplicate(string str, string ans, int i, bool map[26])
{
    if (i == str.size()) // base case
    {
        return ans;
    }

    char ch = str[i];
    int mapidx = ch - 'a';
    if (map[mapidx] == true)
    {
        return rmDuplicate(str, ans, i + 1, map);
    }
    else
    {
        map[mapidx] = true;
        return rmDuplicate(str, ans + ch, i + 1, map);
    }
}
int main()
{
    bool map[26] = {false};
    string str = "apnacollege";
    string ans = "";
    int i = 0;
    string res = rmDuplicate(str, ans, i, map);
    cout << res << endl;
    return 0;
}
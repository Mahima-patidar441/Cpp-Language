// leetcode 455
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> g = {7, 14, 15, 16};
    vector<int> s = { 7, 8, 10, 9, 14,15};

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int count = 0;
    int idx = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= g[0])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        cout << "0";
    }
    int i = 0;
    int j = 0;

    while (i < g.size() && j < s.size())
    {
        if (s[j] >= g[i])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << count;
}

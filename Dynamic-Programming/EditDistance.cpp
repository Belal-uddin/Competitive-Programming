/*
Given two strings a and b of length sa and sb respectively and below operations that can be performed on a. Find the minimum number of edits (operations) to convert ‘a‘ into ‘b‘.  

Operation 1 (INSERT): Insert any character before or after any index of a
Operation 2 (REMOVE): Remove a character of a
Operation 3 (Replace): Replace a character at any index of a with some other character.
Note: All of the above operations are of equal cost. 
*/

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;


void solve()
{
    string a, b;
    cin >> a >> b;
    int sa = a.size(), sb = b.size();

    int dp[sa + 1][sb + 1];

    for (int i = 0; i <= sa; i++)
    {
        for (int j = 0; j <= sb; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;

            else if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1]));
            }
        }
    }
    cout << "Minimum cost to turn a into b is: ";
    cout << dp[sa][sb] << endl;
}
signed main()
{
 
    int t = 1;
   // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}

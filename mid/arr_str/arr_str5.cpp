//
// Created by jjy on 21-12-9.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.size() < 2)
            return s;
        int length = s.length();
        int left = 0;
        int maxlength = 1;

        vector<vector<int>> dp(length, vector<int>(length));
        for (int i = 0; i < length; ++i)
        {
            dp[i][i] = 1;
        }

        for (int L = 2; L <= length; ++L)
        {
            for (int i = 0; i < length; ++i)
            {
                int j = L + i - 1;
                if (j >= length)
                    break;
                if (s[i] != s[j])
                {
                    dp[i][j] = 0;
                } else{
                    if (j-i <3){
                        dp[i][j] = 1;
                    } else{
                        dp[i][j] = dp[i+1][j-1];
                    }
                }
                if (dp[i][j] == 1){
                    left = i;
                    maxlength = L;
                }




            }
        }
        return s.substr(left, maxlength);


    }
};

int main()
{
    cout << "start..." << endl;
    Solution ss;
//    cout << a << endl;


    return 0;
}
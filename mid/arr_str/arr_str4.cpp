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
    int lengthOfLongestSubstring(string s)
    {
        int length = s.size();
        if (length == 0)
            return 0;
        int result = 0;
        int right = 0;
        unordered_map<char, int> map;

        for (int i = 0; i < length; i++)
        {
            while (!map.count(s[right]) && right<length)
            {
                map[s[right]] = 1;
                right++;
            }
            result = max(result, right - i);
            map.erase(s[i]);


        }
        return result;
    }
};

int main()
{
    cout << "9999999999999" << endl;
    Solution ss;
    string s = "bbbbb";
    int a = ss.lengthOfLongestSubstring(s);
    cout << a << endl;


    return 0;
}
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
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map;

        int length = strs.size();

        for (string str_ele:strs)
        {
            string strtemp = str_ele;
            sort(strtemp.begin(), strtemp.end());
            map[strtemp].push_back(str_ele);
        }

        unordered_map<string, vector<string>>::iterator itr;
        for (itr = map.begin(); itr != map.end(); itr++)
        {
            result.push_back(itr->second);
        }
        return result;
    }

};

int main()
{
    cout << "9999999999999" << endl;
//    string ss = "achd";
//    sort(ss.begin(), ss.end());
//    cout << ss << endl;
//    for (int i = 0; i < ss.length(); ++i)
//    {
//        cout << ss[i] << endl;
//    }

//    vector<char> aa = vector<char>{'a', 'c', 'b'};
//    sort(aa.begin(), aa.end());
//
////    Solution solu;
////    vector<vector<int>> bb = solu.threeSum(aa);
////
//    for (int i = 0; i < aa.size(); ++i)
//    {
//        std::cout << aa[i] << std::endl;
//
//    }


    return 0;
}
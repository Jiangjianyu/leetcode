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
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        if (m < 1 || m > 200)
            return;
        int n = matrix[0].size();
        if (n < 1 || n > 200)
            return;
        unordered_map<int, int> mapi;
        unordered_map<int, int> mapj;

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if ((matrix[i][j] < -pow(2, 31)) || (matrix[i][j] > pow(2, 31) - 1))
                    return;
                if (matrix[i][j] == 0)
                {
                    mapi[i] = 0;
                    mapj[j] = 0;
                }

            }
        }
        unordered_map<int, int>::iterator iter;
        for (iter = mapi.begin(); iter != mapi.end(); ++iter)
        {
            for (int j = 0; j < n; ++j)
            {
                matrix[iter->first][j] = 0;
            }
        }
        for (iter = mapj.begin(); iter!=mapj.end(); ++iter)
        {
            for (int i = 0; i < m; ++i)
            {
                matrix[i][iter->first] = 0;
            }
        }


    }
};

int main()
{
    cout << "9999999999999" << endl;
//    vector<int> aa = vector<int>{3, 0, -2, -1, 1, 2};
//    Solution solu;
//    vector<vector<int>> bb = solu.threeSum(aa);
//
//    for (int i = 0; i < bb.size(); ++i)
//    {
//        std::cout << bb[i][0] << bb[i][1] << bb[i][2] << std::endl;
//
//    }


    return 0;
}
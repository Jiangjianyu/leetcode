//
// Created by jjy on 21-12-9.
//
/*
 * 给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。
 * */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int length = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < length; ++i)
        {
            if (nums[i] > 0)
            {
                return result;
            }
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int l = i + 1;
            int r = length - 1;

            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0)
                {
                    result.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;
                    l++;
                    r--;
                } else if (sum < 0){
                    l++;
                } else if (sum >0){
                    r--;
                }
            }

        }

        return result;


    }

};

int main()
{
    vector<int> aa = vector<int>{3, 0, -2, -1, 1, 2};
    Solution solu;
    vector<vector<int>> bb = solu.threeSum(aa);

    for (int i = 0; i < bb.size(); ++i)
    {
        std::cout << bb[i][0] << bb[i][1] << bb[i][2] << std::endl;

    }


    return 0;
}
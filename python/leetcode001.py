
class Solution:
    def twoSum(self, nums, target):
        hashmap = {}
        for i, num in enumerate(nums):
            if hashmap.get(target-num) is not None:
                return [hashmap.get(target-num),i]
            else:
                hashmap[num] = i


# nums = [1,7,12,54]
# husmap = {}
#
# for i, num in enumerate(nums):
#     print("i:",i)
#     print("num:",num)
#     husmap[num] = i
# print(husmap)
# print(husmap.get(1))
if __name__ == '__main__':
    ss = Solution()
    numslist = [2, 8, 12, 54]
    target = 19
    print(ss.twoSum(numslist, target))
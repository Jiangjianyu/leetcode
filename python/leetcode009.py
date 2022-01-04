
class Solution:
    def isPalindrome(self, x):
        if str(x) == str(x)[::-1]:
            print(str(x))
            print(str(x)[::-1])
            return True
        else:
            print(str(x))
            print(str(x)[::-1])
            return False

if __name__ == '__main__':
    sss = Solution()
    aaa = 123
    print(sss.isPalindrome(aaa))

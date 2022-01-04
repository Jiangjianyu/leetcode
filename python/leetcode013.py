
class Solution:
    def romanToInt(self, s):
        d = {'I':1, 'IV':3, 'V':5, 'IX':8, 'X':10, 'XL':30, 'L':50, 'XC':80, 'C':100, 'CD':300, 'D':500, 'CM':800, 'M':1000}
        for i, n in enumerate(s):
            print("i:",i)
            print("n:",n)
            print("s[max(i-1,0):i+1]:",s[max(i-1,0):i+1])
            print("d[n]:",d[n])
            print("d.get(s[max(i-1,0):i+1],d[n]):",d.get(s[max(i-1,0):i+1],d[n]))

            print("------------------")

        return sum(d.get(s[max(i-1,0):i+1],d[n]) for i, n in enumerate(s))

if __name__ == '__main__':
    sss = Solution()
    aaa = 'III'
    print(sss.romanToInt(aaa))
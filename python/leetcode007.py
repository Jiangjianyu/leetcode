
class Solution:
    def reverse(self, x):
        x_list = list(str(x))
        tem_list = []
        is_minus = False

        while x_list:
            element = x_list.pop()
            if element == '-':
                is_minus = True
                continue;
            else:
                tem_list.append(element)
        result = int(''.join(tem_list))

        if is_minus:
            result *= -1

        result_max = 0xffffffff/2
        if result < (result_max*-1) or result > (result_max-1):
            result = 0

        return result


# x = 123
# x_list = list(str(x))
# print("x_list", x_list)
# ssss = []
# while x_list:
#     ssss.append(x_list.pop())
# print("ssss", ssss)
#
# rrr = ''.join(ssss)
# print('rrr',rrr)

if __name__ == '__main__':
    ss = Solution()
    x = -123
    print(ss.reverse(x))
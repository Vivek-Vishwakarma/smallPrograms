'''list = [1, 2, 3, 4, 5]
list.append(43)
list.append(0)
print(list)
list.sort()
print(list)

# https://leetcode.com/problems/keep-multiplying-found-values-by-two/submissions/
def function(nums, original):
    for x in nums:
        if x == original:
            original = 2 * original
    for y in reversed(nums):
        if y == original:
            original = 2 * original
    return original

'''
# nums = [
#     161,
#     28,
#     640,
#     264,
#     81,
#     561,
#     320,
#     2,
#     61,
#     244,
#     183,
#     108,
#     773,
#     61,
#     976,
#     122,
#     988,
#     2,
#     370,
#     392,
#     488,
#     375,
#     349,
#     432,
#     713,
#     563,
# ]
# print(function(nums, 61))


nums = [1,2,3,4,5]
nums.insert(3,0)
print(nums.index(2))
print(nums)
# ans = []
# for i in nums:
#     ans.append(i)
# for i in nums:
#     ans.append(i)
# print(ans)
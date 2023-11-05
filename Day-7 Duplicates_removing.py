class Solution(object):
    def removeDuplicates(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         len_nums=len(nums)
#         res=[]
#         # print(len_nums)
#         for n,i in enumerate(nums):
#             if i not in nums[:n]:
#                 res.append(i)
#         # res = [i for n, i in enumerate(test_list) if i not in test_list[:n]]
#                 # print("True")
#                 # del nums[i+1]
#             # else:
#                 # print("False")
#         def printList(res):
#             print('['+",".join(map(str,res))+']')
        
#         # print(res)
#         return (printList(res))

#         # for i in range(len_nums):
#         #     res.append('_')
#         # print(res)

# def removeDuplicates(self,nums:List[int]) -> int:
	    nums[:] = sorted(set(nums))
	    return len(nums)

nums=[1,2,2]

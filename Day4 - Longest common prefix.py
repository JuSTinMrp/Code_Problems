# class Solution(object):
#     def longestCommonPrefix(self, strs):
#         """
#         :type strs: List[str]
#         :rtype: str
#         """
#         str=[]
#         a,b,c = strs
#         a=strs[0]
#         b=strs[1]
#         c=strs[2]
       
#         for i in a:
            
#             for j in b:
               
#                 for k in c:
                    
#                     if (i==j and j==k):
#                         str.append(i)
#                         continue
#                 continue
#             continue        
        
#         str = "".join(str)
#         print(str)
#         return(str)


class Solution:
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        first=strs[0]
        for i in strs[1:]:
            while i.find(first)!=0:
                first=first[:-1]
                if not first:
                    return ""
        return first
       

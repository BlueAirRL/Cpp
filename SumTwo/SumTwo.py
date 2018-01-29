class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        if len(nums) == 0:
            return None
            
        _nums=[]
        for i in nums:
            numberToFind = target-i
            nums_l = len(nums)-1 
            """防止下标越界"""
                           
            if numberToFind in nums:
                if numberToFind == i and nums.count(i) >= 2:
                    try:
                        sub1 = nums.index(i)
                        sub2 = nums[sub1+1:].index(numberToFind)+sub1+1
                    except IndexError as e:
                        print("The index Error: ", e)
                        raise
                else:
                    try:
                        sub1 = nums.index(i)
                        sub2 = nums.index(numberToFind)
                    except IndexError as e:
                        print("The index Error: ", e)
                        raise
                
                if sub1 != sub2:
                    _nums.append(sub1)
                    _nums.append(sub2)
                    return _nums

大体思路是这样的：
1：在一个整形数组中查询两个元素和为目标值的计算；
LeetCode官方实例：
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

上传的代码解析：
1：vector储存数组，map保存数组的下标与元素值；
2：由目标值与数组中的第一个值相减结果在map中的寻找是否存在该值。
	若存在，记录响应的下标返回。



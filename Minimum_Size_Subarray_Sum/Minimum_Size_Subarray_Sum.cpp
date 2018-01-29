class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int total = 0; int left = 0;
        
        int result = nums.size()+1;//0-5  =6
        int min = result;
        for(int right = 0; right < result-1; right++)
        {
            total += nums[right];
            while(total >= s)
            {
                if(min > (right - left + 1))
                    min = (right - left + 1);
                    
                total -= nums[left];
                left += 1;
            }
            
        }
        
        if(min < result)
            return min;
        else
            return 0;        
    }
};

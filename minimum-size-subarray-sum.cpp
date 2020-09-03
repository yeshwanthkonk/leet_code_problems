
#https://leetcode.com/problems/minimum-size-subarray-sum/solution/

int minSubArrayLen(int s, vector<int>& nums) {
        
        int j,i=0;
        int len = nums.size();
        int min_win = len+1;
        int sum = 0;
        if(len == 0)
            j=0;
        else
            j=-1;
        
        while(j<len){
            if(sum>=s){
                min_win = min(min_win, (j-i+1));
                sum -= nums[i];
                i++;
            }
            else{
                    j++;
                    if(j<len)
                        sum += nums[j];
            }
        }
        if(min_win == len+1)
            return 0;
        else
            return min_win;
    }

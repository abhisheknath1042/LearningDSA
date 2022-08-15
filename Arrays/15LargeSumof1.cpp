class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int i, minSum, lgSum;
        
        i=minSum=lgSum=0;
        
        for(i=0; i<nums.size(); i++)
        {
            if(nums.at(i)==1)
            {
                minSum+=1;
                
            }
            else
            {
                if(minSum>=lgSum)
                    lgSum=minSum;
                minSum=0;
            }
        }
        
        if(minSum>=lgSum)
            return minSum;
        else
            return lgSum;
        
    }
};
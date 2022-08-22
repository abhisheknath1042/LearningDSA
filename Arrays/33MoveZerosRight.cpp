class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j;
        int n;
        i=j=0;
        n=nums.size();
        
        if(n==1)
            return;
                
        while(i<n && j<n)
        {
            if(nums[j]!=0 ){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else 
                j++;
        } 

        return;
    }
};
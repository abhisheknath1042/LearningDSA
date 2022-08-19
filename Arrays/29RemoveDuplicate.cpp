class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        // put the unique elements in left side of array, after removing duplicates
        
        int left = 0;
        
        // iterate over the array and remove duplicates
        
        int i = 0;
        
        while(i < n)
        {
            // remove duplicates
            
            while(i < n - 1 && nums[i] == nums[i + 1])
            {
                i++;
            }
            
            // put the unique element in left side and increment the left pointer
            
            nums[left++] = nums[i];
            
            i++;
        }
        
        return left;
        
    }
};
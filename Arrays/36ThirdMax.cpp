class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),greater<int>());
        
        int n=nums.size();
        vector<int> res;
        
        res.push_back(nums[0]);
        
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]){
                res.push_back(nums[i]);
            }
        }
        
        if(res.size()<3){
            return res[0];
        }
        
        return res[2];
    }
};
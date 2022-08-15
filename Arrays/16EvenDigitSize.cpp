class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        string num;
        int dig,flag;
        
        dig=flag=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            num=to_string(nums.at(i));
            dig=num.size();
            
            if(dig%2==0)
                flag++;
        }
        
        return flag;
    }
};
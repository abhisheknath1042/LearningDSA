class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int dig,flag;
        
        dig=flag=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            dig=countDigit(nums.at(i));
                        
            if(dig%2==0)
                flag++;
        }
        
        
        return flag;
    }
    
    int countDigit(long long n)
        {
            if (n/10 == 0)
                return 1;
            return 1 + countDigit(n / 10);
        }
};

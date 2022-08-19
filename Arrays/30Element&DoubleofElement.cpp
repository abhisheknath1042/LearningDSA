class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // bool res=false;
        int n,j;
        n=arr.size();
        for(int i=0; i<n; i++)
        {
            j=i+1;
            while(j<n)
            {
                if(arr[i]==2*arr[j] || 2*arr[i]==arr[j])
                {
                    return true;
                    break;
                }
                ++j;
            }
        }
        
        return false;
    }
};
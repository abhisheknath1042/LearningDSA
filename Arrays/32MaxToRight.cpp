class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int temp;
        int ma = -1;
        
        for(int i=arr.size()-1; i>=0; i--){
            temp = arr[i];
            arr[i] = ma;
            ma = max(ma,temp);
        }
        return arr;
    }
};
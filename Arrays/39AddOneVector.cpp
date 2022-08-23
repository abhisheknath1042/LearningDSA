// Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
       
        vector<int> newArr;
        newArr=arr;
        
        long long result = 0;
        for (auto d : newArr)  
        {
            result = result * 10 + d;
        }
        
        result = result+1;
        
        newArr.clear();

        for (int i = log10(result); i >= 0; i--)
        {
          newArr.push_back(result / int(std::pow(10, i)) % 10);
        }
                
        return newArr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
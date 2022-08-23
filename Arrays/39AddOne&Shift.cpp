//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int i=N-1;
        int j=1;
        vector<int> newArr;
        newArr=arr;
        
        if(newArr[i]==9)
        {
            while(i>=0)
            {
                if(newArr[i]==9)
                {
                    newArr[i]=0;
                    --i;
                }
                else
                {
                    newArr[i]=newArr[i]+1;
                    break;
                }
            }
        }
        else
        {
            newArr[i]=newArr[i]+1;
        }
        
        if(newArr[0] == 0)
            newArr.insert(newArr.begin(), j);
        
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
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        int count=0;
        vector<int> newArr;
        
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=0; j<newArr.size(); j++)
            {
                if(arr[i]==newArr[j])
                {
                    count++;
                    break;
                }
            }
            
            if(count==0)
            {
                int x=arr[i];
                newArr.push_back(x);
                
            }
            count=0;
        }
        
        return newArr;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}

// } Driver Code Ends
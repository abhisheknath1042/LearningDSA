//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
     unordered_map<int,int>mp;
     for(int i=0;i<n;i++)
       mp[arr[i]] = i;
       
     int maxi = INT_MIN;
     for(int j=0;j<n;j++)
     {
       int dist = 0;
       auto itr = mp.find(arr[j]);
       dist = (itr->second)-j;
       if(maxi<dist)
           maxi = dist;
     }
     
     return maxi;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
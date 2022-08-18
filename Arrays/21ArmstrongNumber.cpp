//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int s,r,total,cube;
        total=0;
        s=n;
        while(s>0)
        {
            r=0;
            cube=0;
            r=s%10;
            s=s-r;
            s=s/10;
            cube=r*r*r;
            total= total + cube;
        }
        
        if(total==n)
            return "Yes";
        else
            return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
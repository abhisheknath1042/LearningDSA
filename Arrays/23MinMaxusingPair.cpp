//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    vector<long> resArr;
    pair<long long, long long> resPair;
    
    for(int i=0; i<n; i++)
    {
        resArr.push_back(a[i]);
    }
    
    sort(resArr.begin(), resArr.end());
    
    resPair.first=resArr.at(0);
    resPair.second=resArr.at(n-1);
    
    return resPair;
    
}
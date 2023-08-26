//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int maxi=-1;
    unordered_map<char,int> mpp;
    int i=0;
    int j=0;
     while (j < s.length()) {
        mpp[s[j]]++;
        
        while (mpp.size() > k){
            mpp[s[i]]--;
            if (mpp[s[i]] == 0){
                mpp.erase(s[i]);
            }
            i++;
        }
    
        if (mpp.size() == k){
            maxi = max(maxi, j - i + 1);
        }
        
        j++;
    }
    return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
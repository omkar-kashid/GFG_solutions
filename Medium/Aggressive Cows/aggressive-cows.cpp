//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
    bool isPossible(vector<int> &stalls, int dist, int cows){
        int countCows = 1;
        int lastCow = stalls[0];
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i]-lastCow>=dist){
                countCows++;
                lastCow = stalls[i];
            }
            
        }
        if(countCows>=cows) return 1;
        return 0;
    }
    
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int i = 1, j = stalls[n-1]-stalls[0];
        while(i<=j){
            int mid = (i+j)/2;
            if(isPossible(stalls, mid, k)){
                i = mid + 1;
            }
            else{
                j = mid -1;
            }
        }
        return j;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
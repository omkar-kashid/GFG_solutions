//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  bool isPossible(vector<int> &bloomDay, int day, int M, int K){
      int count = 0;
      int possibleBk = 0;
      for(int i=0; i<bloomDay.size(); i++){
          if(bloomDay[i]<=day){
              count++;
          }
          else{
              possibleBk += count/K;
              count = 0;
          }
      }
      possibleBk += count/K;
      if(possibleBk>=M) 
            return true;
      else
            return false;
  }
  
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
      int n = bloomDay.size();
      if(n<(long long)M*K) return -1;
      int mini = INT_MAX, maxi = INT_MIN;
      for(int i=0; i<bloomDay.size(); i++){
          maxi = max(maxi, bloomDay[i]);
          mini = min(mini, bloomDay[i]);
      }
      int i=mini, j=maxi;
      while(i<=j){
          int mid = (i+j)/2;
          if(isPossible(bloomDay, mid, M, K)){
              j = mid - 1;
          }
          else{
              i = mid + 1;
          }
      }
      return i;
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends
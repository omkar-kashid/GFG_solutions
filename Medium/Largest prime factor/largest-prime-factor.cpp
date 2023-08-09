//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 

    // bool isPrime(long long int n){
    //     for(int i=2; i*i<=n; i++){
    //         if(n%i==0) return 0;
    //     }
    //     return 1;
    // }

    long long int largestPrimeFactor(int N){
        // code here
        // long long int longest = 1;
        // long long int i;
        // for(i=2; i<=N/; i++){
        //     if(N%i==0 && isPrime(i)) longest=i;
        // }
        // return longest;
        
         long long int ans=0;
        for(long long int i=2;i<=sqrt(N);i++){
       while(N%i==0){
           ans=max(ans,i);
           N=N/i;
       }
    }
    if(N>1){
        ans=N;
    }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
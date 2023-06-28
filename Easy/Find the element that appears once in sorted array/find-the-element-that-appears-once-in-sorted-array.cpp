//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
       int i=1, j = n-2;
       if(arr[0]!=arr[1] || n==1) return arr[0];
       if(arr[n-1]!=arr[n-2]) return arr[n-1];
       while(i<=j){
           int mid = (i+j)/2;
           if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
               return arr[mid];
           }
           if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){
               i = mid + 1;
           }
           else{
               j = mid - 1;
           }
       }
       return -1;
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends
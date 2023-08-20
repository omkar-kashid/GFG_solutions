//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
	int firstOccurance(int arr[], int n, int x){
	    int first=-1;
	    int i=0, j=n-1;
	    while(i<=j){
	        int mid = (i+j)/2;
	        if(arr[mid]==x){
	            first = mid;
	            j = mid - 1;
	        }
	        else if(arr[mid]<x){
	            i = mid + 1;
	        }
	        else{
	            j = mid - 1;
	        }
	    }
	    return first;
	}
	
	int lastOccurance(int arr[], int n, int x){
	    int last=-1;
	    int i=0, j=n-1;
	    while(i<=j){
	        int mid = (i+j)/2;
	        if(arr[mid]==x){
	            last = mid;
	            i = mid + 1;
	        }
	        else if(arr[mid]<x){
	            i = mid + 1;
	        }
	        else{
	            j = mid - 1;
	        }
	    }
	    return last;
	}
		
	int count(int arr[], int n, int x) {
	    // code here
	    int lenght = 0;
	    int first = firstOccurance(arr,n, x);
	    int last = lastOccurance(arr,n,x);
	    if(first==-1) return 0;
	    return last-first+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
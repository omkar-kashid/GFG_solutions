//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int isPanagram(string S)
	{
	    // Your code goes here 
	    int str[256]={0};
	    for(int i=0; i<S.size(); i++){
	        str[S[i]] = 1;
	    }
	    int i='A', j='a';
	    while(str[i]==1 || str[j]==1){
	        if(i>'Z' || i>'z') break;
	        i++, j++;
	    }
	    if(i=='Z'+1 && j=='z'+1)
	        return 1;
	   return 0;
	}

};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		cout << ob.isPanagram(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
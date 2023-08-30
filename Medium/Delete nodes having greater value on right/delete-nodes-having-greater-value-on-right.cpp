//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    Node *reverse(Node* head){
        Node* prev=NULL;
        Node* curr = head;
        Node* nxt;
        while(curr!=NULL){
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        Node *rev = reverse(head);
        int maxi = 0;
        vector<int> sol;
        while(rev!=NULL){
            if(rev->data >=maxi){
                sol.push_back(rev->data);
                maxi = rev -> data;
            }
            rev = rev -> next;
        }
        Node *ans = new Node(sol[0]);
        Node *temp = ans;
        for(int i=1; i<sol.size(); i++){
            ans -> next = new Node(sol[i]);
            ans = ans -> next;
        }
        Node *finalans = reverse(temp);
        return finalans;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        Node *temp = head;
        Node *slow = head;
        Node *fast = head;
        if(head->next == NULL || head == NULL)
            return NULL;     
        while(slow && fast->next && fast->next->next)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next == NULL)
        {
            temp->next = slow->next;
            free(slow);
        }
        if(fast->next && fast->next->next == NULL)
        {
            temp = slow->next;
            slow->next = slow->next->next;
            free(temp);
        }
        return head;
        // Your Code Here
    }
};

//{ Driver Code Starts.



void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		Solution obj;
		head = obj.deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends
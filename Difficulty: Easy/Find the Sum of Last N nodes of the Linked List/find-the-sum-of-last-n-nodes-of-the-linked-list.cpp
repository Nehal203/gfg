//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
   int lengthLL(Node* head){
      Node* mover=head;
      int len=0;
      while(mover!=nullptr){
          mover=mover->next;
          len+=1;
      }
      return len;
}
int sumOfLastN_Nodes(struct Node* head, int n) {
      Node* mover=head;
      int len=lengthLL(head);
      int ans=0;
      int nodeCount=1;
      while(mover!=nullptr){
          if(nodeCount>len-n){
              ans+=mover->data;
              mover=mover->next;
          }
          else{
              mover=mover->next;
              nodeCount+=1;
          }
      }
      return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n;
        cin >> n;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.sumOfLastN_Nodes(head, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
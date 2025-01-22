//{ Driver Code Starts
// driver

import java.io.*;
import java.util.*;


// } Driver Code Ends
/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution {
    
    static Node reverse(Node node){
        Node pre = null, curr = node;
        
        while(curr != null){
            Node nxt = curr.next;
            curr.next = pre;
            pre = curr;
            curr = nxt;
        }
        return pre;
    }
    
    static Node addTwoLists(Node num1, Node num2) {
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        int carry = 0;
        Node head = new Node(-1);
        Node temp = head;
        
        Node t1 = num1, t2 = num2;
        
        while(t1 != null && t2 != null){
            int sum = t1.data + t2.data + carry;
            int value = sum % 10;
            carry = sum / 10;
            Node node = new Node(value);
            temp.next = node;
            temp = temp.next;
            t1 = t1.next;
            t2 = t2.next;
        }
        
        while(t1 != null){
            int sum = t1.data + carry;
            Node node = new Node(sum % 10);
            temp.next = node;
            temp = temp.next;
            carry = sum / 10;
            t1 = t1.next;
        }
        
        while(t2 != null){
            int sum = t2.data + carry;
            Node node = new Node(sum % 10);
            temp.next = node;
            temp = temp.next;
            carry = sum / 10;
            t2 = t2.next;
        }
        
        head = reverse(head.next);
        if(carry > 0) {
            Node node = new Node(carry);
            node.next = head;
            head = node;
        }
        
        while(head != null && head.data == 0) head = head.next;
        return head;
    }
}



//{ Driver Code Starts.

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

class GfG {

    static void printList(Node n) {
        while (n != null) {
            System.out.print(n.data + " ");
            n = n.next;
        }
        System.out.println();
    }

    public static void main(String[] args) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(read.readLine());
        while (T-- > 0) {

            String str[] = read.readLine().trim().split(" ");
            int n = str.length;

            Node num1 = new Node(Integer.parseInt(str[0]));
            Node tail = num1;
            for (int i = 1; i < n; i++) {
                int val = Integer.parseInt(str[i]);
                tail.next = new Node(val);
                tail = tail.next;
            }

            String str2[] = read.readLine().trim().split(" ");
            int m = str2.length;

            Node num2 = new Node(Integer.parseInt(str2[0]));
            tail = num2;
            for (int i = 1; i < m; i++) {

                tail.next = new Node(Integer.parseInt(str2[i]));
                tail = tail.next;
            }

            Solution g = new Solution();
            Node res = g.addTwoLists(num1, num2);
            printList(res);

            System.out.println("~");
        }
    }
}

// } Driver Code Ends
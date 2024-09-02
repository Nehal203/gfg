//{ Driver Code Starts
import java.util.*;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class LinkedList {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume newline character after t

        while (t-- > 0) {
            String input =
                scanner.nextLine(); // Read the entire line for the array elements
            Scanner lineScanner = new Scanner(input);
            Node head = null, tail = null;
            int x;

            // Building the linked list from input
            while (lineScanner.hasNextInt()) {
                x = lineScanner.nextInt();
                if (head == null) {
                    head = new Node(x);
                    tail = head;
                } else {
                    tail.next = new Node(x);
                    tail = tail.next;
                }
            }
            lineScanner.close();

            Solution ob = new Solution();
            ob.display(head);
            System.out.println();
        }
        scanner.close();
    }
}

// } Driver Code Ends


/* Node is defined as
class Node {
    int data;
    Node next;
    Node(int x) {
        data = x;
        next = null;
    }
}*/
/*
    Print elements of a linked list on console
    Head pointer input could be NULL as well for empty list
*/

class Solution {
    void display(Node head) {
        // add code here.
        while(head!=null){
            System.out.print(head.data+" ");
            head=head.next;
        }
    }
}

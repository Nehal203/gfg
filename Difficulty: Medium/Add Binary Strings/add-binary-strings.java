//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String a, b;
            a = sc.next();
            b = sc.next();
            Solution ob = new Solution();
            System.out.println(ob.addBinary(a, b));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public String addBinary(String s1, String s2) {
          StringBuilder S= new StringBuilder();
        
          int n=s1.length(),m=s2.length();
            int i=n-1,j=m-1;
            int carry=0;
          while(i>=0 && j>=0)
          {
             if(s1.charAt(i)=='1' && s2.charAt(j)=='1')
             {
               if(carry==0)
               {
                   S.append('0');
                   
               }
               else
               {
                   S.append('1');
               }
               carry=1;
             }
            else if(s1.charAt(i)=='0' && s2.charAt(j)=='0')
             {
                 if(carry==0)
               {
                   S.append('0');
                   
               }
               else
               {
                   S.append('1');
               } 
                carry=0;
             }
             else
             {
                  if(carry==0)
               {
                   S.append('1');
                   carry=0;
                   
               }
               else
               {
                   S.append('0');
                   carry=1;
               }
              
             }
           i--;
           j--;
          }
      while(i>=0)
      {
          if(s1.charAt(i)=='0')
          {
             if(carry==0)
               {
                   S.append('0');
                   
               }
               else
               {
                   S.append('1');
               }   
               carry=0;
          }
          else
          {
           if(carry==0)
               {
                   S.append('1');
                  
                   
               }
               else
               {
                   S.append('0');
                   carry=1;
               }      
          }
         i--;
      }
      while(j>=0)
      {
          if(s2.charAt(j)=='0')
          {
             if(carry==0)
               {
                   S.append('0');
                   
               }
               else
               {
                   S.append('1');
               }   
               carry=0;
          }
          else
          {
           if(carry==0)
               {
                   S.append('1');
                  
                   
               }
               else
               {
                   S.append('0');
                   carry=1;
               }      
          }
         j--;
     }
     if(carry==1)
     {
          S.append('1');
     }
    
      for(int k=S.length()-1;k>=0;k--)
      {
          if(S.charAt(k)=='1')
         {
             break;
         }
         else
         {
             S.deleteCharAt(k);
         }
      }
      String a=S.reverse().toString();
      
      return a;
    }
}
/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int min(int[]A,int n){
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(A[i]<mini){
                mini=A[i];
            }
        }
        return mini;
    }
    public static int max(int[]A,int n){
        int maxi=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(A[i]>maxi){
                maxi=A[i];
            }
        }
        return maxi;
    }
	public static void main (String[] args) {
		//code
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-- >0){
		int n=sc.nextInt();
		int A[]=new int[n];
		for(int i=0;i<n;i++){
		    A[i]=sc.nextInt();
		}
		System.out.println(max(A,n)+" "+min(A,n));
		}
	}
}
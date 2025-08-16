class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int n=arr.length;
        if(n<2){
            return -1;
        }
        int sec=Integer.MIN_VALUE;
        int max=Integer.MIN_VALUE;
        
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                sec=max;
                max=arr[i];
            }
            else if(arr[i]>sec && arr[i]!=max){
                sec=arr[i];
            }
        }
        return (sec==Integer.MIN_VALUE) ? -1:sec;
    }
}
import java.util.Scanner;
class sort1{
    public int [] quicksort(int []arr,int low,int high){
        if(low<high){
            int pIndex=partition(arr,low,high);
            quicksort(arr,low,pIndex-1);
            quicksort(arr,pIndex+1,high);
        }
        return arr;
    }
    public int partition(int []arr,int low,int high){
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            while(arr[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        int temp1=arr[low];
        arr[low]=arr[j];
        arr[j]=temp1;
        return j;
    }


}



public class quicksort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of an array:");
        int n = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.print("\nEnter the " + i + " index value of an array:");
            arr[i] = sc.nextInt();
        }
        System.out.print(" array is: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }

        sort1 st = new sort1();
        int[] arr1=st.quicksort(arr, 0,n-1);

        System.out.print("\nsorted array :");
        for (int i = 0; i < arr1.length; i++) {
            System.out.print(arr1[i] + " ");
        }
    }
}

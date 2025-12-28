import java.util.Scanner;

class sorted {
    public void sorting(int[] arr, int n) {
        for(int i=0;i<n;i++) {
            int j = i - 1;
            int key = arr[i];
            while (j >= 0 && key < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }

        System.out.print("\nSorted array is: ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }

    }
}

public class insertionSort {
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of an array:");
        int n=sc.nextInt();

        int []arr=new int[n];
        for(int i=0 ; i<arr.length ; i++){
            System.out.print("\nEnter the "+ i +" index value of an array:");
            arr[i]=sc.nextInt();
        }
        System.out.print(" array is: ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }

        sorted st=new sorted();
        st.sorting(arr,n);



    }

}


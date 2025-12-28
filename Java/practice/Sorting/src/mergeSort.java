import java.util.*;
import java.util.ArrayList;

class sorts {
    public int[] mergesort(int[] arr, int low, int high) {
        if (low >= high) {
            return arr;
        }
        int mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
        return arr;



    }

    public void merge(int[] arr, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        ArrayList<Integer> numbers = new ArrayList<Integer>();


        while (left <= mid && right <= high) {
            if (arr[left] < arr[right]) {
                numbers.add(arr[left]);
                left++;
            }
            else {
                numbers.add(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            numbers.add(arr[left]);
            left++;
        }
        while (right <= high) {
            numbers.add(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            arr[i] = numbers.get(i - low);
        }

    }
}

public class mergeSort {
    public static void main(String []args) {
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

        sorts st = new sorts();
        int[] arr1=st.mergesort(arr, 0,n-1);

        System.out.print("\nsorted array :");
        for (int i = 0; i < arr1.length; i++) {
            System.out.print(arr1[i] + " ");
        }
    }
}


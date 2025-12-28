
import java.util.* ;
class sort{

    public void sorting(int []arr,int n){
        for(int i=0;i<=n-2;i++){
            int min=i;
            for(int j=i+1;j<=n-1;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        System.out.print("\nSorted array is: ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }

}

public class selectionSort {
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

        sort st=new sort();
        st.sorting(arr,n);



    }

}

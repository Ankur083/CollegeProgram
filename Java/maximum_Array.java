import java.util.Scanner;
public class maximum_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a size of an array:");
        int n=sc.nextInt();
        int numbers[]=new int[n];
        int temp;
        System.out.println("enter the value of array:");
        for(int i=0;i<n;i++){
            numbers[i]=sc.nextInt();
        }
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<n;j++){
               if( numbers[i]<numbers[j]){
                    temp=numbers[i];
                    numbers[i]=numbers[j];
                    numbers[j]=temp;
                }
               
            }
        }
        System.out.print("largest number of an array is:");
        System.out.println(numbers[0]);
      
    }


    
}

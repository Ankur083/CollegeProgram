import java.util.Scanner;

public class program3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.print("\nEnter the number of string:");
        int n=sc.nextInt();
        sc.nextLine();

        String [] names=new String[n];
        System.out.println("\nEnter the String:");

        for(int i=0;i<n;i++){
            names[i]=sc.nextLine();
        }

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(names[j].compareTo(names[j+1])>0){
                    String temp=names[j];
                    names[j]=names[j+1];
                    names[j+1]=temp;
                }
            }
        }
        System.out.println("Enter the String After Sorting:");
        for(int i=0;i<n;i++){
            System.out.println(names[i]);
        }


    }
}

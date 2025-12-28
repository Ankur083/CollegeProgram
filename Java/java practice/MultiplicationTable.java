import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the table of number:");
        int num = sc.nextInt();
        int Table;
        System.out.println("Table of a number :"+num);
        for(int i=1;i<=10;i++){
            Table = num*i;
            System.out.println(Table);

        }

        
    }
    
}

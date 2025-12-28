import java.util.Scanner;

public class Q2 {
    public static void main(String[]args){
        System.out.print("enter a integer:");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int digit ,sum=0;

        for(int i=1;num>0;){
            digit=num % 10;
            sum = sum + digit;
            num=num/10;
        }
        System.out.println("sum of digit of integer:"+sum);

    }
    
}

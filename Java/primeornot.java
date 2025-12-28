import java.util.Scanner;
public class primeornot {
    public static void main(String[] args) {
        Scanner sc =new Scanner (System.in);
        System.out.println("enter a number to check a number is prime or not:");
        int num= sc.nextInt();
        int flag=1;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=0;
            }
        }
        if(flag==1){
            System.out.println("Number is prime ");
        }
        else{
            System.out.println("Number is not prime");
        }
        
    }
    
}

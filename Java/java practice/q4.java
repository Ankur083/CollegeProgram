import java.util.Scanner;

public class q4 {
    public static void main(String[]args){
        Scanner sc =new Scanner(System.in);
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        int num=0,d=0,r;
        if(n1>n2){
            num=n1;
            d=n2;
        }
        else if(n2>n1){
            num=n2;
            d=n1;
        }
        else{
            System.out.println("geatest common divisor:"+n1);
        }
        while(d!=0){
            r=num % d;
            num = d;
            d = r;


        }
        System.out.println("greatest common divisor:"+num);
    }
    
}

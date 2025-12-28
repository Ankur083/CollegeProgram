import java.util.Scanner;
public class q3 {
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the first number:");
        int n1=sc.nextInt();

        System.out.print("enter the second number:");
        int n2=sc.nextInt();

        int num=0,d=0,r;

        if(n1>n2){
            num=n2;
            d=n1;
        }
        else if(n2>n1){
            num=n1;
            d=n2;
        }
        else{
            System.out.println("least common multiple:"+n1);
        }
        int i=2;
        while(true){
            r = num * i;
          if(r % d == 0){
            System.out.println("Least commmon multiple is:"+r);
            break;
            }
          else{
            r=num;
            i++;
            }
        }
    }
}

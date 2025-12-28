import java.util.*;

public class q5 {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int sum=0,n1,count=0,num1=num;
        for(;num>0;){
            num=num/10;
            count++;
        }
        for(int i=1;num1>0;i++){
            n1=num1%10;
            num1=num1/10;
            sum=sum + (int)(n1 * Math.pow(10,count-i));

        }
        System.out.println(sum);

    }

    
}

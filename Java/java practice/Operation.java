import java.util.Scanner;

class Calculator{
    int add(int n1,int n2){
        int r = n1 + n2 ;
        return r;
    }

    int sub(int n1,int n2){
        int r;
        if(n1>n2){
            r = n1 - n2 ;
        }
        else{
            r = n2 - n1 ;
        }
        return r;
    }

    int mul(int n1,int n2){
        int r = n1 * n2 ;
        return r ;

    }

    int div(int n1,int n2){
        int r = n1 / n2 ;
        return r;
    }
    // Calculator(int n1,int n2){
    //     this.num1=n1;
    //     this.num2=n2;
    // }
    // Calculator(){
    //    int num1=5;
    //    int num2=6;
    // }
    // Calculator(int num){
    //     int num1 = num;
    //     int num2 = num;
    // }

     
}

public class Operation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("\nWelcome to my calculator\n");

        System.out.print("Enter a first number:");
        int num1 = sc.nextInt();

        System.out.print("Enter a second number:");
        int num2 = sc.nextInt();

        Calculator calc = new Calculator();
        // Calculator calc1 = new Calculator();

        System.out.println("\nWhich operation you want:\n");
        System.out.println("addition press:1");
        System.out.println("Subtraction press:2");
        System.out.println("Multiplication press:3");
        System.out.println("Divison press:4\n");
        System.out.print("Enter a choice:");
           
        int choice = sc.nextInt();
        int result;
        if(choice == 1){
            result = calc.add(num1,num2);
            System.out.println("Sum of two number is:"+result);
        }
        else if(choice == 2){
            result = calc.sub(num1,num2);
            System.out.println("Subtract of two number is:"+result);
        }
        else if(choice == 3){
            result = calc.mul(num1,num2);
            System.out.println("Multiply of two number is :"+result);
        }
        else if(choice==4){
            result = calc.div(num1,num2);
            System.out.println("Divide of two number is :"+result);

        }
        else{
            System.out.println("you enter invalid input,Thank you");
        }
        
    }
    
}

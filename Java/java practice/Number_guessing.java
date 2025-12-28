import java.util.Scanner;
public class Number_guessing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number;
        int num=8;
        do{
            System.out.println("Enter a number:");
            number = sc.nextInt();
        }
        while(!(num==number));
        System.out.println("you won the game");
        
    }
    
}

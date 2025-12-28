import java.util.Scanner;
public class q {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String password;
        do{
            System.out.println("Enter a password:");
            password=sc.nextLine();
        }
        while(!validpassword(password));
        System.out.println("thank you entered correct password ");
    }

    public static boolean validpassword(String password){
        return password.length()>6;
    }
    
}

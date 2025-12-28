import java.util.Scanner;
class Palindrome{
    public boolean checkPalindrome(String str,int i,int j){
        if(i>=j){
            return true;
        }
        else if(str.charAt(i)!=str.charAt(j)){
            return false;
        }
        else{
            return checkPalindrome(str,i+1,j-1);
        }
    }
}
public class program1 {
    public static void main(String[] args) {

        System.out.println("Enter a String:");

        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();

        Palindrome pl=new Palindrome();

        boolean k=pl.checkPalindrome(str,0,str.length()-1);

        if(k){
            System.out.println("String is a palindrome");
        }
        else{
            System.out.println("String is not a palindrome");
        }

    }
}

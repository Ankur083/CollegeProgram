import java.util.Scanner;
class string{
    public String replaceCharacter(String str,char k){
        char j=0;
        String str1=str.replace(k,j);
        return str1;

    }
}
public class program2 {
    public static void main(String[] args) {
        System.out.println("Enter a String:");
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();

        System.out.println("Enter a character which we delete:");
        char k=sc.next().charAt(0);

        string st=new string();
        String str1=st.replaceCharacter(str,k);

        System.out.println("new String :"+str1);


    }
}

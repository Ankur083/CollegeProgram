import java.io.*;
import java.net.*;
import java.util.Scanner;

public class MultiClient {
    public static void main(String[] args) throws Exception {

        Socket socket = new Socket("localhost", 5001);
        PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

        int num;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("Enter a number : ");
            num = sc.nextInt();

            out.println(num);

            try{
                int ans = Integer.parseInt(in.readLine());
                System.out.println("factorial of " + num + " is "+ ans);
            }
            catch(Exception e) {
                System.out.println("you eneted -1");
                break;
            }

        }while(true);
        socket.close();


    }
}
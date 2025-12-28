import java.io.*;
import java.net.*;

public class client {
    public static void main(String[] args) throws IOException {
        Socket so=new Socket("localhost",12345);
        PrintWriter pr=new PrintWriter(so.getOutputStream(),true);
        BufferedReader br=new BufferedReader(new InputStreamReader(so.getInputStream()));

        pr.println("Hello");

        int x=5;
        pr.println(x);

        int n=Integer.parseInt(br.readLine());
        System.out.println(n);
    }
}

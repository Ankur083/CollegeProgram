
import java.io.*;
import java.net.*;

public class server {
    public static void main(String[]args) throws IOException {
        ServerSocket ss=new ServerSocket(12345);
        Socket so=ss.accept();
        System.out.println("connected");
        BufferedReader br=new BufferedReader(new InputStreamReader(so.getInputStream()));
        PrintWriter pr=new PrintWriter(so.getOutputStream(),true);

        String str=br.readLine();
        System.out.println(str);

        String Str=br.readLine();
        int n=Integer.parseInt(Str);
        System.out.println(n);

        pr.println(n);
    }
}

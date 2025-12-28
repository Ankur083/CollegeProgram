import java.io.*;
import java.net.*;

public class Server1 extends Thread {
    Socket st;

    public Server1(Socket st) {
        this.st = st;
    }

    public void run() {
        try {
            BufferedReader in = new BufferedReader(new InputStreamReader(st.getInputStream()));
            PrintWriter out = new PrintWriter(st.getOutputStream(), true);
            int num;

            do {
                num = Integer.parseInt(in.readLine());

                if (num < 0){
                    out.println("Error");
                    break;
                }

                int fact = 1;

                for (int i = 1; i <= num; i++)
                    fact *= i;

                out.println(fact);
            } while (true);

            System.out.println("Client Disconnected...");
            st.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) throws Exception {
        ServerSocket serverSocket = new ServerSocket(5001);
        Socket socket;
        int cnt = 1;

        System.out.println("Server is waiting for client...");

        do {
            socket = serverSocket.accept();
            System.out.println("Client connected : " + cnt++);

            Server1 s1 = new Server1(socket);
            s1.start();
        } while (true);
    }
}
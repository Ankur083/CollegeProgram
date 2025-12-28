import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class DML {
    public static void main(String[] args) throws Exception {
        String url="jdbc:mysql://localhost:3306:/Ankur";
        String username="root";
        String password="Ankur@123#";
        Connection con= DriverManager.getConnection(url,username,password);
        Statement st = con.createStatement();
        ResultSet rs= st.executeQuery("Select * from student1");

    }
}

import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.sql.Connection;

public class Demo {
    public static void main(String[] args)  throws Exception{
        String sql="select Name from Student where Rno=6";

        String url="jdbc:Mysql://localhost:3306/Ankur";
        String username="root";
        String password="Ankur@123#";
        Connection con= DriverManager.getConnection(url,username,password);
        Statement st = con.createStatement();
        ResultSet rs= st.executeQuery(sql);

        rs.next();
        String name =rs.getString(1);
        System.out.println(name);
        con.close();
    }
}

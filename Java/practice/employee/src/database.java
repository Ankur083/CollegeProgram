import java.sql.*;
public class database {
    public static void main(String[] args)throws Exception {

        String url = "jdbc:mysql://localhost:3306/Ankur";
        String username="root";
        String password="Ankur@123#";
        Connection con=DriverManager.getConnection(url,username,password);
        Statement st = con.createStatement();
        ResultSet rs= st.executeQuery("Select * from student1");

        while(rs.next()){
            System.out.print(rs.getInt("Rno")+" ");
            System.out.print(rs.getString("Name")+" ");
            System.out.print(rs.getString("City")+" ");
            System.out.println(rs.getInt(4)+" ");
        }
    }
}

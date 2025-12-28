
import java.awt.*;
import java.sql.*;
import javax.swing.*;

public class StudentDBApp extends JFrame {
    JTextField idField, nameField;
    JButton addBtn, deleteBtn, updateBtn, retrieveBtn;
    Connection conn;

    public StudentDBApp() {
        setTitle("Student Database App");
        setSize(400, 250);
        setLayout(new GridLayout(5, 2, 10, 10));

        add(new JLabel("Student ID:"));
        idField = new JTextField();
        add(idField);

        add(new JLabel("Student Name:"));
        nameField = new JTextField();
        add(nameField);

        addBtn = new JButton("Add");
        deleteBtn = new JButton("Delete");
        updateBtn = new JButton("Update");
        retrieveBtn = new JButton("Retrieve");

        add(addBtn);
        add(deleteBtn);
        add(updateBtn);
        add(retrieveBtn);

        try {
            // Load JDBC driver
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/studentdb", "root", "Aman2003");
        } catch (Exception e) {
            e.printStackTrace();
        }

        addBtn.addActionListener(e -> {
            try {
                PreparedStatement ps = conn.prepareStatement("INSERT INTO students VALUES (?, ?)");
                ps.setInt(1, Integer.parseInt(idField.getText()));
                ps.setString(2, nameField.getText());
                ps.executeUpdate();
                JOptionPane.showMessageDialog(this, "Record added");
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        });

        deleteBtn.addActionListener(e -> {
            try {
                PreparedStatement ps = conn.prepareStatement("DELETE FROM students WHERE id = ?");
                ps.setInt(1, Integer.parseInt(idField.getText()));
                ps.executeUpdate();
                JOptionPane.showMessageDialog(this, "Record deleted");
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        });

        updateBtn.addActionListener(e -> {
            try {
                PreparedStatement ps = conn.prepareStatement("UPDATE students SET name=? WHERE id=?");
                ps.setString(1, nameField.getText());
                ps.setInt(2, Integer.parseInt(idField.getText()));
                ps.executeUpdate();
                JOptionPane.showMessageDialog(this, "Record updated");
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        });

        retrieveBtn.addActionListener(e -> {
            try {
                PreparedStatement ps = conn.prepareStatement("SELECT name FROM students WHERE id = ?");
                ps.setInt(1, Integer.parseInt(idField.getText()));
                ResultSet rs = ps.executeQuery();
                if (rs.next()) {
                    nameField.setText(rs.getString("name"));
                } else {
                    JOptionPane.showMessageDialog(this, "Record not found");
                }
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        });

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public static void main(String[] args) {
        new StudentDBApp();
    }
}

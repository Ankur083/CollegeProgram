import javax.swing.*;
import java.awt.event.*;

public class screen extends JFrame {
    JLabel l1,l2,l4,l5;
    JTextField t1,t2;
    JButton B1;


    public screen(){}
    public screen(String s){
        super(s);
    }

    public void setComponents() {

        l1 = new JLabel("Addition of two number");
        l2 = new JLabel("First number");
        t1 = new JTextField();
        l4 = new JLabel("Second number");
        l5=new JLabel();
        t2 = new JTextField();
        B1 = new JButton("Add");


        add(l1);
        add(l2);
        add(t1);
        add(l4);
        add(t2);
        add(B1);
        add(l5);


        setLayout(null);
        l1.setBounds(50, 50, 200, 20);
        l2.setBounds(50, 80, 100, 20);
        t1.setBounds(150, 80, 100, 20);
        l4.setBounds(50, 130, 100, 20);
        t2.setBounds(150, 130, 100, 20);
        B1.setBounds(80,180,100,20);
        l5.setBounds(80,230,100,20);
        B1.addActionListener(new Handler());

    }

    class Handler implements ActionListener{
        public void actionPerformed(ActionEvent e){
            int a=Integer.parseInt(t1.getText());
            int b=Integer.parseInt(t2.getText());
            int s=a+b;
            l5.setText("Result is"+s);
        }

    }
    public static void main(String[] args){
        screen jf=new screen("Swing Example");
        jf.setComponents();
        jf.setSize(300,300);

        jf.setVisible(true);

        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

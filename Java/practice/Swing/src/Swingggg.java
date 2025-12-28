import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

public class Swingggg extends JFrame implements ActionListener   {
    JLabel l1,l2,l3;
    JTextField t1,t2;
    JButton b1,b2;

    public Swingggg() {
        l1=new JLabel("First number");
        l2=new JLabel("Second number");
        l3=new JLabel();
        t1=new JTextField();
        t2=new JTextField();
        b1=new JButton("Add");
        b2=new JButton("Subtract");

        setLayout(null);
        setSize(400,400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        l1.setBounds(50,80,200,20);
        l2.setBounds(50,110,200,20);
        t1.setBounds(150,80,180,20);
        t2.setBounds(150,110,180,20);
        b1.setBounds(90,150,120,20);
        b2.setBounds(90,180,120,20);

        l3.setBounds(120,210,120,20);

        b1.addActionListener(this);
        b2.addActionListener(this);

        add(l1);
        add(l2);
        add(l3);
        add(t1);
        add(t2);
        add(b1);
        add(b2);
}

    @Override
    public void actionPerformed(ActionEvent e) {
        int a=Integer.parseInt(t1.getText());
        int b=Integer.parseInt(t2.getText());
        int res=0;
        if(e.getSource()==b1){
            res=a+b;
        }
        else if(e.getSource()==b2){
            res=a-b;
        }
        l3.setText("Ans is"+res);

    }

    public static void main(String[] args){
        new Swingggg();

    }
}
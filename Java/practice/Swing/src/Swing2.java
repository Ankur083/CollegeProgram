import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Swing2 extends JFrame implements ActionListener{
    JButton b1,b2,b3;

    public Swing2(){
        setLayout(new GridLayout(3,1));


        b1=new JButton("Red");
        b2=new JButton("Yellow");
        b3=new JButton("Blue");



        add(b1,0);
        add(b2,1);
        add(b3,2);

        setSize(400,400);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);

        b1.setOpaque(true);
        b1.setBorderPainted(false);

        b2.setOpaque(true);
        b2.setBorderPainted(false);

        b3.setOpaque(true);
        b3.setBorderPainted(false);



    }

    @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==b1){
            b1.setBackground(Color.RED);
        }
        else if(e.getSource()==b2){
            b2.setBackground(Color.yellow);
        }
        else{
            b3.setBackground(Color.BLUE);
        }
    }


    public static void main(String[] args) {
        new Swing2();
    }
}

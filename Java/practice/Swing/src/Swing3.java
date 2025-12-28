import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Swing3 extends JFrame implements ActionListener {
    JComboBox<String> monthBox;
    JLabel resultLabel;

    public Swing3() {
        resultLabel = new JLabel("Select a month to see days");

        String[] months = {
                "January", "February", "March", "April", "May", "June",
                "July", "August", "September", "October", "November", "December"
        };

        monthBox = new JComboBox<>(months);

        add(monthBox);
        add(resultLabel);

        setTitle("Days in a Month");
        setSize(300, 150);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        monthBox.addActionListener(this);
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String selectedMonth = (String) monthBox.getSelectedItem();
        int days;

        switch (selectedMonth) {
            case "April": case "June": case "September": case "November":
                days = 30;
                break;
            case "February":
                days = 28; // Leap year not handled for simplicity
                break;
            default:
                days = 31;
        }

        resultLabel.setText(selectedMonth + " has " + days + " days.");
    }

    public static void main(String[] args) {
        new Swing3();
    }
}


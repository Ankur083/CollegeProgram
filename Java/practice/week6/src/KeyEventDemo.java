import java.awt.*;
import java.awt.event.*;

public class KeyEventDemo extends Frame {
    TextField messageField;

    public KeyEventDemo() {
        setSize(400, 300);
        setTitle("Key Event Demo");
        setLayout(null);

        messageField = new TextField();
        messageField.setBounds(100, 100, 200, 30);
        // messageField.setEditable(false);

        add(messageField);
        addKeyListener(new MyKeyAdapter());

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });

        setVisible(true);
        requestFocusInWindow();

    }

    class MyKeyAdapter extends KeyAdapter {
        public void keyPressed(KeyEvent ke) {
            messageField.setText("Key Pressed: " + ke.getKeyChar());
        }

        public void keyReleased(KeyEvent ke) {
            messageField.setText("Key Released: " + ke.getKeyChar());
        }

        public void keyTyped(KeyEvent ke) {
            messageField.setText("Key Typed: " + ke.getKeyChar());
        }
    }

    public static void main(String[] args) {
        new KeyEventDemo();
    }
}

import javax.swing.*;
import java.awt.Color;

public class Swing_Module {
    public static void main(String[] args) {
        
        // 1.Basic of JFrame class
        JFrame fm = new JFrame();
        
        fm.setVisible(true); // set Frame Visibility.
        fm.setSize(420,420); // set Frame Size.
        fm.setTitle("RAUNAK GUPTA"); // set Frame Title.

        fm.setResizable(false); // Disabling the frame resizable option.
        fm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // set Frame close option.

        ImageIcon img = new ImageIcon("logo.png"); // Creating ImageIcon class object to set image.
        fm.setIconImage(img.getImage()); // Setting up the image using setIconImage() & getImage() functions.

        fm.getContentPane().setBackground(new Color(204, 197, 185)); // setting up the color.


        // 2.Basic of JLabel class.
        // 2.1.Adding Text in GUI Application.
        
        // ImageIcon img2 = new ImageIcon("logo.png"); // Creating ImageIcon class object to set image.
        JLabel fl = new JLabel();
        fl.setText("Hello, Raunak Gupta");
        fl.setIcon(img);
        fm.add(fl);
        fm.revalidate();
        // fm.repaint();




        }
}

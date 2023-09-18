import javax.swing.*;
import java.awt.*;

// Create a class named Example2 that extends the JFrame class
public class Example2 extends JFrame {

    // Constructor for the Example2 class
    Example2() {
        // Set up the basic properties of the JFrame
        
        // Make the JFrame visible
        setVisible(true);
        
        // Set the size of the JFrame to 420x420 pixels
        setSize(420, 420);
        
        // Set the title of the JFrame to "Hello"
        setTitle("Hello");
        
        // Define what happens when the JFrame is closed
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        // Make the JFrame non-resizable
        setResizable(false);

        // Create an ImageIcon from a file named "logo.png"
        ImageIcon img = new ImageIcon("logo.png");

        // Set the icon image of the JFrame
        setIconImage(img.getImage());

        // Create a JLabel named fl
        JLabel fl = new JLabel();
        
        // Create another JLabel named fl2
        JLabel fl2 = new JLabel();
        
        // Set the text for fl to "Hello there"
        fl.setText("Hello there");
        
        // Set the text for fl2 to "Honey"
        fl2.setText("Honey");
        
        // Add fl to the JFrame
        add(fl);
        
        // Set the icon for fl to the previously created ImageIcon
        fl.setIcon(img);
        
        // Revalidate the JFrame to apply changes
        revalidate();
        
        // Add fl2 to the JFrame
        add(fl2);

        // Set the horizontal text position of fl2 to the center
        fl2.setHorizontalTextPosition(JLabel.CENTER);
        
        // Set the vertical text position of fl2 to the top
        fl2.setVerticalTextPosition(JLabel.TOP);
        
        // Set the vertical alignment of fl2 to the center
        fl2.setVerticalAlignment(JLabel.CENTER);
        
        // Set the horizontal alignment of fl2 to the center
        fl2.setHorizontalAlignment(JLabel.CENTER);

        // Set the horizontal text position of fl to the center
        fl.setHorizontalTextPosition(JLabel.CENTER);
        
        // Set the vertical text position of fl to the top
        fl.setVerticalTextPosition(JLabel.TOP);
        
        // Set the vertical alignment of fl to the top
        fl.setVerticalAlignment(JLabel.TOP);
        
        // Set the horizontal alignment of fl to the center
        fl.setHorizontalAlignment(JLabel.CENTER);
        
        // Set the font of fl to "Segoe UI", bold, and size 20
        fl.setFont(new Font("Segoe UI", Font.BOLD, 20));
        
        // Set the font of fl2 to "Segoe UI", italic, and size 30
        fl2.setFont(new Font("Segoe UI", Font.ITALIC, 30));
    }

    // Main method to create an instance of Example2
    public static void main(String[] args) {
        // Create an instance of Example2 (the GUI)
        Example2 gui = new Example2();
    }
}

import java.util.Scanner;
import java.util.Random;
import java.io.File;

public class SignIn {
    Scanner sc = new Scanner(System.in);

    // Function to make directory in the beginning of the program.
    public void MakeDir() {
        File dir = new File("User's Data");
        try {
            dir.mkdir();
        } catch (Exception e) {
            e.toString();
        }
    }
    // importing Random Module and generating User credential file.
    Random rd = new Random();
    int n = rd.nextInt(100);
    File fl = new File("User's Data\\User" + n + ".txt");


    // Method to get Credential from user
    public void GetDetails() {
        System.out.print("\033[H\033[2J");
        String gmail, username, password;
        
        System.out.println("Enter Account Details");
        System.out.print("Gmail: ");
        gmail = sc.next();

        System.out.print("User Name: ");
        username = sc.nextLine();
        sc.nextLine();

        System.out.print("Password: ");
        password = sc.next();
        try {
            fl.createNewFile();
        } catch (Exception e) {
            e.toString();
        }

    }

    public static void main(String args[]) {

    }
}
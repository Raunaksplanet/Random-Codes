import java.util.Scanner;

import javax.sound.midi.SysexMessage;

import java.util.Random;
import java.io.File;

public class SignIn {
    Scanner sc = new Scanner(System.in);
    Functions fc = new Functions();

    // importing Random Module for generating User credential file.
    Random rd = new Random();
    int n = rd.nextInt(100);
    File fl = new File("User's Data\\User" + n + ".txt");

    // Method to get Credential from user
    public void GetDetails() {
        String gmail, username, password;

        System.out.println("Enter Account Details");
        System.out.print("Gmail: ");
        gmail = sc.nextLine();
        gmail = gmail.toLowerCase();
        // Checking if Email is valid or not
        if (fc.CheckMail(gmail) == true) {
            System.out.print("User Name: ");
            username = sc.nextLine();
            

            // Checking if password is strong or not.
            System.out.print("Password: ");
            password = sc.next();
            if (fc.CheckPass(password) == 11) {
                do{
                    System.out.print("\033[H\033[2J");
                    System.out.println("Password must be at least 8 characters long.");
                    System.out.println("\tEnter Account Details");
                    System.out.println("Gmail: " + gmail);
                    System.out.println("User Name: " + username);
                    System.out.print("Password: ");
                    password = sc.next();
                    
                }while(fc.CheckPass(password) != 10);
            }

        } else if (fc.CheckMail(gmail) == false) {
            System.out.print("\033[H\033[2J");
            System.out.println("\tInvalid Email");
            GetDetails();
        }

        // Creating user's credential files.
        try {
            fl.createNewFile();
        } catch (Exception e) {
            e.toString();
        }

    }

    public static void main(String args[]) {

    }
}
import java.util.Scanner;
import java.io.File;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class SignIn {
    Scanner sc = new Scanner(System.in);
    Functions fc = new Functions();
    String gmail, username, password, directoryPath;

    // Method to get Credential from user
    public void GetDetails() {
        System.out.println("Enter Account Details");
        System.out.print("Gmail: ");
        gmail = sc.nextLine();
        gmail = gmail.toLowerCase();

        // Checking if Email is valid or not
        if (fc.CheckMail(gmail)) {
            System.out.print("User Name: ");
            username = sc.nextLine();

            // Checking if password is strong or not.
            System.out.print("Password: ");
            password = sc.next();
            if (fc.CheckPass(password) == 11) {
                do {
                    System.out.print("\033[H\033[2J");
                    System.out.println("Password must be at least 8 characters long.");
                    System.out.println("\tEnter Account Details");
                    System.out.println("Gmail: " + gmail);
                    System.out.println("User Name: " + username);
                    System.out.print("Password: ");
                    password = sc.next();

                } while (fc.CheckPass(password) != 10);
            }
        } else {
            System.out.print("\033[H\033[2J");
            System.out.println("\tInvalid Email");
            GetDetails();
        }

        // Check if the email and password combination exists in any .txt file in the directory
        if (checkCredentialsExistInDirectory(gmail, password, "User's Data")) {
            System.out.println("Logged in successfully!");
        } else {
            System.out.println("Invalid email or password.");
        }
    }

    // Method to check if email and password combination exists in any .txt file in the directory
    public boolean checkCredentialsExistInDirectory(String email, String password, String directoryPath) {
        File directory = new File(directoryPath);
        File[] files = directory.listFiles((dir, name) -> name.toLowerCase().endsWith(".txt"));

        if (files != null) {
            for (File file : files) {
                if (checkCredentialsExist(email, password, file.getAbsolutePath())) {
                    return true; // Found a match in one of the files
                }
            }
        }

        return false; // No matching email and password found in any file
    }

    // Method to check if email and password combination exists in a specific file
    public boolean checkCredentialsExist(String email, String password, String fileName) {
        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = reader.readLine()) != null) {
                // Split the line into email and password using a delimiter (e.g., comma)
                String[] parts = line.split(",");
                if (parts.length == 2 && parts[0].equals(email) && parts[1].equals(password)) {
                    return true; // Found a match
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return false; // No matching email and password found in the file
    }

    public static void main(String[] args) {
        
    }
}

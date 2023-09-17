import java.util.Scanner;
import java.io.File;
import java.util.Random;

public class demmoo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rd = new Random();

        System.out.println("\t\tJava Login & SignUp Project\n");
        System.out.println("1.Create New Account(SignUp)");
        System.out.println("2.Login to Existing Account");
        System.out.println("3.Exit to Program");
        System.out.print("Choose Option: ");
        int i = sc.nextInt();
        sc.nextLine();

        if (i == 1) {

            // ANSI escape code to clear the screen.
            System.out.print("\033[H\033[2J");
            System.out.println("\t\tCreating New Account");

            System.out.print("Enter Gmail: ");
            String gmail = sc.nextLine();

            System.out.print("Enter User Name: ");
            String name = sc.nextLine();

            System.out.print("Enter Password: ");
            String pass = sc.nextLine();

            int n = rd.nextInt(1000);
            String Details = "User" + n++;
            File file = new File(Details);

            try {
                if (file.createNewFile()) {
                    System.out.println("Account Created");
                } else {
                    System.out.println("'" + gmail + "'" + " Already used");
                }
            } catch (Exception e) {
                System.err.println("An error occurred while creating the Account " +  e.getMessage());
            }




























        } else if (i == 2) {

        }else if(i == 3){
            System.exit(0);
        } else {
            System.out.print("\033[H\033[2J");
            System.out.println("Wrong Input, Try Again\n");
            main(args);
        }

    }
}

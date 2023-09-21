import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        // Making object of SignIn/SignUp & Scanner class 
        Scanner sc = new Scanner(System.in);
        SignIn si = new SignIn();
        SignUp su = new SignUp();

        // Generating directory to store users credential.
        si.MakeDir();

        System.out.println("\tJava SignUp/SignIn System");
        System.out.println("1.SignUp\n2.SignIn\n3.Exit");
        System.out.print("Select Option: ");
        int n = sc.nextInt();

        if (n == 1) {
            si.GetDetails();
        } else if (n == 2) {

        } else if (n == 3) {
            System.exit(0);
        } else {
            System.out.print("\033[H\033[2J");
            System.out.println("\t\tWrong Input");
            main(args);
        }

    }
}
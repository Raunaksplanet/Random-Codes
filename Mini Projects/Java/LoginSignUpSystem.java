import java.util.Scanner;

public class LoginSignUpSystem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("\t\tJava Login & SignUp Project\n");
        System.out.println("Choose Option");
        System.out.println("1.Create New Account(SignUp)");
        System.out.println("2.Login to Existing Account");
        int i = sc.nextInt();
        sc.nextLine();

        if (i == 1) {

            // ANSI escape code to clear the screen.
            System.out.print("\033[H\033[2J"); 
            System.out.println("\t\tCreating New Account");

            System.out.print("Enter User Name: ");
            String name = sc.nextLine();

            System.out.print("Enter Password: ");
            String pass = sc.nextLine();

            

        } 
        else if (i == 2) {

        } 
        else {

        }




    }
}

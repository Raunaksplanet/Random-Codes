import java.util.*;

class game {
    int computer;
    public game(){
        Random rand = new Random();
        computer = rand.nextInt(100);
        System.out.println("Guess the Number between 1 to 100");
    }
    public int computerNo(){return computer;}
}
class GuessTheNumber{
    static int takeUserInput(){
        int user;
        System.out.print("Enter: ");
        Scanner sc = new Scanner(System.in);
        user = sc.nextInt();
        return user;
    }

    static void isCorrectNumber(int i ,int j){
        if (i==j){
            System.out.println("Correct !! ");
        }
        else if (i>j){
            System.out.println("Number is larger");
        }
        else{
            System.out.println("Number is Smaller");
        }
    }
    public static void main (String[]args){
        int user = 0, computer = 0, itteration = 0;
        game g = new game();
        do {
            user = takeUserInput();
            computer = g.computerNo();
            isCorrectNumber(user,computer);
            itteration++;
        }while (user!= computer);
        System.out.println("YOU GUESS NO IN " + itteration + " Chances ");
    }
}
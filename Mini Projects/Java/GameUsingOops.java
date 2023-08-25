import org.w3c.dom.ls.LSOutput;

import java.io.RandomAccessFile;
import java.util.*;

class Number {
    Scanner sc = new Scanner(System.in);
    Random rnd = new Random();
    private int rock = 0, paper = 1, scissor = 2, userinput, compinput;


    public int userchoice(int i) {
        return userinput = i;
    }

    public void check() {
        compinput = rnd.nextInt(3);
        if (compinput == userinput) {
            System.out.println("no one wins its draw");
        } else if (compinput == 0 && userinput == 1 || compinput == 1 && userinput == 2 || compinput == 2 && userinput == 0) {
            System.out.println("user win the match");
        } else if (compinput == 1 && userinput == 0 || compinput == 2 && userinput == 1 || compinput == 0 && userinput == 2) {
            System.out.println("computer win the match");
        }

        System.out.print("computer choice is " + compinput);

        if (compinput == 0) {
            System.out.print(" (Rock)");
        } else if (compinput == 1) {
            System.out.print(" (Paper)");
        } else {
            System.out.print(" (Scissor)");
        }

    }
}

public class GameUsingOops {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        Number nw = new Number();

        System.out.println("Welcome to Stone Paper Scissor Game");
        System.out.println("\nYou have three choose:");
        System.out.println("1. Stone");
        System.out.println("2. Paper");
        System.out.println("3. Scissor");
        System.out.print("Enter your choice: ");
        a = sc.nextInt();

        if (a == 0 || a > 3) {
            System.out.println("Wrong Input");
        }
        else {
            nw.userchoice(a);
            nw.check();
        }
    }
}

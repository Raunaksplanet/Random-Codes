import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Random;

public class Functions {

    // Make directory.
    Functions() {
        File dir = new File("User's Data");
        try {
            dir.mkdir();
        } catch (Exception e) {
            e.toString();
        }
    }

    public static boolean CheckMail(String str) {
        boolean n = str.endsWith("@gmail.com");
        return n;
    }

    public static int CheckPass(String str2) {
        if (str2.length() <= 7) {
            return 11;
        } else {
            return 10;
        }
    }

    public static void FillData(String str, String str1) {
        // importing Random Module for generating User credential file.
        Random rd = new Random();
        int n = rd.nextInt(100);

        try {
            FileWriter fw = new FileWriter("User's Data\\User" + n + ".txt");
            
            fw.write(str); // gmail
            fw.write(",");
            fw.write(str1); // password
            fw.close();

        } catch (Exception e) {
            e.toString();
        }
    }

    

    

    public static void main(String args[]) {

    }
}
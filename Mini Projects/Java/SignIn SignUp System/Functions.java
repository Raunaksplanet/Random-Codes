import java.io.File;

public class Functions {

    // Make directory.
    Functions()
    {
        File dir = new File("User's Data");
        try {
            dir.mkdir();
        } catch (Exception e) {
            e.toString();
        }
    }

    public static boolean CheckMail(String str){
        boolean n = str.endsWith("@gmail.com");
        return n;
    }

    public static int CheckPass(String str2){
        if(str2.length() <= 7){
            return 11;
        }
        else{
            return 10;
        }
    }

    public static void main(String args[]) {

    }
}
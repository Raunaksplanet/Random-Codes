import java.util.Random;
import java.io.File;
import java.io.Writer;

public class demo {
    public static void main(String[] args) {
        Random rd = new Random();
        int n = rd.nextInt(100);

        File fol = new File("User Data");
        fol.mkdir();

        File fl = new File("User Data\\User");
        try{
            fl.createNewFile();
        }catch(Exception e){
            e.toString();
        }

        

    }
}

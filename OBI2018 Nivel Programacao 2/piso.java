import java.util.Scanner;

public class piso {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        int l = a.nextInt(), c = a.nextInt();
        System.out.println(l*c+((l-1)*(c-1))+"\n"+(2*(l-1)+2*(c-1)));
    }
}

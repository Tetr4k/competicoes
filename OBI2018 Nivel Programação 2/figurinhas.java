import java.util.Scanner;

public class figurinhas {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        String l1 = a.nextLine();
        String b[] = l1.split(" ");
        int N = Integer.parseInt(b[0]), C = Integer.parseInt(b[1]), M = Integer.parseInt(b[2]);
        String l2 = a.nextLine();
        String carimbadas[] = l2.split(" ");
        String l3 = a.nextLine();
        String compradas[] = l3.split(" ");
        int cont = 0;
        int faltam = C;
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < M; j++) {
                if (carimbadas[i].equals(compradas[j])){
                    cont++;
                }
            }
        }
        System.out.println(faltam-cont);
    }
}

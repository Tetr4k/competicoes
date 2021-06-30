import java.util.Scanner;

public class compensacao {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        String l1 = a.nextLine();
        int M = Integer.parseInt(l1.split(" ")[0]);
        int N = Integer.parseInt(l1.split(" ")[1]);
        String linha;
        int X[] = new int[M], V[] = new int[M], Y[] = new int[M];
        for (int i = 0; i < M; i++) {
            linha = a.nextLine();
            X[i] = Integer.parseInt(linha.split(" ")[0]);
            V[i] = Integer.parseInt(linha.split(" ")[1]);
            Y[1] = Integer.parseInt(linha.split(" ")[2]);
        }
        int cont = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                if (X[i] == Y[j]) {
                    cont++;
                }
            }
        }
        if (cont == 0) {
            System.out.println("N");
        }
        if (cont > 0){
            System.out.println("S");
        }
        System.out.println("");
    }
}

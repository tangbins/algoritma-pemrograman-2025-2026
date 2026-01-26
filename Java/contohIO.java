import java.util.Scanner;

public class ContohIO {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan nama: ");
        String nama = input.nextLine();

        System.out.print("Masukkan umur: ");
        int umur = input.nextInt();

        System.out.println("Halo, " + nama);
        System.out.println("Umur kamu " + umur + " tahun");
    }
}

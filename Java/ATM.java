import java.util.Scanner;

public class ATM {

    public static String formatRupiah(long angka) {
        return String.format("Rp %,d", angka).replace(",", ".");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nama, valid;
        long saldo, jumlah;

        do {
            System.out.print("Masukkan Nama: ");
            nama = sc.nextLine();
            System.out.print("Apakah nama \"" + nama + "\" benar? (TRUE/FALSE): ");
            valid = sc.nextLine().toUpperCase();
        } while (!valid.equals("TRUE"));

        System.out.print("Masukkan NIM tanpa huruf: ");
        saldo = sc.nextLong();

        System.out.println("\nNama: " + nama);
        System.out.println("Saldo Awal: " + formatRupiah(saldo));

        int pilihan;
        while (true) {
            System.out.println("\n===== MENU ATM =====");
            System.out.println("1. Cek Saldo");
            System.out.println("2. Tarik Tunai");
            System.out.println("3. Setor Tunai");
            System.out.println("4. Transfer");
            System.out.println("5. Keluar");
            System.out.print("Pilih menu: ");

            pilihan = sc.nextInt();

            switch (pilihan) {
                case 1:
                    System.out.println("Saldo Anda: " + formatRupiah(saldo));
                    break;

                case 2:
                    System.out.print("Masukkan jumlah tarik: ");
                    jumlah = sc.nextLong();
                    if (jumlah > saldo) {
                        System.out.println("Saldo tidak cukup!");
                    } else {
                        saldo -= jumlah;
                        System.out.println("Saldo sekarang: " + formatRupiah(saldo));
                    }
                    break;

                case 3:
                    System.out.print("Masukkan jumlah setor: ");
                    jumlah = sc.nextLong();
                    saldo += jumlah;
                    System.out.println("Saldo sekarang: " + formatRupiah(saldo));
                    break;

                case 4:
                    System.out.print("Masukkan jumlah transfer: ");
                    jumlah = sc.nextLong();
                    if (jumlah > saldo) {
                        System.out.println("Saldo tidak mencukupi!");
                    } else {
                        saldo -= jumlah;
                        System.out.println("Transfer berhasil. Saldo sekarang: " + formatRupiah(saldo));
                    }
                    break;

                case 5:
                    System.out.println("Terima kasih telah menggunakan ATM!");
                    System.exit(0);

                default:
                    System.out.println("Pilihan tidak valid!");
            }
        }
    }
}
z
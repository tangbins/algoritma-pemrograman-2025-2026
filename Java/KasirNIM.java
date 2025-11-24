import java.util.Scanner;

public class KasirNIM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Nama Barang   : ");
        String nama = sc.nextLine();

        System.out.print("Harga (Rp)    : ");
        int harga = Integer.parseInt(sc.nextLine().replace("Rp", "").replace(".", ""));

        System.out.print("Jumlah Barang : ");
        int jumlah = sc.nextInt(); sc.nextLine();

        System.out.print("NIM           : ");
        String nim = sc.nextLine();

        int tigaAkhir = Integer.parseInt(nim.substring(nim.length()-3));
        int satuAkhir = Character.getNumericValue(nim.charAt(nim.length()-1));

        int minimal = tigaAkhir * 100;
        int total = harga * jumlah;
        int diskonPersen = (total >= minimal) ? satuAkhir : 0;
        double diskonRp = total * (diskonPersen / 100.0);
        double bayar = total - diskonRp;

        System.out.println("\n===== STRUK BELANJA =====");
        System.out.println("Nama Barang      : " + nama);
        System.out.println("Harga Satuan     : Rp " + harga);
        System.out.println("Jumlah Beli      : " + jumlah);
        System.out.println("Total Harga      : Rp " + total);
        System.out.println("Minimal Diskon   : Rp " + minimal);
        System.out.println("Diskon (%)       : " + diskonPersen + "%");
        System.out.println("Diskon (Rp)      : Rp " + (int)diskonRp);
        System.out.println("Total Bayar      : Rp " + (int)bayar);
        System.out.println("=========================");
    }
}

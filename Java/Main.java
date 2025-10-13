// public class Main {
//     public static void main(String[] args) {
//         String nama = "Haein 💜";
//         int umur = 18;
//         double tinggi = 172;
//         boolean aktif = true;

//         System.out.println("Nama: " + nama);
//         System.out.println("Umur: " + umur);
//         System.out.println("Tinggi: " + tinggi);
//         System.out.println("Status aktif: " + aktif);
//     }
// }

import java.util.Scanner;  

public class Main {

    public static void main(String[] args) {

        final double PI = 3.14159;  

        Scanner sc = new Scanner(System.in);  

        System.out.print("Masukkan jari-jari: ");  

        double r = sc.nextDouble();  

        double luas = PI * r * r;  

        System.out.println("Luas lingkaran = " + luas);  

        sc.close();  
    }
}

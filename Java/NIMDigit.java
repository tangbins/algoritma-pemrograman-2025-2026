import java.util.Scanner;

public class NimDigit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan NIM: ");
        String nim = sc.nextLine();

        int[] digits = new int[nim.length()];

        for (int i = 0; i < nim.length(); i++) {
            digits[i] = Character.getNumericValue(nim.charAt(i));
        }

        int total = 0, maks = digits[0], minim = digits[0];
        for (int d : digits) {
            total += d;
            if (d > maks) maks = d;
            if (d < minim) minim = d;
        }

        double rata = (double) total / digits.length;

        int[] reverse = new int[digits.length];
        for (int i = 0; i < digits.length; i++) {
            reverse[i] = digits[digits.length - 1 - i];
        }

        System.out.print("Array digit: ");
        for (int d : digits) System.out.print(d + " ");

        System.out.println("\nTotal digit: " + total);
        System.out.println("Nilai maksimum: " + maks);
        System.out.println("Nilai minimum: " + minim);
        System.out.println("Rata-rata digit: " + rata);

        System.out.print("Reverse array: ");
        for (int d : reverse) System.out.print(d + " ");
    }
}

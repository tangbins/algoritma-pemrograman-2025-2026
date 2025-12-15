public class FungsiStatic {
// fungsi static
static void minum(String minuman){
System.out.println("Saya suka minum " + minuman);
}
// Fungsi non-static
void makan(String makanan){
System.out.println("Saya suka makan " + makanan);
}
// fungsi main
public static void main(String[] args) {
// pemanggilan fungsi static
minum("Kopi");
// mambuat instansiasi objek saya dari class FungsiStatic
FungsiStatic saya = new FungsiStatic();
// pemanggilan fungsi non-static
saya.makan("Pisang Goreng");
}
}
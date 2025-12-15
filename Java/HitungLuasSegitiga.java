public class HitungLuasSegitiga {
public static void main(String[] args) {
//panggil prosedur dan parameter dalam cm
luasSegitiga(2.0, 3.0);
}
// membuat fungsi luasSegitiga()
static void luasSegitiga(double a, double t){
double L;
L = a*t/2;
System.out.println("alas : "+a+" cm "+"tinggi : "+t+" cm");
System.out.println("Luas Segitiga : alas x tinggi / 2");
System.out.println("Luas Segitiga : "+L+" cm²");
}
}
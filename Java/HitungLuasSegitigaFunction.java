public class HitungLuasSegitigaFunction {
public static void main(String[] args) {
// TODO Auto-generated method stub
double a = 2.0;
double t = 3.0;
System.out.println("alas : "+a+" cm "+"tinggi : "+t+" cm");
System.out.println("Luas Segitiga : alas x tinggi / 2");
System.out.println("Luas Segitiga : "+luasSegitiga(a,t)+" cm²");
}
// membuat fungsi luasSegitiga()
static double luasSegitiga(double a, double t){
double L;
L = a*t/2;
return L;
}
}

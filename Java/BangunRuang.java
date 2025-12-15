public class BangunRuang {
public static void main(String[] args) {
int sisi = 15;
int L = luasKubus(sisi);
System.out.println(L);
}
// membuat fungsi luasPersegi()
static int luasPersegi(int sisi){
return sisi * sisi;
}
// membuat fungsi luasKubus()
static int luasKubus(int sisi){
// memanggil fungsi luasPersegi
return 6 * luasPersegi(sisi);
}
}
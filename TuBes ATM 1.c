#include <stdio.h>
#include <conio.h>
#include <string.h>
#define nMax 30
 
// Kamus global
typedef struct{
int TI[nMax+1];
int nEff;
}TabInt;
 
// Definisi prototype
void getMenu();
void getMenuPilihTransfer();
void getMenuInfoRekening();
void cetakTabel(TabInt T);
void addElmTab(TabInt *T, int x);
void urutBubbleDesc(TabInt *T);
void urutBubbleAsc(TabInt *T);
void terbilang (long x);
void getpin();

// Main driver
int main (){
 
// Variabel / kamus lokal
char y1, y2, y3, y4, y5, y6, y7, y8, n1;
char a1, a2, a3, a4;
int i=0, j=0;
int pin;
int npin;
int fpin=524032;
int sal=1000000;
int saldo;
int total;
int NoPLN;
int NoGopay;
int NoTelp;
int fNoPLN=321202020;
int fNoPLN1=572120182;
int tunggak;
int TGK=150000;
int TGK1=2000000;
int fNoGopay=812282205;
int fNoGopay1=83876543;
int rekening;
int frekening=201524032;
int frekeningBRI=201524028;
int frekeningMANDIRI=201524016;
int frekeningBNI=201524020;
int frekeningBCA=201524018;
int N, TR, TF=6000;
int TB=2000;
int T=0, K=0;
TabInt Tab1, Tab2;
 
// Algoritma
system("COLOR 5A");
login: // Perintah login akan dipanggil oleh syntax "goto"
system("cls");
tampilanawal:
printf("		  SELAMAT DATANG\n");
printf("		       DI\n");
printf("		    BANK BRI\n\n");
printf ("	NO. REKENING	: "); scanf ("%d", &rekening);
system("cls");
if (rekening==frekening) {
	goto pin;
}
else {
goto rekeningsalah;	
}
getch();
system("cls");{
goto tampilanawal;
}	
pin:
printf("\n");
printf("	MASUKAN PIN: "); scanf("%d", &pin);
if (pin==fpin) {
goto menu;
}
else if (i<2) { // diberi kesempatan memasukan PIN sebanyak 3x.
system("cls");
printf("	PIN YANG ANDA MASUKAN SALAH!\n");
i=i+1;
getch();
system("cls");
goto pin;
}
else { // apabila 3x salah memasukan PIN.
getch();
system("cls");
printf("\n");
printf ("	MAAF UNTUK SEMENTARA REKENING\n");
printf("		ANDA TERBLOKIR\n");
printf("	  SILAKAN HUBUNGI BANK BRI\n");
printf ("		  TERDEKAT");
printf("\n\n\n				KLIK ENTER");
system ("cls");
goto keluar;
}
//goto keluar; // Keluar dari program
menu:
system("cls");
getMenu(); // Memanggil prosedur "getMenu()"
printf("\n PILIHAN ANDA:"); scanf("%s", &y1);
system("cls");
 
switch(y1) {
case '1': { // Transfer 
do {
TB=2000;
pilihtransfer:
system("cls"); // Membersihkan layar
getMenuPilihTransfer(); // Memanggil prosedur Menu Pilih Transfer
printf("PILIHAN ANDA: "); scanf("%s", &y2);
system("cls");
switch(y2) {
case '1': { // Transfer dana ke rekening Bank BRI
printf("\nSILAKAN MASUKKAN NOMOR REKENING YANG ANDA TUJU: "); scanf("%d", &T);
if(T==frekeningBRI){
system("cls");
printf("\nSILAKAN MEMASUKKAN JUMLAH YANG INGIN DITRANSFER: "); scanf("%d", &N);
system("cls");
printf("\n           INFORMASI TRANSFER\n");
printf("\nTUJUAN	: %d\n", frekeningBRI);
printf ("NAMA		: SHANIA AULIYA\n");
printf("JUMLAH 		: %d\n", N);
printf ("ADMIN BANK	: %d\n",TB);
printf ("TOTAL 		: %d \n\n", total=N+TB); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf ("		     2.TIDAK");
printf ("\nPILIHAN ANDA		: "); scanf("%s", &y3);
system("cls");
if (y3=='1') {
goto transfer;
}
else {
goto keluar;
}
system("cls");
}
else{
system("cls");
goto rekeningsalah;
}
transfer:
if (sal>=N) {
sal = sal - total;
printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
printf("\n"); 
//addElmTab(&Tab1, N);
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
printf("		      				2.TIDAK");
printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
system("cls");
if (n1=='1'){
goto menu;
}else {
goto keluar;
}
}
else {
goto transaksigagal;
}
//else{
//	system("cls");
//	printf("\n	NOMOR REKENING YANG ANDA MASUKKAN TIDAK TERDAFTAR");
//}
break;
}
case '2': { // Transfer dana ke rekening bank lain
printf("				KE REKENING BANK LAIN\n");
printf("1. KE BANK MANDIRI\n");
printf("2. KE BANK BCA\n");
printf("3. KE BANK BNI\n\n");
printf("PILIHAN ANDA	:	"); scanf("%s",&a1);
system("cls");{
}
if (a1=='1'){
//}
printf("SILAKAN MASUKKAN NOMOR REKENING YANG ANDA TUJU:"); scanf("%d", &T);
if (T==frekeningMANDIRI){
system("cls");
printf("SILAKAN MEMASUKKAN JUMLAH YANG INGIN DITRANSFER:"); scanf("%d", &N);
system("cls");
printf("				TRANSFER ATM\n");
printf ("BANK		: BANK MANDIRI\n");
printf("TUJUAN		: 006%d\n", frekeningMANDIRI);
printf ("NAMA		: ERIKA ALZENA\n");
printf("JUMLAH		: %d,-\n", N);
printf("ADMIN BANK	: %d,-\n",TF);
printf ("TOTAL 		: %d \n\n", total=N+TF); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf("				2.TIDAK\n");
printf ("PILIHAN ANDA 		: "); scanf("%s", &y3);
if (y3=='1') {
system ("cls");
goto transfer;
}
else if (y3=='2'){
system ("cls");
goto keluar;
}
}
else{
	system ("cls");
goto rekeningsalah;
}
getch();
system("cls");{
goto menu;
}}
else if (a1=='2'){
printf("SILAKAN MASUKKAN NOMOR REKENING YANG ANDA TUJU:"); scanf("%d", &T);
if (T==frekeningBCA){
system("cls");
printf("SILAKAN MEMASUKKAN JUMLAH YANG INGIN DITRANSFER:"); scanf("%d", &N);
system("cls");
printf("				TRANSFER ATM\n");
printf ("BANK		: BANK BCA\n");
printf("TUJUAN		: 008%d\n", frekeningBCA);
printf ("NAMA		: BRYAN\n");
printf("JUMLAH		: %d,-\n", N);
printf("ADMIN BANK	: %d,-\n",TF);
printf ("TOTAL 		: %d \n\n", total=N+TF); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf("				2.TIDAK\n");
printf ("PILIHAN ANDA 		: "); scanf("%s", &y3);
if (y3=='1') {
system ("cls");
goto transfer;
}
else if (y3=='2'){
system ("cls");
goto keluar;
}
}
else{
	system ("cls");
goto rekeningsalah;
}
getch();
system("cls");{
goto menu;
}}
else if (a1=='3'){
}
printf("SILAKAN MASUKKAN NOMOR REKENING YANG ANDA TUJU:"); scanf("%d", &T);
if (T==frekeningBNI){
system("cls");
printf("SILAKAN MEMASUKKAN JUMLAH YANG INGIN DITRANSFER:"); scanf("%d", &N);
system("cls");
printf("				TRANSFER ATM\n");
printf ("BANK		: BANK BCA\n");
printf("TUJUAN		: 004%d\n", frekeningBNI);
printf ("NAMA		: NAFISHA\n");
printf("JUMLAH		: %d,-\n", N);
printf("ADMIN BANK	: %d,-\n",TF);
printf ("TOTAL 		: %d \n\n", total=N+TF); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf("				2.TIDAK\n");
printf ("PILIHAN ANDA 		: "); scanf("%s", &y3);
if (y3=='1') {
system ("cls");
goto transfer;
}
else if (y3=='2'){
system ("cls");
goto keluar;
}
}
else{
system ("cls");
goto rekeningsalah;
}
getch();
system("cls");{
goto menu;
}
transferBRI:
TB=2000; // Biaya transfer ke rekening bank BRI
if (sal < N) {
goto transaksigagal;
}
else if (sal >=N){
saldo = sal - N - TB;
addElmTab(&Tab1, N);
addElmTab(&Tab1, TB);
}
transferbanklain:
TF=6000; // Biaya transfer ke rekening bank lain
if (sal < N) {
goto transaksigagal;
}
else if (sal>=N) {
saldo = sal - N - TF;
addElmTab(&Tab1, N);
addElmTab(&Tab1, TF);
}
break;
}
case '3': { // Kembali ke menu utama
goto menu;
break;
}
}
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI: 1. YA\n");
printf("						2. TIDAK\n");
printf("PILIHAN ANDA	: ");
scanf("%s", &y5);
system("cls");
}
while (y5=='1');
goto menu;
break;
}
case '2': { // Penarikan Dana
do {
jmltarik:
system("cls");
printf("				TARIK TUNAI\n");
printf("Masukan Jumlah yang akan ditarik:"); scanf("%d", &TR);
system("cls");
printf("				TARIK TUNAI\n");
printf("Jumlah Penarikan:Rp.%d,-\n", TR);
printf("Apakah anda ingin melakukan transaksi ini?(y/t):"); scanf("%s", &y6);
if (y6=='1') {
goto tarik;
}
else {
goto menu;
}
tarik:
if (TR < 50000) {
printf("Nominal harus kelipatan Rp.50000,- !");
getch();
goto jmltarik;
} else if (sal < TR) {
goto transaksigagal;
} else if (sal >= TR) {
sal = sal - TR;
printf("Transaksi berhasil. Saldo anda sekarang: Rp.%d,-\n", sal);
addElmTab(&Tab2, TR);
}
printf("Ingin melakukan transaksi lagi ?(y/t):"); scanf("%s", &y7);
}
while(y7=='y' || y7=='Y');
goto menu;
break;
}
case '3': { // Pengecekan Saldo
printf("				 SALDO	:\n\n");
printf("				Rp.%d,-\n\n", sal);
printf("TRANSAKSI LAGI?	1. YA\n"); 
printf ("			2. TIDAK\n");
printf ("\nPILIHAN ANDA		: "); 
scanf("%s", &y3);
if (y3=='1') {
goto menu;
}
else {
system ("cls");
goto keluar;
}
system("cls");
getch();
goto menu;
break;
}
case '4': { // Histori Transaksi
mutasitrx:
system("cls");
getMenuInfoRekening();
printf("Masukan pilihan:"); scanf("%s", &y8);
system("cls");
switch (y8) {
case '1': { // Info Mutasi Rekening
printf ("				   MUTASI REKENING\n");
cetakTabel(Tab1); // Mencetak isi Tabel pada TabInt Tab1
printf("Ke: %d\n", T);
cetakTabel(Tab2); // Mencetak isi Tabel pada TabInt Tab2
printf("\n");
break;
}
case '2': { // Ubah Pin
printf("				UBAH PIN\n");
pinlama:
printf("MASSUKAN PIN LAMA:"); scanf("%d", &pin);
if(pin==fpin){
system ("cls");
goto pinbaru;
}
else if(j<2){
system ("cls");
printf("PIN LAMA ANDA SALAH!\n");
j=j+1;
goto pinlama;
}
else{
printf ("	MAAF UNTUK SEMENTARA REKENING\n");
printf("		ANDA TERBLOKIR\n");
printf("	  SILAKAN HUBUNGI BANK BRI\n");
printf ("		  TERDEKAT");
goto keluar;
}
pinbaru:
printf("MASUKKAN PIN BARU (6 DIGIT ANGKA):"); scanf("%d", &npin);
system("cls");
fpin=npin;
printf("		PT BANK RAKYAT INDONESIA\n\n");
printf("		TERIMAKASIH\n");
printf("	ATAS KEPERCAYAAN ANDA");
getch();
system("cls");
goto tampilanawal;
break;
}}}
//printf("		   UBAH PIN\n");
//printf("		   TRANSFER DANA\n");
//urutBubbleDesc(&Tab1);
//cetakTabel(Tab1);
//printf("			 PENARIKAN DANA\n");
//urutBubbleDesc(&Tab2);
//cetakTabel(Tab2);
//printf("\n");
//printf("<< Kembali ke menu");
//break;
//}
//case '3': { // Mengurutkan transaksi dari yang terkecil hingga terbesar
//printf("		   TRANSAKSI TERKECIL\n");
//printf("			  TRANSFER DANA\n");
//urutBubbleAsc(&Tab1);
//cetakTabel(Tab1);
//printf("\n");
//printf("			 PENARIKAN DANA\n");
//urutBubbleAsc(&Tab2);
//cetakTabel(Tab2);
//printf("\n");
//printf("<< Kembali ke menu");
//break;
//}
//case '4': { // Kembali ke menu utama
//goto menu;
//break;
//}
//default : { //
//getMenuInfoRekening();
//printf("Input Salah(Masukan angka 1-4)");
//getch();
//goto mutasitrx;
//break;
//}
//}
//getch();
//goto menu;
//break;
//}
case '5' : { // Pembayaran
printf ("SILAKAN PILIH JENIS PEMBAYARAN\n");
printf ("1. PLN\n");
printf ("2. PULSA ISI ULANG\n");
printf ("3. GOPAY\n");
printf ("4. KE MENU SEBELUMNYA\n");
printf ("PILIHAN ANDA : "); scanf ("%s", &a2);
system ("cls");
if (a2=='1'){
printf("\nSILAKAN MASUKKAN NOMOR REKENING LISTRIK ANDA : "); scanf("%d", &K);
getch();
if(K==fNoPLN){
system("cls");
printf("\n           TAGIHAN PEMBAYARAN LISTRIK\n");
printf("\nNO REK	: %d\n", fNoPLN);
printf ("NAMA		: ZAHWA PUTRI HAMIDA\n");
printf("TUNGGAKAN 	: Rp.%d,-\n", TGK);
printf ("BL/TH		: \n");
printf ("ADMIN BANK	: %d\n", TB);
printf ("TOTAL 		: Rp.%d,- \n\n", total=TGK+TB); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf ("		     2.TIDAK");
printf ("\nPILIHAN ANDA		: "); scanf("%s", &y3);
system("cls");
if (y3=='1') {
goto tunggak;
}
else {
goto keluar;
}
system("cls");
}
else if (K==fNoPLN1){
system("cls");
printf("\n           TAGIHAN PEMBAYARAN LISTRIK\n");
printf("\nNO REK	: %d\n", fNoPLN1);
printf ("NAMA		: SHANIA AULIYA\n");
printf("TUNGGAKAN 	: Rp.%d,-\n", TGK1);
printf ("BL/TH		: \n");
printf ("ADMIN BANK	: %d\n", TB);
printf ("TOTAL 		: Rp.%d,- \n\n", total=TGK1+TB); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf ("		     2.TIDAK");
printf ("\nPILIHAN ANDA		: "); scanf("%s", &y3);
system("cls");
if (y3=='1') {
goto tunggak;
}
else {
goto keluar;
}
system("cls");
}
else{
system("cls");
printf("\n NOMOR REKENING YANG ANDA MASUKKAN TIDAK TERDAFTAR\n\n");
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
printf("		      				2.TIDAK");
printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
system("cls");
}
if (n1=='1'){
goto menu;
}else {
goto keluar;
}
tunggak:
if (sal>TGK||sal>TGK1) {
sal = sal - total;
printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
printf("\n"); 
//addElmTab(&Tab1, N);
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
printf("		      				2.TIDAK");
printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
system("cls");
if (n1=='1'){
goto menu;
}else {
goto keluar;
}
}
else if(sal<TGK||sal<TGK1){
goto transaksigagal;
}}
if (a2=='2'){
printf ("SILAKAN PILIH JENIS PROVIDER\n");
printf ("1. TELKOMSEL / SIMPATI\n");
printf ("2. INDOSAT / TRI\n");
printf ("3. XL / AXIS\n");
printf ("PILIHAN ANDA	: "); scanf ("%s", &a3);
if (a3=='1'|| a3=='2'||a3=='3'){
system ("cls");
printf ("SILAKAN MASUKAN NOMOR TELEPON ANDA	: +62"); scanf ("%d", &NoTelp);
}
system ("cls");
printf ("PAKET PULSA\n");
printf ("1. Rp.20000	4. Rp.100000\n");
printf ("2. Rp. 25000	5. Kembali\n");
printf ("3. Rp.50000");
printf ("PILIHAN ANDA	: "); scanf ("%s", &a4);
if (a4=='1'||a4=='2'||a4=='3'||a4=='4'){
printf("			PT BANK RAKYAT INDONESIA\n\n");
printf("		TERIMAKASIH\n");
printf("	ATAS KEPERCAYAAN ANDA");
}
}
case '6': { // Keluar Dari Program
//printf("\n| *************** KELUAR *************** |\n\n");
//printf("TERIMA KASIH TELAH MENGGUNAKAN ATM BANK BRI\n");
goto keluar;
break;
}
default : { // Memasukan input selain angka 1-6
getMenu();
printf("\nInput Salah(Masukan angka 1-6)");
getch();
goto menu;
break;
}}
{
keluar: // Keluar program dengan nilai return 0
printf("			PT BANK RAKYAT INDONESIA\n\n");
printf("		TERIMAKASIH\n");
printf("	ATAS KEPERCAYAAN ANDA");
getch();
return 0;
}
{
transaksigagal:
printf ("			PT BANK RAKYAT INDONESIA\n\n");
printf ("		TRANSAKSI GAGAL\n");
printf ("	SALDO TIDAK MENCUKUPI\n\n");
printf("SALDO ANDA SAAT INI:Rp.%d,-\n", sal);
getch();
}
{
rekeningsalah:
printf("\n");
printf ("	MAAF NOMOR REKENING YANG ANDA\n");
printf ("	  MASUKKAN TIDAK TERDAFTAR\n");
printf ("	SILAKAN PERIKSA DAN MASUKKAN\n");
printf ("   		   ULANG");
getch();
}}
}
// Realisasi prototype
void getRekening (){
printf("		  SELAMAT DATANG\n");
printf("				DI\n");
printf("			BANK BRI\n\n");
printf ("NO. REKENING	: ");
}
void getpin (){
printf ("MASUKKAN PIN (6 DIGIT ANGKA)	: ");
}
void getMenu() { // Menu utama
printf("\n					MENU UTAMA\n\n");
printf("  1. TRANSFER		5. PEMBAYARAN \n");
printf("  2. PENARIKAN TUNAI	6. KELUAR \n");
printf("  3. INFORMASI SALDO \n");
printf("  4. INFORMASI REKENING \n\n");
}
void getMenuPilihTransfer(){ // Menu Pilihan Transfer Dana
printf("\n				SILAKAN PILIH TUJUAN TRANSFER\n\n");
printf("  1. KE REK BANK BRI  \n");
printf("  2. KE REK BANK LAIN  \n");
printf("  3. KE MENU SEBELUMNYA  \n\n");
}
void getMenuInfoRekening(){ // Menu Mutasi Transaksi
printf("			 INFO REKENING\n");
printf("1. INFO MUTASI REKENING\n");
printf("2. UBAH PIN\n");
}
void addElmTab(TabInt *T, int x){ // Prosedur untuk menambahkan Elemen pada sebuah Tabel yang terdapat pada tabel integer
/* I.S: T terisi sembarang, mungkin kosong
F.S: Bertambah 1 elemen bernilai x
*/
// Algoritma
if((*T).nEff < nMax){
(*T).nEff++;
(*T).TI[(*T).nEff] = x;
}
}
void cetakTabel(TabInt T){ // Prosedur untuk mencetak isi tabel pada tabel integer
/* I.S: T Terdefinisi sembarang
F.S: Semua elemen pada T dicetak
*/
// Variabel / Kamus
int i;
 
// Algoritma
i=1;
while(i<=T.nEff){
printf("<Rp.%d,->\n", T.TI[i]);
i++;
}
}
void urutBubbleDesc(TabInt *T){ // Prosedur Pengurutan bilangan menggunakan metode bubblesort descending (Dari besar ke kecil)
/* I.S: Mengurutkan bilangan dari yang terbesar hingga terkecil
F.S: i,j,tmp saling bertukar tempat
*/
// Variabel / kamus
int i,j, tmp;
int N;
 
// Algoritma
N = (*T).nEff;
 
for(i=N;i>1;i--){
for(j=2;j<=i;j++){
if((*T).TI[j-1] < (*T).TI[j]){
//pertukaran tempat
tmp = (*T).TI[j-1];
(*T).TI[j-1] = (*T).TI[j];
(*T).TI[j] = tmp;
}
}
}
}
void urutBubbleAsc(TabInt *T){ // Prosedur Pengurutan bilangan menggunakan metode bubblesort ascending (Dari kecil ke besar)
/* I.S: Mengurutkan bilangan dari yang terkecil hingga terbesar
F.S: i,j,tmp saling bertukar tempat
*/
// Variabel / Kamus
int i,j, tmp;
int N;
 
// Algoritma
N = (*T).nEff;
 
for(i=N;i>1;i--){
for(j=2;j<=i;j++){
if((*T).TI[j-1] > (*T).TI[j]){
//pertukaran tempat
tmp = (*T).TI[j-1];
(*T).TI[j-1] = (*T).TI[j];
(*T).TI[j] = tmp;
}
}
}
}
void terbilang(long x){ // Prosedur mengubah angka menjadi kata
/* I.S: x mengkonversi nilai x menjadi kata
F.S: nilai x berubah
*/
// Algoritma
if(x==1){
printf("Satu ");
}else if(x==2){
printf("Dua ");
}else if(x==3){
printf("Tiga ");
}else if(x==4){
printf("Empat ");
}else if(x==5){
printf("Lima ");
}else if(x==6){
printf("Enam ");
}else if(x==7){
printf("Tujuh ");
}else if(x==8){
printf("Delapan ");
}else if(x==9){
printf("Sembilan ");
}else if(x==10){
printf("Sepuluh ");
}else if(x==11){
printf("Sebelas ");
}else if(x>=12&&x<=19){
terbilang(x%10);
printf("Belas ");
}else if(x>=20&&x<=99){
terbilang(x/10);
printf("Puluh ");
terbilang(x%10);
}else if(x>=100&&x<=199){
printf("Seratus ");
terbilang(x-100);
}else if(x>=200&&x<=999){
terbilang(x/100);
printf("Ratus ");
terbilang(x%100);
}else if(x>=1000&&x<=1999){
printf("Seribu ");
terbilang(x-1000);
}else if(x>=2000&&x<=999999){
terbilang(x/1000);
printf("Ribu ");
terbilang(x%1000);
}else if(x>=1000000&&x<=999999999){
terbilang(x/1000000);
printf("Juta ");
terbilang(x%1000000);
}else if(x>=1000000000&&x<=2147483647){
terbilang(x/1000000000);
printf("Miliyar ");
terbilang(x%1000000000);
}
}

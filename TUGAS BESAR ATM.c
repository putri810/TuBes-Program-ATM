#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define nMax 30

// Kamus global
typedef struct{
int TI[nMax+1];
int nEff;
}TabInt;

// Definisi prototype
void instruksi();
void getMenu();
void rekeningsalah();
void transaksigagal();
void keluar();
void getMenuPilihTransfer();
void getMenuInfoRekening();
void cetakTabel(TabInt T);
void addElmTab(TabInt *T, int x);
//void urutBubbleDesc(TabInt *T);
//void urutBubbleAsc(TabInt *T);
void getPin();
void rekeningblokir();
void gopaygagal();
void waktu();

void instruksi(){
printf("					SELAMAT DATANG\n");
printf("					      DI\n");
printf("					   BANK BRI\n\n");
printf(" PETUNJUK PENGGUNAAN ATM :\n\n");
printf(" 1. SETIAP SELESAI MEMASUKKAN DATA YANG DIMINTA TEKAN ENTER\n");
printf(" 2. SETIAP SELESAI MEMILIH OPSI YANG DIINGINKAN TEKAN ENTER\n");
printf(" 3. SETIAP DATA YANG DIMASUKKAN HANYA BERUPA ANGKA SAJA\n\n");
printf(" 4. UNTUK FITUR TRANSFER HANYA BISA MELAKUKAN TRANSFER KE SESAMA BANK DALAM 1 KALI TRANSAKSI\n\n");
printf("				TEKAN ENTER UNTUK MELANJUTKAN KE TRANSAKSI ATM");
}
void getMenu() { // Menu utama
printf("	MENU UTAMA\n\n");
printf("  1. TRANSFER		5. PEMBAYARAN \n");
printf("  2. PENARIKAN TUNAI	6. KELUAR \n");
printf("  3. INFORMASI SALDO \n");
printf("  4. INFORMASI REKENING \n\n");
}

void getPin (){
printf ("MASUKKAN PIN (6 DIGIT ANGKA)	: ");
}

void getMenuPilihTransfer(){ // Menu Pilihan Transfer Dana
printf("	SILAKAN PILIH TUJUAN TRANSFER\n\n");
printf(" 1. KE REK BANK BRI  \n");
printf(" 2. KE REK BANK LAIN  \n");
printf(" 3. KE MENU SEBELUMNYA  \n\n");
}

void getMenuInfoRekening(){ // Menu Mutasi Transaksi
printf("			 INFO REKENING\n");
printf("1. INFO MUTASI REKENING\n");
printf("2. UBAH PIN\n");
}

void rekeningsalah(){
printf("\n");
printf ("	MAAF NOMOR REKENING YANG ANDA\n");
printf ("	  MASUKKAN TIDAK TERDAFTAR\n");
printf ("	SILAKAN PERIKSA DAN MASUKKAN\n");
printf ("   		   ULANG");
}

void transaksigagal(){
int sal = 15000000;
printf ("			PT BANK RAKYAT INDONESIA\n\n");
printf ("		TRANSAKSI GAGAL\n");
printf ("	SALDO TIDAK MENCUKUPI\n\n");
printf("	SALDO ANDA SAAT INI:Rp.%d,-\n", sal);
}

void rekeningblokir(){
printf ("	MAAF UNTUK SEMENTARA REKENING\n");
printf("		ANDA TERBLOKIR\n");
printf("	  SILAKAN HUBUNGI BANK BRI\n");
printf ("		  TERDEKAT");
printf ("\n\n\n				TEKAN ENTER");
}

//void gopaygagal(){
//printf ("	NOMOR GOPAY YANG ANDA MASUKKAN\n");
//printf ("		  TIDAK TERDAFTAR\n");
//printf ("		 DALAM AKUN GOPAY\n\n");
//printf (" SILAKAN MASUKKAN ULANG NOMOR GOPAY!");
//}

void waktu() {
    struct tm *Sys_T;
 
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval); /* Untuk mendapatkan waktu lokal komputer */
    /* Sys_T = gmtime(&Tval); / / Untuk mendapatkan waktu komputer berbasis GMT/UTC */
    printf ( "\n\n TANGGAL DAN WAKTU : \n%s", asctime (Sys_T));
    /* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
}

void addElmTab(TabInt *T, int x){ // Prosedur untuk menambahkan Elemen pada sebuah Tabel yang terdapat pada tabel integer
/* I.S: T terisi sembarang, mungkin kosong
F.S: Bertambah 1 elemen bernilai x
*/
// Algoritma
if((*T).nEff < nMax){
(*T).nEff++;
(*T).TI[(*T).nEff] = x;
}}

void cetakTabel(TabInt T){ // Prosedur untuk mencetak isi tabel pada tabel integer
/* I.S: T Terdefinisi sembarang
F.S: Semua elemen pada T dicetak
*/
// Variabel / Kamus
int i;
 
// Algoritma
i=1;
while(i<=T.nEff){
printf("Rp.%d,-\n", T.TI[i]);
i++;
}
}

void keluar(){ // Keluar program dengan nilai return 0
printf("	PT BANK RAKYAT INDONESIA\n\n");
printf("		TERIMAKASIH\n");
printf("	ATAS KEPERCAYAAN ANDA");
}

int main(){
	// Deklarasi
	int rekening;
	int frekening = 201524032;
	int frekeningBRI = 201524028;
	int frekeningMANDIRI = 201524016;
	int frekeningBNI = 201524020;
	int frekeningBCA = 201524018;
	int pin, npin;;
	int fpin = 524032;
	int sal = 15000000;
	int TB = 2000,TF = 6000,TR,saldo;
	int i=0, j=0,  N;
	int T = 0, K = 0;
	char y1,y2,y3,y5,y6,y7,y8,y9,n1,a1,a2,a3,a4,a5;
	int total;
	int NoPLN;
	char NoGopay[15];
	int NoTelp;
	int fNoPLN = 321202020;
	int fNoPLN1 = 572120182;
	int tunggak, TGK = 150000, TGK1 = 2000000;
	char fGopay[15]="81987654321";
	char fGopay1[15]="83876543210";
	char fGopay2[15]="89123456789"; 
	TabInt Tab1, Tab2, Tab3, Tab4, Tab5, Tab6, Tab7, Tab8;
	
	system("COLOR 8B");
	system("cls");
	instruksi();
	getch();
	system("cls");
	goto tampilanawal;
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
				rekeningsalah();
			}
		getch();
		system("cls");{
		goto tampilanawal;
		}	
	pin:
		printf("\n");
		printf("	MASUKAN PIN: "); scanf("%d", &pin);
			if (pin==fpin) {
			system("cls");
			goto menu;
			menu:
			getMenu();
			printf("\n PILIHAN ANDA:"); scanf("%s", &y1);
			system("cls");
			}
			else if (i<2) { // diberi kesempatan memasukan PIN sebanyak 3x.
				system("cls");
				printf("	PIN YANG ANDA MASUKAN SALAH!\n");
				printf("					TEKAN ENTER");
				i=i+1;
				getch();
				system("cls");
				goto pin;
			}
			else { // apabila 3x salah memasukan PIN.
			system("cls");
			printf("\n");
			rekeningblokir();
			}
	switch(y1) {
	case '1': { // Transfer 
	do {
	pilihtransfer:
		system("cls"); // Membersihkan layar
		getMenuPilihTransfer(); // Memanggil Modul Menu Pilih Transfer
		printf("PILIHAN ANDA: "); scanf("%s", &y2);
		system("cls");
	switch(y2) {
	case '1': { // Transfer dana ke rekening Bank BRI
		printf("\nSILAKAN MASUKKAN NOMOR REKENING YANG ANDA TUJU: "); scanf("%d", &rekening);
		if(rekening==frekeningBRI){
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
			system("cls");
			goto pilihtransfer;
			}
		}
		else{
			system("cls");
			rekeningsalah();
getch();
system("cls");
goto menu;
system("cls");
goto pilihtransfer;
}
transfer:
if (sal>=N) {
sal = sal - total;
if (sal>=50000){
printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
printf("\n"); 
addElmTab(&Tab1, N);
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
printf("		      				2.TIDAK");
printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
system("cls");
if (n1=='1'){
goto menu;
}
else {
keluar();
return 0;
}
}
else if (sal<50000){
printf ("	TRANSAKSI GAGAL\n");
printf (" ANDA TELAH MENCAPAI LIMIT TABUNGAN\n\n");
printf ("				TEKAN ENTER");
getch();
system ("cls");
goto menu;
}}
else if (sal<N) {
transaksigagal();
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
printf("		      				2.TIDAK");
printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
system("cls");
if (n1=='1'){
goto menu;
}
else {
keluar();
return 0;
}
}
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
printf("SILAKAN MASUKKAN NOMOR REKENING YANG ANDA TUJU:"); scanf("%d", &rekening);
if (rekening==frekeningMANDIRI){
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
system("cls");
goto transfer;
}		
else {
system("cls");
goto pilihtransfer;
}
}
else{
system ("cls");
rekeningsalah();
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
system("cls");
goto transfer;
}		
else {
system("cls");
goto pilihtransfer;
}
}
else{
system ("cls");
rekeningsalah();
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
system("cls");
goto transfer;
}		
else {
system("cls");
goto pilihtransfer;
}
}
else{
system ("cls");
rekeningsalah();
}
getch();
system("cls");
goto menu;
}
case '3': { // Kembali ke menu utama
goto menu;
break;
}
transferBRI:
if (sal < N) {
transaksigagal();
}
else if (sal >=N){
saldo = sal - N - TB;
addElmTab(&Tab1, N);
addElmTab(&Tab1, TB);
}
transferbanklain:
if (sal < N) {
transaksigagal();
}
else if (sal>=N) {
saldo = sal - N - TF;
addElmTab(&Tab1, N);
addElmTab(&Tab1, TF);
}
break;
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
jmltarik:
system("cls");
printf("				TARIK TUNAI\n");
printf("MASUKKAN JUMLAH YANG AKAN DITARIK : "); scanf("%d", &TR);
if(TR % 50000 == 0){
	if(TR >= sal){
	system("cls");{
	transaksigagal();
	}
	getch();
	system("cls");
	goto menu;
	}
	else if(TR < sal){
	goto tariktunai;}
}
else {
system("cls");
goto gagal;
}
tariktunai:
getch();
system("cls");
printf("				TARIK TUNAI\n");
printf("Jumlah Penarikan:Rp.%d,-\n", TR);
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf("				2.TIDAK\n");
printf ("PILIHAN ANDA 		: "); scanf("%s", &y6);
if (y6=='1') {
system("cls");
goto tarik;
}
else if (y6=='2'){
system ("cls");
goto jmltarik;
}
gagal:
if(TR % 50000 != 0){
printf("		TRANSAKSI GAGAL\n");
printf ("MASUKKAN JUMLAH NOMINAL KELIPATAN 50000!");
{
getch();
system("cls");
goto menu;}
}
tarik:
system("cls");
sal = sal - TR;
if (sal>=50000){
printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
addElmTab(&Tab2, TR);
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI: 1. YA\n");
printf("						2. TIDAK\n");
printf("PILIHAN ANDA	: ");
scanf("%s", &y7);
system("cls");
if(y7=='1'){
goto menu;
}
else if (y7=='2'){
keluar();
}}
else if (sal<50000){
printf ("	TRANSAKSI GAGAL\n");
printf ("ANDA MENCAPAI LIMIT TABUNGAN ANDA");	
}
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
system ("cls");
goto menu;
}
else {
system ("cls");
keluar();
return 0;
}
}
case '4': {
// Histori Transaksi
//mutasitrx:
//system("cls");
getMenuInfoRekening();
printf("Masukan pilihan:"); scanf("%s", &y8);
system("cls");
switch (y8) {
case '1': { // Transaksi Terakhir
printf (" 			TRANSAKSI TERAKHIR \n");
waktu();
printf("\nTRANSFER DANA (DEBIT)\n");
cetakTabel(Tab1); // Mencetak isi Tabel pada TabInt Tab1
printf("Ke: %d\n", rekening);
printf("\nPENARIKAN DANA (DEBIT)\n");
cetakTabel(Tab2); // Mencetak isi Tabel pada TabInt Tab2
printf("\n");
printf ("PEMBAYARAN TAGIHAN LISTRIK (DEBIT)\n");
cetakTabel(Tab3); 
printf ("\nPEMBELIAN ISI ULANG PULSA (DEBIT)\n");
//cetakTabel(Tab4);
//cetakTabel(Tab5);
//cetakTabel(Tab6);
//cetakTabel(Tab7);
printf ("\nPENGISIAN (DEBIT)GOPAY\n");
cetakTabel(Tab8);
printf("\n\nTRANSAKSI LAGI?	1. YA\n"); 
printf ("		2. TIDAK\n");
printf ("\nPILIHAN ANDA		: "); 
scanf("%s", &y3);
if (y3=='1') {
system ("cls");
goto menu;
}
else {
system ("cls");
keluar();
return 0;
}
break;
	//waktu();
	//printf ("PILIH TRANSAKSI LAGI?");
}
case '2': { // Ubah Pin
printf("				UBAH PIN\n");
pinlama:
printf("MASSUKAN PIN LAMA:"); scanf("%d", &pin);
if(pin==fpin){
system ("cls");
goto pinbaru;
pinbaru:
printf("MASUKKAN PIN BARU (6 DIGIT ANGKA):"); scanf("%d", &npin);
system("cls");
fpin=npin;
keluar();
return 0;
//break;
}
else if(j<2){
system ("cls");
printf("PIN LAMA ANDA SALAH!\n");
j=j+1;
goto pinlama;
}
else{
system ("cls");
rekeningblokir();
getch();
system ("cls");
keluar();
return 0;

}}}
break;}
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
printf ("BL/TH		: 02/2021\n");
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
keluar();
}
system("cls");
}
else if (K==fNoPLN1){
system("cls");
printf("\n           TAGIHAN PEMBAYARAN LISTRIK\n");
printf("\nNO REK	: %d\n", fNoPLN1);
printf ("NAMA		: SHANIA AULIYA\n");
printf("TUNGGAKAN 	: Rp.%d,-\n", TGK1);
printf ("BL/TH		: 02/2021\n");
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
keluar();
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
keluar();
}
tunggak:
if (sal>TGK||sal>TGK1) {
sal = sal - total;
printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
printf("\n"); 
addElmTab(&Tab3, total);
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
printf("		      				2.TIDAK");
printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
system("cls");
if (n1=='1'){
goto menu;
}else {
keluar();
}
}
else if(sal<TGK||sal<TGK1){
transaksigagal();
}}
else if (a2=='2'){
provider:
printf ("SILAKAN PILIH JENIS PROVIDER\n");
printf ("1. TELKOMSEL\n");
printf ("2. TRI\n");
printf ("3. AXIS\n");
printf ("PILIHAN ANDA	: "); scanf ("%s", &a3);
if (a3=='1'){
system ("cls");
printf ("SILAKAN MASUKAN NOMOR TELEPON ANDA	: 085"); scanf ("%d", &NoTelp);
goto paket;
}
else if (a3=='2'){
system("cls");
printf ("SILAKAN MASUKAN NOMOR TELEPON ANDA	: 089"); scanf ("%d", &NoTelp);
goto paket;
}
else if (a3=='3'){
system("cls");
printf ("SILAKAN MASUKAN NOMOR TELEPON ANDA	: 083"); scanf ("%d", &NoTelp);
goto paket;}
paket:
system ("cls");
printf ("PAKET PULSA\n");
printf ("1. Rp.20000	4. Rp.100000\n");
printf ("2. Rp.25000	5. Kembali\n");
printf ("3. Rp.50000\n");
printf ("PILIHAN ANDA	: "); scanf ("%s", &a4);
system("cls");
if (a4=='1'){
	sal = sal - 20000;
	printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
	printf("\n"); 
	addElmTab(&Tab4, 20000);
	printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
	printf("		      				2.TIDAK");
	printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
	system("cls");
	if (n1=='1'){
	goto menu;
	}else {
	keluar(); 
	return 0;
	}
	}
else if (a4=='2'){
	sal = sal - 25000;
	printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
	printf("\n"); 
	addElmTab(&Tab5, 25000);
	printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
	printf("		      				2.TIDAK");
	printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
	system("cls");
	if (n1=='1'){
	goto menu;
	}else {
	keluar();
	return 0;
	}
}
else if (a4=='3'){
	sal = sal - 50000;
	printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
	printf("\n"); 
	addElmTab(&Tab6, 50000);
	printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
	printf("		      				2.TIDAK");
	printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
	system("cls");
	if (n1=='1'){
	goto menu;
	}
	else {
	keluar();
	return 0;
}
}
else if (a4=='4'){
	sal = sal - 100000;
	printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n", sal);
	printf("\n"); 
	addElmTab(&Tab7, 100000);
	printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
	printf("		      				2.TIDAK");
	printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
	system("cls");
	if (n1=='1'){
	goto menu;
	}
	else {
	keluar();
	return 0;
	}
}else if(a4='5'){
goto provider;
}}
else if (a2=='3'){
jenisgopay:
printf ("SILAKAN PILIH JENIS GOPAY\n");
printf ("1. DRIVER\n");
printf ("2. CUSTOMER\n");
printf ("3. MERCHANT\n");
printf ("4. KEMBALI KE MENU SEBELUMNYA\n");
printf ("PILIHAN ANDA	: "); scanf ("%s", &a5);
if (a5=='1'){
system ("cls");
printf ("SILAKAN MASUKAN NOMOR TELEPON ANDA	: 301341 - "); scanf ("%d", &NoGopay);
//if (NoGopay==fGopay){
system("cls");
printf("SILAKAN MASUKKAN JUMLAH GOPAY YANG INGI DIISI:"); scanf("%d", &N);
system("cls");
printf("				TOP-UP GOPAY\n");
printf ("NO. HP		: %s\n", fGopay);
printf ("NAMA		: ZAHWA PUTRI HAMIDA\n");
printf("JENIS		: DRIVER\n");
printf("JUMLAH TOP-UP	: Rp.%d,-\n",N);
printf ("ADMIN BANK	: 	Rp.0\n");
printf ("TOTAL 		: %d \n\n", total=N); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf("				2.TIDAK\n");
printf ("PILIHAN ANDA 		: "); scanf("%s", &y9);
if (y9=='1') {
system("cls");
goto gopay;
gopay:
if (sal>N) {
sal = sal - total;
printf("TRANSAKSI BERHASIL. \nSALDO ANDA SAAT INI:Rp.%d,-\n\n", sal);
addElmTab(&Tab8, total);
printf("APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAGI : 1.YA\n");
printf("		      				2.TIDAK\n");
printf ("\nPILIHAN ANDA : "); scanf("%s", &n1);
system("cls");
if (n1=='1'){
goto menu;
}else {
keluar();
return 0;
}
}
else if(sal<=N){
transaksigagal();
}
}		
else {
system("cls");
goto jenisgopay;
}
//}
//else if(NoGopay != fGopay) {
//system ("cls");
//gopaygagal();
//getch();
//system ("cls");{
//goto jenisgopay;}
//}
}
else if (a5=='2'){
system ("cls");
printf ("SILAKAN MASUKAN NOMOR TELEPON ANDA	: 301342 - "); scanf ("%d", &NoGopay);
//if (NoGopay==fGopay1){
system("cls");
printf("SILAKAN MASUKKAN JUMLAH GOPAY YANG INGI DIISII:"); scanf("%d", &N);
system("cls");
printf("				TOP-UP GOPAY\n");
printf ("NO. HP		: %\n", fGopay1);
printf ("NAMA		: SHANIA AULIYA\n");
printf("JENIS		: CUSTOMER\n");
printf("JUMLAH TOP-UP	: Rp.%d,-\n",N);
printf ("ADMIN BANK	: 	Rp.0\n");
printf ("TOTAL 		: %d \n\n", total=N); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf("				2.TIDAK\n");
printf ("PILIHAN ANDA 		: "); scanf("%s", &y9);
if (y9=='1') {
system("cls");
goto gopay;

}		
else {
system("cls");
goto jenisgopay;
}
//}
//else {
//system ("cls");
//gopaygagal();
//getch();
//system ("cls");{
//goto jenisgopay;}
//}
}
else if (a5=='3'){
system ("cls");
printf ("SILAKAN MASUKAN NOMOR TELEPON ANDA	: 301341 - "); scanf ("%d", &NoGopay);
//if (NoGopay==fGopay2){
system("cls");
printf("SILAKAN MASUKKAN JUMLAH GOPAY YANG INGI DIISII:"); scanf("%d", &N);
system("cls");
printf("				TOP-UP GOPAY\n");
printf ("NO. HP		: %d\n", fGopay2);
printf ("NAMA		: ERIKA ALZENA\n");
printf("JENIS		: MERCHANT\n");
printf("JUMLAH TOP-UP	: Rp.%d,-\n",N);
printf ("ADMIN BANK	: 	Rp.0\n");
printf ("TOTAL 		: %d \n\n", total=N); 
printf("APAKAH SUDAH BENAR	: 1.YA\n");
printf("				2.TIDAK\n");
printf ("PILIHAN ANDA 		: "); scanf("%s", &y9);
if (y9=='1') {
system("cls");
goto gopay;
}		
else {
system("cls");
goto jenisgopay;
}
//}
//else {
//system ("cls");
//gopaygagal();
//getch();
//system ("cls");{
//goto jenisgopay;}
//}
}
}
}
case '6' :{
keluar();
return 0;
	break;
}
}}

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int x, i;
float p, pp, n;
float a, b, c, d, e;
float k, t, ku, ut, ua;

char nama[50][50], nim[100][50], nilai[100];
float absen[100], tugas[100], kuis[100], uas[100], uts[100], akhir[100];


int wadaw(){
do{
cout << "<<<===PERSENTASE PENILAIAN===>>>\n";
cout << "================================\n";
cout << "Masukkan persentase kehadiran (%) : ";
	cin >> k;
cout << "Masukkan persentase tugas     (%) : ";
	cin >> t;
cout << "Masukkan persentase kuis      (%) : ";
	cin >> ku;
cout << "Masukkan persentase UTS       (%) : ";
	cin >> ut;
cout << "Masukkan persentase UAS       (%) : ";
	cin >> ua;
	
pp = k + t + ku + ut + ua;

if(pp != 100){
cout << "Persentase penilaian          (%) : " << pp << endl;
cout << "\n(***PERSENTASE PENILAIAN HARUS 100%***)\n";
cout << "---------------------------------------------------\n";}
if(pp == 100){
cout << "Persentase penilaian          (%) : " << pp << endl;}}
while(pp != 100);

cout << "---------------------------------------------------\n";

cout << "Masukkan total pertemuan  : ";
	cin >> p;
cout << "Masukkan jumlah mahasiswa : ";
	cin >> n;

cout << "---------------------------------------------------\n";

for(i = 1; i <= n; i++){
cout << "Nama 	    : ";
	fflush(stdin); 
	gets(nama[i]);
cout << "NIM 	    : ";
	cin >> nim[i];
cout << "Kehadiran   : ";
	cin >> absen[i];
cout << "Nilai tugas : ";
	cin >> tugas[i];
cout << "Nilai kuis  : ";
	cin >> kuis[i];
cout << "Nilai UTS   : ";
	cin >> uts[i];
cout << "Nilai UAS   : ";
	cin >> uas[i];
	
cout << "---------------------------------------------------\n";

a = ((absen[i] / p) * (k / 100) * 100);
b = ((tugas[i]) * (t / 100));
c = ((kuis[i]) * (ku / 100));
d = ((uts[i]) * (ut / 100));
e = ((uas[i]) * (ua / 100));

akhir[i] = a + b + c + d + e;
}}

int main(){
cout << "|***PROGRAM MENGHITUNG NILAI AKHIR***|\n";
cout << "|====================================|\n";
cout << "|Pilih mata kuliah:                  |\n";
cout << "|1. Pembangunan Karakter             |\n";
cout << "|2. Fisika                           |\n";
cout << "|====================================|\n";
cout << "Pilih mata kuliah: ";
	cin >> x;
cout << "---------------------------------------------------\n";

switch(x){
case 1:
wadaw();

cout << "\n===================================================================================================================\n";
cout << "|                                                PEMBANGUNAN KARAKTER                                             |\n";
cout << "|=================================================================================================================|";
cout << "\n|                                                       (2 SKS)                                                   |";
cout << "\n|=================================================================================================================|\n";
cout << "|No.|            Nama Mahasiswa            |   NIM   | Kehadiran | Tugas | Kuis | UTS | UAS | Nilai Akhir | Grade |\n";
cout << "|===|======================================|=========|===========|=======|======|=====|=====|=============|=======|\n";
for(i = 1; i <= n; i++){
cout << setiosflags(ios::left) << "|" << setw(3) << i;
cout << setiosflags(ios::left) << "|" << setw(38) << nama[i];
cout << setiosflags(ios::left) << "|" << setw(9) << nim[i];
cout << setiosflags(ios::left) << "|" << setw(11) << absen[i];
cout << setiosflags(ios::left) << "|" << setw(7) << tugas[i];
cout << setiosflags(ios::left) << "|" << setw(6) << kuis[i];
cout << setiosflags(ios::left) << "|" << setw(5) << uts[i];
cout << setiosflags(ios::left) << "|" << setw(5) << uas[i];
cout << setiosflags(ios::left) << "|" << setw(13) << akhir[i];

if(akhir[i] <= 100 && akhir[i] >= 80){
cout << setiosflags(ios::left) << "|" << setw(7) << "A" << "|";}
else if(akhir[i] <= 79 && akhir[i] >= 60){
cout << setiosflags(ios::left) << "|" << setw(7) << "B+" << "|";}
else if(akhir[i] <=59 && akhir[i] >= 55){
cout << setiosflags(ios::left) << "|" << setw(7) << "B" << "|";}
else if(akhir[i] <= 54 && akhir[i] >= 50){
cout << setiosflags(ios::left) << "|" << setw(7) << "C+" << "|";}
else if(akhir[i] <= 49 && akhir[i] >= 45){
cout << setiosflags(ios::left) << "|" << setw(7) << "C" << "|";}
else if(akhir[i] <= 44 && akhir[i] >= 40){
cout << setiosflags(ios::left) << "|" << setw(7) << "D+" << "|";}
else if(akhir[i] <= 39 && akhir[i] >= 35){
cout << setiosflags(ios::left) << "|" << setw(7) << "D" << "|";}
else {cout << setiosflags(ios::left) << "|" << setw(7) << "E" << "|";}
cout << endl;}
cout << "===================================================================================================================\n";
break;

case 2:
wadaw();

cout << "\n===================================================================================================================\n";
cout << "|                                                       FISIKA                                                    |\n";
cout << "|=================================================================================================================|";
cout << "\n|                                                       (3 SKS)                                                   |";
cout << "\n|=================================================================================================================|\n";
cout << "|No.|            Nama Mahasiswa            |   NIM   | Kehadiran | Tugas | Kuis | UTS | UAS | Nilai Akhir | Grade |\n";
cout << "|===|======================================|=========|===========|=======|======|=====|=====|=============|=======|\n";
for(i = 1; i <= n; i++){
cout << setiosflags(ios::left) << "|" << setw(3) << i;
cout << setiosflags(ios::left) << "|" << setw(38) << nama[i];
cout << setiosflags(ios::left) << "|" << setw(9) << nim[i];
cout << setiosflags(ios::left) << "|" << setw(11) << absen[i];
cout << setiosflags(ios::left) << "|" << setw(7) << tugas[i];
cout << setiosflags(ios::left) << "|" << setw(6) << kuis[i];
cout << setiosflags(ios::left) << "|" << setw(5) << uts[i];
cout << setiosflags(ios::left) << "|" << setw(5) << uas[i];
cout << setiosflags(ios::left) << "|" << setw(13) << akhir[i]; 
if(akhir[i] <= 100 && akhir[i] >= 80){
cout << setiosflags(ios::left) << "|" << setw(7) << "A" << "|";}
else if(akhir[i] <= 79 && akhir[i] >= 60){
cout << setiosflags(ios::left) << "|" << setw(7) << "B+" << "|";}
else if(akhir[i] <=59 && akhir[i] >= 55){
cout << setiosflags(ios::left) << "|" << setw(7) << "B" << "|";}
else if(akhir[i] <= 54 && akhir[i] >= 50){
cout << setiosflags(ios::left) << "|" << setw(7) << "C+" << "|";}
else if(akhir[i] <= 49 && akhir[i] >= 45){
cout << setiosflags(ios::left) << "|" << setw(7) << "C" << "|";}
else if(akhir[i] <= 44 && akhir[i] >= 40){
cout << setiosflags(ios::left) << "|" << setw(7) << "D+" << "|";}
else if(akhir[i] <= 39 && akhir[i] >= 35){
cout << setiosflags(ios::left) << "|" << setw(7) << "D" << "|";}
else {cout << setiosflags(ios::left) << "|" << setw(7) << "E" << "|";}
cout << endl;}
cout << "===================================================================================================================\n";
break;

default: cout << "(***TIDAK ADA MATA KULIAH YANG DIPILIH***)";
}
}

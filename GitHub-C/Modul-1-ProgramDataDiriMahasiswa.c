#include <stdio.h>

int main () {
	
	char nama[30];
	char NIM[20];
	char kelas[5];
	char alamat[30];
	char nohp[20];
    int tanggal, bulan, tahun, umur;
    int selisih, hari1, hari2, hari, umurBulan, umurTahun;
	
	//Inputan
	printf("Nama : ","\n");
	fgets(nama, 30,stdin);
	
	printf("NIM : ","\n");
	fgets(NIM, 20,stdin);
	
	printf("Kelas : ","\n");
	fgets(kelas, 5,stdin);
	
	printf("Alamat : ","\n");
	fgets(alamat, 30,stdin);
	
	printf("No Hp : ","\n");
	fgets(nohp, 20, stdin);	
	
    printf("Masukkan tanggal lahir anda : ","\n");
    scanf("%d %d %d", &tanggal, &bulan, &tahun);
    hari1=tanggal + bulan*31 + tahun*365;
    hari2=16 + 2*31 + 2021*365;
    selisih=hari2-hari1;
    umurTahun=selisih/365; 

	
	//Output
	
	printf("-- Terimkasih -- \n");
	printf("Nama : %s ",nama,"\n");
	printf("NIM : %s ",NIM,"\n");
	printf("Kelas : %s ",kelas,"\n");
	printf("No Hp : %s ",nohp,"\n");
	printf("Tanggal lahir : %d %d %d", tanggal, bulan, tahun,"\n");
	
	printf("\nUmur : %d", umurTahun);
	 
	return 0;
}


#include <stdio.h>
#define maks 100
 
int main()
{
      int matriks1[maks][maks], matriks2[maks][maks];
      int bil, i,j, x,y, a,b;
      
      printf("=== Perkalian 2 Matriks Versi Tugas===\n");
      printf("Kolom Matriks 1 = Baris Matriks 2 \n\n");
      
	//Input Matriks 1
	  printf("Masukkan ukuran matriks 1\n");
      printf("Baris : ");
      scanf("%d",&x);
   printf("Kolom : ");
   scanf("%d",&y);      

      printf("\n\nMatriks Pertama : \n");
      for (i=0;i<x;i++){
          for (j=0;j<y;j++){
              printf("Matriks [%d][%d] : ",i,j);
              scanf("%d",&matriks1[i][j]);    
          }
      } 
	//Input Matriks 2
      printf("\n\nMasukkan ukuran matriks 2\n");
      printf("Baris : %d \n",y);
   printf("Kolom : ");
   scanf("%d",&b);      

      printf("\n\nMatriks Kedua : \n");
      a=y;
      for (i=0;i<a;i++){
          for (j=0;j<b;j++){
              printf("Matriks [%d][%d] : ",i,j);
              scanf("%d",&matriks2[i][j]) ;               
          }
      }
	  
      //jumlah_matriks(x,matriks1, matriks2);
      kali_matriks(x,a,b, matriks1, matriks2);
      getch();
      return 0;
}

int kali_matriks(int x, int y, int z, int matriks_1[maks][maks] , int matriks_2[maks][maks])
{
	//Perkalian Matriks
      int i, j, k, matriks_3[maks][maks];
      printf("\n\nPerkalian Matriks : \n");
      for (i=0;i<x;i++)
   {
          for (j=0;j<z;j++)
    {              
              matriks_3[i][j] = 0;
              for (k=0;k<y;k++)
              {
                   matriks_3[i][j] =matriks_3[i][j]+(matriks_1[i][k] * matriks_2[k][j]);
              }
              printf("%d", matriks_3[i][j]);            
              if (j == (z-1)) printf("\n");
              else printf(" ");
          }
      }
      printf("\n == Terima Kasih :) ==");
}

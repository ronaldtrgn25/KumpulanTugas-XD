#include <stdio.h>
 
int main()
{
    int batas, deret[100], total=0,i=0;
    printf("Masukan jumlah deret : ");
    scanf("%d", &batas);
    printf("Deret fibonaci : ");
        do{
        if(i<2){
            deret[i]=1;
        }
        else{
            deret[i]=deret[i-2]+deret[i-1];
        }
        total= total + deret[i];
        printf("%d ", deret[i]);    
        i++;
    }while(i<batas);
    printf("\nTotal deret : %d", total);
    return 0;
}


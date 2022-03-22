//Nama File   :   CekBulan.c
//Deskripsi   :   Menampilkan nama bulan
//Pembuat     :   Ahmad Reihan Alavi - 24060121140041
//Tanggal     :   Senin, 14-03-2022 11:48 WIB

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int b;      //  Angka dalam bulan

//Algoritma
    printf("Masukkan angka : ");         //  Input
    scanf("%d", &b);                    //  Input
    
    switch (b) {
        case 1:
            printf("Januari");  //  Output
            break;
        case 2:
            printf("Februari");  //  Output
            break;
        case 3:
            printf("Maret");  //  Output
            break;
        case 4:
            printf("April");  //  Output
            break;
        case 5:
            printf("Mei");  //  Output
            break;
        case 6:
            printf("Juni");  //  Output
            break;
        case 7:
            printf("Juli");  //  Output
            break;
        case 8:
            printf("Agustus");  //  Output
            break;
        case 9:
            printf("September");  //  Output
            break;
        case 10:
            printf("Oktober");  //  Output
            break;
        case 11:
            printf("November");  //  Output
            break;
        case 12:
            printf("Desember");  //  Output
            break;
        default:
            printf("Invalid");  //  Output
            break;
    }
    return 0;
}

//Nama File   :   CekHari.c
//Deskripsi   :   Menampilkan nama hari
//Pembuat     :   Ahmad Reihan Alavi - 24060121140041
//Tanggal     :   Senin, 14-03-2022 11:42 WIB

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int h;      //  Angka dalam hari

//Algoritma
    printf("Masukkan angka : ");    //  Input
    scanf("%d", &h);                //  Input
    
    switch (h) {
        case 1:
            printf("Senin");  //  Output
            break;
        case 2:
            printf("Selasa");  //  Output
            break;
        case 3:
            printf("Rabu");  //  Output
            break;
        case 4:
            printf("Kamis");  //  Output
            break;
        case 5:
            printf("Jumat");  //  Output
            break;
        case 6:
            printf("Sabtu");  //  Output
            break;
        case 7:
            printf("Minggu");  //  Output
            break;
        default:
            printf("Invalid");  //  Output
            break;
    }
    return 0;
}

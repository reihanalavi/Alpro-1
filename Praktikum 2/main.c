//Nama File   :   LuasBujurSangkar.c
//Deskripsi   :   Menghitung dan menampilkan luas bujur sangkar
//Pembuat     :   Ahmad Reihan Alavi - 24060121140041
//Tanggal     :   Senin, 07-03-2022 20:12 WIB

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int s;      //  Variabel Sisi
    float luas;   //  Variabel Luas

//Algoritma
    scanf("%d", &s);                        //  Input
    luas = s * s;                           //  Penghitungan luas, dengan memorisasi
    printf("Luas Bujur Sangkar : %.2f", luas);  //  Output
    return 0;
}

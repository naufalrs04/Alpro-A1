/* Nama File    		: JumPrima(Fungsi).C */
/* Deskripsi    		: Menampilkan bilangan prima yang dapat dibentuk dari bilangan integer N sembarang > 0 dan menampilkan juga hasil penjumlahan dari elemen bilangan prima yang terbentuk dari deret tersebut */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 26 Maret 2023 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool IsPrima(int N) {

    /* Kamus Lokal */
    int i ;

    /* Algoritma */
    if (N < 2) {
        return false ;
    }
    for (i=2; i<N; i++ ) {
        if (N%i == 0) {
            return false ;
        }
    }
    return true ;    
}

int main () {

    /* Kamus */
    int N, i, JumTotal ;

    /* Algoritma */
    printf ("Nilai N = ") ;
    scanf ("%d", &N) ;

    printf ("Hasil : ") ;

    JumTotal = 0 ;
    if (N > 1) {
        for (i=1; i<=N; i++) {
            if (IsPrima (i)) {
                if (i == 2) {
                    printf ("%d", i) ;
                }
                else {
                    printf (" + %d", i) ;
                }
                JumTotal = JumTotal + i ;
            }
        }
        printf (" dengan Jumlahan Deret Bilangannya adalah Sn = %d", JumTotal) ;
    }
    else {
        printf ("Tidak ada bilangan Prima, sehingga jumlahnya Sn = 0") ;
    }

    return 0 ;
}
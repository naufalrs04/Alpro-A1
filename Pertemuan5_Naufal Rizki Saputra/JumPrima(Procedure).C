/* Nama File    		: JumPrima(Procedure).C */
/* Deskripsi    		: Menampilkan bilangan prima yang dapat dibentuk dari bilangan integer N sembarang > 0 dan menampilkan juga hasil penjumlahan dari elemen bilangan prima yang terbentuk dari deret tersebut */
/* Pembuat      		: Naufal Rizki Saputra - 24060122120011 */
/* Tanggal Pembuatan	: 26 Maret 2023 */	

#include<stdio.h>
#include<stdlib.h>

void JumPrima(int N) {

    /* Kamus Lokal */	
    int i, j, JumFakt, JumTotal ;

    /* Algoritma */	
    printf ("Hasil : ") ;

    JumTotal = 0 ;
    if (N > 1) {
        for (i=1; i<=N; i++) {
            JumFakt = 0 ;
            for (j=1 ; j<=i; j++) {
                if (i%j == 0) {
                    JumFakt = JumFakt + 1 ;
                }
            }

            if (JumFakt == 2) {
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
}

int main () {

    /* Kamus */	
    int N ;

    /* Algoritma */
    printf ("Nilai N = ") ;
    scanf ("%d", &N) ;

    JumPrima(N);

    return 0 ;
}
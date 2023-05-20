/* Nama File    		: SelectionSortDescending.c */
/* Deskripsi    		: Mengurutkan array secara descending dengan proses Selection Sort */
/* Pembuat      		: 24060122120011 */
/*Tanggal Pembuatan		: 20 Mei 2023 */	

#include <stdlib.h>
#include <stdio.h>

void SelectionSort (int T[], int N) {
    int i, j, maksimal, penampung;
    for (i = 0; i < N-1; i++) {
        maksimal = i;
        for (j = i + 1; j < N; j++) {
            if (T[j] > T[maksimal]) {
                maksimal = j;
            }
        }
        if (maksimal!= i) {
            penampung = T[i];
            T[i] = T[maksimal];
            T[maksimal] = penampung;
        }
    }
}

int main() {
    int i,N ;

    //input banyaknya data (N)
    printf ("Banyak data (N) : ") ;
    scanf ("%d", &N) ;
    
    //input elemen - elemen dalam data
    int T[N] ;
    for (i=0 ; i<N ;i++) {
        printf ("data ke - %d = ", i+1) ;
        scanf ("%d", &T[i]) ;
    }

    //Cetak Data sebelum disorting
    printf ("\nData sebelum disorting : ") ;
    for(i=0 ; i<N ;i++) {
        printf ("%d  ", T[i]) ;
    }

    //Proses
    SelectionSort(T,N);

    //Cetak Data setelah disorting (Descending)
    printf ("\nData setelah disorting : ") ;
    for(i=0 ; i<N ;i++) {
        printf ("%d  ", T[i]) ;
    }
    return 0 ;
}

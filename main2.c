// /*
// *   PODSUMOWANIE DZIAŁU 16 Z KSIĄŻKI "JĘZYK C - SZKOŁA PROGRAMOWANIA"
// *   03.03.2022r. Bartosz Wroński
// */

// //  ZADANIE 6
// #include <stdio.h>
// #include <stdlib.h>
// #include "makra2.h"



// int main()
// {
//     float zmienna;
//     osoba posortowane[5];
//     osoba tab[5]={
//         {"kryhty", "nvnvdfd"},
//         {"fhfghfgh", "lkjh"},
//         {"dhdfhdhrd", "qwert"},
//         {"yrtyrydry", "bvcbgf"},
//         {"rdydryrdy", "bvnbn"}
//         };


//     puts("Dzialam.");
   
//     qsort(tab,5, sizeof(osoba), porownanie_imion);

//     for(int i=0; i<5; i++)
//         printf("Imie: %s, nazwisko: %s. \n", tab[i].imie, tab[i].nazwisko);
    
//     return 0;
// }


//  ZADANIE 7

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void pokaz_tablice(const double tab[], int n);
double * nowa_tablica(int n, ...);

int main()
{
    double *w1;
    double *w2;

    w1=nowa_tablica(5, 1.2, 2.3, 3.4, 5.6, 7.8);
    w2=nowa_tablica(4, 100.0, 20.00, 8.08, -1890.0);
    pokaz_tablice(w1,5);
    pokaz_tablice(w2,4);

    free(w1);
    free(w2);
    return 0;
}


void pokaz_tablice(const double tab[], int n)
{
    puts("Tablica wyglada nastepujaco: ");

    for(int i=0; i<n; i++)
    {
        printf("%.2lf, ", *(tab+i));
    }
    putchar('\n');
}



double * nowa_tablica(int n, ...)
{
    double *nowa_tab= (double *) malloc(n*sizeof(double));
    va_list ap;
    va_start(ap, n);

    for(int i=0; i<n; i++)
    {
        *(nowa_tab+i)=va_arg(ap, double);
    }

    return nowa_tab;
}

// PLIK NAGŁÓWKOWY ZAWIERAJĄCY MAKRA WYKORZYSTYWANE
// W NASTĘPNYCH PROGRAMACH.

#ifndef MAKRA_H
#define MAKRA_H

#include <string.h>

#define ROZMIAR 40

typedef struct OSOBA
{
    char imie[ROZMIAR];
    char nazwisko[ROZMIAR];
}osoba;

int porownanie_imion(const void *a, const void *b)
{
    const osoba *x=a;
    const osoba *y=b;

    if(strcmp(x->imie, y->imie)==1)
        return 1;
    else if(strcmp(x->imie, y->imie)==0)
        return 0;
    else
        return -1;
}


#endif

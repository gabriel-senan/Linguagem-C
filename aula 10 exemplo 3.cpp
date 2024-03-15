#include <stdio.h>
#define TAM_MAX 10

    int i;
    float vetReais[TAM_MAX];

main(){
    for (i=0; i<TAM_MAX; i++)
    vetReais[i]=TAM_MAX - i;     // inseri 10, 9, 8, 7... 1
    for (i=0; i<TAM_MAX; i++)
    printf("%0.f",vetReais[i]);
}
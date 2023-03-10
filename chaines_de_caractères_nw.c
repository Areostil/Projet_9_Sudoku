#include <stdio.h>

int gd_atoi(char *str){
    int i;
    i = 0;
    int *get;
    while (i <  10){
        *get == *str - 48;
        printf("Voici les caractères; %d \n", *get);
        i++;
    }
    return(*get);
}

int main(void){
    int caracter = gd_atoi("0123456789");
    printf("Voici les caractères; %d \n", caracter);
}



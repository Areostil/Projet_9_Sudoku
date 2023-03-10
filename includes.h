#ifndef INCLUDES_H
#define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct my_struct
{
    int hours;
    int minutes;
}   type_struct;

typedef struct my_lst
{
    int nbr;
    struct my_lst *next;
}   type_lst;


#endif


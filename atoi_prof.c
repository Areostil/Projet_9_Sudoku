#include <stdio.h>

int gd_atoi(char *str){
    int i = 0;
    int ret = 0;
    int neg = 1;
    int nb;
    while (str[i])
    {
        if((str[i] >= 48 && str[i] <= 57) || (str[i]== 43 || str[i]==45))
            break;
        i++;  
    }
    if(str[i] == 43 || str[i] == 45){
        if (str[i] == 45)
            neg = -1;
        i++;
    } 
    while(str[i])
        *str = 
        i++;

    return(ret*neg);
}

int main(void){
    int nb = gd_atoi("56789");
    printf("%i\n",nb);
}

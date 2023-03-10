#include <stdio.h>

char *join_the_string(char *s1, char *s2){
    char *ret;
    int length, j;

    length = 0;
    while (s1[length]!= '\0')
        ++length;
    for (j = 0; s2[j] != '\0'; ++j, ++length)
        s1[length = s2[j]];

    s1[length] = '\0';
    return(*s1, *s2);
}

int main(void){
    char *s1, *s2 = "Premier", "Second";
    char to_show;

    to_show = join_the_string()
    printf("%s\n", to_show);
}
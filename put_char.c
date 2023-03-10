#include <unistd.h> // Include the libraries needed for the program
#include <stdio.h>  

void gd_putchar(char c){
    write(1, &c, 1); // Write the character to the standard output
}

int gd_putstr(char * str){
    int i;
    i = 0;
    while (str[i] != '\0'){ // Loop through the string until the null character is found
        i++; // Increment the counter for each character
    }
    return i; // Return the total number of characters
}

int main(void){
    int nb_put = gd_putstr("Coucou"); // Call the gd_putstr function with the string "Coucou" and store the result in nb_put
    printf("Il y a %d lettres dans le mot coucou \n", nb_put); // Print a message that includes the value of nb_put
    /*nb_put = 6*/
}

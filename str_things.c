#include <stdlib.h>
#include <stdio.h>

// Define a function to calculate the length of a string
int gd_strlen(const char *str){
    int len = 0;

    // Loop through the string until the null character is found, incrementing a counter
    while (str[len])
        len++;
    return(len); // Return the final value of the counter as the length of the string
}

// Define a function to create a copy of a string on the heap
int *gd_strdup(const char *src){
    int len_src;
    char *ret;

    // Calculate the length of the source string
    len_src = gd_strlen(src);

    // Allocate memory on the heap for the copy of the string
    ret = (char *)malloc(sizeof(char) * (len_src + 1));
    if(ret == NULL)
        return NULL;
    
    // Copy the characters from the source string to the new string
    len_src = 0;
    while (src[len_src])
    {
        ret[len_src] = src[len_src];
        len_src++;
    }
    ret[len_src] = '\0';

    return(ret); // Return a pointer to the new string on the heap
}

// Define the main function
int main(void){
    char *str = "Hello World"; // Define a pointer to a string literal
    char *dup; // Declare a variable to store the result of the gd_strdup function

    dup = gd_strdup(str); // Call the gd_strdup function with the source string and store the result in dup
    printf("$%s\n", dup); // Print the copied string to the console

    return 0; // Indicate successful completion of the program
}

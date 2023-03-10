#include <stdlib.h>
#include <stdio.h>

// Function to concatenate two strings
char *join_the_string(char const *s1, char const *s2){
    char *ret;
    int len_s1 = 0;
    int len_s2 = 0;

    // Calculate the length of the first string
    while (s1[len_s1] != '\0')
        len_s1++;

    // Calculate the length of the second string and add it to the length of the first string
    while (s2[len_s2] != '\0')
    {
        len_s2++;
        len_s1++;
    }
    len_s1++; // Add one for the null terminator

    // Allocate memory for the concatenated string
    ret = (char*)malloc(sizeof(char)*(len_s1 + 1));

    // Copy the first string to the new string
    len_s1 = 0;
    while (s1[len_s1])
    {
        ret[len_s1] = s1[len_s1];
        len_s1++;
    }

    // Concatenate the second string to the end of the new string
    while (s2[len_s2] != '\0')
    {
        ret[len_s2] = s2[len_s2];
        len_s2++;
        len_s1++;
    }

    // Add the null terminator to the end of the new string
    ret[len_s2] = '\0';

    // Return a pointer to the new string
    return(ret);
}

int main(void){
    // Declare a pointer to hold the concatenated string
    char *sentence;

    // Call the function to concatenate the two strings and store the result in sentence
    sentence = join_the_string("Hello ", "world");

    // Print the concatenated string
    printf("%s\n", sentence); // Output: Hello world

    // Free the memory allocated for the new string
    if(sentence)
        free(sentence);

    // Return 0 to indicate successful execution of the program
    return 0;
}

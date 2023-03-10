#include "includes.h" // include necessary header files
#define INT_ARRAY_COUNT 5 // define a constant integer

type_lst *add_lst(type_lst *lst, type_lst *new_lst) {
    int z = 0;
    while (z<k) // loop through an integer k, but k is not defined here
    {
        
        z++;
    }
    /*
    lst->nb = 1
    lst->next=NULL

    new_lst->nb=2
    new_lst->next=NULL

    lst->next = new_lst
    */
}

int main(void){
    int k = 5; // declare and initialize an integer k
    int array_int[k]={5,4,3,2,1}; // declare and initialize an array of integers with length k
    int i = 0; // declare and initialize an integer i
    int j = 0; // declare and initialize an integer j

    // define a function IntComparator which takes two constant void pointers as input and returns an integer
    int IntComparator(void const *fst, void const *scd){
        int firstInt = * (const int *) fst; // dereference the first pointer and cast it to a constant integer pointer
        int secondtInt = * (const int *) scd; // dereference the second pointer and cast it to a constant integer pointer
        return firstInt - secondtInt; // return the difference between the two integers
    }

    qsort(array_int, INT_ARRAY_COUNT, sizeof(int), IntComparator); // sort the array using the IntComparator function
    
    // declare and initialize five pointers of type type_lst, and allocate memory for each of them
    type_lst *nb1;
    type_lst *nb2;
    type_lst *nb3;
    type_lst *nb4;
    type_lst *nb5;
    
    nb1 = (type_lst *)malloc(sizeof(nb1));
    nb2 = (type_lst *)malloc(sizeof(nb2));
    nb3 = (type_lst *)malloc(sizeof(nb3));
    nb4 = (type_lst *)malloc(sizeof(nb4));
    nb5 = (type_lst *)malloc(sizeof(nb5));
    
    // set the value of each pointer to the corresponding integer in the sorted array
    nb1->nbr = array_int[0];
    nb2->nbr = array_int[1];
    nb3->nbr = array_int[2];
    nb4->nbr = array_int[3];
    nb5->nbr = array_int[4];

    // create a circular linked list by linking the pointers together
    nb1->next = nb2;
    nb2->next = nb3;
    nb3->next = nb4;
    nb4->next = nb5;
    nb5->next = nb1;

    // loop through the sorted array and print out each integer
    while (i < 5)
    {
        printf("%i\n", array_int[i]);
        i++;
    }

    // loop through the linked list and print out each integer
    while (j != 5)
    {
        printf("Le nombre = %i\n", nb1->nbr);
        nb1 = nb1->next;
        j++;
    }
    
    // free memory allocated for the linked list
    free (nb1);
    free (nb2);
    free (nb3);
    free (nb4);
    free (nb5);
}

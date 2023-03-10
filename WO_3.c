#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

// Function to read a Sudoku board from a file and store it in a 2D array
int **read_sudoku_board(char *filename, int rows, int columns){
    char buf[rows * columns + rows]; // buffer to read from file
    int i = 0, c = 0;
    int j = 0;
    int z = 0;

    // Open file for reading
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        printf("Error opening file\n");
        exit(1);
    }

    // Read contents of file into buffer
    int nb_read = read(fd, buf, rows * columns + rows);
    if (nb_read == -1) {
        printf("Error reading file\n");
        exit(1);
    }
    buf[nb_read] = '\0';

    // Allocate memory for 2D array
    int **f_array = (int **)malloc(sizeof(int*) * rows);
    while (i < rows){
        f_array[i] = (int *)malloc(sizeof(int) * columns);
        i++;
    }

    // Parse buffer and store values in 2D array
    while(buf[c] != '\0'){
        if (buf[c] == '\n'){
            c++;
            j = 0;
            z++;
        }    
        f_array[z][j] = buf[c] - 48;
        j++;
        c++;
    }

    // Close file
    close(fd);

    // Return 2D array
    return f_array;
}
void sudo_resolver(int rows, int columns){
    int *i = 0;
    int count = 0;
    while (count < 89){
        count++;
        if (columns[i] == 0){
            if (rows[i+1] == 1 || rows[i+2] == 1 || rows[i+3] == 1 || rows[i+4] == 1 || rows[i+5] == 1 || rows[i+6] == 1 || rows[i+8] == 1 || rows[i+9] == 1)
                if(columns[i+1] == 1 || columns[i+2] == 1 || columns[i+3] == 1 || columns[i+4] == 1 || columns[i+5] == 1 || columns[i+6] == 1 || columns[i+8] == 1 || columns[i+9] == 1)
                    columns[i] = 1;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 2 || rows[i+2] == 2 || rows[i+3] == 2 || rows[i+4] == 2 || rows[i+5] == 2 || rows[i+6] == 2 || rows[i+8] == 2 || rows[i+9] == 2)
                if(columns[i+1] == 2 || columns[i+2] == 2 || columns[i+3] == 2 || columns[i+4] == 2 || columns[i+5] == 2 || columns[i+6] == 2 || columns[i+8] == 2 || columns[i+9] == 2)
                    columns[i] = 2;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 3 || rows[i+2] == 3 || rows[i+3] == 3 || rows[i+4] == 3 || rows[i+5] == 3 || rows[i+6] == 3 || rows[i+8] == 3 || rows[i+9] == 3)
                if(columns[i+1] == 3 || columns[i+2] == 3 || columns[i+3] == 3 || columns[i+4] == 3 || columns[i+5] == 3 || columns[i+6] == 3 || columns[i+8] == 3 || columns[i+9] == 3)
                    columns[i] = 3;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 4 || rows[i+2] == 4 || rows[i+3] == 4 || rows[i+4] == 4 || rows[i+5] == 4 || rows[i+6] == 4 || rows[i+8] == 4 || rows[i+9] == 4)
                if(columns[i+1] == 4 || columns[i+2] == 4 || columns[i+3] == 4 || columns[i+4] == 4 || columns[i+5] == 4 || columns[i+6] == 4 || columns[i+8] == 4 || columns[i+9] == 4)
                    columns[i] = 4;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 5 || rows[i+2] == 5 || rows[i+3] == 5 || rows[i+4] == 5 || rows[i+5] == 5 || rows[i+6] == 5 || rows[i+8] == 5 || rows[i+9] == 5)
                if(columns[i+1] == 5 || columns[i+2] == 5 || columns[i+3] == 5 || columns[i+4] == 5 || columns[i+5] == 5 || columns[i+6] == 5 || columns[i+8] == 5 || columns[i+9] == 5)
                    columns[i] = 5;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 6 || rows[i+2] == 6 || rows[i+3] == 6 || rows[i+4] == 6 || rows[i+5] == 6 || rows[i+6] == 6 || rows[i+8] == 6 || rows[i+9] == 6)
                if(columns[i+1] == 6 || columns[i+2] == 6 || columns[i+3] == 6 || columns[i+4] == 6 || columns[i+5] == 6 || columns[i+6] == 6 || columns[i+8] == 6 || columns[i+9] == 6)
                    columns[i] = 6;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 7 || rows[i+2] == 7 || rows[i+3] == 7 || rows[i+4] == 7 || rows[i+5] == 7 || rows[i+6] == 7 || rows[i+8] == 7 || rows[i+9] == 7)
                if(columns[i+1] == 7 || columns[i+2] == 7 || columns[i+3] == 7 || columns[i+4] == 7 || columns[i+5] == 7 || columns[i+6] == 7 || columns[i+8] == 7 || columns[i+9] == 7)
                    columns[i] = 7;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 8 || rows[i+2] == 8 || rows[i+3] == 8 || rows[i+4] == 8 || rows[i+5] == 8 || rows[i+6] == 8 || rows[i+8] == 8 || rows[i+9] == 8)
                if(columns[i+1] == 8 || columns[i+2] == 8 || columns[i+3] == 8 || columns[i+4] == 8 || columns[i+5] == 8 || columns[i+6] == 8 || columns[i+8] == 8 || columns[i+9] == 8)
                    columns[i] = 8;
        }
        if (columns[i] == 0){
            if (rows[i+1] == 9 || rows[i+2] == 9 || rows[i+3] == 9 || rows[i+4] == 9 || rows[i+5] == 9 || rows[i+6] == 9 || rows[i+8] == 9 || rows[i+9] == 9)
                if(columns[i+1] == 9 || columns[i+2] == 9 || columns[i+3] == 9 || columns[i+4] == 9 || columns[i+5] == 9 || columns[i+6] == 9 || columns[i+8] == 9 || columns[i+9] == 9)
                    columns[i] = 9;
        }
        i++;
        if (columns[i] == 9){
            i = 0;
            rows ++;
        }
        printf("%i ", columns[i]);
        printf("%i ", rows[i]);
    }
}
int main(int argc, char **argv){
    int rows = 9;
    int columns = 9;

    // Read Sudoku board from file
    int **f_array = read_sudoku_board(argv[argc-1], rows, columns);

    // Print Sudoku board
    int z = 0;
    int j = 0;
    while (z < rows)
    {
        while (j < columns)
        {
            printf("%i ", f_array[z][j]);
            j++;
        }
        printf("\n");
        j = 0;
        z++;
    }
    sudo_resolver(rows, columns);
    // Free memory allocated for 2D array
    int a = 0;
    while (a < rows) {
        free(f_array[a]);
        a++;
    }
    free(f_array);
    return 0;
}
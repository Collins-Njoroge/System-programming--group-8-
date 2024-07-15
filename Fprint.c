#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    
    // Open file for writing
    file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write formatted data to file
    int age = 25;
    fprintf(file, "Name: %s\nAge: %d\n", "John Doe", age);

    // Close the file
    fclose(file);

    return 0;
}

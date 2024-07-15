#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open file for reading
    file = fopen("example.txt", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read data from file
    size_t bytesRead = fread(buffer, sizeof(char), 100, file);
    if (bytesRead < 100) {
        if (feof(file)) {
            printf("End of file reached.\n");
        } else if (ferror(file)) {
            perror("Error reading file");
        }
    }

    // Close the file
    fclose(file);

    // Print the read data
    buffer[bytesRead] = '\0'; // Null-terminate the string
    printf("Read data: %s\n", buffer);

    return 0;
}

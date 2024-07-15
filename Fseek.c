#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[20];

    // Open file for reading
    file = fopen("example.txt", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Move the file pointer to the 10th byte from the beginning
    if (fseek(file, 10, SEEK_SET) != 0) {
        perror("Error seeking in file");
        fclose(file);
        return 1;
    }

    // Read data from the new file position
    size_t bytesRead = fread(buffer, sizeof(char), 10, file);
    if (bytesRead < 10) {
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

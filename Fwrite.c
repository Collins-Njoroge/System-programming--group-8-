#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[] = "This is an example of fwrite.";

    // Open file for writing
    file = fopen("example.txt", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write data to file
    size_t bytesWritten = fwrite(data, sizeof(char), sizeof(data) - 1, file);
    if (bytesWritten < sizeof(data) - 1) {
        perror("Error writing to file");
    }

    // Close the file
    fclose(file);

    return 0;
}

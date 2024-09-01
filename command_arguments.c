#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if there are any command line arguments
    if (argc < 2) {
        printf("No command line arguments provided.\n");
        return 1; // Exit with an error code
    }

    // Print each command line argument
    printf("Command line arguments:\n");
    for (int i = 1; i < argc; i++) { // Start from 1 to skip the program name
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0; // Exit successfully
}
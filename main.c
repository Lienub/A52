#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Reverse a text
 * @param str
*/
int reverse_str(char * str){
    char * buffer = malloc(sizeof(str));
    strcpy(buffer, str);
    int size = strlen(buffer);
    for (size_t i = 0; i < size/2; i++){
        char tmp = buffer[i];
        buffer[i] = buffer[size-1-i];
        buffer[size-1-i] = tmp;
    }
    printf("Reverse string of %s is %s\n", str, buffer);
    return EXIT_SUCCESS;
}

int main(int argc, char ** argv) {
    if (argc < 2) {
        printf("Usage: %s <input string>\n", argv[0]);
        exit(1);
    }
    if (!reverse_str(argv[1])) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
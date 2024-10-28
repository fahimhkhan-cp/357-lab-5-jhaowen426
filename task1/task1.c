#include "task1.h"
#include <ctype.h>

/*
Write the function, str_lower, to take two arguments: the original input string and a buffer to store the lowercase version of the input string. The buffer is needed because an array (a string) declared locally to str_lower would be stored on the run-time stack and, thus, could not be safely returned. Alternately, one could dynamically allocate the buffer, but that comes later. Write the str_lower function to copy into the buffer the lowercase version of each character in the original string. You should use tolower from ctype.h (#include this header file) to convert a character to lowercase.
*/
void str_lower(char *orig, char *copy) {
    int i = 0;
    // get len of input string
    while (orig[i] != '\0') {
        i++;
    }

    // copy each lowercased letter from input to buffer
    for (int j = 0; j <= i; j++) {
        copy[j] = tolower(orig[j]);
    }

    // terminate end of buffer
    copy[i + 1] = '\0';
}


/*
Write the function, str_lower_mutate. This function takes a single string argument and changes the characters to lowercase by modifying the contents of the string itself. As such, the "result" is the original argument. This style is not uncommon in C since strings are mutable, but it can lead to unintended side-effects when there are multiple aliases to the same string.
*/
void str_lower_mutate(char *orig) {
    int i = 0;
    while (orig[i] != '\0') {
        orig[i] = tolower(orig[i]);
        i++;
    }
}
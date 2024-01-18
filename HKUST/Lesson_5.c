#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
    // This variable stores the file pointer
    FILE *fp;

    // This variable stores the name read from the file
    char info[100];
    strcat(info, "A lot of info");

    // Open the text file 'name.txt' for reading
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
    printf("Failed to open the file! ");
    return 0;
    }

    // Read a string into the variable name
    fprintf(fp, "%s", info);

    // Close the file after reading
    fclose(fp);

    // Print the content out
    //printf("The name is %s.", name);
}
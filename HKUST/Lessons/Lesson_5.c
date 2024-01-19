#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// This function computes the value of n factorial recursively.
int factorial(int n)
{
    int result;

    if (n == 1) {
        return 1;
    }
    else {
        result = n * factorial(n - 1);
        return result;
    }
}

int main()
{
    int n;

    // Ask for a number
    printf("Please enter a number: ");
    scanf("%d", &n);

    // Print out the value of the factorial of n
    printf("The value of %d! is %d.\n", n, factorial(n)); 
}



/*
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
*/
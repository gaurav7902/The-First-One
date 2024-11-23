#include <stdio.h>
int main()
{
    FILE *file;
    long position;
    // Open the file in read mode
    file = fopen("example.txt", "w+");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    char ch;
    // Read a few characters
    for (int i = 0; i < 3; i++)
    {
        fputc('a', file);
    }
    fseek(file, 0, SEEK_SET);
    for (int i = 0; i < 3; i++)
    {
        ch = fgetc(file); // w+ must to read and write both
        printf("%c", ch);
    }
    rewind(file); // this can be also used
}

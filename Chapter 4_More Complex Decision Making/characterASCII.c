#include <stdio.h>

int main()
{
    char ch;

    printf("\nEnter the character: ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90)
        printf("Entered character is capital letter.\n");
    if(ch >= 97 && ch <= 122)
        printf("Entered character is small letter.\n");
    if(ch >= 48 && ch <= 57)
        printf("Entered character is a digit.\n");
    if((ch >= 0 && ch < 48) || (ch > 58 && ch <65) || (ch > 90 && ch < 97) || (ch > 122 & ch < 128))
        printf("Entered character is special symbol.\n");

    return 0;
}
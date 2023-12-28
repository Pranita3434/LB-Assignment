#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        for (char c = ch; c <= 'Z'; ++c)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (char c = ch; c >= 'a'; --c)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter The Character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}

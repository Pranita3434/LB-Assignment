#include <stdio.h>

void DisplaySchedule(char chDiv)
{

    if ((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7 AM\n");
    }
    else if ((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if ((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if ((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter The Character : ");
    scanf(" %c", &cValue); // Added a space before %c to consume any leading whitespaces

    DisplaySchedule(cValue);

    return 0;
}

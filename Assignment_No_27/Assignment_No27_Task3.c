#include<stdio.h>

void strtoggler(char *str)
{
    while(*str != '\0') 
    {
        if (*str >= 'a' && *str <= 'z') 
        {
            *str = *str - 32; 
        } 
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32; 
        }
        str++;
    }


}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    strtoggler(arr);

    printf("Modified string is %s", arr);

    return 0;

}
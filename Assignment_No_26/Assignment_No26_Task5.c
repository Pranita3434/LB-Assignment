#include<stdio.h>

void Reverse(char *str)
{
    int ilen = 0;
    
    while (str[ilen] != '\0') 
    {
        ilen++;
    }

  
    for (int i = ilen - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}
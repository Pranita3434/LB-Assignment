#include<stdio.h>

void StrRevX(char *str)
{
    int length = strlen(str);

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']", &arr);



    StrRevX(arr);

    printf("Modified String is %s",arr);
   
    return 0;
}


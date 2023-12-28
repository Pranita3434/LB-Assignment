#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter The name of file that u want to open : \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To Open %s File \n", FileName);
    }
    else
    {
        printf("File Opened Successfully");
        close(fd);
    }

    return 0;

}
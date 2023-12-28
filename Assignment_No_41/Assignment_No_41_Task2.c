#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter The name of file that u want to Create : \n");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);

    if(fd == -1)
    {
        printf("Unable To Open %s File \n", FileName);
    }
    else
    {
        printf("File Create Successfully");
        close(fd);
    }

    return 0;

}
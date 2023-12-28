#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter The name of file that u want to Read the data : \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To Open %s File \n", FileName);
    }
    else
    {
        iRet = read(fd,Arr,22);
        printf("File Size Is %d bytes ",iRet);
        close(fd);
    }

    return 0;

}
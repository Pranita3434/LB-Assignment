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
        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            printf("%s",Arr);      
        }

        close(fd);
    }

    return 0;

}
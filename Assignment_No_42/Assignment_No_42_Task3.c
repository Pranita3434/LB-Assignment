#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#define BUFFERSIZE 1024

int CountWhite(char FName[])
{
    int CountWhi = 0;
    int fd = 0;
    int iRet = 0;
    int i = 0;

    char Arr[BUFFERSIZE] = {'\0'};

    fd = open(FName, O_RDWR);
 
    if(fd == -1)
    {
        printf("Unable to open %s file\n",FName);
    }    
    else
    {

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iRet; i++)
            {
                if(Arr[i] == ' ')
                {
                    CountWhi++;
                }
            }
        }
        close(fd);
    }
    return CountWhi;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter File Name: ");
    scanf("%s", FileName);

    iRet = CountWhite(FileName);

    printf("Number Of White Spaces are %d", iRet);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#define BUFFERSIZE 1024

int CountChar(char FName[], char ch)
{
    int Countch = 0;
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
                if(Arr[i] == ch)
                {
                    Countch++;
                }
            }
        }
        close(fd);
    }
    return Countch;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter File Name: ");
    scanf("%s", FileName);

    printf("Enter The character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName, cValue);

    printf("Frequency is %d", iRet);

    return 0;
}
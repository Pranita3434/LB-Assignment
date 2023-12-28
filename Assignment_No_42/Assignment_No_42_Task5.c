#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#define BUFFERSIZE 1024

void DisplayN(char FName[], int iSize)
{
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
            for(i = 0; i < iSize; i++)
            {
                printf("%c",Arr[i]);
            }
        }
        
        close(fd);
    }
   
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter File Name: ");
    scanf("%s", FileName);

    printf("Enter The number of characters : ");
    scanf("%d",&iValue);

    DisplayN(FileName, iValue);

    return 0;
}
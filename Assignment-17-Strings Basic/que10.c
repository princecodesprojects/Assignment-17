#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i=0,j;
    char str[]="princen";
    int fre[150]={0};
    int l=strlen(str);

    // for(i=0;str[i]!=0;i++)
    //  printf("%c ",str[i]);
    while(str[i]!='\0')
    {
       fre[str[i]]++;
        i++;
    }
    for(i=0;i<150;i++)
    {
        if(fre[i]!=0)
        printf("%c ==> %d\n",i,fre[i]);
    }
    return 0;
}
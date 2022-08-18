
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[]="prince@231#";

    int albt=0,digt=0,spesm=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            albt++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digt++;
        }
        else
        spesm++;
    }
    printf("alphabets is %d\n",albt);
    printf("digts is %d\n",digt);
    printf("Special symbol is %d\n",spesm);
    getch();
    return 0;
}


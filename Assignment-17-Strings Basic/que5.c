
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
        printf("%c",str[i]+32);
        }
        else
        printf("%c",str[i]);
    }
    getch();
    return 0;
}



#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    char c;
    int count=0,i;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    printf("Enter a character\n");
    scanf("%c",&c);
    for(i=0;i<20;i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }
    printf("Occurence of %c is %d",c,count);
    getch();
    return 0;
}

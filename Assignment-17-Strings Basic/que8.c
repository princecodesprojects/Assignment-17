#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char str[20];
    char str1[20];
    printf("Enter your name\n");
    fgets(str,20,stdin);
    for(i=0;i<str[i];i++)
    {
        str1[i]=str[i];
    }
    printf("Original string  %s \n",str);
    printf("Copied string  %s ",str1);
    getch();
    return 0;
}

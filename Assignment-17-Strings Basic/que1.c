#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter your name\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf("length of %s is %d",str,i-1);
    getch();
    return 0;
}

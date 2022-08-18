
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    // char str[4]="abcd";
    // char c[4];
    // int i,j,k;
    // for(i=0;str[i];i++);
    

    // for(j=0;j<4;j++)
    // {
    //     c[j]=str[i-1-j];
    // }

    // for(j=0;j<4;j++)
    // {
    //     printf("%c",c[j]);
    // }

    char a[]="prince";
    char t;
    int i=0,j=strlen(a)-1;

 while(i<=j)
 {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    i++;
    j--;
 }

    printf("%s",a);
    getch();
    return 0;
}


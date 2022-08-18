#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char str[20],temp;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
        if(str[i]>str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        }
    }
    printf("sorted string is  %s ",str);
    getch();
    return 0;
}

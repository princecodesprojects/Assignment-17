
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20];
    char c;
    int count=0,i;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    int length=strlen(str);
     printf("lenght is %d\n",length);
    for(i=0;i<str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("vowels is %d",count);
    getch();
    return 0;
}


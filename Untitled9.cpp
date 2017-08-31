//wap to check if a string is a pallindrom or not
#include<stdio.h>
int main()
{
//malayalam is a pallindrom
char str[50];
int i,j,l;
printf("Enter string ");
gets(str);
for(l=0;str[l]!=0;l++);
for(i=0,j=l-1;i<=j;i++,j--)
{
if(str[i]!=str[j])
{
printf("%s is not a pallindrom",str);
break;	
}
}
if(i>j)
printf("%s is a pallindrom",str);
}


#include<stdio.h>
int main(){
    char temp;
    char s[];
    printf("Enter the string:");
    scanf("%s",s);
    int len=0;
    while (s[len]!='\0')
    {
        len++;
    }
    printf("The length of this string is %d\n",len);
    for(int i=0;i<(len-1)/2;i++)
{
    temp=s[i];
    s[i]=s[len-i-1];
    s[len-i-1] = temp;
}
    printf("Now the string is %s",s);
    return 0;
}
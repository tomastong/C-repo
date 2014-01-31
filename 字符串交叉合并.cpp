#include <stdio.h>
#include <conio.h>
#include <string.h>

void Copy(char str[], char *q)          // 书写函数，添加+=函数 
{
    char *p = str;
    int i=0;
    for (; str[i]!= '\0'; i++);
    str[i] = *q;
    str[i+1] = '\0';    
}

int main()
{
    char a[]="123456789", b[]="ABCD", c[100];
    char *p = a, *q = b, *m = c;
    while (*p!='\0' && *q!='\0')
    { 
        Copy(c, p);
        Copy(c, q);
        p++;q++;
    }    
    
    if (*p == '\0')
    while(*q!='\0')
    {
        Copy(c, q);
        q++;
    }
    else
    while(*p!='\0')
    {
        Copy(c, p);
        p++;
    }
    puts(m);
    getch();
    return 0;
}

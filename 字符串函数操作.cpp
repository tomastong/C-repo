#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    char p1[20]="abcd",p2[20]="ABCD";
    char str[50]="xyz";
    
    strcpy(str+2,strcat(p1+2,p2+1)); 
    printf("%s\n",str);
    
    getch();
    return 0;
 }
// strcat(p1+2,p2+1)执行目的就是p2把BCD开始连接（之前的就不要了）到（p1从cd开始和其拼接，之前的就不要了）
// 然后再拷贝到str+2的后面，str+2后面的就不要了 

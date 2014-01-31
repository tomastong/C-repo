#include  <stdio.h>
int main()  {
       char * s1="Hello",*s2="Beijing"; 
       FILE *pf=fopen("abc.dat","wb+");     
   
       fwrite(s2,3,2,pf);    // 将s2中的字符写入3个字节，写2次(共写入六个字节) 
       fseek(pf,-1,SEEK_CUR);  // SEEK_CUR当前位置    -1，后移一位 
       fwrite(s1,5,1,pf);     
   
       fclose(pf); 
       return 0;
}

#include<stdio.h>
void main()
{char str1[8][80]={"      * *   * *  ","     *   * *   *","     *  ****   *","      ******* * ","       *     *  ","        *   *   ","         * *    ","          *     "};
int i;
for(i=0;i<8;i++)
puts(str1[i]);
}
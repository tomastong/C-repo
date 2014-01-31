#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    char ch[103];
    scanf("%d,%s ,%d", &a, ch, &b);     // 用这样的格式输入%s才正确 
    printf("%d,%s,%d", a, ch, b);       // 空格没有读入，只是起终止%s作用 
                        // _,123只能匹配"_,123",不能匹配",123"   "_"空格的意思 
    getch();
    return 0;
}

// scanf("%d %c%d", &a, &ch, &b); 这是怕把ch当成空格读取 

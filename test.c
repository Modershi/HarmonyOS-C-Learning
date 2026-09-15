//#include <stdio.h>
//#include "calc.h"
//int main()
//{
//    int x=12,y=18;
//    printf("%d+%d=%d\n",x,y,add(x,y));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    printf("a\tbc\tdefg\t");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    printf("%c\n",'X');
//    printf("%c\n",'\130');
//    printf("%c\n",'0');
//    printf("%c\n",'\x30');
//    printf("%c\n",81);
//    printf("%c\n",'\121');
//    printf("%c\n",'Q');
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    //string length(字符串的长度)
//    int len = strlen("abc");//整型一个len表示为该字符串的长度
//    //a b c \0
//    //但是strlen函数统计的是字符串中\0之前的字符数，不包含\0
//    printf("%d\n",len);
//    return 0;
//}
#include <stdio.h>
#include <string.h>
int main()
{
    int len = strlen("c:\test\16\test.c");
    printf("%d\n",len);
    return 0;
}

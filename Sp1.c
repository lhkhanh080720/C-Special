#include <stdio.h>

int main()
{
    int a = 11, b = 11;
    printf("%d %d\n", a++, a++);    
    printf("%d\n", a);
    printf("%d\n", ++a);
    a = 10; 
    printf("%d %d %d %d\n", a, a++, ++a, a++); 
    a = 10;
    b = 11; 
    printf("%d %d %d %d\n", ++a, a++, b++, ++b);    
    return 0;
}

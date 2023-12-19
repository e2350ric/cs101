#include <stdio.h>

int main()
{
    int n=12345;
    int c;
    c=(n%10)*1000+(n/10%10)*10+(n/100%10)*100+(n/1000%10)*1+(n/10000)*10000;
    
        
    printf("%5d",c);

    return 0;
}
#include <stdio.h>

int main()
{
int i=3;
    if(i%15==0){
        printf("love IU");
    }
    else if(i%3==0){
        printf("love");
    }
    else if(i%5==0){
        printf("IU");
    }
    else{
        printf("%d\n",i);
    }
    return 0;
}

#include <stdio.h>

int main(){
    int x=3;
    int y=2;
    int z=1;
    if(x<0){
        int s=(x*-1)*100+y*10+z;
        printf("%d",s);
    }
    else{
        printf("%d",x*100+y*10+z);
    }
    return 0;
}

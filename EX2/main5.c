#include <stdio.h>

int main(){
    int i=10;
    if(i<=30){
        printf("免費");
    }
    else if(i>=240){
        printf("240元");
    }
    else{
        if(i%30){
            int c=((i/30)+1)*30;
            printf("%d元",c);
            
        }
        else{
            printf("%d元",i);
    }
}
    return 0;
}

#include <stdio.h> //因為要用到standard I/O 中寫好的函數 printf列印結果

int main(){
    int i,sum;

    sum=0;
    for(i=1;i<=10;i++) {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);
}

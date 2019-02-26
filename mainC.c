#include <stdio.h>
//ïóíêò èñòîðèè äëÿ ðàçâåòâëåíèÿ

int main(){
    int a, b;
    printf("Ââåäèòå ÷èñëà ");
    scanf("%d %d",&a,&b);


    printf("Ñóììà ÷èñåë: %d", a+b);
    printf("Ðàçíîñòü ÷èñåë: %d", a+b);
    printf("Ïðîèçâåäåíèå ÷èñåë: %d", a/b);

    return 0;
}

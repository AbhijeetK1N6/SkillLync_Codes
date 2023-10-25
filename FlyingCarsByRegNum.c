#include <stdio.h>
#define N 5
int main() {
    int a[N], even[N], odd[N], i, k1 = 0, k2 = 0;  
    int day;
    printf("Enter %d Registration numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
    for(i = 0; i < N; i++)  
    {  
        if(a[i] % 2 == 0)  
            even[k1++] = a[i];  
        else  
            odd[k2++] = a[i];  
    }
    printf("Enter the Day :-\n");
    printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wedenesday\n5. Thursday\n6. Friday\n7. Saturday\n");
    scanf("%d",&day);
    if(day==2||day==4||day==6){
        printf("Below Mentioned Numbers Will Fly:-\n");
        for(i = 0; i < k1; i++)  
        printf("%d\n", even[i]);
    }
//@K1N6
    else if(day==1||day==3||day==5||day==7){
        printf("Below Mentioned Numbers Will Fly:-\n");
        for(i = 0; i < k2; i++)  
        printf("%d\n", odd[i]); 
    }
}

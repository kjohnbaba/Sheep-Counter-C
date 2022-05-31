#include <stdio.h>

int main () {
  
    int a = 0;
    printf("Enter number:");
    scanf("%d", &a);
 
    for(int i=1; i<a;i++){
        printf("%d sheep, ",i);
    }
   
    return 0;
}

// 
#include<stdio.h>
int main() {
    int ar[3][3];
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &ar[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}

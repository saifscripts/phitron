#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n > 1000) {
        printf("I will buy Punjabi\n");
        int left_amount = n - 1000;
        
        if(left_amount >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } else {
        printf("Bad luck!");
    }
    
    return 0;
}
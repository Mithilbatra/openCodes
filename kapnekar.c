#include <stdio.h>
#include <math.h
int isKaprekar(int num) {
    long long square = (long long)num * num;
    int numDigits = (int)log10(square) + 1;
    
    for (int i = 1; i < numDigits; i++) {
        int divisor = (int)pow(10, i);
        int leftPart = square / divisor;
        int rightPart = square % divisor;
        
        if (leftPart + rightPart == num && rightPart != 0) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    int n;
    printf("Input number of terms - ");
    scanf("%d", &n);

    int i = 1;
    int j = 1;

    while (i <= n) {
        if (isKaprekar(j)) {
            printf("%d ", j);
            i++;
        }
        j++;
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int perfectSquare(int n) {
	if(n<0) return 0;
    int sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

int main() {
    int n;
    printf("Enter integer: ");
    scanf("%d",&n);
    if (perfectSquare(n)) {
        printf("%d is a perfect square\n", n);
    } else {
        printf("%d is not a perfect square\n", n);
    }
    return 0;
}

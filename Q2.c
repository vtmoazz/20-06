/* A square number or perfect square is an integer that is the square of an integer. For example, 9
is a square number, since it equals 3^2 and can be written as 3 x 3.
Write a function that checks for a perfect square? If it is a perfect square 
*/

#include <stdio.h>
#include <math.h>

int perfectSquare(int n) {
	if(n<0) return -1;// 
	
    int sqrt_n = (int) sqrt(n);
    return (pow(sqrt,2) == n);// pow(sqrt,2)
}

int 

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

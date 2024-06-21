// Q4
/*Write a function to square all the elements of an array.
For example, if the input array is {1,4,5,8} then the function returns {1,16,25,64}. 
*/

#include <stdio.h>

void square_array_elements(int arr[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];// binh phuong
    }
}
void input_array(int arr[], int size) {
	int i;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void print_array(int arr[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
	int size;
	printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &size);
    int arr[size];
	input_array(arr, size);
  

    printf("Mang ban dau: ");
    print_array(arr, size);

    square_array_elements(arr, size); // binh phuong

    printf("Mang sau khi binh phuong: ");
    print_array(arr, size);

    return 0;
}

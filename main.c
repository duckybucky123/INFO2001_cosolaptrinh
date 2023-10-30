#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap vao hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
       int quotient = a / b;
        int remainder = a % b;

        printf("Phan nguyen: %d\n", quotient);
       printf("Phan du: %d\n", remainder);
    } else {
        printf("Loi: b phai khac 0.\n");
    }

    return 0;
}
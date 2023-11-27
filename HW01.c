#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SinhVien {
    int maSo;
    char ten[50];
};
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct SinhVien *sv;
// Cấp phát bộ nhớ
    sv = (struct SinhVien*)malloc(sizeof(struct SinhVien));
// Kiểm tra cấp phát
    if (sv == NULL) {
        printf("Khong the cap phat bo nho.");
        exit(1);
    }
// Nhập thông tin sinh viên
    sv->maSo = 123;
    strcpy(sv->ten, "Nguyen Van A");
// In thông tin sinh viên
    printf("Ma so: %d\n", sv->maSo);
    printf("Ten: %s\n", sv->ten);
// Giải phóng bộ nhớ
    free(sv);
    return 0;
}
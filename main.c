#include <stdio.h>

#define GIA_TIEN_TRUOC_12H 6000
#define GIA_TIEN_SAU_12H 7500

int main() {
    int gioVaoCa, gioRaCa;
    int tongGioLam, tienLuong;

    printf("Gio vao ca: ");
    scanf("%d", &gioVaoCa);

    printf("Gio ra ca: ");
    scanf("%d", &gioRaCa);

    // Xử lý tính số giờ làm
    tongGioLam = gioRaCa - gioVaoCa;

    // Xử lý tính tiền lương
    if (gioVaoCa < 12 && gioRaCa <= 12) {
        tienLuong = tongGioLam * GIA_TIEN_TRUOC_12H;
    } else if (gioVaoCa < 12 && gioRaCa > 12) {
        int gioLamTruoc12h = 12 - gioVaoCa;
        int gioLamSau12h = gioRaCa - 12;
        tienLuong = (gioLamTruoc12h * GIA_TIEN_TRUOC_12H) + (gioLamSau12h * GIA_TIEN_SAU_12H);
    } else if (gioVaoCa >= 12 && gioRaCa > 12) {
        tienLuong = tongGioLam * GIA_TIEN_SAU_12H;
    } else {
        tienLuong = 0;
    }

    printf("Tien luong ngay la: %d VND\n", tienLuong);

    return 0;
}
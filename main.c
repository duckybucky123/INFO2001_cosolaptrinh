#include <stdio.h>

struct ThoiGian {
    int gio;
    int phut;
    int giay;
};

int main() {
    struct ThoiGian tg1, tg2, khoangCach;


    printf("Nhap vao moc thoi gian thu nhat:\n");
    printf("Gio: ");
    scanf("%d", &tg1.gio);
    printf("Phut: ");
    scanf("%d", &tg1.phut);
    printf("Giay: ");
    scanf("%d", &tg1.giay);


    printf("Nhap vao moc thoi gian thu hai:\n");
    printf("Gio: ");
    scanf("%d", &tg2.gio);
    printf("Phut: ");
    scanf("%d", &tg2.phut);
    printf("Giay: ");
    scanf("%d", &tg2.giay);


    khoangCach.gio = tg2.gio - tg1.gio;
    khoangCach.phut = tg2.phut - tg1.phut;
    khoangCach.giay = tg2.giay - tg1.giay;


    if (khoangCach.giay < 0) {
        khoangCach.giay += 60;
        khoangCach.phut--;
    }
    if (khoangCach.phut < 0) {
        khoangCach.phut += 60;
        khoangCach.gio--;
    }


    printf("\nKhoang cach giua hai diem:\n");
    printf("Gio: %d\n", khoangCach.gio);
    printf("Phut: %d\n", khoangCach.phut);
    printf("Giay: %d\n", khoangCach.giay);

    return 0;
}
#include <stdio.h>
int main() {
void giaiDoanSotruyenvao(int n);
int sotruyenvao;
int n;
printf("Nhap mot so nguyen: ");
scanf("%d", &sotruyenvao);
    printf("Ket qua giai doan cua so chinh la : \n",&n);
    if (n > 0) {
        printf("do la mot So duong \n");
    } else if (n < 0) {
        printf("do la mot So am \n");
    } else {
        printf("-do la So khac 0 \n");
    }
    if (n != 0) {
        if (n % 2 == 0) {
            printf("do la mot so chan\n");
        } else {
            printf("do la mot So le\n");
        }
    }
     return 0;
}

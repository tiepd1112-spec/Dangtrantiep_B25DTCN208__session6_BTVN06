#include <stdio.h>
int main(){
	float a,b;
	int choice;
	 printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
        printf("Lua chon cua ban: ");
         scanf("%d", &choice);
     switch (choice) {
            case 1:
                printf("Tong = %.2f\n", a + b);
                break;
            case 2:
                printf("Hieu = %.2f\n", a - b);
                break;
            case 3:
                printf("Tich = %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Thuong = %.2f\n", a / b);
                else
                    printf("Loi! Khong the chia cho 0.\n");
                break;
            case 5:
                printf("Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap tu 1 den 5.\n");
        } while (choice != 5);

    return 0;
}


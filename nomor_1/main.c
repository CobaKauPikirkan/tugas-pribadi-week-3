#include <stdio.h>

void main() {
    double km;
    printf("===============================================\n");
    printf("===========Program Konversi Kilometer==========\n");
    printf("=============== Fachrurozi Rizky ==============\n");

    while (1) {
        printf("===============================================\n");
        printf("Masukkan jarak dalam kilometer (0 untuk keluar): ");
        scanf("%lf", &km); // input angka kilometer
        
        if (km == 0) {
            printf("keluar dari program...\n");
            printf("===============================================\n");
            break;
        }
        
        double meter = km * 1000;
        double cm = km * 100000;
        
        printf("\nHasil konversi:\n");
        printf("%.2lf km = %.2lf meter\n", km, meter);
        printf("%.2lf km = %.2lf sentimeter\n", km, cm);
        printf("===============================================\n");
        
        // Menunggu penekanan tombol Enter sebelum melanjutkan
        printf("Tekan Enter untuk melanjutkan...\n");
        while (getchar() != '\n'); // Membersihkan buffer keyboard
        getchar(); // Menunggu Enter
    }

}

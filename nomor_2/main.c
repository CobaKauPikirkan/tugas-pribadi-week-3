#include <stdio.h>

void main() {
    double totalBelanja, diskon, hargaSetelahDiskon;
    int jumlahTransaksi = 0;
    char lanjut;

    printf("================================================\n");
    printf("Program penghitungan total belanja dalam 1 bulan\n");
    printf("=============== Fachrurozi Rizky ===============\n");

    do
    {
        printf("Masukkan total belanja: Rp. ");
        scanf("%lf", &totalBelanja);

        if (totalBelanja < 200000)
        {
            diskon = 0;
        }
        else if (totalBelanja >= 200000 && totalBelanja <= 500000)
        {
            diskon = 0.1; // Diskon 10%
        }
        else if (totalBelanja > 550000 && totalBelanja <= 1000000)
        {
            diskon = 0.2; // Diskon 20%
        }
        else
        {
            diskon = 0.3; // Diskon 30%
        }

        // Cek apakah jumlah transaksi mencapai 4 dalam sebulan
        if (jumlahTransaksi >= 3)
        {
            diskon += 0.2; // penambahan diskon 20%
        }

        hargaSetelahDiskon = totalBelanja - (totalBelanja * diskon);
        printf("Diskon yang diterapkan: %.0lf%%\n", diskon * 100);
        printf("Total harga yang harus dibayar setelah diskon: Rp. %.2lf\n", hargaSetelahDiskon);

        jumlahTransaksi++;

        if (jumlahTransaksi < 4)
        {
            printf("================================================\n");
            printf("Apakah Anda ingin memasukkan transaksi lagi? (y/n): ");
            scanf(" %c", &lanjut);
            printf("================================================\n");
        }
        else
        {
            printf("================================================\n");
            printf("Anda telah mencapai batas maksimum transaksi (4 transaksi).\n");
            printf("================================================\n");
            lanjut = 'n'; // Keluar dari loop
        }


    } while (lanjut == 'y' || lanjut == 'Y');
    
}
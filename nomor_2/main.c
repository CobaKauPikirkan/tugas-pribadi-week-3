#include <stdio.h>

void main()
{
    double totalBelanjaBulanan = 0.0; // Total belanja dalam 1 bulan
    char lanjut;
    int jumlahTransaksi = 0;

    printf("================================================\n");
    printf("Program penghitungan total belanja dalam 1 bulan\n");
    printf("=============== Fachrurozi Rizky ===============\n");
    printf("================================================\n");

    do
    {
        double totalBelanjaTransaksi;

        printf("Masukkan total belanja: Rp. ");
        scanf("%lf", &totalBelanjaTransaksi);

        totalBelanjaBulanan += totalBelanjaTransaksi;
        jumlahTransaksi++;

        printf("================================================\n");
        printf("Apakah Anda ingin memasukkan transaksi lagi? (y/n): ");
        scanf(" %c", &lanjut);
        printf("================================================\n");

    } while (lanjut == 'y' || lanjut == 'Y');

    double diskon = 0.0; // Diskon awalnya adalah 0%

    if (totalBelanjaBulanan < 200000)
    {
        diskon = 0.0;
    }
    else if (totalBelanjaBulanan >= 200000 && totalBelanjaBulanan <= 500000)
    {
        diskon = 0.1; // Diskon 10%
    }
    else if (totalBelanjaBulanan > 500000 && totalBelanjaBulanan <= 1000000)
    {
        diskon = 0.2; // Diskon 20%
    }
    else
    {
        diskon = 0.3; // Diskon 30%
    }

    // Cek apakah total belanja dalam sebulan memenuhi syarat tambahan diskon
    if (jumlahTransaksi >= 4)
    {
        printf("Anda telah mencapai total belanja bulanan yang memenuhi syarat tambahan diskon\n");
        printf(">>>>>>> mendapat tambahan diskon 20%% <<<<<<<<\n");
        diskon += 0.2; // Penambahan diskon 20%
    }

    double hargaSetelahDiskon = totalBelanjaBulanan - (totalBelanjaBulanan * diskon);
    printf("Diskon yang diterapkan: %.0lf%%\n", diskon * 100);
    printf("Total harga yang harus dibayar setelah diskon: Rp. %.2lf\n", hargaSetelahDiskon);
    printf("================================================\n");
}

/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 - Data Manipulation and External File 
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : I Ketut Satya Adnyana (13224076)
 *   Nama File           : soal1.c
 *   Deskripsi           : Hitung statistik array menggunakan fungsi dengan parameter pointer
 * 
 */
#include <stdio.h>
#include <stdlib.h>

void find_max_in_array(int arr[], int size, int *idx, int *max_val) {
    *max_val = arr[0];
    *idx = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max_val) {
            *max_val = arr[i];
            *idx = i;
        }
    }
}

int getSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n, indeks, max;
    scanf("%d",&n);
    int values[n];
    for (int k = 0; k<n;k++){
        scanf("%d",&values[k]);
    }
    
    find_max_in_array(values,n, &indeks, &max);
    int res = getSum(values, n);
    float avg = (float)res/n;


    printf("SUM %d\n", res);
    printf("AVG %.2f\n",avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", indeks);

    
    return 0;
}

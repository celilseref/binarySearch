#include <stdio.h>

// Ceil �eref *1210505053*
// Quick sort algoritmas�
// s�ralama algoritmas�n� binary search s�ralanm�� dizi �zerinde arama yapt��� i�in �nce verilen diziyi s�ralamak i�in kullan�yoruz.
/* Quick sort, bir dizi eleman� s�ralamak i�in kullan�lan etkili bir s�ralama algoritmas�d�r. 
   Bu algoritma, bir b�l ve fethet stratejisine dayan�r. �lk olarak, dizinin bir eleman� se�ilir ve bu eleman, 
   diziyi iki par�aya ay�rmak i�in bir pivot olarak kullan�l�r. Daha sonra, pivotun solundaki elemanlar pivotun de�erinden k���k, 
   sa��ndaki elemanlar ise pivotun de�erinden b�y�k olacak �ekilde bu iki par�aya yerle�tirilir. */
void quickSort(int arr[], int low, int high) {
    int i = low, j = high, pivot = arr[(low + high) / 2];
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (low < j)
        quickSort(arr, low, j);
    if (i < high)
        quickSort(arr, i, high);
}

// Binary search algoritmas�
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    // Diziyi s�ralamadan �nceki halini yazd�r
    printf("Dizinin siralanmadan onceki hali: ");
    int i;
	for ( i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // Diziyi s�rala
    quickSort(dizi, 0, n - 1);

    // Diziyi s�raland�ktan sonraki halini yazd�r
    printf("\nDizinin siralandiktan sonraki hali: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // Kullan�c�dan say� iste
    int aranacak_sayi;
    printf("\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranacak_sayi);

    // Binary search ile say�n�n dizide olup olmad���n� kontrol et
    int sonuc = binarySearch(dizi, 0, n - 1, aranacak_sayi);
    if (sonuc == -1)
        printf("Aranan sayi dizide bulunamadi.");
    else
        printf("Aranan sayi %d. indiste bulundu.", sonuc+1);

    return 0;
}


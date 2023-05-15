#include <stdio.h>

// Ceil Þeref *1210505053*
// Quick sort algoritmasý
// sýralama algoritmasýný binary search sýralanmýþ dizi üzerinde arama yaptýðý için önce verilen diziyi sýralamak için kullanýyoruz.
/* Quick sort, bir dizi elemaný sýralamak için kullanýlan etkili bir sýralama algoritmasýdýr. 
   Bu algoritma, bir böl ve fethet stratejisine dayanýr. Ýlk olarak, dizinin bir elemaný seçilir ve bu eleman, 
   diziyi iki parçaya ayýrmak için bir pivot olarak kullanýlýr. Daha sonra, pivotun solundaki elemanlar pivotun deðerinden küçük, 
   saðýndaki elemanlar ise pivotun deðerinden büyük olacak þekilde bu iki parçaya yerleþtirilir. */
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

// Binary search algoritmasý
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

    // Diziyi sýralamadan önceki halini yazdýr
    printf("Dizinin siralanmadan onceki hali: ");
    int i;
	for ( i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // Diziyi sýrala
    quickSort(dizi, 0, n - 1);

    // Diziyi sýralandýktan sonraki halini yazdýr
    printf("\nDizinin siralandiktan sonraki hali: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // Kullanýcýdan sayý iste
    int aranacak_sayi;
    printf("\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranacak_sayi);

    // Binary search ile sayýnýn dizide olup olmadýðýný kontrol et
    int sonuc = binarySearch(dizi, 0, n - 1, aranacak_sayi);
    if (sonuc == -1)
        printf("Aranan sayi dizide bulunamadi.");
    else
        printf("Aranan sayi %d. indiste bulundu.", sonuc+1);

    return 0;
}


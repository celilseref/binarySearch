# binarySearch
Binary Search, sıralı bir dizi içerisinde arama yapmak için kullanılan bir algoritmadır. Bu algoritma, listenin ortasını ele alarak aranan değerin listenin sol ya da sağ yarısında mı olduğunu kontrol eder ve aramaya yalnızca ilgili yarısında devam eder. Böylece aranan değerin bulunması için gereken adım sayısı logaritmik olarak azaltılır.

Örneğin, bir dizide 1, 3, 5, 7, 9 sayıları bulunuyor olsun ve 5 sayısını arıyoruz. Algoritma önce listenin ortasındaki sayıyı (yani 5'i) kontrol eder ve 5 olduğunu görür. Aranan sayının bulunduğunu anladığı için aramayı sonlandırır. Eğer aradığımız sayı 4 olsaydı, algoritma önce 5 sayısını kontrol eder, fakat 4'ün 5'ten küçük olduğunu görerek listenin sol yarısında aramaya devam eder.

Binary Search algoritması, sıralı bir dizi içinde arama yapmanın en hızlı yöntemlerinden biridir ve özellikle büyük veri setlerinde performansı diğer arama algoritmalarına göre önemli ölçüde daha iyi olabilir.

Bu algoritmada Quick Sort sıralama algoritmasını bize verilen diziyi küçükten büyüğe sıralaması için kullandım.

Quick sort, bir dizi elemanı sıralamak için kullanılan etkili bir sıralama algoritmasıdır. 
   Bu algoritma, bir böl ve fethet stratejisine dayanır. İlk olarak, dizinin bir elemanı seçilir ve bu eleman, 
   diziyi iki parçaya ayırmak için bir pivot olarak kullanılır. Daha sonra, pivotun solundaki elemanlar pivotun değerinden küçük, 
   sağındaki elemanlar ise pivotun değerinden büyük olacak şekilde bu iki parçaya yerleştirilir.

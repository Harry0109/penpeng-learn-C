#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void move(int arr[], int sz) {
	int left = 0;
	int right = sz - 1;
	while (left < right) {

		while (left < right && arr[left] % 2 == 1) {
			left++;
		}
		while (left < right && arr[right] % 2 == 0) {
			right--;
		}
		if (left < right) {
			int ret = arr[right];
			arr[right] = arr[left];
			arr[left] = ret;
		}


	}

}
//int main() {
//	//int money = 0;
//	//int total = 0;
//	//int empty = 0;
//	//scanf("%d",&money);
//	//total = money/1;
//	//empty = total;
//	//while (empty >= 2) {
//	//	total = total + empty / 2;
//	//	empty = empty % 2 + empty / 2;
//	//}
//	//printf("total=%d", total);
//
//	//int arr[] = { 1,2,3,4,5,6 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//move(arr,sz);
//	//for (int i = 0; i < sz; i++) {
//	//	printf("%d ", arr[i]);
//	//}
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;
//	//printf("%d %d", a + b, c);
//
//	//char a[300] = { 0 };
//	//for (int i = 0; i < 300; i++) {
//	//	a[i] = -1 - i;
//	//}
//	//printf("%d ", strlen(a));
//
//
//	//int arr[10][10] = { 0 };
//	//int i = 0;
//	//int j = 0;
//
//	//for (i = 0; i < 10; i++) {
//	//	for (j = 0; j < 10; j++) {
//	//		if (j == 0) {
//	//			arr[i][j] =1 ;
//	//		}
//	//		if (i == j) {
//	//			arr[i][j] = 1;
//	//		}
//	//		if (i >= 2 && j >= 1) {
//	//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//	//		}
//	//	}
//	//}
//	//for (i = 0; i < 10; i++) {
//	//	for (j = 0; j <= i; j++) {
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//char killer=0;
//	//for (killer = 'a'; killer < 'd'; killer++) {
//	//	if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
//	//		printf("%c ", killer);
//	//	}
//	//}
//	//char kk = 'a';
//	//printf("%c %d", kk + 1, kk + 1);
//
////	int a, b, c, d, e;
////	for (a = 1; a <= 5; a++) {
////		for (b = 1; b<= 5; b++) {
////			for (c = 1; c <= 5; c++) {
////				for (d = 1; d <= 5; d++) {
////					for (e = 1; e <= 5; e++) {
////						if (((a == 3) + (b == 2) == 1) &&
////							((e == 4) + (b == 2) == 1) &&
////							((c == 1) + (d == 2) == 1) &&
////							((c == 5) + (d == 3) == 1) &&
////							((e == 4) + (a == 1) == 1) &&
////							(a*b*c*e*d==120)){
////							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
////}
////					}
////				}
////			}
////		}
////	}
//	//申请空间
//	int *p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//
//	 return 0;
//}
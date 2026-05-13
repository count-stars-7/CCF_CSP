#define  _CRT_SECURE_NO_WARNINGS
//======================4.1图像旋转====================
#include<stdio.h>
int a[1005][1005];
int main() {
	int r, l;
	scanf("%d%d", &r, &l);
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= l; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = l; i >= 1; i--) {
		for (int j = r; j >= 1; j--) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
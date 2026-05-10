#define  _CRT_SECURE_NO_WARNINGS

//==============2.1相邻对数==============
//#include<stdio.h>
//int main() {
//	int n; scanf("%d", &n);
//	int num;
//	int vis[1010] = { 0 };
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &num);
//		vis[num] = 1;
//	}
//	int ans = 0;
//	for (int i = 1; i <= 1010-1; i++) {
//		if (vis[i] == 1 && vis[i + 1] == 1) {
//			ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}
////标记数组法，比较排序和枚举更优

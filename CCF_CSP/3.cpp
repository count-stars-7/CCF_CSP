#define  _CRT_SECURE_NO_WARNINGS
//======================3.1门禁系统==================
//#include<stdio.h>
//int main() {
//	int depsyada;
//	int n; scanf("%d", &n);
//	int num[1010] = { 0 }, temp;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &temp);
//		printf("%d ", ++num[temp]);
//	}
//	return 0;
//}




//====================3.2Z字型扫描========================
//#include<stdio.h>
//int main() {
//    int n, i, j, t = 1, x = 1, y = 1;
//    int v[505][505], p[505][505];
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//        for (j = 1; j <= n; j++)
//            scanf("%d", &p[i][j]);
//    printf("%d ", p[1][1]);
//    v[1][1] = 1;
//    while (t < n * n) {
//        if (y + 1 <= n) {
//            ++t;
//            y++;
//            v[x][y] = 1;
//            printf("%d ", p[x][y]);
//        }
//        //v[x + 1][y - 1]标记数组的意义重点体现在到达矩阵某个角，避免沿对角线死循环执行
//        while (x + 1 <= n && y - 1 >= 1 && !v[x + 1][y - 1]) {
//            ++t;
//            v[x + 1][y - 1] = 1;
//            printf("%d ", p[x + 1][y - 1]);
//            x++;
//            y--;
//        }
//        if (x + 1 <= n) {
//            ++t;
//            x++;
//            v[x][y] = 1;
//            printf("%d ", p[x][y]);
//        }
//        while (x - 1 >= 1 && y + 1 <= n && !v[x - 1][y + 1]) {
//            ++t;
//            v[x - 1][y + 1] = 1;
//            printf("%d ", p[x - 1][y + 1]);
//            x--;
//            y++;
//        }
//    }
//    return 0;
//}

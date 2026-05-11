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









//=====================2.2画图=========================
////教材方法
//#include<stdio.h>
//int gride[105][105];
//int main() {
//	int n; scanf("%d", &n);
//	int x1, x2, y1, y2;
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d %d %d",&x1,&y1,&x2,&y2 );
//		for (int k = x1; k <= x2-1; k++) {
//			for (int j = y1; j <= y2-1; j++) {      //边界处理，x2-x1-1=实际坐标点间格子数
//				if (gride[k][j] == 0) {
//					gride[k][j] = 1;
//					ans++;
//				}
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}
//
//
////差分前缀和方法
//#include<stdio.h>
//int diff[105][105];  // 差分数组
//int sum[105][105];   // 前缀和数组
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        int x1, y1, x2, y2;
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//
//       ////当所给坐标为点坐标时对矩阵起点坐标x+1，y+1，末坐标不变直接转换为网格坐标
//       // x1 = x1 + 1; y1 = y1 + 1;           // x2 = x2; y2 = y2;    //可不做
//
//        //然而当考虑越界问题时+1总是不安全操作，所以同等转化下相当于x2,y2均-1
//        x2 = x2 - 1;        y2 = y2 - 1;
//
//        ////此时以格为单位进行差分在以后的前缀和求和时直接覆盖到实际起末坐标围成的矩阵中所有方格
//        diff[x1][y1] += 1;
//        diff[x1][y2 + 1] -= 1;
//        diff[x2 + 1][y1] -= 1;
//        diff[x2 + 1][y2 + 1] += 1;
//    }
//
//    int ans = 0;
//    // 前缀和还原，同时统计答案
//    for (int i = 1; i <= 100; i++) {
//        for (int j = 1; j <= 100; j++) {
//            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + diff[i][j];
//            if (sum[i][j] > 0) {
//                ans++;
//            }
//        }
//    }
//    printf("%d", ans);
//    return 0;
//}






//====================2.3字符串匹配=======================
//#include <algorithm>
//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <cctype>  // 用于tolower函数
//
//using namespace std;
//
//const int N = 110;
//string S, St;  // S是模式串，St是母串
//int sensitive, T;
//
//bool check(char a, char b) {
//    if (!sensitive)  // 不区分大小写
//        return tolower(a) == tolower(b);
//    else  // 区分大小写
//        return a == b;
//}
//
//int main() {
//    cin >> S >> sensitive >> T;
//    int n = S.size();  // 模式串长度
//
//    while (T--) {  // 处理T组母串
//        cin >> St;
//        int m = St.size();  // 母串长度
//
//        for (int i = 0; i <= m - n; i++) {
//            bool flag = true;  // 乐观假设，后续如果发现不匹配再改为false
//            for (int j = 0; j < n; j++) {
//                if (!check(St[i + j], S[j])) {
//                    flag = false;
//                    break;  // 有一位不匹配，直接跳出内层循环
//                }
//            }
//            if (flag) {  // 找到匹配
//                cout << St << endl;
//                break;  // 找到后跳出外层循环，不再继续检查该母串
//            }
//        }
//    }
//    return 0;
//}

















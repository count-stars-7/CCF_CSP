#define  _CRT_SECURE_NO_WARNINGS
//===============1.1相反数========================
//数字不重复，时间复杂度n，空间复杂度m
//#include<stdio.h>	
//int nums[1010]; int cnt[1010];
//int main() {
//	int n; scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &nums[i]);
//		if (nums[i] > 0)	cnt[nums[i]]++;
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		if (nums[i]< 0)		ans += cnt[-nums[i]];
//		//当num<0，num的相反数-num如果出现过那么cnt[num]=1则ans+=1，若没出现过ans+=0
//	}
//	printf("%d", ans);
//	return 0;
//}




//===========================1.2窗口=====================
//#include<cstdio>
//#include <iostream>
//using namespace std;
//int gride[2560][1440] = {0};
//int main() {
//	int n, m,s=1;
//	cin >> n >> m;
//	int ng[4], pg[2];
//	while (s<=n) {
//		for (int i = 0; i < 4; i++) {
//			cin >> ng[i];
//		}
//		for (int j = ng[0]; j <= ng[2] ; j++) {
//			for (int k = ng[1]; k <= ng[3] ; k++)
//			{
//				gride[j][k] = s;
//			}
//		}
//		s++;
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> pg[0] >> pg[1];
//		if (gride[pg[0]][pg[1]]) {
//			cout << gride[pg[0]][pg[1]];
//            //for (int j = 0; j <=2559; j++) {
//            //    for (int k = 0; k <= 1439; k++)
//            //    {
//            //        if(gride[j][k]==)
//            //        gride[j][k] = gride[pg[0]][pg[1]];
//            //    }
//            //}
//		}
//		else
//			cout << "IGNORED";
//	}
//
//	//cout << gride[6][6];
//
//    ////////////////没有解决点击一个点后它的窗口更新到最上层
//
//	return 0;
//}
//
//
//
//
//////////////改变记录窗口两点坐标的方式使窗口范围可以在后续被利用去更新状态
//#include <iostream>
//using namespace std;
//
//int grid[2560][1440] = { 0 };
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    // 存储每个窗口的坐标
//    int windows[11][4];  // windows[i]存储第i个窗口的x1,y1,x2,y2
//
//    // 读入窗口并按从下层到上层填充grid
//    for (int s = 1; s <= n; s++) {
//        cin >> windows[s][0] >> windows[s][1] >> windows[s][2] >> windows[s][3];
//        // 将该窗口覆盖的区域设置为当前窗口编号（顶层覆盖下层）
//        for (int j = windows[s][0]; j <= windows[s][2]; j++) {
//            for (int k = windows[s][1]; k <= windows[s][3]; k++) {
//                grid[j][k] = s;
//            }
//        }
//    }
//
//    // 处理每次点击
//    for (int i = 0; i < m; i++) {
//        int x, y;
//        cin >> x >> y;
//
//        int clicked_window = grid[x][y];
//
//        if (clicked_window == 0) {
//            // 没有点击到任何窗口
//            cout << "IGNORED" << endl;
//        }
//        else {
//            // 输出被点击的窗口编号
//            cout << clicked_window << endl;
//
//            // 将该窗口移到顶层：重新绘制该窗口覆盖的所有区域
//            for (int j = windows[clicked_window][0]; j <= windows[clicked_window][2]; j++) {
//                for (int k = windows[clicked_window][1]; k <= windows[clicked_window][3]; k++) {
//                    grid[j][k] = clicked_window;
//                }
//            }
//        }
//    }
//
//    return 0;
//}



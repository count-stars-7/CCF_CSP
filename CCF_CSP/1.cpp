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
// 
// //////////初始版本
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
//
//
//
//
// 
/////////////////////“时间戳”方法///////////////////
//#include <cstdio>
//#define N 20
//
//struct Window {
//    int x1, y1, x2, y2;
//} w[N];
//
//int rank[N]; // 窗口的等级。等级值越大，窗口越靠上
//
//// 检查 x 值是否在 [l, r] 中
//bool check(int x, int l, int r) {
//    return x <= r && x >= l;
//}
//
//void ask(int n, int tim, int x, int y) {
//    // 对于每一次点击，扫描所有窗口，记录时间值最大（最顶层）的窗口
//    int t = 0;
//    for (int i = 1; i <= n; i++) {
//        if (check(x, w[i].x1, w[i].x2) &&
//            check(y, w[i].y1, w[i].y2) && rank[i] > rank[t])
//            t = i;
//    }
//    if (!t)
//        puts("IGNORED");
//    else {
//        // 将每次点击的窗口时间值设置为最大
//        rank[t] = tim;
//        printf("%d\n", t);
//    }
//}
//
//int main() {
//    int n, m, x, y;
//    scanf("%d%d", &n, &m);
//
//    // 读入窗口坐标，并给每个窗口设置初始时间，越靠上的窗口时间值越大
//    for (int i = 1; i <= n; i++) {
//        scanf("%d%d%d%d", &w[i].x1, &w[i].y1, &w[i].x2, &w[i].y2);
//        rank[i] = i;
//    }
//
//    // 模拟 m 次点击操作
//    for (int i = 1; i <= m; i++) {
//        scanf("%d%d", &x, &y);
//        ask(n, n + i, x, y);
//    }
//    return 0;
//}
//////////只改变窗口编号而不是覆盖窗口值因此在时间上更优









//==================================1.3命令行选项===========================

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

#define N 20
int st[26];        // 选项是否带参数
string param[26];  // 合法的字符参数
bool vis[26];       // 标记数组

int main() {
    string S;
    cin >> S;      // 读入格式字符串
    int len = S.size();
    for (int i = 0; i <= len - 1; i++) {
        if (i + 1 < len && S[i + 1] == ':')
            st[S[i++] - 'a'] = 2;  // 带参数选项标记为2
        else
            st[S[i] - 'a'] = 1;    // 不带参数选项标记为1
    }

/*
st['a'-'a'] = st[0] = 1  →  -a 无参
st['l'-'a'] = st[11] = 1 →  -l 无参
st['b'-'a'] = st[1] = 1  →  -b 无参
st['w'-'a'] = st[22] = 2 →  -w 带参
st['x'-'a'] = st[23] = 1 →  -x 无参
其他 st[i] = 0 → 不是合法选项
*/

    char ch;
    int n, Case = 0;
    cin >> n;
    while (n--) {
        cin >> S;
        ch = getchar();           // 读入命令名称
        for (int i = 0; i <= 25; i++) {
            param[i].clear();
            vis[i] = 0;            // 清零操作
        }
        if (ch == '\n') goto Nex;  // 如果遇到换行符则停止读入
        S.clear();
        while ((ch = getchar()),
            ch != '\n' && ch != EOF)  // 读入一行字符，遇到换行符结束
            S.push_back(ch);
        S.push_back(' ');              // 末尾加空格
        len = S.size();
        for (int i = 0; i <= len - 1; i++) {
            int t = S[i + 1] - 'a';
            // 如果字符非法，则停止
            if (i + 2 >= len || S[i] != '-' || S[i + 2] != ' ' ||
                S[i + 1] > 'z' || S[i + 1] < 'a' || !st[t])
                goto Nex;
            vis[t] = 1;                 // 标记字符存在
            if (st[t] == 1)             // 不带参数字符
                i += 2;
            else                        // 带参数字符
            {
                i += 3;
                if (i < len) param[t].clear();
                while (i < len && S[i] != ' ') {
                    if (S[i] != '-' && (S[i] > 'z' || S[i] < 'a') &&
                        !isdigit(S[i]))  // 如果字符参数不合法
                    {
                        param[t].clear();  // 清空数组并停止
                        goto Nex;
                    }
                    param[t].push_back(S[i++]);  // 如果字符参数合法则放入param中
                }
            }
        }
    Nex:;
        printf("Case %d: ", ++Case);
        for (int i = 0; i <= 25; i++)
            if (vis[i])  // 如果字符存在则输出
            {
                printf("-%c ", i + 'a');
                if (st[i] == 2) cout << param[i] << ' ';
            }
        cout << endl;
    }
    return 0;
}




























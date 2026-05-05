#define  _CRT_SECURE_NO_WARNINGS
//===============1.1相反数========================

#include<stdio.h>	
int nums[1010]; int cnt[1010];
int main() {
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] > 0)	cnt[nums[i]]++;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i]< 0)		ans += cnt[-nums[i]];
	}
	printf("%d", ans);
	return 0;
}
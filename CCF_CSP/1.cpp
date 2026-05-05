#define  _CRT_SECURE_NO_WARNINGS
//===============1.1相反数========================
//数字不重复，时间复杂度n，空间复杂度m
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
		//当num<0他的相反数-num如果出现过那么cnt[num]=1则ans+=1，若没出现过ans+=0
	}
	printf("%d", ans);
	return 0;
}















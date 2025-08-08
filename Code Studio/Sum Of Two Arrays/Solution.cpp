#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int digit1 = 0;
	int digit2 = 0;
	vector <int> ans;
	for (int i = 0; i < n; i++){
		digit1 = (digit1*10) + a[i];
	}
	for (int i = 0; i < m; i++){
		digit2 = (digit2*10) + b[i];
	}
	int sum = digit1 + digit2;
	
	while(sum > 0){
		ans.insert(ans.begin(),sum%10);
		sum = sum / 10;
	}
	return ans;
}
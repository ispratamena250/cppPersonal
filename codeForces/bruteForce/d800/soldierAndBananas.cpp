#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, n, w, ans=0;

	cin >> k >> n >> w;

	for(int i=1; i<=w; i++){
		ans += i*k;
	}

	ans-n > 0 ? cout << abs(ans-n) : cout << "0";

	cout << endl;
	return 0;
}

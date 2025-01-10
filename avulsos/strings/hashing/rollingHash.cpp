int f(char c){ //Pega o valor na ascii
	return c - 'a'+ 1;
}

int h(const string& s){ //Para alfabetos com maiusculas, usar p=53
	long long ans = 0, p = 31, q = 1'000'000'007;

	for(auto c : s){
		ans = (ans * p) % q;
		ans = (ans + f(c)) % q;
	}

	return ans;
}

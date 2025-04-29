#include <bits/stdc++.h>

using namespace std;

//Prototypes
void backtracking(vector<int>& xs, int i, int N, const vector<int>& as, size_t turnedOn);
bool is_solution(int i, int N);
void process_solution(const vector<int>& xs, size_t turnedOn);
vector<int> candidates(int i, const vector<int>& as);

int main(){
	size_t turnedOn;

	cin >> turnedOn;

	vector<int> as { 32, 16, 8, 4, 2, 1, 8, 4, 2, 1 }, xs;

	backtracking(xs, 0, as.size(), as, turnedOn);

	return 0;
}

void backtracking(vector<int>& xs, int i, int N, const vector<int>& as, size_t turnedOn){
	if (is_solution(i, N))
		process_solution(xs, turnedOn);
	else{
		auto cs = candidates(i, as);

		for (auto c : cs){
			// Segue sem escolher c
			backtracking(xs, i + 1, N, as, turnedOn);

			// Segue escolhendo c
			xs.push_back(c);
			backtracking(xs, i + 1, N, as, turnedOn);
			xs.pop_back();
		}
	}
}

bool is_solution(int i, int N){ return i == N; }

void process_solution(const vector<int>& xs, size_t turnedOn){
	for(auto x : xs)
		if(xs.size() >= turnedOn)
			cout << x << ' ';
		
	if(xs.size() == turnedOn) 
		cout << "@" << xs.size() << endl;
}

vector<int> candidates(int i, const vector<int>& as){
	return { as[i] };
}

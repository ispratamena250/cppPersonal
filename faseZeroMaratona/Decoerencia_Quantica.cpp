#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int count_ast (int N, string s){
    int count = 0;
    for (char c:s){
        if(c == '*'){
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);

    int  N, count_string1, count_string2;
    string string1, string2;
    cin >> N >> string1 >> string2;

    count_string1 = count_ast(N, string1);
    count_string2 = count_ast(N, string2);

    float result = (count_string1 - count_string2)/(float)count_string1;

    cout << fixed << setprecision(2) << result << endl;
    
    return 0;
}

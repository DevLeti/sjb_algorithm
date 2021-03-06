#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
	int n; // 1 <= n <= 100,000
	cin >> n;
	
	vector<ll> n_v;
	ll input;
	for (int i = 0; i<n; i++){
		cin >> input;
		n_v.push_back(input);
	}
	
	int m; //1 <= m <= 100,000
	cin >> m;
	vector<ll> m_v;
	for (int i = 0; i < m; i++){
		cin >> input;
		m_v.push_back(input);
	}
	
	//sort
	sort(n_v.begin(), n_v.end());
	sort(m_v.begin(), m_v.end());
	
	int sp = 0;// for j <- start point
	bool find = false;
	for (int i = 0; i < m; i++){
		for (int j = sp; j < n; ){
			if(m_v[i] == n_v[j]){
				find = true;
				sp = j;
				break;
			}
			else if(m_v[i] > n_v[j]){
				sp = j+1;
				continue;
			}
			else{ // m_v[i] < n_v[j]
				break;
			}
		}
		
		find ? cout << "1\n" : cout << "0\n";
		find = false;
	}
	
	
	return 0;
}

//3680KB, 52ms
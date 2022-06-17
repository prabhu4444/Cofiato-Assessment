
#include<bits/stdc++.h>
using namespace std;
vector<string>v(30, "");


int main()
{
	v[0] = "1";
	string s = "1";
	for (int k = 1; k < 30; k++) {
		string temp = v[k - 1];
		int c = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != s[i + 1]) {
				c++;
				//cout << "s[i]: " << s[i] << endl;
				temp = temp + to_string(c);
				temp =  temp + s[i];
				//cout << temp << endl;
				c = 0;
			}
			else c++;
		}
		//c=0;
		v[k] = temp;
	}
	int n;
	cin >> n;
	cout << v[n] << endl;
}
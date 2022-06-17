class Solution {
public:
    string countAndSay(int n) {
     string s = "1";
	for (int k = 1; k < n; k++) {
		string temp = "";
		int c = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != s[i + 1]) {
				c++;
				temp = temp + to_string(c);
				temp =  temp + s[i];
				c = 0;
			}
			else c++;
		}
		s = temp;
	}
	return s;
    }        
};

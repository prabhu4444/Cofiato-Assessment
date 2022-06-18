class Solution {
public:
	int strStr(string haystack, string needle) {
		int i = 0;
		int x = haystack.length();
		int y = needle.length();
		int res = -1;
		if (y > x) {
			return -1;
		}
		for (int j = 0; j < x ; j++) {
			if (haystack[j] == needle[i]) {
				i++;
				if (res == -1) {
					res = j;
				}
			}
			else if (i > 0) {
				i = 0;
				j = res;
				res = -1;
			}
			if (i == y) {
				break;
			}
		}
		if (i == y) {
			return res;
		}
		else {
			return -1;
		}

	}
};

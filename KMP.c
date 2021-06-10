

---------------------------------------------------------------------------------
n_len = n_str.size();
vector<int> KMP(n_len, 0); // KMP: Knuth–Morris–Pratt Pattern Matching
int i = 0;
for(int j = 1; j < n_len; j++) {
	while(i>0 && n_str[i] != n_str[j])
                    i = KMP[i-1];
	if(n_str[i] == n_str[j])
                    i++;
	KMP[j] = i;
}
---------------------------------------------------------------------------------



Problems
https://leetcode.com/problems/implement-strstr/




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
 - LC#28: https://leetcode.com/problems/implement-strstr/
 - LC#214: https://leetcode.com/problems/shortest-palindrome/
 - LC#459: https://leetcode.com/problems/repeated-substring-pattern/

OneNote Link:
https://onedrive.live.com/view.aspx?resid=3CAC955227001544%21351&id=documents&wd=target%28DS-Algo%2FAdv-Algorithm.one%7C22477E41-936F-AA42-B48F-E364CD39A136%2FKMP%20%28sub%20string%20search%5C%29%7CFF19C48D-9FF8-244D-A16E-7836CD1B0420%2F%29
onenote:https://d.docs.live.net/3cac955227001544/Documents/Go!/DS-Algo/Adv-Algorithm.one#KMP%20(sub%20string%20search)&section-id={22477E41-936F-AA42-B48F-E364CD39A136}&page-id={FF19C48D-9FF8-244D-A16E-7836CD1B0420}&end





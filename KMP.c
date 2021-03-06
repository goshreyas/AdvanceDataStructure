
https://leetcode.com/problems/implement-strstr/discuss/13153/KMP-Algorithm-using-C%2B%2B
---------------------------------------------------------------------------------
vector<int> getKMP(string &str) {
    int len = str.size();
    vector<int> KMP(len, 0); // KMP: Knuth–Morris–Pratt Pattern Matching
    int i = 0;
        
    for(int j = 1; j < len; j++) {
        while(i>0 && str[i] != str[j])
            i = KMP[i-1];
        if(str[i] == str[j])
            i++;
        KMP[j] = i;
    } // for
        
    return KMP;
}
---------------------------------------------------------------------------------
 //KMP-algorithm:
 //Pre-process
 int k = 0, i;
 for(i = 1; i < needle.size(); i++) {
     while(k > 0  && needle[k] != needle[i]) k = pi[k - 1];
     if(needle[k] == needle[i]) pi[i] = ++k;
 }
---------------------------------------------------------------------------------

Problems:
 - LC#28: https://leetcode.com/problems/implement-strstr/
 - LC#214: https://leetcode.com/problems/shortest-palindrome/
 - LC#459: https://leetcode.com/problems/repeated-substring-pattern/
 - LC#796: https://leetcode.com/problems/rotate-string/

OneNote Link:
https://onedrive.live.com/view.aspx?resid=3CAC955227001544%21351&id=documents&wd=target%28DS-Algo%2FAdv-Algorithm.one%7C22477E41-936F-AA42-B48F-E364CD39A136%2FKMP%20%28sub%20string%20search%5C%29%7CFF19C48D-9FF8-244D-A16E-7836CD1B0420%2F%29
onenote:https://d.docs.live.net/3cac955227001544/Documents/Go!/DS-Algo/Adv-Algorithm.one#KMP%20(sub%20string%20search)&section-id={22477E41-936F-AA42-B48F-E364CD39A136}&page-id={FF19C48D-9FF8-244D-A16E-7836CD1B0420}&end





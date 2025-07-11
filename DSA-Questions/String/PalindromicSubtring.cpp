#include<bits/stdc++.h>
using namespace std;
int FindAroundIndex(string s,int i,int j){
    int count = 0;
    while (i >= 0 && j < s.length()&& s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int PalindromicSubstring(string s){
    int count = 0;
    int n = s.length() ;
    for (int i = 0; i < n; i++){
        // odd case
        int countEvenCase = FindAroundIndex(s, i, i);
        count += countEvenCase;

        //  even case
        int countOddCase = FindAroundIndex(s, i, i + 1);
        count += countOddCase;
    }
    return count;
}


int main() {
    cout << PalindromicSubstring("abc") << endl;      // Output: 3  (a, b, c)
    cout << PalindromicSubstring("aaa") << endl;      // Output: 6  (a, a, a, aa, aa, aaa)
    cout << PalindromicSubstring("racecar") << endl;  // Output: 10
    cout << PalindromicSubstring("ababa") << endl;    // Output: 9  (a, b, a, b, a, aba, bab, aba, ababa)
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string ReverseVowel(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        while (start < end && !isVowel(s[start])) start++;
        while (start < end && !isVowel(s[end])) end--;

        if (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    return s;
}
int main() {
    cout << ReverseVowel("hello") << endl;       // Output: holle
    cout << ReverseVowel("leetcode") << endl;    // Output: leotcede
    cout << ReverseVowel("aA") << endl;          // Output: Aa
    cout << ReverseVowel("bcdfg") << endl;       // Output: bcdfg (no vowels)
    cout << ReverseVowel("ApplE") << endl;       // Output: EpplA
    return 0;
}


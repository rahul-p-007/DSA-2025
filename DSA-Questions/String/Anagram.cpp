#include<bits/stdc++.h>
using namespace std;
bool isAnagramB(string s,string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t){
        return true;
    }
    return false;
}
// Optimize Approach
bool isAnagram(string s,string t){
    int freqTable[256] = {0};
    for (int i = 0; i < s.size();i++){
        freqTable[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++){
        freqTable[t[i]]--;
    }
    for (int i = 0; i < 256; i++){
        if(freqTable[i] != 0){
            return false;
        }
    }
    return true;
}
int main() {
    cout << boolalpha; // print true/false instead of 1/0
    cout << "Test 1: " << isAnagram("listen", "silent") << endl;
    cout << "Test 2: " << isAnagram("hello", "world") << endl;
    cout << "Test 3: " << isAnagram("abc", "ab") << endl;
    cout << "Test 4: " << isAnagram("abc", "abc") << endl;
    cout << "Test 5: " << isAnagram("Listen", "Silent") << endl;
    cout << "Test 6: " << isAnagram("aabbcc", "abcabc") << endl;
    return 0;
}

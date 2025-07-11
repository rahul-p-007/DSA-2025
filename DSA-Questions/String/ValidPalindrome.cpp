<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
bool CheckPalindrome(string s , int i,int j){

    while(i<= j){
        if(s[i] != s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
bool isValidPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;
    while(start <= end){
        if(s[start] != s[end]){
            return CheckPalindrome(s, start + 1, end) || CheckPalindrome(s, start, end - 1);
        }else{
            start++;
            end--;
        }
    }
    return true;
}

int main() {
    // Test cases
    cout << isValidPalindrome("abca") << endl;  // Expected: 1 (true)
    cout << isValidPalindrome("racecar") << endl;  // Expected: 1 (true)
    cout << isValidPalindrome("abc") << endl;  // Expected: 0 (false)
    cout << isValidPalindrome("ab") << endl;  // Expected: 0 (false)
    cout << isValidPalindrome("a") << endl;  // Expected: 1 (true)
    cout << isValidPalindrome("acaa") << endl;  // Expected: 1 (true)

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
bool CheckPalindrome(string s , int i,int j){

    while(i<= j){
        if(s[i] != s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
bool isValidPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;
    while(start <= end){
        if(s[start] != s[end]){
            return CheckPalindrome(s, start + 1, end) || CheckPalindrome(s, start, end - 1);
        }else{
            start++;
            end--;
        }
    }
    return true;
}

int main() {
    // Test cases
    cout << isValidPalindrome("abca") << endl;  // Expected: 1 (true)
    cout << isValidPalindrome("racecar") << endl;  // Expected: 1 (true)
    cout << isValidPalindrome("abc") << endl;  // Expected: 0 (false)
    cout << isValidPalindrome("ab") << endl;  // Expected: 0 (false)
    cout << isValidPalindrome("a") << endl;  // Expected: 1 (true)
    cout << isValidPalindrome("acaa") << endl;  // Expected: 1 (true)

    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}
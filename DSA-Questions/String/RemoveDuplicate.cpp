<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
string RemoveDuplicate(string s) {
    string ans = "";
    int i = 0;
    while(i< s.length()){
        if(ans.length() > 0){
            if(ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }else{
          ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
int main() {
    vector<string> testCases = {
        "abbaca",     // Expected: "ca"
        "azxxzy",     // Expected: "ay"
        "aabccb",     // Expected: "b"
        "aaaa",       // Expected: ""
        "abcddcba",   // Expected: ""
        "",           // Expected: ""
        "abccba"      // Expected: ""
    };

    for (string test : testCases) {
        cout << "Input: \"" << test << "\" => Output: \"" << RemoveDuplicate(test) << "\"" << endl;
    }

    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
string RemoveDuplicate(string s) {
    string ans = "";
    int i = 0;
    while(i< s.length()){
        if(ans.length() > 0){
            if(ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }else{
          ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
int main() {
    vector<string> testCases = {
        "abbaca",     // Expected: "ca"
        "azxxzy",     // Expected: "ay"
        "aabccb",     // Expected: "b"
        "aaaa",       // Expected: ""
        "abcddcba",   // Expected: ""
        "",           // Expected: ""
        "abccba"      // Expected: ""
    };

    for (string test : testCases) {
        cout << "Input: \"" << test << "\" => Output: \"" << RemoveDuplicate(test) << "\"" << endl;
    }

    return 0;
}
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32

#include<bits/stdc++.h>
using namespace std;

string  RemoveOccurance(string s,string part){
    int pos = s.find(part);
    while(pos != string ::npos){
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}
int main() {
    // Test cases
    string s1 = "daabcbaabcbc";
    string part1 = "abc";
    cout << "Result 1: " << RemoveOccurance(s1, part1) << endl;
    // Expected: "dab"

    string s2 = "axxxxyyyyb";
    string part2 = "xy";
    cout << "Result 2: " << RemoveOccurance(s2, part2) << endl;
    // Expected: "axxxxyyyyb" (no "xy" to remove as a substring)

    string s3 = "hellohellohello";
    string part3 = "hello";
    cout << "Result 3: " << RemoveOccurance(s3, part3) << endl;
    // Expected: ""

    string s4 = "aaaaaa";
    string part4 = "aa";
    cout << "Result 4: " << RemoveOccurance(s4, part4) << endl;
    // Expected: "" (as each removal reveals another "aa")

    return 0;
}
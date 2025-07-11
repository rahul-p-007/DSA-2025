#include<bits/stdc++.h>
using namespace std;

void RemoveSpace(char arr[],int n){
    for (int i = 0; i < n; i++){
        if(arr[i] == ' '){
            arr[i] = '@';
        }
    }
}

int main() {
    // Test Case 1: Normal sentence
    char str1[] = "Hello World";
    RemoveSpace(str1, strlen(str1));
    cout << "Modified: " << str1 << endl;

    // Test Case 2: Sentence with multiple spaces
    char str2[] = "This  is   a test";
    RemoveSpace(str2, strlen(str2));
    cout << "Modified: " << str2 << endl;

    // Test Case 3: No space in the string
    char str3[] = "NoSpaceHere";
    RemoveSpace(str3, strlen(str3));
    cout << "Modified: " << str3 << endl;

    // Test Case 4: String with spaces at beginning and end
    char str4[] = "  Leading and trailing  ";
    RemoveSpace(str4, strlen(str4));
    cout << "Modified: " << str4 << endl;

    // Test Case 5: All spaces
    char str5[] = "     ";
    RemoveSpace(str5, strlen(str5));
    cout << "Modified: " << str5 << endl;

    // Test Case 6: Empty string
    char str6[] = "";
    RemoveSpace(str6, strlen(str6));
    cout << "Modified: " << str6 << endl;

    return 0;
}

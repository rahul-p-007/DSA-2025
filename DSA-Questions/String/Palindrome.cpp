#include<bits/stdc++.h>
using namespace std;

int CheckThepalindrme(char arr[]){
    int low = 0;
    int high = strlen(arr)-1;
    while(low <= high){
        if(arr[low] != arr[high]){

            return 0;
        }
        low++;
        high--;
    }
    return 1;
}
int main() {
    // Test Case 1: Palindrome word
    char str1[] = "madam";
    cout << str1 << " => " << (CheckThepalindrme(str1) ? "Palindrome" : "Not a palindrome") << endl;

    // Test Case 2: Not a palindrome
    char str2[] = "hello";
    cout << str2 << " => " << (CheckThepalindrme(str2) ? "Palindrome" : "Not a palindrome") << endl;

    // Test Case 3: Single character
    char str3[] = "a";
    cout << str3 << " => " << (CheckThepalindrme(str3) ? "Palindrome" : "Not a palindrome") << endl;

    // Test Case 4: Empty string
    char str4[] = "";
    cout << "Empty string => " << (CheckThepalindrme(str4) ? "Palindrome" : "Not a palindrome") << endl;

    // Test Case 5: Even length palindrome
    char str5[] = "abba";
    cout << str5 << " => " << (CheckThepalindrme(str5) ? "Palindrome" : "Not a palindrome") << endl;

    // Test Case 6: Mixed case (will fail unless you handle case sensitivity)
    char str6[] = "Madam";
    cout << str6 << " => " << (CheckThepalindrme(str6) ? "Palindrome" : "Not a palindrome") << endl;

    return 0;
}

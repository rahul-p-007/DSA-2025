#include<bits/stdc++.h>
using namespace std;

int LengthOfString(char arr[]){
    
    int count = 0;
    int i = 0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
      // Test case 1: Normal string
      char str1[] = "Hello";
      printf("Length of '%s' is %d\n", str1, LengthOfString(str1));
  
      // Test case 2: Empty string
      char str2[] = "";
      printf("Length of empty string is %d\n", LengthOfString(str2));
  
      // Test case 3: String with spaces
      char str3[] = "Hello World";
      printf("Length of '%s' is %d\n", str3, LengthOfString(str3));
  
      // Test case 4: String with special characters
      char str4[] = "@!#*()";
      printf("Length of '%s' is %d\n", str4, LengthOfString(str4));
  
      // Test case 5: Long string
      char str5[] = "This is a longer sentence for testing.";
      printf("Length of '%s' is %d\n", str5, LengthOfString(str5));
  
      return 0;

  
}
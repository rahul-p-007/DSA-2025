<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

void toUppercase(char arr[]){
    int i = 0;
    while (arr[i] != '\0')
    {
       if(arr[i] >= 'a' && arr[i] <= 'z'){
        arr[i] = arr[i] - ('a' - 'A'); 
       }
       i++;
    }
    
}
int main(){
    char str1[] = "Hello";
    toUppercase(str1);  // call the function first
    cout << "UPPERCASE : " << str1 << endl;  // then print
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

void toUppercase(char arr[]){
    int i = 0;
    while (arr[i] != '\0')
    {
       if(arr[i] >= 'a' && arr[i] <= 'z'){
        arr[i] = arr[i] - ('a' - 'A'); 
       }
       i++;
    }
    
}
int main(){
    char str1[] = "Hello";
    toUppercase(str1);  // call the function first
    cout << "UPPERCASE : " << str1 << endl;  // then print
    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}
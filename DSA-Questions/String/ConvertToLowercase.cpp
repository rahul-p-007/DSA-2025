<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

void toLowerCase(char arr[]){
    int n = strlen(arr)-1;
    for (int i = 0; i <= n; i++){
        arr[i] = arr[i] - 'A' + 'a'; 
    }
}
int main(){
    char str1[] = "HELLO";
    toLowerCase(str1); 
    cout << "Lowercase : " << str1 << endl;  
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

void toLowerCase(char arr[]){
    int n = strlen(arr)-1;
    for (int i = 0; i <= n; i++){
        arr[i] = arr[i] - 'A' + 'a'; 
    }
}
int main(){
    char str1[] = "HELLO";
    toLowerCase(str1); 
    cout << "Lowercase : " << str1 << endl;  
    return 0;
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32
}
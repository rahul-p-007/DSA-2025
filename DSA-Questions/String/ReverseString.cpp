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

void ReverseStr1(char arr[]){
    int low = 0;
    int high = LengthOfString(arr)-1;
    while(low<= high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main(){
    char str1[] = "Hello";
    cout <<"Before Reversing string"<<" "<< str1<<endl;
    ReverseStr1(str1);
    cout<<endl<<"After Reversing string"<<" : "<< str1;
}
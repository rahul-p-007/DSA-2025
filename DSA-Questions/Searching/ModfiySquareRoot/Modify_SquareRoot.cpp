<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int SqaureRoot(int Num){
    int start = 1;
    int end = Num - 1;
    int ans = 1;
    while(start <= end){
        long long mid = start + (end - start) / 2;
        long long target = mid * mid;
        if(target <= (long long)(Num)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    vector<int> testCases = {1, 4, 10, 15, 16, 17, 100, 2147395599};

    for(int num : testCases) {
        cout << "SqaureRoot(" << num << ") = " << SqaureRoot(num) << endl;
    }

    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;

int SqaureRoot(int Num){
    int start = 1;
    int end = Num - 1;
    int ans = 1;
    while(start <= end){
        long long mid = start + (end - start) / 2;
        long long target = mid * mid;
        if(target <= (long long)(Num)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    vector<int> testCases = {1, 4, 10, 15, 16, 17, 100, 2147395599};

    for(int num : testCases) {
        cout << "SqaureRoot(" << num << ") = " << SqaureRoot(num) << endl;
    }

    return 0;
}
>>>>>>> 3ffe28cfedf2733f8d30d5c7eedde94246a74e32

#include<bits/stdc++.h>
using namespace std;

int maxiMum(vector<int> arr){
    int maxi = -1;
    for (int i = 0; i < arr.size() ; i++){
        maxi = max(maxi, arr[i]);  
    }
    return maxi;
}

int findHour(vector<int> arr,int hourly){
    int totalHour = 0;
    for (int i = 0; i < arr.size(); i++){
        totalHour += ceil((double)arr[i] / (double)hourly);
    }
    return totalHour;
}

int KokoEatBanana(vector<int> arr,int hour)
{
    int start = 0;
    int end = maxiMum(arr);
    while(start<= end){
        int mid = start + (end - start) / 2;
        int CheckHour = findHour(arr, mid);
        if(CheckHour <=  hour){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return start;
}
int main() {
    vector<int> bananas1 = {3, 6, 7, 11};
    int h1 = 8;
    cout << "Minimum eating speed for test 1: " << KokoEatBanana(bananas1, h1) << endl;

    vector<int> bananas2 = {30, 11, 23, 4, 20};
    int h2 = 6;
    cout << "Minimum eating speed for test 2: " << KokoEatBanana(bananas2, h2) << endl;

    vector<int> bananas3 = {30, 11, 23, 4, 20};
    int h3 = 5;
    cout << "Minimum eating speed for test 3: " << KokoEatBanana(bananas3, h3) << endl;

    vector<int> bananas4 = {1000000000}; // Very large single pile
    int h4 = 2;
    cout << "Minimum eating speed for test 4: " << KokoEatBanana(bananas4, h4) << endl;

    vector<int> bananas5 = {1, 1, 1, 1, 1};
    int h5 = 5;
    cout << "Minimum eating speed for test 5: " << KokoEatBanana(bananas5, h5) << endl;

    return 0;
}

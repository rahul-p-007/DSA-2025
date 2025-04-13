#include<bits/stdc++.h>
using namespace std;

int MinimumDifference(vector<string>timePoints){
    vector<int> minutes;
    for (int i = 0; i < timePoints.size(); i++){ //O(n)
        string currTime = timePoints[i];
        int hour = stoi(currTime.substr(0, 2));
        int min = stoi(currTime.substr(3, 2));
        int totalminutes = hour * 60 + min;
        minutes.push_back(totalminutes);
    }

    sort(minutes.begin(), minutes.end()); // O(n log n)
    int mini = INT_MAX;
    for (int i = 0; i < minutes.size() - 1; i++){
        int miniDiff = minutes[i + 1] - minutes[i];
        mini = min(mini, miniDiff);
    }

    int lastMini1 = (minutes[0] + 1440) - minutes[minutes.size() - 1];
    int lastMini2 = (minutes[minutes.size()-1]) - minutes[0];
    int lastMini = min(lastMini1, lastMini2);
    mini = min(mini, lastMini);
    return mini;
}

int main() {
    vector<string> t1 = {"23:59", "00:00"};
    cout << MinimumDifference(t1) << endl;  // Output: 1

    vector<string> t2 = {"01:01", "02:01", "03:00"};
    cout << MinimumDifference(t2) << endl;  // Output: 59

    vector<string> t3 = {"00:00", "23:55", "00:05"};
    cout << MinimumDifference(t3) << endl;  // Output: 5

    vector<string> t4 = {"05:31", "22:08", "00:35"};
    cout << MinimumDifference(t4) << endl;  // Output: 147

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void wavePrintMatrix(vector<vector<int>> v)
{
    int m = v.size();
    int n = v[0].size();
    for (int startCol = 0; startCol < n; startCol++)
    {
        // even no of Col -> Top to bottom

        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << v[i][startCol] << " ";
            }
        }
        // Odd no of Col

        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main()
{

    vector<vector<int>> v{
        {1, 3, 4},
        {5, 6, 7},
        {9, 7, 7}};

    wavePrintMatrix(v);
}
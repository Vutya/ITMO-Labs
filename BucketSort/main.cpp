// Sorts from 0 to 120
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned int uint;

void bucketSort(vector<uint> &vec)
{
    vector<vector<uint>> b(11);
    for (int i=0; i<vec.size(); i++)
    {
        int ind = vec[i]/11;
        b[ind].push_back(vec[i]);
    }
    for (int i=0; i<11; i++)
        sort(b[i].begin(), b[i].end());
    int index = 0;
    for (int i = 0; i < 11; i++)
        for (int j = 0; j < b[i].size(); j++)
            vec[index++] = b[i][j];
}

int main()
{
    vector<uint> arr = {89,99,120,55,6,0,0,55,120,14,66,3,78,4};
    int n = arr.size();
    cout << "WARNING: This algorithm sorts only numbers from 0 to 120."<<endl;
    cout << "Unsorted vector is ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<endl;
    bucketSort(arr);
    cout << "Sorted vector is ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}

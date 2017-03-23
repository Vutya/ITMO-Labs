#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned int uint;

uint buckets(vector<uint> &a)
{
    int max=a[0];
    for (int i = 1; i<a.size();i++)
        if (a[i]>max)
            max=a[i];
    max = sqrt(max)+1;
    return max;
}
void bucketSort(vector<uint> &vec,uint n)
{
    vector<vector<uint>> b(n);
    for (int i=0; i<vec.size(); i++)
    {
        int ind = vec[i]/n;
        b[ind].push_back(vec[i]);
    }
    for (int i=0; i<n; i++)
        sort(b[i].begin(), b[i].end());
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            vec[index++] = b[i][j];
}

int main()
{
    vector<uint> arr = {89,99,120,121,55,14,66,3,78,4};
    int n = arr.size();
    cout << "Unsorted vector is ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<endl;
    int k = buckets(arr);
    bucketSort(arr,k);
    cout << "Sorted vector is ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}

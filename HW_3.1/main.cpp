#include <iostream>

using namespace std;

const int N = 10;

int Partition (int *a,int t,int l)
{
    int x = a[l];
    int i = t-1;
    for (int j = t; j < l; j++)
    {
        if (a[j]<=x)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[l]);
    return i+1;
}

int MedianPartition(int *a,int p,int r)
{
    int mid = a[p+(r-p)/2];
    int left = a[p];
    int right = a[r];
    if((left > mid) && (left < right) || (left < mid) && (left > right))
    {
        swap (left,right);
    }
    else if((mid > left) && (mid < right) || (mid < left) && (mid > right))
    {
        swap (mid,right);
    }
    return Partition(a,p,r);
}

void QuickSort (int *a,int p,int r)
{
    if (p < r)
    {
        int q = MedianPartition(a,p,r);
        QuickSort(a,p,q-1);
        QuickSort(a,q+1,r);
    }

}

int main()
{
    int s [N] = {6,3,0,1,8,7,2,4,9,5};
    cout <<"The first example\nArray before Quick Sort: ";
    for (int d = 0; d < N; d++)
        cout << s[d] << " ";
    QuickSort(s,0,N-1);
    cout <<"\nArray after Quick Sort: ";
    for (int d = 0; d < N; d++)
        cout << s[d] << " ";

    cout << "\n\nThe second example\nEnter " << N << " numbers:" << endl;
    for (int d = 0; d < N; d++)
        cin >> s[d];
    QuickSort(s,0,N-1);
    cout <<"\nArray after Quick Sort: ";
    for (int d = 0; d < N; d++)
        cout << s[d] << " ";

    return 0;
}

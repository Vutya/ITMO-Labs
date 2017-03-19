#include <iostream>
#include <vector>

typedef long long lng;

using namespace std;

int digit(lng num, lng pos)
{
    return (int) (num >> (8 * pos) & 255);
}

void radixSort(vector<lng> &a)
{
    int b[a.size()]= {0};
    for (int i = 0; i < sizeof(lng); i++)
    {
        int c[256] = {0};
        for (int j = 0; j < a.size(); j++)
        {
            c[digit(a[j], i)]++;
        }
        for (int j = 1; j < 256; j++)
        {
            c[j] += c[j - 1];
        }
        for (int j = a.size() - 1; j > -1; j--)
        {
            b[--c[digit(a[j], i)]] = a[j];
        }
        for (int j = 0; j < a.size(); j++)
        {
            a[j] = b[j];
        }
    }
}

int main()
{
    vector<lng> kek = {5,7,8,4,27654,234793,10075,2,0,9,112,324256233,65,235362,12,65,14};
    for (int i = 0; i < kek.size(); i++)
        cout << kek [i] << " ";
    cout << endl;
    radixSort(kek);
    for (int i = 0; i < kek.size(); i++)
        cout << kek [i]<< " ";
    return 0;
}

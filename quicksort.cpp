#include <vector>
#include <iostream>
using namespace std;
int qsor(vector<int> &a, int low, int high)
{
    int left = low + 1;
    int right = high;
    while (left <= right)
    {
        while (a[left] >= a[low] && left <= high)
        {
            left++;
        }
        while (a[right] < a[low] && right >= low)
        {
            right--;
        }
        if (left < right)
        {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }

    int temp = a[right];
    a[right] = a[low];
    a[low] = temp;
    return right;
}
void quicksort(vector<int> &a, int low, int high)
{
    if (high > low)
    {
        int mid = qsor(a, low, high);
        quicksort(a, low, mid - 1);
        quicksort(a, mid + 1, high);
    }
}

int main()
{
    vector<int> an;
    an = {17, 32, 12, 67, 445, 33, 6, 3, 7};
    quicksort(an, 0, an.size() - 1);
    for (int i = 0; i < an.size(); i++)
    {
        cout << an[i] << endl;
    }

    return 0;
}
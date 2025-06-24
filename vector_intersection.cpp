#include<iostream>
#include<vector>
using namespace std;

void interArray(vector<int> crr, vector<int> drr)
{
    vector<int> intersection;

    for (int i = 0; i < crr.size(); i++) {
        int key = crr[i];
        for (int j = 0; j < drr.size(); j++) {
            if (key == drr[j]) {
                intersection.push_back(key);
                drr[j] = -1; // Mark as used
                break;
            }
        }
    }

    cout << "Intersection of two arrays is:" << endl;
    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of arrays: ";
    cin >> size;

    vector<int> arr(size);
    vector<int> brr(size);

    cout << "Enter elements into arr 1:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter elements into arr 2:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> brr[i];
    }

    interArray(arr, brr);

    return 0;
}

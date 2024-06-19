
#include <iostream>
using namespace std;

class Arrs {
public:
    int getarrray(int arr[], int n) {
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Arrs a;
    int max = a.getarrray(arr, n);

    cout << "The maximum element is: " << max << endl;

    return 0;
}

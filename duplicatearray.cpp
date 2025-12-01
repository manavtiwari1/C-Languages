#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the no of elements in the array(<100): ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  
                j--;  
            }
        }
    }
    cout << "Array after removal = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;    
    return 0;
}

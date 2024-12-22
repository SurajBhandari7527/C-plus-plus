/*You are given an array of integers nums, there is a sliding window of sizek
which is moving from the very left of the array to the very right. You can only
see the k numbers in the window. Each time the sliding window moves right
by one position. Return the max sliding window which basically contains the
max element in each window. |*/
#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The inputted array is" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    int k;
    cout << "Enter the value of k: " << endl;
    cin >> k;

    deque<int> q;  // Deque to store indices
    int res[n - k + 1]; // Result array to store the max in each sliding window
    int count = 0;

    // Loop through the array
    for (int i = 0; i < n; i++) {
        // Remove elements that are out of the current window
        if (!q.empty() && q.front() == i - k) {
            q.pop_front();
        }

        // Remove elements from the deque that are smaller than the current element
        while (!q.empty() && arr[q.back()] <= arr[i]) {
            q.pop_back();
        }

        // Add the current element's index to the deque
        q.push_back(i);

        // The front of the deque contains the index of the maximum element for the current window
        if (i >= k - 1) {
            res[count++] = arr[q.front()];
        }
    }

    // Output the result
    cout << "The final array with max elements in each window is" << endl;
    for (int i = 0; i < n - k + 1; i++) {
        cout << res[i] << "\t";
    }
    cout << endl;

    return 0;
}

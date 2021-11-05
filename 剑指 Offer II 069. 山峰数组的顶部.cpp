#if 0
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int right = arr.size();
        int left = 0;
        int mid = right >> 1;
        while (!(arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid]))
        {
            if (arr[mid - 1]<arr[mid] && arr[mid + 1]>arr[mid]) left = mid;
            else right = mid;
            mid = (left + right) >> 1;
        }
        return mid;
    }
};

int main()
{

}


#endif
#include "BinarySearch.hpp"


int BinarySearch::binary_search(const int* array, int len, int target) {
    if (array == nullptr || len <= 0 || target < array[0] || target > array[len - 1]) {
        return -1;
    }
    else {
        int left = 0;
        int right = len;
        int mid;
        
        while (left <= right) {
            mid = left + (right - left) / 2;
            
            if (array[mid] == target) {
                return mid;
            }
            else if (target < array[mid]) {
                right = mid - 1;
            }
            else if (target > array[mid]) {
                left = mid + 1;
            }
        }
    }
    return -1;
}

int BinarySearch::binary_search(const std::vector<int> vec, int target) {
    int len = vec.size();
    int left = 0;
    int right = len;
    int mid;
    
    if (len <= 0 || target < vec[0] || target > vec[len - 1]) {
        return -1;
    }
    else {
        
        while (left <= right) {
            mid = left + (right - left) / 2;
            
            if (vec[mid] == target) {
                return mid;
            }
            else if (target < vec[mid]) {
                right = mid;
            }
            else if (target > vec[mid]) {
                left = mid;
            }
        }
    }
    
    return -1;
}

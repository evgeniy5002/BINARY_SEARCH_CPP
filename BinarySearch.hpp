#ifndef BinarySearch_hpp
#define BinarySearch_hpp

#include <iostream>
#include <vector>

class BinarySearch {
public:
    static int binary_search(const int* array, int len, int target);
    static int binary_search(const std::vector<int> vec, int target);
};


#endif /* BinarySearch_hpp */

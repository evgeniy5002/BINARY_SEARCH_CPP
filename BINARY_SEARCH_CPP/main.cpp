#include <iostream>
#include "BinarySearch.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 1; i <= 10; i++) {
        cout << "index: " << BinarySearch::binary_search(vector(array, array + 10), i) << "\n";
    }
    
    return 0;
}

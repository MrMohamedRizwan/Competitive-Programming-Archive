#include <iostream>
#include <vector>
#include <algorithm>

int findIndex(const std::vector<int>& vec, int value) {
    auto it = std::find(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        return std::distance(vec.begin(), it);  // Return the index of the found value
    } else {
        return -1;  // Return -1 if the value is not found
    }
}

int main() {
    std::vector<int> vec = {2, 4, 6, 8, 10};

    int valueToFind = 6;
    int index = findIndex(vec, valueToFind);

    if (index != -1) {
        std::cout << "Value " << valueToFind << " found at index " << index << std::endl;
    } else {
        std::cout << "Value " << valueToFind << " not found in the vector" << std::endl;
    }

    return 0;
}
 
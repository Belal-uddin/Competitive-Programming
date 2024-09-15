// lower_bound finds the first element that is greater than or equal to the target (≥).
// upper_bound finds the first element that is strictly greater than the target (>).

#include <iostream>
#include <vector>
#include <algorithm> // for lower_bound

int main() {
    std::vector<int> v = {10, 20, 20, 20, 30, 40, 50};

    // Find the first element that is not less than 20
    auto it = std::lower_bound(v.begin(), v.end(), 20);

    // Output the position and value
    if (it != v.end()) {
        std::cout << "The first element not less than 20 is: " << *it << std::endl;
        std::cout << "Position: " << (it - v.begin()) << std::endl;
    } else {
        std::cout << "No element found that is not less than 20." << std::endl;
    }

    return 0;
}


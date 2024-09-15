```cpp
    #include <iostream>
    #include <vector>
    #include <algorithm> // for upper_bound

    int main() {
    std::vector<int> v = {10, 20, 20, 20, 30, 40, 50};

    // Find the first element greater than 20
    auto it = std::upper_bound(v.begin(), v.end(), 20);

    // Output the position and value
    if (it != v.end()) {
        std::cout << "The first element greater than 20 is: " << *it << std::endl;
        std::cout << "Position: " << (it - v.begin()) << std::endl;
    } else {
        std::cout << "No element greater than 20 found." << std::endl;
    }

    return 0;
    }

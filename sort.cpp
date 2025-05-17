#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int factor = 10;

    std::vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    std::sort(numbers.begin(), numbers.end(), [factor](int x, int y) {
        return (x % factor) < (y % factor);
    });

    for (int num : numbers)
        std::cout << num << " ";
    return 0;
}


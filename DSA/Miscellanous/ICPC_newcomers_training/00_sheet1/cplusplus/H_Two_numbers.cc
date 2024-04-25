#include <iostream>
#include <cmath>

int main() {
    // Input two numbers A and B
    int A, B;
    std::cin >> A >> B;

    // Calculate floor, ceil, and round of A/B
    int floorResult = floor(A / static_cast<double>(B));
    int ceilResult = ceil(A / static_cast<double>(B));
    int roundResult = round(A / static_cast<double>(B));

    // Output the results
    std::cout << "floor " << A << " / " << B << " = " << floorResult << std::endl;
    std::cout << "ceil " << A << " / " << B << " = " << ceilResult << std::endl;
    std::cout << "round " << A << " / " << B << " = " << roundResult << std::endl;

    return 0;

}

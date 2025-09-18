#include <iostream>
#include <cmath>

float calculate_pi(int iter) {
    float sum = 0.0f;
    for (int step = 0; step < iter; step++) {
        float sign = std::pow(-1, step);
        float den = 2 * step + 1;
        sum += sign / den;
    }
    return 4 * sum;
}
int main() {
    int count_steps;
    std::cin >> count_steps;
    float result = calculate_pi(count_steps);
    std::cout << count_steps << " " << result;
    return 0;
}

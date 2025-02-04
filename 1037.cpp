#include <iostream>

int main() {
    int N;
    int num, min = 1000000, max = 0;
    std::cin >> N;
    
    
    for(int i = 0; i < N; i++) {
        std::cin >> num;
        if(num > max) max = num;
        if(num < min) min = num;
    }
    
    std::cout << max * min;
}

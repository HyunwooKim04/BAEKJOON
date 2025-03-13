#include <iostream>

int main() {
    int N;
    int numbers[10000] = {0};
    std::cin >> N;

    for(int i=0; i<N; i++) {
        int elem;
        std::cin >> elem;
        numbers[elem-1]++;
    }

    

    for(int i=0; i<10000; i++) {
        for(int j=0; j<numbers[i]; j++)
            std::cout << i+1 << '\n';
    }
}

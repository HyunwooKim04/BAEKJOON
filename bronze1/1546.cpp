#include <iostream>

int main() {
    int N;
    double average = 0;
    double max = 0;
    std::cin >> N;
    double* score = new double[N];
    
    for(int i=0; i<N; i++) {
        std::cin >> score[i];
        if(score[i] > max)
            max = score[i];
    }
    
    for(int i=0; i<N; i++) {
        score[i] = score[i] / max * 100;
        average += score[i];
    }
    
    std::cout << average / N << '\n';
}

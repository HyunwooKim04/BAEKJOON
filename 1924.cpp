#include <iostream>
#include <string>

int main() {
    int m, d;
    std::cin >> m >> d;
    
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    int answer = 0;
    
    for(int i = 0; i < m - 1; i++) {
        answer += month[i];
    }
    
    answer = (answer + d) % 7;
    
    std::cout << day[answer];
}

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> vec(9);
    int total = 0;
    
    for(int i = 0; i < 9; i++) {
        std::cin >> vec[i];
        total += vec[i];
    }
    
    bool found = false;
    
    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 9; j++) {
            if(total - vec[i] - vec[j] == 100) {
                vec.erase(vec.begin() + j); // j를 먼저 삭제해야 위치가 유지됨
                vec.erase(vec.begin() + i);
                found = true;
                break;
            }
        }
        if(found) break;
    }
    
    std::sort(vec.begin(), vec.end());
    
    for(int elem : vec) {
        std::cout << elem << '\n';
    }
}


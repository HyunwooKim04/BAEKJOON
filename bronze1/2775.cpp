#include <iostream>

int main() {
    int resident[15][15] = {0};
    
    for(int floor = 0; floor < 15; floor++) {
        resident[floor][0] = 1;
    }
        
    for(int room = 0; room < 15; room++) {
        resident[0][room] = room + 1;
    }
    
    for(int floor = 1; floor < 15; floor++) {
        for(int room = 1; room < 15; room++) {
            resident[floor][room] = resident[floor][room - 1] + resident[floor - 1][room];
        }
    }
    
    int T, k, n;
    std::cin >> T;
    while(T--) {
        std::cin >> k >> n;
        std::cout << resident[k][n - 1] << '\n';
    }
}

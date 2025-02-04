#include <iostream>

int main() {
    char word[5][15] = {0};
    
    for(int i = 0; i < 5; i++) {
        std::cin >> word[i];
    }
    
    for(int j = 0; j < 15; j++) {
        for(int i = 0; i < 5; i++) {
            if(word[i][j] != '\0') std::cout << word[i][j];
        }
    }
}

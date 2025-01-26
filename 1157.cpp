#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> count(26, 0);
    
    for(char& elem : str) {
        elem = toupper(elem);
        count[elem - 'A']++;
    }
    
    int max = 0;
    
    for(int elem : count) {
        if(elem > max) max = elem;
    }
    
    int moreThanTwo = 0;
    
    for(int elem : count) {
        if(elem == max) moreThanTwo++;
    }
    
    if(moreThanTwo > 1) {
        std::cout << '?' << '\n';
    } else {
        for(int i=0; i<count.size(); i++) {
            if(count[i] == max) {
                std::cout << char(i + 'A') << '\n';
                return 0;
            }
        }
    }
}

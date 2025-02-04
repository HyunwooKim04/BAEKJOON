#include <iostream>
#include <string>

int main() {
    std::string str;
    
    while(true) {
        std::cin >> str;
        if(str == "0") break;
        bool isSame = true;
        
        for(int i = 0; i < str.length() / 2 && isSame; i++) {
            if(str[i] != str[str.length() - i - 1]) isSame = false;
        }
        
        if(isSame) std::cout << "yes" << '\n';
        else std::cout << "no" << '\n';
    }
}

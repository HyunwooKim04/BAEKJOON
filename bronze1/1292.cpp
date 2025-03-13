#include <iostream>
#include <vector>

int main() {
    int A, B, sum = 0;
    std::vector<int> vec;
    std::cin >> A >> B;
    
    for(int i = 1; i < 46; i++) {
        int C = i;
        while(C) {
            vec.push_back(i);
            C--;
        }
    }
    
    for(int i = A - 1; i < B; i++) {
        sum += vec[i];
    }
    
    std::cout << sum << std::endl;
}

/*
----------------------------------------------------------
 첫번째 for 반복문의 조건이 i < 46 으로 하드코딩 돼있어 가독성이 떨어짐.
 while(C) --> std::vector::insert
----------------------------------------------------------
*/

#include <iostream>
#include <vector>

int main() {
    int A, B, sum = 0;
    std::vector<int> vec;
    std::cin >> A >> B;
    
    for(int i = 1; vec.size() < B; i++) {
        vec.insert(vec.end(), i, i);
    }
    
    for(int i = A - 1; i < B; i++)  {
        sum += vec[i];
    }
    
    std::cout << sum << std::endl;
}



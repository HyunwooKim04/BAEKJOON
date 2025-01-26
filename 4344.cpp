#include <iostream>
#include <iomanip>

int main() {
    int C;
    std::cin >> C;
    
    for(int i=0; i<C; i++) {
        int student;
        double sum = 0;
        double rate = 0;
        std::cin >> student;
        double* grade = new double[student];
        
        for(int j=0; j<student; j++) {
            std::cin >> grade[j];
            sum += grade[j];
            
        }
        
        sum = sum/student;
        
        for(int j=0; j<student; j++) {
            if(grade[j] > sum) rate++;
        }
        
        std::cout << std::fixed << std::setprecision(3) << (rate/student) * 100 << "%" << std::endl;
        
        delete [] grade;
    }
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    long long dp[91];
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    std::cout << dp[n];
}

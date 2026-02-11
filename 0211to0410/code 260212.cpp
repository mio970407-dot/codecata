#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int GCD = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && m % i == 0) {
            GCD = i;
        }
    }
    int LCM = n * m / GCD;
    answer.push_back(GCD);
    answer.push_back(LCM);
    return answer;
}
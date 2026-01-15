#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    for (long long x = 1; x <= n; x++) {
        if (x * x == n) {
            answer = (x + 1) * (x + 1);
            break;
        }
        else {
            answer = -1;
        }
    }
    return answer;
}
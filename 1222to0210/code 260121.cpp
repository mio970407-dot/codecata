#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long n = num;
    while (n) {
        if (n == 1) {
            break;
        }
        else if (answer >= 500) {
            answer = -1;
            break;
        }
        else if (n % 2 == 0) {
            n = n / 2;
            answer++;
        }
        else if (n % 2 == 1) {
            n = n * 3 + 1;
            answer++;
        }
    }
    return answer;
}
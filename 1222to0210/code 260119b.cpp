#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int xDup = x;
    while (xDup) {
        sum += xDup % 10;
        xDup /= 10;
    }
    if (x % sum != 0) {
        answer = false;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = (right + left) * (right - left + 1) / 2;
    for (int i = 1; i <= 100; i++) {
        for (int j = left; j <= right; j++) {
            if (i * i == j) {
                answer -= j * 2;
            }
        }
    }
    return answer;
}
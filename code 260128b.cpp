#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for (int i = 0; i <= 9; i++) {
        auto a = find(numbers.begin(), numbers.end(), i);
        if (a != numbers.end()) {
            answer += 0;
        }
        else {
            answer += i;
        }
    }
    return answer;
}
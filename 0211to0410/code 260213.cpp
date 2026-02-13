#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 0;
    //n을 3진법으로 변환
    vector<int> three;
    int index;
    //벡터로 순서바꾸기
    for (int i = 3; i <= 3 * n; i *= 3) {
        index = n % i;
        n -= index;
        three.push_back(index * 3 / i);
    }
    //three를 10진법으로 전환
    int a = three.size();
    int b = 1;
    for (int i = 1; i <= a; i++) {
        answer += three[a - i] * b;
        b *= 3;
    }
    return answer;
}
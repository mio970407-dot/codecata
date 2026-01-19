#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int>array;

    while (n > 0) {
        array.push_back(n % 10);
        n /= 10;
    }

    sort(array.begin(), array.end(), greater<int>();

    for (int i = 1; i <= array.size(); i++) {
        answer = answer * 10 + array[i];
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if (s.size() != 4 && s.size() != 6) {
        answer = false;
    }
    for (int i = 0; i < s.length(); i++) {
        if (48 > s[i] || s[i] > 57) {
            answer = false;
        }
    }

    return answer;
}
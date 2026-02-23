#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for (int i = 0; i <= t.length() - p.length(); i++) {
        string newt = t.substr(i, p.length());
        if (newt <= p) {
            answer++;
        }
    }
    return answer;
}
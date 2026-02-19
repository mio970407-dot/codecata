#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int idx = 0;
    string answer = s;
    for (int i = 0; i < answer.length(); i++) {
        if (answer[i] == ' ') {
            idx = 0;
            continue;
        }
        if (idx % 2 == 0) {
            answer[i] = toupper(answer[i]);
        }
        else {
            answer[i] = tolower(answer[i]);
        }
        idx++;
    }
    return answer;
}
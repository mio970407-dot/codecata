using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = (long long)price * (1 + count) * count / 2 - money;
    if (answer <= 0) {
        answer = 0;
    }
    return answer;
}
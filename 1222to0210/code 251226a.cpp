int solution(int age) {
    int answer = 0;
    if (0 < age <= 120) {
        answer = 2023 - age;
    }
    else {
        return 1;
    }

    return answer;
}
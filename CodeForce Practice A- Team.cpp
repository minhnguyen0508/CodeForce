#include <iostream>
int solution(int input) {
    int size = input * 3;
    int *problem = new int[size];
    for (int i = 0; i < size; i++) {
        std::cin >> problem[i];
    }
    int result = 0;
    int count = 0;
    int to_three = 0;
    for (int i = 0; i < size; i++) {
        if (problem[i] == 1) {
            count++;
            to_three++;
        }
        else {
            to_three++;
        }
        if (count >= 2 && to_three == 3) {
            result++;
            count = 0;
            to_three = 0;
        }
        if (to_three == 3) {
            to_three = 0;
            count = 0;
        }
    }

    return result;
}
int main()
{
    int size = 0;
    std::cin >> size;
    int result = solution(size);
    std::cout << result;
}


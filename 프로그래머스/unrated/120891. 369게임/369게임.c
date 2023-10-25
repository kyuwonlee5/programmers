#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    while(order) {
        int rem = order % 10;
        if(rem == 3 || rem == 6 || rem == 9) {
            ++answer;
        }
        order /= 10;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int coupon = 0;
    int service = 0;
    int temp = 0;
    temp = chicken;
    
    while(temp) {
        service += temp / 10;
        coupon += temp % 10;
        temp /= 10;
        if( coupon >= 10 ) {
            service += coupon / 10;
            coupon += coupon / 10;
            coupon %= 10;
        }
    }
    
    return service;
}
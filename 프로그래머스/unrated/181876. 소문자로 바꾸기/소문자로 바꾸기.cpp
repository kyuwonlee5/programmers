#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(int i = 0; i < myString.size(); i++){
        if(isupper(myString[i])) {
            myString[i] = tolower(myString[i]);
        }
    }
    return myString;
}
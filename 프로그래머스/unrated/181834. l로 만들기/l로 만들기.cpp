#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(char &c : myString) {
        if(c < 'l') {
            c = 'l';
        }
    }
    return myString;
}

/*
    string solution(string myString) {
    string answer = "";
    for(int i=0;i<myString.size();i++)
    {
        if(myString[i] < 'l') myString[i] = 'l';
    }
    return myString;
}
*/
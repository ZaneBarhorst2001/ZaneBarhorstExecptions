//Zane Barhorst
//CIS 1202 502
//12/5/21

#include <iostream>

using namespace std;

//Prototype for the character function.
char character(char start, int offset);

//Exception classes.
//Class exception for invalid characters.
class invalidCharacterException{};

//Class exception for invalid range.
class invalidRangeException{};


int main()
{
    //This will return b.
    cout << "The first example given is ('a', 1)\n";
    try {
        cout << character('a', 1) << "\n";
    }
    catch (invalidRangeException) {
        cout << "Invalid range exception.\n";
    }
    catch (invalidCharacterException) {
        cout << "Invalid Character exception.\n";
    }
    cout << "\n";
    //This will throw the invalidRangeExecption.
    cout << "The second example given is ('a', -1).\n";
    try {
        cout << character('a', -1) << "\n";
    }
    catch (invalidRangeException) {
        cout << "Invalid range exception.\n";
    }
    catch (invalidCharacterException) {
        cout << "Invalid Character exception.\n";
    }
    cout << "\n";
    //This will return Y.
    cout << "The third example is ('Z', -1)\n";
    try {
        cout << character('Z', -1) << "\n";
    }
    catch (invalidRangeException) {
        cout << "Invalid range exception.\n";
    }
    catch (invalidCharacterException) {
        cout << "Invalid Character exception.\n";
    }
    cout << "\n";
    //This will throw a invalidCharacterException.
    cout << "The fourth example is ('?', 5)\n";
    try {
        cout << character('?', 5) << "\n";
    }
    catch (invalidRangeException) {
        cout << "Invalid range exception.\n";
    }
    catch (invalidCharacterException) {
        cout << "Invalid Character exception.\n";
    }
}

//Definition for the character function.
char character(char start, int offset) {
    int target = start + offset;
    //This is utilizing the ASCII conversion for A-Z and a-z respectivly.
    if ((start < 65 || start > 90) && ((start < 97) || (start > 122))) {
        throw invalidCharacterException();
    }
    
    else if ((target < 65 || target > 90) && ((target < 97) || (target > 122))) {
        throw invalidRangeException();
    }

    return char(target);
}
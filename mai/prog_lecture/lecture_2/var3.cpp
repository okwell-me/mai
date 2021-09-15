#include <iostream>
using namespace std;

class FooString {
    char* buf;
public:
    FooString(char* tbuf) {
        this->buf = tbuf;
    }

    ~FooString() {

    };

    void show() {
        int i = 0;
        while (buf[i] != '\0') {
            cout << buf[i];
            ++i;
        }
    }

    bool compare(char* str) {
        int i = 0;
        while (buf[i] != '\0' || str[i] != '\0') {
            if (buf[i] != str[i]) {
                return false;
            }
            ++i;
        }
        return true;
    }
};

void testCompare() {
    char strTest1[10] = "aaa", strTest2[10] = "bbb";
    FooString test(strTest1);
    if (test.compare(strTest1) && (!test.compare(strTest2))) {
        cout << "test OK\n";
    }
    else {
        cout << "test failed\n";
    }
}

int main() {
    testCompare();

    cout << "Input string 1 and string 2\n";
    char str1[100], str2[100];
    cin >> str1 >> str2;
    FooString comp(str1);
    cout << comp.compare(str2);
    return 0;
}
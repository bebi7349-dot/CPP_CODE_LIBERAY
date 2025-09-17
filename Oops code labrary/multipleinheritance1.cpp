#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teaching students..." << endl;
    }
};

class Sports {
public:
    void play() {
        cout << "Coaching sports..." << endl;
    }
};

class Person : public Teacher, public Sports {
public:
    void introduce() {
        cout << "I am a person who teaches and coaches!" << endl;
    }
};

int main() {
    Person p;
    p.teach();
    p.play();
    p.introduce();
    return 0;
}

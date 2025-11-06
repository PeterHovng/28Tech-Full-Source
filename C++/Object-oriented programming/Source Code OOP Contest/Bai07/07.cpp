#include <iostream>
#include <cstring>
using namespace std;

class A {
private:
    char* m_s;
public:


    A() { m_s = _strdup("default"); };
    A(char* s) { m_s = _strdup(s); };
    virtual ~A() { delete[] m_s; }

    virtual void prepare() { std::cout << "A: "; }
    void display() {
        prepare();
        std::cout << m_s << std::endl;
    }

    friend std::istream& operator>>(std::istream& in, A& a) {
        char buffer[100];
        in.getline(buffer, 100);

        delete[]a.m_s;

        a.m_s = _strdup(buffer);
        return in;
    }
};

class B : public A {
public:
    B(char* s) : A(s) {}
    B(const B& b) {}
    void prepare() { std::cout << "B: "; }
};

void foo(A* obj1, A obj2) {
    obj1->display();
    obj2.display();
}

int main() {
    B obj1(strdup("text"));
    A* obj2 = new B(obj1);

    foo(&obj1, *obj2);
    return 0;
}

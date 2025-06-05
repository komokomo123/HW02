#include <iostream>
using namespace std;

// 기본 클래스
class Animal {
public:
    // 순수 가상 함수
    virtual void makeSound() = 0;
};

// Dog 클래스
class Dog : public Animal {
public:
    void makeSound() {
        cout << "멍멍!" << endl;
    }
};

// Cat 클래스
class Cat : public Animal {
public:
    void makeSound() {
        cout << "야옹!" << endl;
    }
};

// Cow 클래스
class Cow : public Animal {
public:
    void makeSound() {
        cout << "음머!" << endl;
    }
};

int main() {
    // Animal 타입 포인터 배열
    Animal* animals[3];

    // 동물 객체 생성
    Dog dog;
    Cat cat;
    Cow cow;

    // 포인터 배열에 저장
    animals[0] = &dog;
    animals[1] = &cat;
    animals[2] = &cow;

    // 배열을 순회하면서 소리 내기
    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound();
    }

    return 0;
}

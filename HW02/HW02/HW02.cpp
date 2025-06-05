#include <iostream>
using namespace std;

// �⺻ Ŭ����
class Animal {
public:
    // ���� ���� �Լ�
    virtual void makeSound() = 0;
};

// Dog Ŭ����
class Dog : public Animal {
public:
    void makeSound() {
        cout << "�۸�!" << endl;
    }
};

// Cat Ŭ����
class Cat : public Animal {
public:
    void makeSound() {
        cout << "�߿�!" << endl;
    }
};

// Cow Ŭ����
class Cow : public Animal {
public:
    void makeSound() {
        cout << "����!" << endl;
    }
};

int main() {
    // Animal Ÿ�� ������ �迭
    Animal* animals[3];

    // ���� ��ü ����
    Dog dog;
    Cat cat;
    Cow cow;

    // ������ �迭�� ����
    animals[0] = &dog;
    animals[1] = &cat;
    animals[2] = &cow;

    // �迭�� ��ȸ�ϸ鼭 �Ҹ� ����
    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound();
    }

    return 0;
}

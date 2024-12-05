#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    void setName(const string& name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void displayInfo() const {
        cout << "Animal Name: " << name << ", Age: " << age << endl;
    }
};

class Mammal : public Animal {
public:
    void feedBaby() const {
        cout << "Feeding baby mammal." << endl;
    }
};

class Bird : public Animal {
public:
    void layEgg() const {
        cout << "Laying an egg." << endl;
    }
};

class Reptile : public Animal {
public:
    void shedSkin() const {
        cout << "Shedding skin." << endl;
    }
};

int main() {
    Mammal mammal;
    mammal.setName("Dog");
    mammal.setAge(15);
    cout << "Mammal Information:" << endl;
    mammal.displayInfo();
    mammal.feedBaby();
    cout << endl;

    Bird bird;
    bird.setName("crow");
    bird.setAge(2);
    cout << "Bird Information:" << endl;
    bird.displayInfo();
    bird.layEgg();
    cout << endl;

    Reptile reptile;
    reptile.setName("Lizard");
    reptile.setAge(6);
    cout << "Reptile Information:" << endl;
    reptile.displayInfo();
    reptile.shedSkin();
    cout << endl;

    return 0;
}
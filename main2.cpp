#define _ << endl

#include <iostream>
#include <string>
using namespace std;


class Animal {
protected:
    int age;
    int weight;
    int height;
    string type;
    
public:
    Animal() {
        this->age = 0;
        this->weight = 0;
        this->height = 0;
        this->type = "";
    }
    
    Animal(int age, int weight, int height, string type) {
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->type = type;
    }
    
    virtual void information() {
        cout << "age: " << age _ << "weight: " << weight _ << "height: " << height _ << "type: " << type _ _;
    }
};

class Cat : public Animal {
private:
    string name;
public:
    Cat() {
        name = "";
    }
    
    Cat(int age, int weight, int height, string type, string name) {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->type = type;
    }
    
    virtual void information() override {
        cout << "age: " << age _ << "weight: " << weight _ << "height: " << height _ << "type: " << type _ << "name: " << name _ _;
    }
};


class Dog: public Animal {
private:
    string name;
    string host_name;
public:
    Dog() {
        this->age = 0;
        this->weight = 0;
        this->height = 0;
        this->type = "";
        this->name = "";
        this->host_name = "";
    }
    
    Dog(int age, int weight, int height, string type, string name, string host_name) {
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->type = type;
        this->name = name;
        this->host_name = host_name;
    }
    
    virtual void information() override {
        cout << "age: " << age _ << "weight: " << weight _ << "height: " << height _ << "type: " << type _ << "name: " << name _ << "Host name: " << host_name _ _;
    }
};


void print(Animal& a) {
    a.information();
}


int main() {
    Animal animal;
    Cat cat(1, 2, 3, "cat", "persik");
    Dog dog(10, 20, 30, "dog", "sharik", "Dima");
    
    print(animal);
    print(cat);
    print(dog);
    
    return 0;
}

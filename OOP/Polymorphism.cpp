#include<bits/stdc++.h>

using namespace std;

// polymorphism - uses those methods to perform different tasks.
class Animal{
    public:
        void animalSound(){
            cout << "The animal makes a sound..! \n";
        }
};

class Pig: public Animal{
    public:
        void animalSound(){
            cout << "Pig says: Wee Wee...! \n";
        }
};

class Dog: public Animal{
    public:
        void animalSound(){
            cout << "Dog says: Bow Wow...! \n"; 
        }
};

int32_t main(){
    
    Animal myAnimal;
    
    // Pig myPig;
    // Dog myDog;
    
    // myAnimal.animalSound();
    // myPig.animalSound();
    // myDog.animalSound();
    
    Dog myPet;
    myPet.animalSound();
    
    return 0;  
};
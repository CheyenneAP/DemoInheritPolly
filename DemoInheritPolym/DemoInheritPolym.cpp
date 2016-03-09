// polymorphism and inheritance
#include <iostream>
#include<string>
using namespace std;


class Animal{
protected:
	string name;

public:
	Animal() {
		name = "animal";
	};
	void whoAmI(void){
		cout << "I am\t" << name << endl;
	}
	// by adding virtual this function is over written by the outcome below 

	virtual void does(void){
		cout << " do nothing" << endl;
	}

};

// end of animal class
// 



class Dog : public Animal{

protected:
	int numberLegs;
public:
	Dog(void) {
		name = " dog";
		numberLegs = 4;
	}

	void does(void){
		cout << "Woff!" << endl; // overides the does method above
	}
	int howManyLegs(){
		return numberLegs;
	}

};

int main(){
	Animal myAnimal;
	Dog myDog;
	Animal *animalPtr;
	animalPtr = &myDog;
	myAnimal.whoAmI();
	myAnimal.does();

	myDog.whoAmI();
	myDog.does();
	cout << endl;
	cout << "dogs have " << myDog.howManyLegs() << " legs" << endl;

	cout << "using nase claSS pointer to access derived class object" << endl;
	animalPtr->whoAmI();
	animalPtr->does();


}
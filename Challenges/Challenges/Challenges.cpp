#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Dog {
public:
	string Breed, Color;
	int Height, Weight;
	void Shake() {
		cout << "The Dog Shakes \n";
	}
	void Sit() {
		cout << "The Dog Sits \n";
	}
	void LayDown() {
		cout << "The Dog Lays Down \n";
	}
};

class MyDog : public Dog {
public:
	string Breed = "Hound";
	string Color = "Brown";
	int Height = 2;
	int Weight = 60;

};


int main()
{	   
	MyDog myDog;
	myDog.LayDown();
	myDog.Sit();
	myDog.Shake();

	cout << "My Dog is a " << myDog.Color + " " << myDog.Breed;
}
  
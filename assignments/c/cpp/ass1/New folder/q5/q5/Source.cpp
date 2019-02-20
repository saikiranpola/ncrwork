#include <iostream>

using namespace std;

class Distance2;

class Distance1

{

	float mt;

	int cm;

public:

	void getdata();

	void display();

	friend Distance1 add(Distance1, Distance2);

};



class Distance2

{

	int feet;

	float inches;

public:

	void getdata();

	void display();

	friend Distance1 add(Distance1, Distance2);

};



void Distance1::getdata()

{

	cout << "\n\nEnter Values for metres :";

	cin >> mt;

	cout << "Enter Values for centimetres:";

	cin >> cm;

}

void Distance1::display()

{

	cout << "\n\nThe value of distance in metres is " << mt;

	cout << "\nThe value of distance in Centimetres is " << cm;

}





void Distance2::getdata()

{

	cout << "\n\nEnter Values for feet :";

	cin >> feet;

	cout << "Enter Values for inches :";

	cin >> inches;

}



Distance1 add(Distance1 a, Distance2  b)

{

	Distance1 temp;

	temp.cm = a.cm + (b.feet * 30) + ((b.inches * 30) / 12.0);

	temp.mt = a.mt + (temp.cm % 100);

	temp.cm = temp.cm - ((temp.cm % 100) * 100);

	return temp;

}



int main()

{

	Distance1 a;

	a.getdata();

	Distance2 b;

	b.getdata();



	cout << "\n\t\tAFTER CONVERSION AND THEIR ADDITION IS PERFORMED\n";



	Distance1 extra;

	extra = add(a, b);

	extra.display();

	system("pause");

	getchar();

	return 0;

}
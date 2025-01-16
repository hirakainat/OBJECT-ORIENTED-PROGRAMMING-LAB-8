#include<iostream>
using namespace std;
class fraction {
private:
	int numinator;
	int denominator;
public:
	fraction() {
		numinator = 0;
		denominator = 1;
	}
	fraction(int n, int d) {
		numinator = n;
		denominator = d;
	}
	//apply +operator
	fraction operator+(fraction& other) {
		int new_numinator = numinator + other.numinator;
		int new_denominator = denominator + other.denominator;
		return fraction(new_numinator, new_denominator);
	}
	//apply -operator
	fraction operator-(fraction& other) {
		int new_numinator = numinator - other.numinator;
		int new_denominator = denominator - other.denominator;
		return fraction(new_numinator, new_denominator);
	}
	//apply -operator
	fraction operator-=(fraction& other) {
		int new_numinator =  other.numinator- numinator;
		int new_denominator =   other.denominator-denominator;
		return fraction(new_numinator, new_denominator);
	}
	//multiply fraactions
	fraction operator*(fraction& other) {
		int new_numinator = other.numinator *numinator;
		int new_denominator = other.denominator *denominator;
		return fraction(new_numinator, new_denominator);
	}
	//apply / operator
	fraction operator/(fraction& other) {
		int new_numinator = other.numinator / numinator;
		int new_denominator = other.denominator / denominator;
		return fraction(new_numinator,new_denominator);
	}
	//apply ==operator
	bool operator==(fraction& other) {
		int new_numinator = other.numinator * denominator;
		int new_denominator = other.denominator *numinator;
		return (new_numinator== new_denominator);
	}
	//apply <<operator
	friend ostream& operator<<( ostream& os, fraction& other) {
		os <<other.numinator<<"/"<<other.denominator;
		return os;
	}
	//apply >>operator
	friend istream& operator>>(istream& is, fraction&other) {
		char slash; 
		is >> other.numinator >> slash >> other.denominator; 
		return is;
	}
	void display() {
		cout << numinator << "/" << denominator << endl;
	}
};
int main() {
	fraction f1(3, 4);
	fraction f2(5, 6);
	fraction f3 = f1+f2;
	
	cout << "the fraction1 is" << endl;
	f1.display();
	cout << "the fraction2 is" << endl;
	f2.display();
	cout << "the addition of the 2 fractions is" << endl;
	

	f3.display();
	f3 = f1 - f2;
	cout << "the subtraction of the 2 fractions(from fraction2) is" << endl;
    f3.display();
	f3 = f2 - f1;
	cout << "the subtraction of the 2 fractions(from fraction1) is" << endl;
	f3.display();
	f3 = f2 * f1;
	cout << "the multiplication of the 2 fractions is" << endl;
	f3.display();
	f3 = f1 / f2;
	cout << "the division of fractions(f1/f2) is" << endl;
	f3.display();
	f3 = f2 / f1;
	cout << "the division of fractions(f2/f1) is" << endl;
	f3.display();
	if (f1 == f2) {
		cout << "the two fractions are equal" << endl;
	}
	else {
		cout << "teh two fractions are not equal" << endl;
	}
	cout << "Enter a new fraction  ";
	cin >> f3; 
	cout << "The entered fraction is: "; 
	 cout <<f3 ;
	system("pause");
	return 0;
}
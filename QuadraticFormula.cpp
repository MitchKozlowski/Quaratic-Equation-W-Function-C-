
#include <cmath>
#include <iostream>
using namespace std;

void quad(double x, double y, double z);


int main()
{
	double a, b, c = 0;
	float rootRep, rootOne, rootTwo = 0;

	cout << "enter a, b, and c to find the roots: " << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	float discr = b * b - 4 * a * c;

	if (discr > 0) {
		quad(a, b, c);
	}

	else if (discr == 0) {
		cout << "Roots are real and same" << endl;
		rootRep = (-b + sqrt(discr)) / (2 * a);
		cout << "root 1 and 2 are: " << rootRep << endl;
	}

	else {
		float realPart = -b / (2 * a);
		float imaginaryPart = sqrt(-discr) / (2 * a);
		cout << "Roots are complex and different." << endl;
		cout << "root1 = " << realPart << "+" << imaginaryPart << "i" << endl;
		cout << "root2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}

}

void quad(double x, double y, double z) {

	double rOne = (-y + (sqrt(pow(y, 2) - 4 * x * z))) / (2 * x);
	double rTwo = (-y - (sqrt(pow(y, 2) - 4 * x * z))) / (2 * x);
	cout << "Root one is: " << rOne << endl;
	cout << "Root two is: " << rTwo << endl;
}

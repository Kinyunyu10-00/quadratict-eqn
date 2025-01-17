#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

void solveQuadratic(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
  double root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
          root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1: " << root1 << endl;
           cout << "Root 2: " << root2 << endl;
    }
    else if (discriminant == 0) {
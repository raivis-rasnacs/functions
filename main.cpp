#include <iostream>
using namespace std;

int saskaitisana(int a, int b, int b1) {
int c = a * b * b1;
return c;
}

int main() {
int a, b, b1, c; 
cout << "Ievadi skaitļus!"<<endl;
cin >> a >> b;
c = saskaitisana(a, b, b1);
cout << c;
}


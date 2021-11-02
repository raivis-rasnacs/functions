#include <iostream>
using namespace std;

int saskaitisana(int a, int b) {
int c = a + b;
return c;
}

int main() {
int a, b, c; 
cout << "Ievadi skaitļus!"<<endl;
cin >> a >> b;
c = saskaitisana(a, b);
cout << c;
}


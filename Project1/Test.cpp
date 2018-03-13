#include <iostream>
using namespace std;

int main() {
	auto lambda = [](auto x) { return x; };
	cout << lambda("Hello generic lambda!\n");
	return 0;
}
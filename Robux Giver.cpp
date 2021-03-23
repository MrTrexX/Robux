#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	string username;
	string pass;
	int amount;
	
	cout << "--LOGIN TO ROBLOX--" << endl;
	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> pass;
	cout << "Amount of robux you want: ";
	cin >> amount;
	
	for(int num = 0; num < amount; num++) {
		cout << username << " ";
		cout << pass << endl;
		BlockInput();
	}
	return 0;
}

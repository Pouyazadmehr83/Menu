#include <iostream>
#include <string>

using namespace std;
//menu
int main() {

	int order ;
	string array[10] = {"Coffe turk","Latte","Americano","Tea"," France press","Makiato","Cappucinu","Esperesso","ice Americano","ice Latte",};
	int price[10] = {40,75,60,30,65,80,75,40,55,85};

	for (int i = 0; i < 10; i++)
	{
		cout << i   <<"|" << array[i] <<"//" << price[i] << endl;
	}
	cout << "=============================="<<endl;
	 
	double sum = 0;

	string quest;
	while (true)
	{
		cout << "|Enter your order(0,1,2..):>>";
		cin >> order;
		sum += price[order];
		cout << "================================="<<endl;
		cout << "do you want oder oeder?(yes/no):";
		 
		/*cout << "=================================" << endl;*/

		cin >> quest;
		if (quest == "no")
			break;
		else if (quest == "yes")
			continue;
		else
			cout << "Not Correct!!" << endl;
	}
	cout << "=====================================" << endl;
	cout <<"your paymant: >" << sum << endl;
	cout << "=====================================" << endl;
}
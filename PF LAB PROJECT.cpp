#include<iostream>
using namespace std;
#include<iomanip>
#include"conio.h"

int Keyboards(int);
int Graphics_card(int);
int main()
{
	cout << "1) keyboards" << setw(25) << "2) Monitors";
	cout << endl << "3) Rams" << setw(36) << "4) Graphics cards";
	cout << endl << "5) Processors " << setw(27) << "6) Motherbaords";
	int sel;

	cout << "\nPlease select a Number :";
	cin >> sel;
	cout << "-------------------------------------------------------------------------" << endl;
	if (sel == 1)
	{
		Keyboards(sel);

	}
	if (sel == 4)
	{
		Graphics_card(sel);
	}
}

int Keyboards(int num)
{
	int model, qan, t = 1, pri, amo;
	string opt;
repeatt:
	cout << "\n1)Asus gaming keyboard" << setw(25) << "2) Dell Keyboard";
	cout << "\n3) Mechincal Keyboard" << setw(37) << "4) Non branded RGB Keyboard";
	cout << "\nEnter Number of one Model:";
	cin >> model;

	cout << "--------------------------------------------------------------------------" << endl;
	if (model == 1)
	{
		cout << "\nyou have selecetd Asus gaming keyboard\nPrice of this is key board is 5500\nPlease enter in quantity you want:";
		cin >> qan;
		pri = 5500;
		cout << "Price of keyboard is as under:" << endl;
		while (t <= qan)
		{
			amo = t * pri;
			cout << "Price of" << t << "=" << pri << "*" << t << "=" << amo << endl;
			t++;

		}
		cout << "\nThe total bill is=" << qan * pri;


	}
	else if (model == 2)
	{
		cout << "you have selecetd Dell keyboard\nPrice of this is key board is 900\nPlease enter in quantity you want:";
		cin >> qan;
		pri = 900;
		cout << "Price of keyboard is as under:" << endl;
		while (t <= qan)
		{
			amo = t * pri;
			cout << "Price of" << t << "=" << pri << "*" << t << "=" << amo << endl;
			t++;

		}
		cout << "\nThe total bill is=" << qan * pri;

	}
	else if (model == 3)
	{
		cout << "you have selecetd Mechnical keyboard\nPrice of this is key board is 6000\nPlease enter in quantity you want:";
		cin >> qan;
		pri = 6000;
		cout << "Price of keyboard is as under:" << endl;
		while (t <= qan)
		{
			amo = t * pri;
			cout << "Price of" << t << "=" << pri << "*" << t << "=" << amo << endl;
			t++;

		}
		cout << "\nThe total bill is=" << qan * pri;


	}
	else if (model == 4)
	{
		cout << "you have selecetd Non branded keyboard\nPrice of this is key board is 2500\nPlease enter in quantity you want:";
		cin >> qan;
		pri = 2500;
		cout << "Price of keyboard is as under:" << endl;
		while (t <= qan)
		{
			amo = t * pri;
			cout << "Price of" << t << "=" << pri << "*" << t << "=" << amo << endl;
			t++;

		}
		cout << "\nThe total bill is=" << qan * pri;
	}
	
	
	opt = _getch();
	if (opt == "y")
		goto repeatt;
	else if (opt == "n")
		exit;
	return model;

}

int Graphics_card(int num)
{
		int model, quantity, price;
		cout << "Choose any model" << endl;
		cout << "1.RTX 3080TI\n2.GTX 1080TI\n3.AMD R9" << endl;
		cin >> model;
		if (model == 1)
		{
			price = 120000;
			cout << " You have selected RTX 3080Ti\nThe price of RTX 3080TI is: " << price << endl;
			cout << "Enter quantity" << endl;
			cin >> quantity;
			cout << "Your quantity is:  " << quantity << endl;
			cout << "Price of "<< quantity <<setw(2) <<" RTX 3080TI:"<< price * quantity << endl;
			cout << "Total Price to pay:" << price * quantity << endl;
		}
		else if (model == 2)
		{
			    price =60000 ;
				cout << " You have selected RTX 1080Ti\nThe price of RTX 1080TI is: " << price << endl;
				cout << "Enter quantity" << endl;
				cin >> quantity;
				cout << "Your quantity is:  " << quantity << endl;
				cout << "Price of " << quantity << setw(2) << " RTX 1080TI:"<< price * quantity << endl;
				cout << "Total Price to pay:" << price * quantity << endl;
		}
		else if (model == 3)
		{
			price = 35000;
			cout << " You have selected R9\nThe price of R9 is: " << price << endl;
			cout << "Enter quantity" << endl;
			cin >> quantity;
			cout << "Your quantity is:  " << quantity << endl;
			cout << "Price of " << quantity << setw(2) << " R9:" << price * quantity << endl;
			cout << "Total Price to pay:" << price * quantity << endl;
		}
		return model;
}



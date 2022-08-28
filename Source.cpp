#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
const int n = 10;
class DebetandCredit
{public:
	int n1 = 0;
	string* card;
	int n2 = 0;
	string* wallet;
	double cost[n];
	string category_cost[n] = { "health","food","education","car","leisure", "animals","clothing","house","present","services" };
	int day = 0;
	string inputCard()
	{
		cout << "\nEnter number of card: ";
		cin >> card[n1];
		return card[n1];
	}
	string* addCard()
	{
		card = (string*)realloc(card,(n1 + 1) * sizeof(string));
		card[n1] = inputCard();
		n1++;
		return card;
	}
	string inputWallet()
	{
		cout << "\nEnter number of wallet: ";
		cin >> wallet[n2];
		return wallet[n2];
	}
	string* addWallet()
	{
		wallet = (string*)realloc(wallet, (n1 + 1) * sizeof(string));
		wallet[n2] = inputWallet();
		n2++;
		return wallet;
	}
	void Print()
	{
		cout << "\nCard.";
		cout << "\nAmount of cards: " << n1;
		for (int i = 0; i < n1; i++)
		{
			cout <<"Number of cards:"<< card[i] << "\n";
		}
		cout << "Wallet.\n";
		cout << "Amount of walletss: " << n2;
		for (int i = 0; i < n2; i++)
		{
			cout << "Number of wallets:" << wallet[i] << "\n";
		}
	}
	void Refill()
	{
		double* sum1 = (double*)malloc(n1*sizeof(double));
		double* sum2 = (double*)malloc(n2 * sizeof(double));
		char key;
		string search_card_or_wallet;
		cout << "What will you fill ?\n";
		cout << "1 - Card.\n";
		cout << "2 - Wallet.\n";
		key = _getch();
		switch (key)
		{
		case'1':
		{
			system("cls");
			cout << "Enter number of the card you want to top up: ";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n1; i++)
			{
				if (card[i] == search_card_or_wallet)
				{
					cout << "Enter the replenishment amount: ";
					cin >> sum1[i];
					f = 1;
				}
			}
			if (f == 0) { cout << "Entered card number no exists.\n"; }
			system("pause");
			break;
		}
		case '2':
		{
			system("cls");
			cout << "Enter number of the wallet you want to top up: ";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n2; i++)
			{
				if (wallet[i] == search_card_or_wallet)
				{
					cout << "Enter the replenishment amount: ";
					cin >> sum2[i];
					f = 1;
				}
			}
			if (f == 0) { cout << "Entered wallet number no exists.\n"; }
			system("pause");
			break;
		}
		}
	}
	void Cost()
	{
		char key;
		string search_card_or_wallet;
		cout << "What will you pay the costs ?\n";
		cout << "1 - Card.\n";
		cout << "2 - Wallet.\n";
		key = _getch();
		switch (key)
		{
		case'1':
		{
			system("cls");
			double sum;
			cout << "Enter number of the card for which you want to pay: \n";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n1; i++)
			{
				if (card[i] == search_card_or_wallet)
				{
					cout << "Choose the category of costs for which you want to pay: \n";
					int num;
					for (int i = 0; i < n; i++)
					{
						cout <<i+1<<". "<<category_cost[i] << "\n";
					}
					cout << "Your choice: ";
					cin >> num;
					for (int i = 0; i < n; i++)
					{
						if (num-1 == i)
						{
							cout << "\nEnter the amount of money spent: ";
							cin >> sum;
							cost[i] += sum;
						}
					}
					f = 1;
				}
			}
			if (f == 0) { cout << "Entered card number no exists.\n"; }
			system("pause");
			break;
		}
		case '2':
		{
			system("cls");
			double sum;
			cout << "Enter number of the wallet you want to top up: ";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n2; i++)
			{
				if (wallet[i] == search_card_or_wallet)
				{
					cout << "Choose the category of costs for which you want to pay: \n";
					int num;
					for (int i = 0; i < n; i++)
					{
						cout << i + 1 << ". " << category_cost[i] << "\n";
					}
					cout << "Your choice: ";
					cin >> num;
					for (int i = 0; i < n; i++)
					{
						if (num - 1 == i)
						{
							cout << "\nEnter the amount of money spent: ";
							cin >> sum;
							cost[i] += sum;
						}
					}
					f = 1;
				}
			}
			if (f == 0) { cout << "Entered wallet number no exists.\n"; }
			system("pause");
			break;
		}
		}
		day++;
	}
	void reportCost()
	{
		char key_day;
		cout << "For what period do you want to receive a report ?\n";
		cout << "1 - During the day.\n";
		cout << "2 - durung the week.\n";
		cout << "3 - Per month.\n";
		key_day = _getch();
		switch (key_day)
		{
		case '1':
		{
			system("cls");
			if (day == 1)
			{
				cout << "Category of cost: " << "\t | \t" << "Sum";
				for (int i = 0; i < n; i++)
				{
					cout << category_cost[i] << "\t | \t" << cost[i] << "\n";
				}
			}
			else { if (day == 0) { cout << "You have no cost per day.\n"; } }
			system("pause");
			break;
		}
		case '2':
		{
			system("cls");
			if (day < 7)
			{
				cout << "You have no cost per week.\n";
				cout << "You keep track of costs throughou " << day << " days.\n";
				cout << "Category of cost: " << "\t | \t" << "Sum";
				for (int i = 0; i < n; i++)
				{
					cout << category_cost[i] << "\t | \t" << cost[i] << "\n";
				}
			}
			if (day == 7)
			{
				cout << "Category of cost: " << "\t | \t" << "Sum";
				for (int i = 0; i < n; i++)
				{
					cout << category_cost[i] << "\t | \t" << cost[i] << "\n";
				}
			}
			system("pause");
			break;
		}
		case '3':
		{
			system("cls");
			if (day < 31)
			{
				cout << "You have no cost per month.\n";
				cout << "You keep track of costs throughou " << day << " days.\n";
				cout << "Category of cost: " << "\t | \t" << "Sum";
				for (int i = 0; i < n; i++)
				{
					cout << category_cost[i] << "\t | \t" << cost[i] << "\n";
				}
			}
			if (day == 30 || day==31)
			{
				cout << "Category of cost: " << "\t | \t" << "Sum";
				for (int i = 0; i < n; i++)
				{
					cout << category_cost[i] << "\t | \t" << cost[i] << "\n";
				}
			}
			system("pause");
			break;
		}
		}
	}
	void ratingSumCost()
	{
		char key_day;
		double sum1, sum2, sum3;
		sum1 = sum2 = sum3 = cost[0];
		cout << "Formation of ratings by maximum amounts.\n";
		cout << "TOP 3 of costs.\n";
		cout << "1 - Per week.\n";
		cout << "2 - Per month.\n";
		key_day = _getch();
		switch (key_day)
		{
		case '1':
		{
			system("cls");
			if (day < 7)
			{
				cout << "You have no cost per week.\n";
				cout << "You keep track of costs throughou " << day << " days.\n";
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
					}
				}
				cout << "TOP 3 of costs by maximum amounts.\n";
				cout << "TOP-1: " << sum1 << "\n";
				cout << "TOP-2: " << sum2 << "\n";
				cout << "TOP-3: " << sum3 << "\n";
			}
			if (day == 7)
			{
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
					}
				}
				cout << "TOP 3 of costs by maximum amounts.\n";
				cout << "TOP-1: " << sum1 << "\n";
				cout << "TOP-2: " << sum2 << "\n";
				cout << "TOP-3: " << sum3 << "\n";
			}
			system("pause");
			break;
		}
		case '2':
		{
			system("cls");
			if (day < 31)
			{
				cout << "You have no cost per month.\n";
				cout << "You keep track of costs throughou " << day << " days.\n";
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
					}
				}
				cout << "TOP 3 of costs by maximum amounts.\n";
				cout << "TOP-1: " << sum1 << "\n";
				cout << "TOP-2: " << sum2 << "\n";
				cout << "TOP-3: " << sum3 << "\n";
			}
			if (day == 30 || day == 31)
			{
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
					}
				}
				cout << "TOP 3 of costs by maximum amounts.\n";
				cout << "TOP-1: " << sum1 << "\n";
				cout << "TOP-2: " << sum2 << "\n";
				cout << "TOP-3: " << sum3 << "\n";
			}
			system("pause");
			break;
		}
		}
	}
	void ratingCategoryCost()
	{
		char key_day;
		double sum1, sum2, sum3;
		sum1 = sum2 = sum3 = cost[0];
		string categ1, categ2, categ3;
		cout << "Formation of ratings by maximum amounts.\n";
		cout << "TOP 3 of costs' categories.\n";
		cout << "1 - Per week.\n";
		cout << "2 - Per month.\n";
		key_day = _getch();
		switch (key_day)
		{
		case '1':
		{
			system("cls");
			if (day < 7)
			{
				cout << "You have no cost per week.\n";
				cout << "You keep track of costs throughou " << day << " days.\n";
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
						categ3 = category_cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
						categ2 = category_cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
						categ1 = category_cost[i];
					}
				}
				cout << "TOP 3 of costs' categories.\n";
				cout << "TOP-1: " << categ1 << "\n";
				cout << "TOP-2: " << categ2 << "\n";
				cout << "TOP-3: " << categ3 << "\n";
			}
			if (day == 7)
			{
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
						categ3 = category_cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
						categ2 = category_cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
						categ1 = category_cost[i];
					}
				}
				cout << "TOP 3 of costs' categories.\n";
				cout << "TOP-1: " << categ1 << "\n";
				cout << "TOP-2: " << categ2 << "\n";
				cout << "TOP-3: " << categ3 << "\n";
			}
			system("pause");
			break;
		}
		case '2':
		{
			system("cls");
			if (day < 31)
			{
				cout << "You have no cost per week.\n";
				cout << "You keep track of costs throughou " << day << " days.\n";
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
						categ3 = category_cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
						categ2 = category_cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
						categ1 = category_cost[i];
					}
				}
				cout << "TOP 3 of costs' categories.\n";
				cout << "TOP-1: " << categ1 << "\n";
				cout << "TOP-2: " << categ2 << "\n";
				cout << "TOP-3: " << categ3 << "\n";
			}
			if (day ==30 || day==31)
			{
				for (int i = 1; i < n; i++)
				{
					if (sum3 > cost[i])
					{
						sum3 = cost[i];
						categ3 = category_cost[i];
					}
					if (sum2 > cost[i] && sum2 > sum3)
					{
						sum2 = cost[i];
						categ2 = category_cost[i];
					}
					if (sum1 > cost[i] && sum1 > sum2)
					{
						sum1 = cost[i];
						categ1 = category_cost[i];
					}
				}
				cout << "TOP 3 of costs' categories.\n";
				cout << "TOP-1: " << categ1 << "\n";
				cout << "TOP-2: " << categ2 << "\n";
				cout << "TOP-3: " << categ3 << "\n";
			}
			system("pause");
			break;
		}
		}
	}
	void saveReportAndRating()
	{
		ofstream file ("report.txt",ios::app);
		if (file.is_open())
		{
			file << "REPORTS.\n";
			file << "1 - Per day.\n";

			file << "2 - Per week.\n";

			file << "3 - Per month.\n";

			file << "RATING\n";
			file << "TOP 3 of costs.\n";
			file << "1 - Per week.\n";

			file << "2 - Per month.\n";

			file << "\n\n\n";
			file << "TOP 3 of costs' categories.\n";
			file << "1 - Per week.\n";

			file << "2 - Per month.\n";
		}
		file.close();
	}
};
int main()
{
	DebetandCredit finance;
	char ch;
	do {
		cout << "Menu.\n";
		cout << "1 - Add card.\n";
		cout << "2 - Add wallet.\n";
		cout << "3 - Print all card and wallet.\n";
		cout << "4 - Replenishment of wallets and cards.\n";
		cout << "5 - Enter costs by category.\n";
		cout << "6 - Generate a report by cost and category.\n";
		cout << "7 - Form a rating by maximum amounts.\n";
		cout << "8 - Save reports and ratings to a file.\n";
		cout << "Esc. - Exit.\n";
		cout << "Your choice: ";
		ch = _getch();
		switch (ch)
		{
		case '1':
		{
			system("cls");
			finance.addCard();
			system("pause");
			break;
		}
		case '2':
		{
			system("cls");
			finance.addWallet();
			system("pause");
			break;
		}
		case '3':
		{
			system("cls");
			finance.Print();
			system("pause");
			break;
		}
		case '4':
		{
			system("cls");
			finance.Refill();
			system("pause");
			break;
		}
		case '5':
		{
			system("cls");
			finance.Cost();
			system("pause");
			break;
		}
		case '6':
		{
			system("cls");
			finance.reportCost();
			system("pause");
			break;
		}
		case '7':
		{
			system("cls");
			char key;
			cout << "Form a rating by maximum amounts by: \n";
			cout << " 1 - Sum of costs.\n";
			cout << "2 - Categories of costs.\n";
			key = _getch();
			switch (key)
			{
			case'1':
			{
				system("cls");
				finance.ratingSumCost();
				system("pause");
				break;
			}
			case '2':
			{
				system("cls");
				finance.ratingCategoryCost();
				system("pause");
				break;
			}
			}
			system("pause");
			break;
		}
		case '8':
		{
			system("cls");
			finance.saveReportAndRating();
			system("pause");
			break;
		}
		}
	} while (ch != 27);
}
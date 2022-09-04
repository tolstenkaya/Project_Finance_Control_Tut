#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
const int n = 10;
const int c = 100;
class CardandWallet
{
public:
	int day = 0;
	int week = 0;
	int month = 0;
	int count = 0;
	string deb_card[n];
	int day_dc = 0;
	int week_dc = 0;
	int month_dc = 0;
	int n1;
	double sum_dc = 0;
	double cost_dc = 0;
	double cost_dc_one[n];
	double dc_cost_day_dc[n];
	double dc_cost_week_dc[c];
	double dc_cost_month_dc[c];
	double cost_dc_day = 0;
	double cost_dc_week = 0;
	double cost_dc_month = 0;
	double cost_dc_category_one[n][n];
	double cost_dc_category[n];
	double cost_dc_category_day[n];
	double cost_dc_category_week[n];
	double cost_dc_category_month[n];
	double* sum1;
	double w_sum1_dc, w_sum2_dc, w_sum3_dc;
	double m_sum1_dc, m_sum2_dc, m_sum3_dc;
	string w_categ1_dc, w_categ2_dc, w_categ3_dc;
	string m_categ1_dc, m_categ2_dc, m_categ3_dc;
	string cred_card[n];
	int day_cc = 0;
	int week_cc = 0;
	int month_cc = 0;
	int n2;
	double sum_cc = 0;
	double cost_cc = 0;
	double cost_cc_one[n];
	double cc_cost_day_cc[n];
	double cc_cost_week_cc[c];
	double cc_cost_month_cc[c];
	double cost_cc_day = 0;
	double cost_cc_week = 0;
	double cost_cc_month = 0;
	double cost_cc_category_one[n][n];
	double cost_cc_category[n];
	double cost_cc_category_day[n];
	double cost_cc_category_week[n];
	double cost_cc_category_month[n];
	double* sum2;
	double w_sum1_cc, w_sum2_cc, w_sum3_cc;
	double m_sum1_cc, m_sum2_cc, m_sum3_cc;
	string w_categ1_cc, w_categ2_cc, w_categ3_cc;
	string m_categ1_cc, m_categ2_cc, m_categ3_cc;
	string deb_wallet[n];
	int day_dw = 0;
	int week_dw = 0;
	int month_dw = 0;
	int n3;
	double sum_dw = 0;
	double cost_dw = 0;
	double cost_dw_one[n];
	double dw_cost_day_dw[n];
	double dw_cost_week_dw[c];
	double dw_cost_month_dw[c];
	double cost_dw_day = 0;
	double cost_dw_week = 0;
	double cost_dw_month = 0;
	double cost_dw_category_one[n][n];
	double cost_dw_category[n];
	double cost_dw_category_day[n];
	double cost_dw_category_week[n];
	double cost_dw_category_month[n];
	double* sum3;
	double w_sum1_dw, w_sum2_dw, w_sum3_dw;
	double m_sum1_dw, m_sum2_dw, m_sum3_dw;
	string w_categ1_dw, w_categ2_dw, w_categ3_dw;
	string m_categ1_dw, m_categ2_dw, m_categ3_dw;
	string cred_wallet[n];
	int day_cw = 0;
	int week_cw = 0;
	int month_cw = 0;
	int n4;
	double sum_cw = 0;//поплнение типа фин. инструмента
	double cost_cw = 0;//общие затраты типа фин. инструмента
	double cost_cw_one[n];
	double cw_cost_day_cw[n];//отдельные затраты в день по типу св
	double cw_cost_week_cw[c];
	double cw_cost_month_cw[c];
	double cost_cw_day = 0;//общая сумма затрат в день по типу св
	double cost_cw_week = 0;
	double cost_cw_month = 0;
	double cost_cw_category_one[n][n];
	double cost_cw_category[n];//общая сумма затрат по всем категориям типа св
	double cost_cw_category_day[n];//затраты в день в разрезе категорий затрат по типу св
	double cost_cw_category_week[n];
	double cost_cw_category_month[n];
	double* sum4;
	double w_sum1_cw, w_sum2_cw, w_sum3_cw;
	double m_sum1_cw, m_sum2_cw, m_sum3_cw;
	string w_categ1_cw, w_categ2_cw, w_categ3_cw;
	string m_categ1_cw, m_categ2_cw, m_categ3_cw;
	double costs_day[n];//затраты в день по всем типам фин. инструментов
	double costs_week[n];
	double costs_month[n];
	double costs[n];//общая сумма затрат по всем категориям
	string category_cost[n] = { "health","food","education","car","leisure", "animals","clothing","house","present","services" };
	double all_costs_w[c];
	double all_costs_m[c];
	double w_sum1, w_sum2, w_sum3;
	double m_sum1, m_sum2, m_sum3;
	string w_categ1, w_categ2, w_categ3;
	string m_categ1, m_categ2, m_categ3;
	CardandWallet()
	{
		*deb_card = '0';
		n1 = 0;
		*cred_card = '0';
		n2 = 0;
		*deb_wallet = '0';
		n3 = 0;
		*cred_wallet = '0';
		n4 = 0;
	}
	CardandWallet(string dc[], string cc[], string dw[], string cw[])
	{
		*deb_card = *dc;
		*cred_card = *cc;
		*deb_wallet = *dw;
		*cred_wallet = *cw;
	}
	~CardandWallet()
	{
		delete[] deb_card;
		delete[] cred_card;
		delete[] deb_wallet;
		delete[] cred_wallet;
		free(sum1);
		free(sum2);
		free(sum3);
		free(sum4);
		delete[]cost_dc_one;
		delete[] dc_cost_day_dc;
		delete[] dc_cost_week_dc;
		delete[] dc_cost_month_dc;
		for (int i = 0; i < n; i++)
		{
			free(cost_dc_category_one[i]);
		}
		free(cost_dc_category_one);
		delete[] cost_dc_category;
		delete[]cost_dc_category_day;
		delete[]cost_dc_category_week;
		delete[]cost_dc_category_month;
		delete[]cc_cost_day_cc;
		delete[]cc_cost_week_cc;
		delete[]cc_cost_month_cc;
		for (int i = 0; i < n; i++)
		{
			free(cost_cc_category_one[i]);
		}
		free(cost_cc_category_one);
		delete[]cost_cc_category;
		delete[]cost_cc_category_day;
		delete[]cost_cc_category_week;
		delete[]cost_cc_category_month;
		delete[]cost_dw_one;
		delete[]dw_cost_day_dw;
		delete[]dw_cost_week_dw;
		delete[]dw_cost_month_dw;
		for (int i = 0; i < n; i++)
		{
			free(cost_dw_category_one[i]);
		}
		free(cost_dw_category_one);
		delete[]cost_dw_category;
		delete[]cost_dw_category_day;
		delete[]cost_dw_category_week;
		delete[]cost_dw_category_month;
		delete[]cost_cw_one;
		delete[]cw_cost_day_cw;
		delete[]cw_cost_week_cw;
		delete[]cw_cost_month_cw;
		for (int i = 0; i < n; i++)
		{
			free(cost_cw_category_one[i]);
		}
		free(cost_cw_category_one);
		delete[]cost_cw_category;
		delete[]cost_cw_category_day;
		delete[]cost_cw_category_week;
		delete[]cost_cw_category_month;
		delete[]costs_day;
		delete[]costs_week;
		delete[]costs_month;
		delete[]costs;
		delete[]category_cost;
		delete[]all_costs_w;
		delete[]all_costs_m;
	}
	void addCard()
	{
		char key;
		cout << "1 - Add debit card.\n";
		cout << "2 - Add credit card.\n";
		cout << "3 - Add debit wallet.\n";
		cout << "4 - Add credit wallet.\n";
		cout << "Your choice: ";
		key = _getch();
		switch (key)
		{
		case '1':
		{
			system("cls");
			cout << "Enter number of card: ";
			cin >> deb_card[n1];
			n1++;
			count++;
			break;
		}
		case '2':
		{
			system("cls");
			cout << "Enter number of card: ";
			cin >> cred_card[n2];
			n2++;
			count++;
			break;
		}
		case '3':
		{
			system("cls");
			cout << "Enter number of wallet: ";
			cin >> deb_wallet[n3];
			n3++;
			count++;
			break;
		}
		case '4':
		{
			system("cls");
			cout << "Enter number of wallet: ";
			cin >> cred_wallet[n4];
			n4++;
			count++;
			break;
		}
		}
	}
	void PrintCard()
	{
		cout << "Total number of cards and wallets: " << count << "\n";
		if (n1 + n2 == 0)
		{
			cout << "There are no cards.\n";
		}
		if (n1 == 0)
		{
			cout << "There are no debit cards.\n";
		}
		else
		{
			cout << "Debit cards.\n";
			for (int i = 0; i < n1; i++)
			{
				cout << i + 1 << ". " << deb_card[i] << "\n";
			}
		}
		if (n2 == 0)
		{
			cout << "There are no credit cards.\n";
		}
		else
		{
			cout << "Credit cards.\n";
			for (int i = 0; i < n2; i++)
			{
				cout << i + 1 << ". " << cred_card[i] << "\n";
			}
		}
		if (n3 == 0)
		{
			cout << "There are no debit wallets.\n";
		}
		else
		{
			cout << "Debit wallets.\n";
			for (int i = 0; i < n3; i++)
			{
				cout << i + 1 << ". " << deb_wallet[i] << "\n";
			}
		}
		if (n4 == 0)
		{
			cout << "There are no credit wallets.\n";
		}
		else
		{
			cout << "Credit wallets.\n";
			for (int i = 0; i < n4; i++)
			{
				cout << i + 1 << ". " << cred_wallet[i] << "\n";
			}
		}
	}
	void Refill()
	{
		int pos = 0;
		sum1 = (double*)malloc(n1 * sizeof(double));
		sum1[n1];
		sum2 = (double*)malloc(n2 * sizeof(double));
		sum2[n2];
		sum3 = (double*)malloc(n3 * sizeof(double));
		sum3[n3];
		sum4 = (double*)malloc(n4 * sizeof(double));
		sum4[n4];
		char key;
		string search_card_or_wallet;
		cout << "What do you want to top up?\n";
		cout << "1 - Debit card.\n";
		cout << "2 - Credit card.\n";
		cout << "3 - Debit wallet.\n";
		cout << "4 - Credit wallet.\n";
		cout << "Your choice: ";
		key = _getch();
		switch (key)
		{
		case'1':
		{
			system("cls");
			cout << "Enter number of debit card you want to top up: ";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n1; i++)
			{
				if (deb_card[i] == search_card_or_wallet)
				{
					pos = i;
					cout << "Enter the replenishment amount (dollars): ";
					cin >> sum1[i];
					f = 1;
				}
			}
			if (f == 0) { cout << "Error! Entered card number no exists.\n"; }
			if (f == 1) {
				sum_dc += sum1[pos];
				system("cls");
				cout << "Successful transaction!\n";
				cout << "You topped up debit card number " << search_card_or_wallet << " with " << sum1[pos] << " dollars.\n";
				cout << "Total card balance: " << sum_dc << " dollars.\n";
			}
			break;
		}
		case'2':
		{
			system("cls");
			cout << "Enter number of credit card you want to top up: ";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n2; i++)
			{
				if (cred_card[i] == search_card_or_wallet)
				{
					pos = i;
					cout << "Enter the replenishment amount (dollars): ";
					cin >> sum2[i];
					f = 1;
				}
			}
			if (f == 0) { cout << "Error! Entered card number no exists.\n"; }
			if (f == 1)
			{
				sum_cc += sum2[pos];
				system("cls");
				cout << "Successful transaction!\n";
				cout << "You topped up credit card number " << search_card_or_wallet << " with " << sum2[pos] << " dollars.\n";
				cout << "Total card balance: " << sum_cc << " dollars.\n";
			}
			break;
		}
		case '3':
		{
			system("cls");
			cout << "Enter number of debit wallet you want to top up: ";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n3; i++)
			{
				if (deb_wallet[i] == search_card_or_wallet)
				{
					pos = i;
					cout << "Enter the replenishment amount (dollars): ";
					cin >> sum3[i];
					f = 1;
				}
			}
			if (f == 0) { cout << "Erroe! Entered wallet number no exists.\n"; }
			if (f == 1)
			{
				sum_dw += sum3[pos];
				system("cls");
				cout << "Successful transaction!\n";
				cout << "You topped up debit wallet number " << search_card_or_wallet << " with " << sum3[pos] << " dollars.\n";
				cout << "Total wallet balance: " << sum_dw << " dollars.\n";
			}

			break;
		}
		case '4':
		{
			system("cls");
			cout << "Enter number of credit wallet you want to top up: ";
			cin >> search_card_or_wallet;
			int f = 0;
			for (int i = 0; i < n4; i++)
			{
				if (cred_wallet[i] == search_card_or_wallet)
				{
					pos = i;
					cout << "Enter the replenishment amount (dollars): ";
					cin >> sum4[i];
					f = 1;
				}
			}
			if (f == 0) { cout << "Error! Entered wallet number no exists.\n"; }
			if (f == 1) {
				sum_cw += sum4[pos];
				system("cls");
				cout << "Successful transaction!\n";
				cout << "You topped up credit wallet number" << search_card_or_wallet << " with " << sum4[pos] << " dollars.\n";
				cout << "Total wallet balance: " << sum_cw << " dollars.\n";
			}
			break;
		}
		}
	}
	void Cost()
	{
		char key_day;
		cout << "For what period will you pay the costs?\n";
		cout << "1 - Per day.\n";
		cout << "2 - Per week.\n";
		cout << "3 - Per month.\n";
		cout << "Your choice: ";
		key_day = _getch();
		switch (key_day)
		{
		case '1':
		{
			system("cls");
			char key;
			string search_card_or_wallet;
			cout << "By what will you pay the costs ?\n";
			cout << "1 - Debit card.\n";
			cout << "2 - Credit card.\n";
			cout << "3 - Debit wallet.\n";
			cout << "4 - Credit wallet.\n";
			cout << "Your choice: ";
			key = _getch();
			switch (key)
			{
			case'1':
			{
				system("cls");
				double sum;
				int pos = 0;
				int num = 0;
				cout << "Enter number of the card by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n1; i++)
				{
					if (deb_card[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					day++;
					day_dc++;
					cost_dc_one[pos] += sum;
					cost_dc_category_one[pos][num - 1] += sum;
					dc_cost_day_dc[pos] += sum;
					costs[num - 1] += sum;
					cost_dc += sum;
					cost_dc_category[num - 1] += sum;
					cost_dc_category_day[num - 1] += sum;
					cost_dc_day += sum;
					costs_day[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit card number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					system("pause");
					system("cls");
					cout << "General card expenses: " << cost_dc_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dc_category_one[pos][i] << "\n";
						}
					}
				}
				break;
			}
			case '2':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the card by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (cred_card[i] == search_card_or_wallet)
					{
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					day++;
					day_cc++;
					cost_cc_one[pos] += sum;
					cc_cost_day_cc[pos] += sum;
					costs[num - 1] += sum;
					cost_cc += sum;
					cost_cc_category_one[pos][num - 1] += sum;
					cost_cc_category[num - 1] += sum;
					cost_cc_category_day[num - 1] += sum;
					cost_cc_day += sum;
					costs_day[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of credit card number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					system("pause");
					system("cls");
					cout << "General card expenses: " << cost_cc_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cc_category_one[pos][i] << "\n";
						}
					}
				}
				break;
			}
			case '3':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the wallet by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (deb_wallet[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					day++;
					day_dw++;
					dw_cost_day_dw[pos] += sum;
					costs[num - 1] += sum;
					cost_dw_one[pos] += sum;
					cost_dw += sum;
					cost_dw_category_one[pos][num - 1] += sum;
					cost_dw_category[num - 1] += sum;
					cost_dw_category_day[num - 1] += sum;
					cost_dw_day += sum;
					costs_day[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit wallet number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					cout << "General card expenses: " << cost_dw_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dw_category_one[pos][i] << "\n";
						}
					}
				}
				break;
			}
			case '4':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num;
				cout << "Enter number of the wallet by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (cred_wallet[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					day++;
					day_cw++;
					cw_cost_day_cw[pos] += sum;
					costs[num - 1] += sum;
					cost_cw_one[pos] += sum;
					cost_cw += sum;
					cost_cw_category_one[pos][num - 1] += sum;
					cost_cw_category[num - 1] += sum;
					cost_cw_category_day[num - 1] += sum;
					cost_cw_day += sum;
					costs_day[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit wallet number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					cout << "General card expenses: " << cost_cw_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cw_category_one[pos][i] << "\n";
						}
					}
				}
				break;
			}
			}
			break;
		}
		case '2':
		{
			system("cls");
			char key;
			string search_card_or_wallet;
			cout << "By what will you pay the costs ?\n";
			cout << "1 - Debit card.\n";
			cout << "2 - Credit card.\n";
			cout << "3 - Debit wallet.\n";
			cout << "4 - Credit wallet.\n";
			cout << "Your choice: ";
			key = _getch();
			switch (key)
			{
			case'1':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the card by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n1; i++)
				{
					if (deb_card[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					all_costs_w[week] += sum;
					dc_cost_week_dc[week_dc] += sum;
					costs[num - 1] += sum;
					cost_dc_one[pos] += sum;
					cost_dc += sum;
					cost_dc_category_one[pos][num - 1] += sum;
					cost_dc_category[num - 1] += sum;
					cost_dc_category_week[num - 1] += sum;
					cost_dc_week += sum;
					costs_week[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit card number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					system("pause");
					system("cls");
					cout << "General card expenses: " << cost_dc_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dc_category_one[pos][i] << "\n";
						}
					}
					week++;
					week_dc++;
				}
				break;
			}
			case '2':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the card by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (cred_card[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					all_costs_w[week] += sum;
					costs[num - 1] += sum;
					cc_cost_week_cc[week_cc] += sum;
					cost_cc_one[pos] += sum;
					cost_cc += sum;
					cost_cc_category_one[pos][num - 1] += sum;
					cost_cc_category[num - 1] += sum;
					cost_cc_category_week[num - 1] += sum;
					cost_cc_week += sum;
					costs_week[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of credit card number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					system("pause");
					system("cls");
					cout << "General card expenses: " << cost_cc_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cc_category_one[pos][i] << "\n";
						}
					}
					week++;
					week_cc++;
				}
				break;
			}
			case '3':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the wallet by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (deb_wallet[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					all_costs_w[week] += sum;
					costs[num - 1] += sum;
					dw_cost_week_dw[week_dw] += sum;
					cost_dw += sum;
					cost_dw_one[pos] += sum;
					cost_dw_category_one[pos][num - 1] += sum;
					cost_dw_category[num - 1] += sum;
					cost_dw_category_week[num - 1] += sum;
					cost_dw_week += sum;
					costs_week[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit wallet number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					cout << "General card expenses: " << cost_dw_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dw_category_one[pos][i] << "\n";
						}
					}
					week++;
					week_dw++;
				}
				break;
			}
			case '4':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num;
				cout << "Enter number of the wallet by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (cred_wallet[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					all_costs_w[week] += sum;
					costs[num - 1] += sum;
					cw_cost_week_cw[week_cw] += sum;
					cost_cw += sum;
					cost_cw_one[pos] += sum;
					cost_cc_category_one[pos][num - 1] += sum;
					cost_cw_category[num - 1] += sum;
					cost_cw_category_week[num - 1] += sum;
					cost_cw_week += sum;
					costs_week[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit wallet number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					cout << "General card expenses: " << cost_cw_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cw_category_one[pos][i] << "\n";
						}
					}
					week++;
					week_cw++;
				}
				break;
			}
			}
			break;
		}
		case '3':
		{
			system("cls");
			char key;
			string search_card_or_wallet;
			cout << "By what will you pay the costs ?\n";
			cout << "1 - Debit card.\n";
			cout << "2 - Credit card.\n";
			cout << "3 - Debit wallet.\n";
			cout << "4 - Credit wallet.\n";
			cout << "Your choice: ";
			key = _getch();
			switch (key)
			{
			case'1':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the card by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n1; i++)
				{
					if (deb_card[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					costs[num - 1] += sum;
					all_costs_m[month] += sum;
					dc_cost_month_dc[month_dc] += sum;
					cost_dc += sum;
					cost_dc_one[pos] += sum;
					cost_dc_category_one[pos][num - 1] += sum;
					cost_dc_category[num - 1] += sum;
					cost_dc_category_month[num - 1] += sum;
					cost_dc_month += sum;
					costs_month[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit card number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					system("pause");
					system("cls");
					cout << "General card expenses: " << cost_dc_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dc_category_one[pos][i] << "\n";
						}
					}
					month++;
					month_dc++;
				}
				break;
			}
			case '2':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the card by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (cred_card[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					all_costs_m[month] += sum;
					costs[num - 1] += sum;
					cc_cost_month_cc[month_cc] += sum;
					cost_cc += sum;
					cost_cc_one[pos] += sum;
					cost_cc_category_one[pos][num - 1] += sum;
					cost_cc_category[num - 1] += sum;
					cost_cc_category_month[num - 1] += sum;
					cost_cc_month += sum;
					costs_month[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of credit card number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					system("pause");
					system("cls");
					cout << "General card expenses: " << cost_cc_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cc_category_one[pos][i] << "\n";
						}
					}
					month++;
					month_cc++;
				}
				break;
			}
			case '3':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num = 0;
				cout << "Enter number of the wallet by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (deb_wallet[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					all_costs_m[month] += sum;
					costs[num - 1] += sum;
					dw_cost_month_dw[month_dw] += sum;
					cost_dw += sum;
					cost_dw_one[pos] += sum;
					cost_dw_category_one[pos][num - 1] += sum;
					cost_dw_category[num - 1] += sum;
					cost_dw_category_month[num - 1] += sum;
					cost_dw_month += sum;
					costs_month[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit wallet number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					cout << "General card expenses: " << cost_dw_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dw_category_one[pos][i] << "\n";
						}
					}
					month++;
					month_dw++;
				}
				break;
			}
			case '4':
			{
				system("cls");
				int pos = 0;
				double sum;
				int num;
				cout << "Enter number of the wallet by which you want to pay: ";
				cin >> search_card_or_wallet;
				int f = 0;
				for (int i = 0; i < n2; i++)
				{
					if (cred_wallet[i] == search_card_or_wallet)
					{
						pos = i;
						system("cls");
						cout << "Choose the category of costs for which you want to pay: \n";
						for (int j = 0; j < n; j++)
						{
							cout << j + 1 << ". " << category_cost[j] << "\n";
						}
						cout << "Your choice: ";
						cin >> num;
						system("cls");
						for (int k = 0; k < n; k++)
						{
							if (num - 1 == k)
							{
								cout << "Enter the amount of money spent: ";
								cin >> sum;
							}
						}
						f = 1;
					}
				}
				if (f == 0) { cout << "Entered card number no exists.\n"; }
				if (f == 1)
				{
					all_costs_m[month] += sum;
					costs[num - 1] += sum;
					cw_cost_month_cw[month_cw] += sum;
					cost_cw += sum;
					cost_cw_one[pos] += sum;
					cost_cw_category_one[pos][num - 1] += sum;
					cost_cw_category[num - 1] += sum;
					cost_cw_category_month[num - 1] += sum;
					cost_cw_month += sum;
					costs_month[num - 1] += sum;
					system("cls");
					cout << "Expenses added successfully!\n";
					cout << "You entered the expenses of debit wallet number " << search_card_or_wallet << " in the amount of " << sum << " dollars.\n";
					cout << "General card expenses: " << cost_cw_one[pos] << "\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_one[pos][i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cw_category_one[pos][i] << "\n";
						}
					}
					month++;
					month_cw++;
				}
				break;
			}
			}
			break;
		}
		}

	}
	void reportCost()
	{
		char key_day;
		cout << "For what period do you want to receive a report ?\n";
		cout << "1 - per day.\n";
		cout << "2 - per week.\n";
		cout << "3 - per month.\n";
		cout << "Your choice: ";
		key_day = _getch();
		switch (key_day)
		{
		case '1':
		{
			system("cls");
			if (day == 0)
			{
				cout << "There is no cost per day.\n";
			}
			else
			{
				if (day_dc == 0)
				{
					cout << "\nThere is no cost by debit cards per day.\n";
				}
				else
				{
					cout << "\nTotal debit cards spending per day: " << cost_dc_day << " dollars.\n";
					cout << "Total debit cards spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_day[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dc_category_day[i] << "\n";
						}
					}
				}
				if (day_cc == 0)
				{
					cout << "\nThere is no cost by credit cards per day.\n";
				}
				else
				{
					cout << "\nTotal credit cards spending per day: " << cost_cc_day << " dollars.\n";
					cout << "Total credit cards spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_day[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cc_category_day[i] << "\n";
						}
					}
				}
				if (day_dw == 0)
				{
					cout << "\nThere is no cost by debit wallets per day.\n";
				}
				else
				{
					cout << "\nTotal debit wallets spending per day: " << cost_dw_day << " dollars.\n";
					cout << "Total debit wallets spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_day[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dw_category_day[i] << "\n";
						}
					}
				}
				if (day_cw == 0)
				{
					cout << "\nThere is no cost by credit wallets per day.\n";
				}
				else
				{
					cout << "\nTotal credit wallets spending per day: " << cost_cw_day << " dollars.\n";
					cout << "Total credit wallets spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_day[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cw_category_day[i] << "\n";
						}
					}
				}
				system("pause");
				system("cls");
				cout << "\nThe total amount of expenses for all cards and wallets per day: " << cost_dc_day + cost_cc_day + cost_dw_day + cost_cw_day << " dollars.\n";
				cout << "Total cost by categories per day.\n";
				for (int i = 0; i < n; i++)
				{
					if (costs_day[i] != 0)
					{
						cout << "Expends by category of " << category_cost[i] << ": " << costs_day[i] << "\n";
					}
				}
			}
			break;
		}
		case '2':
		{
			system("cls");
			if (week == 0)
			{
				cout << "There is no cost per week.\n";
			}
			else
			{
				if (week_dc == 0)
				{
					cout << "\nThere is no cost by debit cards per week.\n";
				}
				else
				{
					cout << "\nTotal debit cards spending per week: " << cost_dc_week << " dollars.\n";
					cout << "Total debit cards spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_week[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dc_category_week[i] << "\n";
						}
					}
				}
				if (week_cc == 0)
				{
					cout << "\nThere is no cost by credit cards per week.\n";
				}
				else
				{
					cout << "\nTotal credit cards spending per week: " << cost_cc_week << " dollars.\n";
					cout << "Total credit cards spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_week[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cc_category_week[i] << "\n";
						}
					}
				}
				if (week_dw == 0)
				{
					cout << "\nThere is no cost by debit wallets per week.\n";
				}
				else
				{
					cout << "\nTotal debit wallets spending per week: " << cost_dw_week << " dollars.\n";
					cout << "Total debit wallets spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_week[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dw_category_week[i] << "\n";
						}
					}
				}
				if (week_cw == 0)
				{
					cout << "\nThere is no cost by credit wallets per week.\n";
				}
				else
				{
					cout << "\nTotal credit wallets spending per week: " << cost_cw_week << " dollars.\n";
					cout << "Total credit wallets spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_week[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cw_category_week[i] << "\n";
						}
					}
				}
				system("pause");
				system("cls");
				cout << "\nThe total amount of expenses for all cards and wallets per week: " << cost_dc_week + cost_cc_week + cost_dw_week + cost_cw_week << " dollars.\n";
				cout << "Total cost by categories per week.\n";
				for (int i = 0; i < n; i++)
				{
					if (costs_week[i] != 0)
					{
						cout << "Expends by category of " << category_cost[i] << ": " << costs_week[i] << "\n";
					}
				}
			}
			break;
		}
		case '3':
		{
			system("cls");
			if (month == 0)
			{
				cout << "There is no cost per month.\n";
			}
			else
			{
				if (month_dc == 0)
				{
					cout << "\nThere is no cost by debit cards per month.\n";
				}
				else
				{
					cout << "\nTotal debit cards spending per month: " << cost_dc_month << " dollars.\n";
					cout << "Total debit cards spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_month[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dc_category_month[i] << "\n";
						}
					}
				}
				if (month_cc == 0)
				{
					cout << "\nThere is no cost by credit cards per month.\n";
				}
				else
				{
					cout << "\nTotal credit cards spending per month: " << cost_cc_month << " dollars.\n";
					cout << "Total credit cards spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_month[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cc_category_month[i] << "\n";
						}
					}
				}
				if (month_dw == 0)
				{
					cout << "\nThere is no cost by debit wallets per month.\n";
				}
				else
				{
					cout << "\nTotal debit wallets spending per month: " << cost_dw_month << " dollars.\n";
					cout << "Total debit wallets spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_month[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_dw_category_month[i] << "\n";
						}
					}
				}
				if (month_cw == 0)
				{
					cout << "\nThere is no cost by credit wallets per month.\n";
				}
				else
				{
					cout << "\nTotal credit wallets spending per month: " << cost_cw_month << " dollars.\n";
					cout << "Total credit wallets spending by cost category.\n";
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_month[i] != 0)
						{
							cout << "Expends by category of " << category_cost[i] << ": " << cost_cw_category_month[i] << "\n";
						}
					}
				}
				system("pause");
				system("cls");
				cout << "\nThe total amount of expenses for all cards and wallets per month: " << cost_dc_month + cost_cc_month + cost_dw_month + cost_cw_month << " dollars.\n";
				cout << "Total cost by categories per month.\n";
				for (int i = 0; i < n; i++)
				{
					if (costs_month[i] != 0)
					{
						cout << "Expends by category of " << category_cost[i] << ": " << costs_month[i] << "\n";
					}
				}
			}
			break;
		}
		}
	}
	void ratingSumCost()
	{
		char key_day;
		cout << "Formation of ratings by maximum amounts.\n";
		cout << "TOP 3 of costs.\n";
		cout << "1 - Per week.\n";
		cout << "2 - Per month.\n";
		cout << "Your choice: ";
		key_day = _getch();
		switch (key_day)
		{
		case '1':
		{
			system("cls");
			if (week == 0)
			{
				cout << "There is no cost per week.\n";
			}
			else
			{
				char key;
				string search_card_or_wallet;
				cout << "Choose the type of financial instrument.\n";
				cout << "1 - Debit card.\n";
				cout << "2 - Credit card.\n";
				cout << "3 - Debit wallet.\n";
				cout << "4 - Credit wallet.\n";
				cout << "5 - For all cards and wallets.\n";
				cout << "Your choice: ";
				key = _getch();
				switch (key)
				{
				case '1':
				{
					system("cls");
					if (week_dc < 3)
					{
						cout << "You added " << week_dc << " debit cards spending per week.\n";
					}
					else
					{
						double cost_week_copy[c];
						for (int i = 0; i < week_dc + 1; i++)
						{
							cost_week_copy[i] = dc_cost_week_dc[i];
						}
						for (int i = 0; i < week_dc + 1; i++)
						{
							for (int j = week_dc; j > i; j--)
							{
								if (cost_week_copy[j] > cost_week_copy[j - 1])
								{
									int t = cost_week_copy[j];
									cost_week_copy[j] = cost_week_copy[j - 1];
									cost_week_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 debit cards spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_week_copy[i] << "\n";
						}
						w_sum1_dc = cost_week_copy[0];
						w_sum2_dc = cost_week_copy[1];
						w_sum3_dc = cost_week_copy[2];
					}
					break;
				}
				case '2':
				{
					system("cls");
					if (week_cc < 3)
					{
						cout << "You added " << week_cc << " credit cards spending per week.\n";
					}
					else
					{
						double cost_week_copy[c];
						for (int i = 0; i < week_cc + 1; i++)
						{
							cost_week_copy[i] = cc_cost_week_cc[i];
						}
						for (int i = 0; i < week_cc + 1; i++)
						{
							for (int j = week_cc; j > i; j--)
							{
								if (cost_week_copy[j] > cost_week_copy[j - 1])
								{
									int t = cost_week_copy[j];
									cost_week_copy[j] = cost_week_copy[j - 1];
									cost_week_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 credit cards spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_week_copy[i] << "\n";
						}
						w_sum1_cc = cost_week_copy[0];
						w_sum2_cc = cost_week_copy[1];
						w_sum3_cc = cost_week_copy[2];
					}
					break;
				}
				case '3':
				{
					system("cls");
					if (week_dw < 3)
					{
						cout << "You added " << week_dw << " debit wallets spending per week.\n";
					}
					else
					{
						double cost_week_copy[c];
						for (int i = 0; i < week_dw + 1; i++)
						{
							cost_week_copy[i] = dw_cost_week_dw[i];
						}
						for (int i = 0; i < week_dw + 1; i++)
						{
							for (int j = week_dw; j > i; j--)
							{
								if (cost_week_copy[j] > cost_week_copy[j - 1])
								{
									int t = cost_week_copy[j];
									cost_week_copy[j] = cost_week_copy[j - 1];
									cost_week_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 debit wallets spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_week_copy[i] << "\n";
						}
						w_sum1_dw = cost_week_copy[0];
						w_sum2_dw = cost_week_copy[1];
						w_sum3_dw = cost_week_copy[2];
					}
					break;
				}
				case '4':
				{
					system("cls");
					if (week_cw < 3)
					{
						cout << "You added " << week_cw << " credit wallets spending per week.\n";
					}
					else
					{
						double cost_week_copy[c];
						for (int i = 0; i < week_cw + 1; i++)
						{
							cost_week_copy[i] = cw_cost_week_cw[i];
						}
						for (int i = 0; i < week_cw + 1; i++)
						{
							for (int j = week_cw; j > i; j--)
							{
								if (cost_week_copy[j] > cost_week_copy[j - 1])
								{
									int t = cost_week_copy[j];
									cost_week_copy[j] = cost_week_copy[j - 1];
									cost_week_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 credit wallets spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_week_copy[i] << "\n";
						}
						w_sum1_cw = cost_week_copy[0];
						w_sum2_cw = cost_week_copy[1];
						w_sum3_cw = cost_week_copy[2];
					}
					break;
				}
				case '5':
				{
					system("cls");
					if (week < 3)
					{
						cout << "You added " << week << " cards and wallets spending per week.\n";
					}
					else
					{
						double cost_week_copy[c];
						for (int i = 0; i < week + 1; i++)
						{
							cost_week_copy[i] = all_costs_w[i];
						}
						for (int i = 0; i < week + 1; i++)
						{
							for (int j = week; j > i; j--)
							{
								if (cost_week_copy[j] > cost_week_copy[j - 1])
								{
									int t = cost_week_copy[j];
									cost_week_copy[j] = cost_week_copy[j - 1];
									cost_week_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 cards and wallets spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_week_copy[i] << "\n";
						}
						w_sum1 = cost_week_copy[0];
						w_sum2 = cost_week_copy[1];
						w_sum3 = cost_week_copy[2];
					}
					break;
				}
				}
			}
			break;
		}
		case '2':
		{
			system("cls");
			if (month == 0)
			{
				cout << "There is no cost per month.\n";
			}
			else
			{
				char key;
				string search_card_or_wallet;
				cout << "Choose the type of financial instrument.\n";
				cout << "1 - Debit card.\n";
				cout << "2 - Credit card.\n";
				cout << "3 - Debit wallet.\n";
				cout << "4 - Credit wallet.\n";
				cout << "5 - For all cards and wallets.\n";
				cout << "Your choice: ";
				key = _getch();
				switch (key)
				{
				case '1':
				{
					system("cls");
					if (month_dc < 3)
					{
						cout << "You added " << month_dc << " debit cards spending per month.\n";
					}
					else
					{
						double cost_month_copy[c];
						for (int i = 0; i < month_dc + 1; i++)
						{
							cost_month_copy[i] = dc_cost_month_dc[i];
						}
						for (int i = 0; i < month_dc + 1; i++)
						{
							for (int j = month_dc; j > i; j--)
							{
								if (cost_month_copy[j] > cost_month_copy[j - 1])
								{
									int t = cost_month_copy[j];
									cost_month_copy[j] = cost_month_copy[j - 1];
									cost_month_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 debit cards spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_month_copy[i] << "\n";
						}
						m_sum1_dc = cost_month_copy[0];
						m_sum2_dc = cost_month_copy[1];
						m_sum3_dc = cost_month_copy[2];
					}
					break;
				}
				case '2':
				{
					system("cls");
					if (month_cc < 3)
					{
						cout << "You added " << month_cc << " credit cards spending per month.\n";
					}
					else
					{
						double cost_month_copy[c];
						for (int i = 0; i < month_cc + 1; i++)
						{
							cost_month_copy[i] = cc_cost_month_cc[i];
						}
						for (int i = 0; i < month_cc + 1; i++)
						{
							for (int j = month_cc; j > i; j--)
							{
								if (cost_month_copy[j] > cost_month_copy[j - 1])
								{
									int t = cost_month_copy[j];
									cost_month_copy[j] = cost_month_copy[j - 1];
									cost_month_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 credit cards spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_month_copy[i] << "\n";
						}
						m_sum1_cc = cost_month_copy[0];
						m_sum2_cc = cost_month_copy[1];
						m_sum3_cc = cost_month_copy[2];
					}
					break;
				}
				case '3':
				{
					system("cls");
					if (month_dw < 3)
					{
						cout << "You added " << month_dw << " debit wallets spending per month.\n";
					}
					else
					{
						double cost_month_copy[c];
						for (int i = 0; i < month_dw + 1; i++)
						{
							cost_month_copy[i] = dw_cost_month_dw[i];
						}
						for (int i = 0; i < month_dw + 1; i++)
						{
							for (int j = month_dw; j > i; j--)
							{
								if (cost_month_copy[j] > cost_month_copy[j - 1])
								{
									int t = cost_month_copy[j];
									cost_month_copy[j] = cost_month_copy[j - 1];
									cost_month_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 debit wallets spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_month_copy[i] << "\n";
						}
						m_sum1_dw = cost_month_copy[0];
						m_sum2_dw = cost_month_copy[1];
						m_sum3_dw = cost_month_copy[2];
					}
					break;
				}
				case '4':
				{
					system("cls");
					if (month_cw < 3)
					{
						cout << "You added " << month_cw << " credit wallets spending per month.\n";
					}
					else
					{
						double cost_month_copy[c];
						for (int i = 0; i < month_cw + 1; i++)
						{
							cost_month_copy[i] = cw_cost_month_cw[i];
						}
						for (int i = 0; i < month_cw + 1; i++)
						{
							for (int j = month_cw; j > i; j--)
							{
								if (cost_month_copy[j] > cost_month_copy[j - 1])
								{
									int t = cost_month_copy[j];
									cost_month_copy[j] = cost_month_copy[j - 1];
									cost_month_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 credit wallets spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_month_copy[i] << "\n";
						}
						m_sum1_cw = cost_month_copy[0];
						m_sum2_cw = cost_month_copy[1];
						m_sum3_cw = cost_month_copy[2];
					}
					break;
				}
				case '5':
				{
					system("cls");
					if (month < 3)
					{
						cout << "You added " << month << " cards and wallets spending per month.\n";
					}
					else
					{
						double cost_month_copy[c];
						for (int i = 0; i < month + 1; i++)
						{
							cost_month_copy[i] = all_costs_m[i];
						}
						for (int i = 0; i < month + 1; i++)
						{
							for (int j = month; j > i; j--)
							{
								if (cost_month_copy[j] > cost_month_copy[j - 1])
								{
									int t = cost_month_copy[j];
									cost_month_copy[j] = cost_month_copy[j - 1];
									cost_month_copy[j - 1] = t;
								}
							}
						}
						cout << "TOP 3 cards and wallets spending.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << cost_month_copy[i] << "\n";
						}
						m_sum1 = cost_month_copy[0];
						m_sum2 = cost_month_copy[1];
						m_sum3 = cost_month_copy[2];
					}
					break;
				}
				}
			}
			break;
		}
		}
	}
	void ratingCategoryCost()
	{
		char key_day;
		cout << "Formation of ratings by maximum amounts.\n";
		cout << "TOP 3 of categories.\n";
		cout << "1 - Per week.\n";
		cout << "2 - Per month.\n";
		key_day = _getch();
		switch (key_day)
		{
		case '1':
		{
			system("cls");
			if (week == 0)
			{
				cout << "There is no cost per week.\n";
			}
			else
			{
				char key;
				string search_card_or_wallet;
				cout << "Choose the type of financial instrument.\n";
				cout << "1 - Debit card.\n";
				cout << "2 - Credit card.\n";
				cout << "3 - Debit wallet.\n";
				cout << "4 - Credit wallet.\n";
				cout << "5 - For all cards and wallets.\n";
				cout << "Your choice: ";
				key = _getch();
				switch (key)
				{
				case '1':
				{
					system("cls");
					int k = 0;
					string category_cost_dc_copy[n];
					double cost_dc_category_week_copy[n];
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_week[i] != 0)
						{
							cost_dc_category_week_copy[i] = cost_dc_category_week[i];
							category_cost_dc_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < week_dc + 1; i++)
						{
							for (int j = week_dc; j > i; j--)
							{
								if (cost_dc_category_week_copy[j] > cost_dc_category_week_copy[j - 1])
								{
									int t = cost_dc_category_week_copy[j];
									cost_dc_category_week_copy[j] = cost_dc_category_week_copy[j - 1];
									cost_dc_category_week_copy[j - 1] = t;
									string tmp = category_cost_dc_copy[j];
									category_cost_dc_copy[j] = category_cost_dc_copy[j - 1];
									category_cost_dc_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 debit cards spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_dc_copy[i] << " (" << cost_dc_category_week_copy[i] << " dol.)\n";
						}
						w_categ1_dc = category_cost_dc_copy[0];
						w_categ2_dc = category_cost_dc_copy[1];
						w_categ3_dc = category_cost_dc_copy[2];
					}
					break;
				}
				case '2':
				{
					system("cls");
					string category_cost_cc_copy[n];
					double cost_cc_category_week_copy[n];
					int k = 0;
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_week[i] != 0)
						{
							cost_cc_category_week_copy[i] = cost_cc_category_week[i];
							category_cost_cc_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < week_cc + 1; i++)
						{
							for (int j = week_cc; j > i; j--)
							{
								if (cost_cc_category_week_copy[j] > cost_cc_category_week_copy[j - 1])
								{
									int t = cost_cc_category_week_copy[j];
									cost_cc_category_week_copy[j] = cost_cc_category_week_copy[j - 1];
									cost_cc_category_week_copy[j - 1] = t;
									string tmp = category_cost_cc_copy[j];
									category_cost_cc_copy[j] = category_cost_cc_copy[j - 1];
									category_cost_cc_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 credit cards spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_cc_copy[i] << " (" << cost_cc_category_week_copy[i] << " dol.)\n";
						}
						w_categ1_cc = category_cost_cc_copy[0];
						w_categ2_cc = category_cost_cc_copy[1];
						w_categ3_cc = category_cost_cc_copy[2];
					}
					break;
				}
				case '3':
				{
					system("cls");
					string category_cost_dw_copy[n];
					int k = 0;
					double cost_dw_category_week_copy[n];
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_week[i] != 0)
						{
							cost_dw_category_week_copy[i] = cost_dw_category_week[i];
							category_cost_dw_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < week_dw + 1; i++)
						{
							for (int j = week_dw; j > i; j--)
							{
								if (cost_dw_category_week_copy[j] > cost_dw_category_week_copy[j - 1])
								{
									int t = cost_dw_category_week_copy[j];
									cost_dw_category_week_copy[j] = cost_dw_category_week_copy[j - 1];
									cost_dw_category_week_copy[j - 1] = t;
									string tmp = category_cost_dw_copy[j];
									category_cost_dw_copy[j] = category_cost_dw_copy[j - 1];
									category_cost_dw_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 debit wallets spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_dw_copy[i] << " (" << cost_dw_category_week_copy[i] << " dol.)\n";
						}
						w_categ1_dw = category_cost_dw_copy[0];
						w_categ2_dw = category_cost_dw_copy[1];
						w_categ3_dw = category_cost_dw_copy[2];
					}
					break;
				}
				case '4':
				{
					system("cls");
					string category_cost_cw_copy[n];
					double cost_cw_category_week_copy[n];
					int k = 0;
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_week[i] != 0)
						{
							cost_cw_category_week_copy[i] = cost_cw_category_week[i];
							category_cost_cw_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < week_cw + 1; i++)
						{
							for (int j = week_cw; j > i; j--)
							{
								if (cost_cw_category_week_copy[j] > cost_cw_category_week_copy[j - 1])
								{
									int t = cost_cw_category_week_copy[j];
									cost_cw_category_week_copy[j] = cost_cw_category_week_copy[j - 1];
									cost_cw_category_week_copy[j - 1] = t;
									string tmp = category_cost_cw_copy[j];
									category_cost_cw_copy[j] = category_cost_cw_copy[j - 1];
									category_cost_cw_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 credit wallets spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_cw_copy[i] << " (" << cost_cw_category_week_copy[i] << " dol.)\n";
						}
						w_categ1_cw = category_cost_cw_copy[0];
						w_categ2_cw = category_cost_cw_copy[1];
						w_categ3_cw = category_cost_cw_copy[2];
					}
					break;
				}
				case '5':
				{
					system("cls");
					string category_cost_copy[n];
					double costs_week_copy[n];
					int k = 0;
					for (int i = 0; i < n; i++)
					{
						if (costs_week[i] != 0)
						{
							costs_week_copy[i] = costs_week[i];
							category_cost_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < week + 1; i++)
						{
							for (int j = week; j > i; j--)
							{
								if (costs_week_copy[j] > costs_week_copy[j - 1])
								{
									int t = costs_week_copy[j];
									costs_week_copy[j] = costs_week_copy[j - 1];
									costs_week_copy[j - 1] = t;
									string tmp = category_cost_copy[j];
									category_cost_copy[j] = category_cost_copy[j - 1];
									category_cost_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3  cards and wallets spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_copy[i] << " (" << costs_week_copy[i] << " dol.)\n";
						}
						w_categ1 = category_cost_copy[0];
						w_categ2 = category_cost_copy[1];
						w_categ3 = category_cost_copy[2];
					}
					break;
				}
				}
			}
			break;
		}
		case '2':
		{
			system("cls");
			if (month == 0)
			{
				cout << "There is no cost per month.\n";
			}
			else
			{
				char key;
				string search_card_or_wallet;
				cout << "Choose the type of financial instrument.\n";
				cout << "1 - Debit card.\n";
				cout << "2 - Credit card.\n";
				cout << "3 - Debit wallet.\n";
				cout << "4 - Credit wallet.\n";
				cout << "5 - For all cards and wallets.\n";
				cout << "Your choice: ";
				key = _getch();
				switch (key)
				{
				case '1':
				{
					system("cls");
					int k = 0;
					string category_cost_dc_copy[n];
					double cost_dc_category_month_copy[n];
					for (int i = 0; i < n; i++)
					{
						if (cost_dc_category_month[i] != 0)
						{
							cost_dc_category_month_copy[i] = cost_dc_category_month[i];
							category_cost_dc_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < month_dc + 1; i++)
						{
							for (int j = month_dc; j > i; j--)
							{
								if (cost_dc_category_month_copy[j] > cost_dc_category_month_copy[j - 1])
								{
									int t = cost_dc_category_month_copy[j];
									cost_dc_category_month_copy[j] = cost_dc_category_month_copy[j - 1];
									cost_dc_category_month_copy[j - 1] = t;
									string tmp = category_cost_dc_copy[j];
									category_cost_dc_copy[j] = category_cost_dc_copy[j - 1];
									category_cost_dc_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 debit cards spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_dc_copy[i] << " (" << cost_dc_category_month_copy[i] << " dol.)\n";
						}
						m_categ1_dc = category_cost_dc_copy[0];
						m_categ2_dc = category_cost_dc_copy[1];
						m_categ3_dc = category_cost_dc_copy[2];
					}
					break;
				}
				case '2':
				{
					system("cls");
					string category_cost_cc_copy[n];
					double cost_cc_category_month_copy[n];
					int k = 0;
					for (int i = 0; i < n; i++)
					{
						if (cost_cc_category_month[i] != 0)
						{
							cost_cc_category_month_copy[i] = cost_cc_category_month[i];
							category_cost_cc_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < month_cc + 1; i++)
						{
							for (int j = month_cc; j > i; j--)
							{
								if (cost_cc_category_month_copy[j] > cost_cc_category_month_copy[j - 1])
								{
									int t = cost_cc_category_month_copy[j];
									cost_cc_category_month_copy[j] = cost_cc_category_month_copy[j - 1];
									cost_cc_category_month_copy[j - 1] = t;
									string tmp = category_cost_cc_copy[j];
									category_cost_cc_copy[j] = category_cost_cc_copy[j - 1];
									category_cost_cc_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 credit cards spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_cc_copy[i] << " (" << cost_cc_category_month_copy[i] << " dol.)\n";
						}
						m_categ1_cc = category_cost_cc_copy[0];
						m_categ2_cc = category_cost_cc_copy[1];
						m_categ3_cc = category_cost_cc_copy[2];
					}
					break;
				}
				case '3':
				{
					system("cls");
					string category_cost_dw_copy[n];
					double cost_dw_category_month_copy[n];
					int k = 0;
					for (int i = 0; i < n; i++)
					{
						if (cost_dw_category_month[i] != 0)
						{
							cost_dw_category_month_copy[i] = cost_dw_category_month[i];
							category_cost_dw_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < month_dw + 1; i++)
						{
							for (int j = month_dw; j > i; j--)
							{
								if (cost_dw_category_month_copy[j] > cost_dw_category_month_copy[j - 1])
								{
									int t = cost_dw_category_month_copy[j];
									cost_dw_category_month_copy[j] = cost_dw_category_month_copy[j - 1];
									cost_dw_category_month_copy[j - 1] = t;
									string tmp = category_cost_dw_copy[j];
									category_cost_dw_copy[j] = category_cost_dw_copy[j - 1];
									category_cost_dw_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 debit wallets spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_dw_copy[i] << " (" << cost_dw_category_month_copy[i] << " dol.)\n";
						}
						m_categ1_dw = category_cost_dw_copy[0];
						m_categ2_dw = category_cost_dw_copy[1];
						m_categ3_dw = category_cost_dw_copy[2];
					}
					break;
				}
				case '4':
				{
					system("cls");
					string category_cost_cw_copy[n];
					double cost_cw_category_month_copy[n];
					int k = 0;
					for (int i = 0; i < n; i++)
					{
						if (cost_cw_category_month[i] != 0)
						{
							cost_cw_category_month_copy[i] = cost_cw_category_month[i];
							category_cost_cw_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < month_cw + 1; i++)
						{
							for (int j = month_cw; j > i; j--)
							{
								if (cost_cw_category_month_copy[j] > cost_cw_category_month_copy[j - 1])
								{
									int t = cost_cw_category_month_copy[j];
									cost_cw_category_month_copy[j] = cost_cw_category_month_copy[j - 1];
									cost_cw_category_month_copy[j - 1] = t;
									string tmp = category_cost_cw_copy[j];
									category_cost_cw_copy[j] = category_cost_cw_copy[j - 1];
									category_cost_cw_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 credit wallets spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_cw_copy[i] << " (" << cost_cw_category_month_copy[i] << " dol.)\n";
						}
						m_categ1_cw = category_cost_cw_copy[0];
						m_categ2_cw = category_cost_cw_copy[1];
						m_categ3_cw = category_cost_cw_copy[2];
					}
					break;
				}
				case '5':
				{
					system("cls");
					string category_cost_copy[n];
					double costs_month_copy[n];
					int k = 0;
					for (int i = 0; i < n; i++)
					{
						if (costs_month[i] != 0)
						{
							costs_month_copy[i] = costs_month[i];
							category_cost_copy[i] = category_cost[i];
							k++;
						}
					}
					if (k < 3) {
						cout << "You added costs only for " << k << " categories.\n";
						break;
					}
					else
					{
						for (int i = 0; i < month + 1; i++)
						{
							for (int j = month; j > i; j--)
							{
								if (costs_month_copy[j] > costs_month_copy[j - 1])
								{
									int t = costs_month_copy[j];
									costs_month_copy[j] = costs_month_copy[j - 1];
									costs_month_copy[j - 1] = t;
									string tmp = category_cost_copy[j];
									category_cost_copy[j] = category_cost_copy[j - 1];
									category_cost_copy[j - 1] = tmp;
								}
							}
						}
						cout << "TOP 3 cards and wallets spending categories.\n";
						for (int i = 0; i < 3; i++)
						{
							cout << "TOP-" << i + 1 << ": " << category_cost_copy[i] << " (" << costs_month_copy[i] << " dol.)\n";
						}
						m_categ1 = category_cost_copy[0];
						m_categ2 = category_cost_copy[1];
						m_categ3 = category_cost_copy[2];
					}
					break;
				}
				}
			}
			break;
		}
		}
	}
	void saveReportAndRating()
	{
		ofstream file("report.txt");
		if (file.is_open())
		{
			file << "REPORTS.\n";
			file << "1 - Per day.\n";
			file << "Category of cost " << " - " << "Sum" << "\n";
			for (int i = 0; i < n; i++)
			{
				file << category_cost[i] << " - " << costs_day[i] << "\n";
			}
			file << "\n2 - Per week.\n";
			file << "Category of cost: " << " - " << "Sum" << "\n";
			for (int i = 0; i < n; i++)
			{
				file << category_cost[i] << " - " << costs_week[i] << "\n";
			}
			file << "\n3 - Per month.\n";
			file << "Category of cost: " << " - " << "Sum" << "\n";
			for (int i = 0; i < n; i++)
			{
				file << category_cost[i] << " - " << costs_month[i] << "\n";
			}
			file << "\nRATING\n";
			file << "\nTOP 3 of costs.\n";
			file << "1 - Per week.\n";
			file << "TOP 3 of costs by maximum amounts.\n";
			file << "TOP-1: " << w_sum1 << "\n";
			file << "TOP-2: " << w_sum2 << "\n";
			file << "TOP-3: " << w_sum3 << "\n";
			file << "\n2 - Per month.\n";
			file << "\nTOP 3 of costs by maximum amounts.\n";
			file << "TOP-1: " << m_sum1 << "\n";
			file << "TOP-2: " << m_sum2 << "\n";
			file << "TOP-3: " << m_sum3 << "\n";
			file << "\n\n\n";
			file << "TOP 3 of costs' categories.\n";
			file << "1 - Per week.\n";
			file << "\nTOP 3 of costs' categories.\n";
			file << "TOP-1: " << w_categ1 << "\n";
			file << "TOP-2: " << w_categ2 << "\n";
			file << "TOP-3: " << w_categ3 << "\n";
			file << "2 - Per month.\n";
			file << "\nTOP 3 of costs' categories.\n";
			file << "TOP-1: " << m_categ1 << "\n";
			file << "TOP-2: " << m_categ2 << "\n";
			file << "TOP-3: " << m_categ3 << "\n";
		}
		file.close();
	}
};
int main()
{
	CardandWallet finance;
	char ch;
	do {
		system("cls");
		cout << "Menu.\n";
		cout << "1 - Add card or wallet.\n";
		cout << "2 - Print all card and wallet.\n";
		cout << "3 - Replenishment of wallets and cards.\n";
		cout << "4 - Enter costs by category.\n";
		cout << "5 - Generate a report by cost and category.\n";
		cout << "6 - Form a rating by maximum amounts.\n";
		cout << "7 - Save reports and ratings to a file.\n";
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
			finance.PrintCard();
			system("pause");
			break;
		}
		case '3':
		{
			system("cls");
			finance.Refill();
			system("pause");
			break;
		}
		case '4':
		{
			system("cls");
			finance.Cost();
			system("pause");
			break;
		}
		case '5':
		{
			system("cls");
			finance.reportCost();
			system("pause");
			break;
		}
		case '6':
		{
			system("cls");
			char key;
			cout << "Form a rating by maximum amounts by: \n";
			cout << "1 - Sum of costs.\n";
			cout << "2 - Categories of costs.\n";
			cout << "Your choice: ";
			key = _getch();
			switch (key)
			{
			case'1':
			{
				system("cls");
				finance.ratingSumCost();
				break;
			}
			case '2':
			{
				system("cls");
				finance.ratingCategoryCost();
				break;
			}
			}
			system("pause");
			break;
		}
		case '7':
		{
			system("cls");
			finance.saveReportAndRating();
			cout << "Record completed.\n";
			system("pause");
			break;
		}
		}
	} while (ch != 27);
}
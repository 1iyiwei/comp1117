#include <iostream>
using namespace std;

double income, deduction;
int num_childs, num_parents;
char married_status;
double Total_Allowance, Basic_Allowance, Child_Allowance, Parent_Allowance;
double Net_Chargeable_Income;
double Tax;

void Get_User_Information()
{
	cout << "Are you married? (Y/N)" << endl;
	cin >> married_status;	
	cout << "Enter your total income:" << endl;
	cin >> income;
	cout << "Enter your total deduction:" << endl;
	cin >> deduction;
	cout << "Enter Number of Childs: " << endl;
	cin >> num_childs;
	cout << "Enter Number of Qualified Parents: " << endl;
	cin >> num_parents;
	return;
	}

void Compute_Basic_Allowance()
{
	if (married_status=='Y') Basic_Allowance = 60000;
	else Basic_Allowance = 120000;
	return;
	}

void Compute_Child_Allowance()
{
	Child_Allowance = num_childs*30000;
	return;
	}

void Compute_Parent_Allowance()
{
	Parent_Allowance = num_parents*60000;
	return;
	}

void Compute_Total_Allowance()
{
	Compute_Basic_Allowance();
	Compute_Child_Allowance();
	Compute_Parent_Allowance();
	Total_Allowance=Basic_Allowance + Child_Allowance + Parent_Allowance;
	return;
	}

void Compute_Net_Chargeable_Income()
{
	Net_Chargeable_Income = income - deduction - Total_Allowance;
	if (Net_Chargeable_Income < 0) Net_Chargeable_Income = 0;
	return;
	}

void Compute_Tax()
{
	Tax = 0;
	if (Net_Chargeable_Income < 20000) Tax = Net_Chargeable_Income * 0.02;

	else if (Net_Chargeable_Income < 40000) Tax = 20000*0.02 + ((Net_Chargeable_Income - 20000) * 0.05);
	else if (Net_Chargeable_Income < 60000) Tax = 20000*0.02 + 20000* 0.05 + ((Net_Chargeable_Income - 40000) * 0.10);
	else Tax = 20000*0.02 + 20000* 0.05 + 20000 * 0.1 + ((Net_Chargeable_Income - 60000) * 0.20);
	if (Tax > (income * 0.15)) Tax = income * 0.15;
	return;
	}

main()
{
	Get_User_Information();
	Compute_Total_Allowance();
	Compute_Net_Chargeable_Income();
	Compute_Tax();
	cout << "Tax paid is " << Tax << endl;
	return 0;
	}

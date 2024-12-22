
#include <iostream>
#include <string>

using namespace std;
void YR(int& cardCount, bool &DRT, bool &coolDRT, bool &yellowTaken, string &userResponse, string &userYN);
void FullDesk(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);
void YCR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);
int main()
{
	std::cout << "Welcome to the escape room!";
	std::cout << " Your goal is to find the nessecairy items to, well escape.";
	std::cout << " Good luck and have fun!" << std::endl;

	int cardCount = 0;
	bool DRT = false;
	bool coolDRT = false;
	bool yellowTaken = false;
	string userResponse;
	string userYN;


	do
	{
		//ask user where they want to go
		cout << "Where do you want to go: Desk, Cabinet, Painting, Drawer, Shelf or Check your pocket I guess (Choose 1) : ";
		userResponse.clear();
		cin >> userResponse;
		if (userResponse == "Desk")
		{
			//ask if they want to open desk
			cout << "Open desk? (Yes/No)";
			userYN.clear();
			cin >> userYN;
			if (userYN == "Yes" && DRT == false && coolDRT == false)
			{
				FullDesk(cardCount, DRT, coolDRT, yellowTaken, userResponse, userYN);
			}
			else if (userYN == "Yes" && DRT == true && coolDRT == false && yellowTaken == false)
			{
				void YCR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string & userResponse, string & userYN);
			}
			else if (userYN == "Yes" && DRT == true && coolDRT == false && yellowTaken == false)
			{
				//YCard
				cout << "Left in the desk is a yellow 4 playing card (PLEASE TYPE THE FULL NAME OF THE ITEM)" << endl;
				cout << "What do you take?: ";
				userResponse.clear();
				cin >> userResponse;
				if (userResponse == "yellow 4 playing card" && yellowTaken == false)
				{
					cout << "I guess it could be useful" << endl;
					cardCount + 1;
					yellowTaken == true;
				}
				else
				{
					cout << "Please enter a valid item" << endl;
				}
			}
			else if (userYN == "Yes" && coolDRT == true && DRT == false && yellowTaken == false)
			{
				YR(cardCount, DRT, coolDRT, yellowTaken, userResponse, userYN);
			}
			else if (userYN == "Yes" && coolDRT == false && DRT == true && yellowTaken == true)
			{
				//Cool rock
				cout << "Left in the desk is a cool rock (PLEASE TYPE THE FULL NAME OF THE ITEM)" << endl;
				cout << "What do you take?: ";
				userResponse.clear();
				cin >> userResponse;
				if (userResponse == "cool rock")
				{
					cout << "cool." << endl;
					coolDRT = true;
				}
				else
				{
					cout << "Please enter a valid item" << endl;
				}
			}
			else if (userYN == "Yes" && coolDRT == true && DRT == false && yellowTaken == true)
			{
				//rock
				if (userResponse == "rock")
				{
					cout << "Why?" << endl;
					coolDRT = true;
				}
				else
				{
					cout << "Please enter a valid item" << endl;
				}
			}
			else if (userYN == "Yes" && coolDRT == true && DRT == true && yellowTaken == true)
			{
				cout << "The desk is empty.";
			}
		}
		// cabinet
		if (userResponse == "Cabinet")
		{
			cout << "Open cabinet? (Yes/No)";
			userYN.clear();
			cin >> userYN;
			if (userYN == "Yes")
			{
				cout << "Inside the cabinet there is a purple 2 playing card and a glass cup" << endl;
				cout << "What do you take:";
				userResponse.clear();
				cin >> userResponse;
				if (userResponse == "purple 2 playing card")
				{

				}
			}
		}

	} while (cardCount < 6);

	return 0;

}

void YR(int &cardCount, bool &DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYn)
{

	// YCard + rock
	cout << "Left in the desk is a yellow 4 playing card(1) and a rock(2)" << endl;
	cout << "What do you take?: ";
	cin >> userResponse;
	if (userResponse == "1" && yellowTaken == false)
	{
		cout << "I guess it could be useful" << endl;
		cardCount + 1;
		yellowTaken == true;
	}
	else if (userResponse == "2" == DRT == false)
	{
		cout << "Why?" << endl;
		DRT = true;
	}
	else
	{
		cout << "Please enter a valid item" << endl;
	}

	void FullDesk(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string & userResponse, string & userYN);
	{
		//full desk
		userResponse.clear();
		cout << "In the desk you find a yellow 4 playing card(1), a rock(2) and a cool rock(3) "<< endl;
		cout << "What do you take?: ";
		cin >> userResponse;


		if (userResponse == "1" && yellowTaken == false)
		{
			cout << "I guess it could be useful" << endl;
			cardCount + 1;
			yellowTaken = true;
		}
		else if (userResponse == "2" && DRT == false)
		{
			cout << "Why?" << endl;
			DRT = true;
		}
		else if (userResponse == "3" && coolDRT == false)
		{
			cout << "cool." << endl;
			coolDRT = true;
		}
		else
		{
			cout << "Please enter a valid item" << endl;
		}
	}
	void YCR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string & userResponse, string & userYN);
	{
		//YCard + cool rock
		cout << "Left in the desk is a yellow 4 playing card(1) and a cool rock(2) " << endl;
		cout << "What do you take?: ";
		userResponse.clear();
		cin >> userResponse;
		if (userResponse == "1" && yellowTaken == false)
		{
			cout << "I guess it could be useful" << endl;
			cardCount + 1;
			yellowTaken = true;
		}
		else if (userResponse == "2" && coolDRT == false)
		{
			cout << "cool." << endl;
			coolDRT = true;
		}
		else
		{
			cout << "Please enter a valid item" << endl;
		}
	}
}
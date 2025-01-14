
#include <iostream>
#include <string>

using namespace std;
void YR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);

void FullDesk(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);

void YCR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);

void Y(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);

void CR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);

void R(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN);

void FullCab(int& cardcount, bool& purpleTaken, bool& CCT, string& userResponse, string& userYN);

int main()
{
	std::cout << "Welcome to the escape room!";
	std::cout << " Your goal is to find the nessecairy items to, well escape.";
	std::cout << " Good luck and have fun!" << std::endl;

	int cardCount = 0;
	bool DRT = false;
	bool coolDRT = false;
	bool yellowTaken = false;
	bool purpleTaken = false;
	bool CCT = false;
	string userResponse;
	string userYN;


	do
	{
		//ask user where they want to go
		cout << "Where do you want to go: Desk (1), Cabinet (2), Painting (3), Drawer(4), Shelf(5) or Check your pocket I guess(6) (Choose 1) : ";
		userResponse.clear();
		cin >> userResponse;
		if (userResponse == "1")
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
				YCR(cardCount, DRT,coolDRT, yellowTaken,  userResponse, userYN);
			}

			else if (userYN == "Yes" && DRT == true && coolDRT == true && yellowTaken == false)
			{
				Y(cardCount, DRT, coolDRT, yellowTaken, userResponse, userYN);
			}

			else if (userYN == "Yes" && coolDRT == true && DRT == false && yellowTaken == false)
			{
				YR(cardCount, DRT, coolDRT, yellowTaken, userResponse, userYN);
			}

			else if (userYN == "Yes" && coolDRT == false && DRT == true && yellowTaken == true)
			{
				CR(cardCount, DRT, coolDRT, yellowTaken, userResponse, userYN);
			}

			else if (userYN == "Yes" && coolDRT == true && DRT == false && yellowTaken == true)
			{
				R(cardCount, DRT, coolDRT, yellowTaken, userResponse, userYN);
			}
			else if (userYN == "Yes" && coolDRT == true && DRT == true && yellowTaken == true)
			{
				cout << "The desk is empty.";
			}
			else if (userYN == "No")
			{
				cout << "well then why are you looking at it?" << endl;
			}
		}
		// cabinet
		if (userResponse == "2")
		{
			cout << "Open cabinet? (Yes/No)";
			userYN.clear();
			cin >> userYN;
			if (userYN == "Yes" && CCT == false && purpleTaken == false)
			{
				void FullCab(int& cardCount, bool& purpleTaken, bool& CCT, string & userResponse, string & userYN);
			}

		}

	} while (cardCount < 6);

	return 0;

}
/*desk part*/
void YR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYn, bool& purpleTaken, bool& CCT)// YCard + rock
{
	std::cout << "Left in the desk is a yellow 4 playing card(1) and a rock(2)" << endl;
	std::cout << "What do you take?: ";
	cin >> userResponse;
	if (userResponse == "1" && yellowTaken == false)
	{
		std::cout << "I guess it could be useful" << endl;
		cardCount + 1;
		yellowTaken == true;
	}
	else if (userResponse == "2" == DRT == false)
	{
		std::cout << "Why?" << endl;
		DRT = true;
	}
	else
	{
		cout << "Please enter a valid item" << endl;
	}

void FullDesk(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string & userResponse, string & userYN); //full desk
{
	
	userResponse.clear();
	cout << "In the desk you find a yellow 4 playing card(1), a rock(2) and a cool rock(3) " << endl;
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
void YCR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string & userResponse, string & userYN); //YCard + cool rock
{
	
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
void Y(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string & userResponse, string & userYN);//YCard
{
	
	cout << "Left in the desk is a yellow 4 playing card(1)" << endl;
	cout << "What do you take?: ";
	userResponse.clear();
	cin >> userResponse;
	if (userResponse == "1" && yellowTaken == false)
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
void CR(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string & userResponse, string & userYN); //Cool rock
{
	
	std::cout << "Left in the desk is a cool rock(1)" << endl;
	std::cout << "What do you take?: ";
	userResponse.clear();
	cin >> userResponse;
	if (userResponse == "1")
	{
		std::cout << "cool." << endl;
		coolDRT = true;
	}
	else
	{
		std::cout << "Please enter a valid item" << endl;
	}
}
void R(int& cardCount, bool& DRT, bool& coolDRT, bool& yellowTaken, string& userResponse, string& userYN); //rock
{
	
	if (userResponse == "rock")
	{
		std::cout << "Why?" << endl;
		coolDRT = true;
	}
	else
	{
		std::cout << "Please enter a valid item" << endl;
	}
}

void FullCab(int& cardCount, bool& purpleTaken, bool& CCT, string& userResponse, string& userYN);
{
	
	cout << "Inside the cabinet there is a purple 2 playing card(1) and a glass cup(2)" << endl;
	cout << "What do you take:";
	userResponse.clear();
	cin >> userResponse;


	if (userResponse == "1" && purpleTaken == false)
	{
		cout << "Kinda weird that there's conviently colored cards in hidden places..." << endl;
		purpleTaken = true;
		cardCount + 1;
		
	}
	else if(userResponse == "2" && CCT == false)
	{
		cout << "I guess you're thirsty?" << endl;
		CCT = true;
	}
}

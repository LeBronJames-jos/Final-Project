#include <iostream>
#include <string>

using namespace std;
int main()
{
	std::cout << "Welcome to the escape room!";
	std::cout << " Your goal is to find the nessecairy items to, well escape.";
	std::cout << " Good luck and have fun!" << std::endl;

	int cardCount = 0;
	bool DRT = false;
	bool coolDRT;
	string userResponse;
	string userYN;

	do
	{
		//ask user where they want to go
		cout << "Where do you want to go: Desk, Cabinet, Painting, Drawer, Shelf or Check your pocket I guess (Choose 1) : ";
		cin >> userResponse;
		if (userResponse == "Desk")
		{
			//ask if they want to open desk
			cout << "Open desk? (Yes/No)";
			cin >> userYN;
			if (userYN == "Yes" && DRT == false)
			{
				cout << "In the desk you find a yellow 4 playing card, a rock and a cool rock (PLEASE TYPE THE FULL NAME OF THE ITEM) ";
				cout << "What do you take?: ";
				userResponse.clear();
				cin >> userResponse;
				if (userResponse == "yellow 4 playing card")
				{
					cardCount + 1;
				}
				else if (userResponse == "rock")
				{
					cout << "Why?" << endl;
					DRT = true;
				}
				else if (userResponse == "cool rock")
				{
					cout << "cool.";
					coolDRT = true;
				}
			}
		}

	} while (cardCount < 6);

}

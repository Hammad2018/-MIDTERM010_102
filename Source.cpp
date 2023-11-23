#include <iostream>
using namespace std;

int main() {
	int purchase_amount = 0, loyalty_points = 0, points = 0, redeem_points = 0;
	int discount = 0;
	string redeem, user_choice;

	cout << "Enter total amount of purchase: ";
	cin >> purchase_amount; 

	loyalty_points = purchase_amount / 10;
	points = points + loyalty_points;

	cout << "You have earned " << loyalty_points << " points." << endl;

	cout << "Do you want to redeem points (yes/no): ";
	cin >> redeem;

	if (redeem == "yes") {
		cout << "How many points do you want to redeem: ";
		cin >> redeem_points;

		if (redeem_points >= loyalty_points)
			discount = redeem_points * 0.02;

			cout << "You have earned a discount of " << discount << " $ on your next purchase. Enjoy!";
		}

	else if (redeem == "no") {
		cout << "Do you want to continue? (yes/no): "; 
		cin >> user_choice; 
			if (user_choice == "yes") {
				cout << "Enter total amount of purchase: ";
				cin >> purchase_amount;
	}
			else if (redeem == "no") {
				system("pause");
			}
	}
}


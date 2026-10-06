#include <iostream>

using namespace std;

int main() {

	int health = 20;

	int gold = 10;

	int rooms = 0;

	int keys = 0;

	int choice = 0;

	bool running = true;

	bool won = false;

	while (running) {

		cout << "DUNGEON ESCAPE" << "\n";

		cout << "1. Status" << "\n";

		cout << "2. Explore" << "\n";

		cout << "3. Shop" << "\n";

		cout << "4. Exit gate" << "\n";

		cout << "5. Quit" << "\n";

		cout << "Choose an option:" << "\n";

		cin >> choice ;
	}
	switch (choice) {

	case 1:

		cout << "Health:" << health << "\n";

		cout << "Gold:" << gold << "\n";

		cout << "Rooms:" << rooms << "\n";

		cout << "Keys:" << keys << "\n";

		break;

	case 2: {
		
		rooms += 1;

		cout << "4" << "\n";
		
		if (rooms % 3 == 0) {
			
			keys += 1;
			
			cout << "Key found!" << "\n";

		}
		// Combat will be added here in Task 5.
		break;

	case 3: {
		int quantity = 0;

		cout << "How many potions would you like to purchase (0 to 3)?";

		cin >> quantity;

		if (quantity < 0 || quantity > 3) {
			// Explain the allowed range.


		}
		else if (gold < quantity * 4) {

			// Explain that the whole batch is too expensive.

		}
		else {

			for (int i = 0; i < quantity; ++i) {

				// Subtract 4 from gold.
				// Add 5 to health.
				// If health is above 20, set it to 20.
				// Print the potion number (i + 1) and health.
			}
		}
		break;

	case 4:
		
		cout << "Gate coming soon.\n" ;

		break;

	case 0:
		
		cout << "Goodbye.\n" ;

		break;

	default:
		
		cout << "Invalid choice.\n" ;

		break;
	}

	return 0;

}
#include<iostream>
using namespace std;

class heatcool {
private:
	int temp;
public:
    heatcool() :temp(15) {
        cout << "Temperature is: " << temp;
    }
	void warmth() {
		temp = temp + 5;
        cout << "Temp is: " << temp;
	}
	void cool() {
		temp = temp - 5;
        cout << "Temp is: " << temp;
	}
};




int main() {
    heatcool wh;
    int choice;
    do {
        cout << endl;
        cout << "Press 1 to warm " << endl;
        cout << "Press 2 to cool" << endl;
        cout << "Press 3 to exit" << endl;
        cout << endl;
        cin >> choice;
        while (choice != 1 && choice != 2 && choice != 3 )
        {
            cout << "Invalid choice entered\n";
            cout << "Please enter your choice again." << endl;
            cin >> choice;
        }
        system("CLS");
        switch (choice)
        {
        case 1:
            wh.warmth();
            break;
        case 2:
            wh.cool();
            break;
       
        }
    } while (choice != 3);
    cout << "Thank you" << endl;
}


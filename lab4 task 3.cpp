#include<iostream>
using namespace std;

class stringtype {
private:
    string s1;
    string s2;
    int length1 = 0;
    int length2 = 0;
public:
    void setvalues(string st1, string st2) {
        s1 = st1;
        s2 = st2;
    }
    void printvalues() {
        cout << "String 1 is: " << s1;
        cout << endl;
        cout << "String 2 is: " << s2;
    }
    void len_of_str()
    {
        int i = 0;
        int j = 0;
        while (s1[i] != '\0') {
            length1++;
            i++;
        }while (s2[j] != '\0') {
            length2++;
            j++;
        }
        int maxL = length2;
        if (length1 > length2)
            maxL = length1;
        cout << "Max Length: " << maxL;
    }

    int mycompare(string st1, string st2) {
        int l1 = length1;
        int l2 = length2;

        int maxL = l2;
        if (l1 > l2)
            maxL = l1;

        for (int i = 0; i < maxL; i++)
        {
            if (st1[i] > st2[i])
            {
                cout << "String 1 is bigger than string 2" << endl;
                return 1;
            }

            else if (st1[i] < st2[i])
            {
                cout << "String 2 is bigger than string 1" << endl;
                return -1;
            }
        }
        cout << "String 1 is neither bigger or smaller than string 2" << endl;
        return 0;
    }

    void copystr(string st1, string st2)
    {
        st1 = new char[15];

        for (int i = 0; i < length2; i++)
        {
            st1[i] = st2[i];
        }

        cout << "String 1 =" << st1 << endl;
    }

    string catstr(string st1, string st2) {
        string fullstr = st1 + " " + st2;
        return fullstr;
    }

    int searchword(string word) {
        if (word == s1) {
            cout << "Yes search found, this string 1" << endl;
            return 1;
        }
        if (word == s2) {
            cout << "Yes search found, this string 2" << endl;
            return 1;
        }
        if (word == s1 && word != s2) {
            cout << "No search not found" << endl;
            return 1;
        }
    }

    int searchchar(char ch) {
        int i;
        int j;
        for ( i = 0; i < length1; i++) {
            if (ch == s1[i]) {
                cout << "Yes search found, this char is in string 1" << endl;
                return 1;
            }
        }
            for (j= 0; j < length2; j++) {
                if (ch == s2[j]) {
                    cout << "Yes search found, this char is in string 2" << endl;
                    return 1;
                }
            }

        }
    
    };

    int main()
    {
        stringtype st;
        string str1, str2;
        cout << "Enter string 1" << endl;
        cin >> str1;
        cout << "Enter string 2" << endl;
        cin >> str2;
        st.setvalues(str1, str2);
        string keyword;
        char keych;
        int choice;
        do {
            cout << endl;
            cout << "Press 1 to find max length " << endl;
            cout << "Press 2 to print both string" << endl;
            cout << "Press 3 to compare string" << endl;
            cout << "Press 4 to copy string" << endl;
            cout << "Press 5 to concatenate string" << endl;
            cout << "Press 6 to search word" << endl;
            cout << "Press 7 to search char" << endl;
            cout << "Press 8 to exit" << endl;

            cin >> choice;
            while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9)
            {
                cout << "Invalid choice entered\n";
                cout << "Please enter your choice again." << endl;
                cin >> choice;
            }
            system("CLS");
            switch (choice)
            {
            case 1:
                st.len_of_str();
                break;
            case 2:
                st.printvalues();
                break;
            case 3:
                cout << st.mycompare(str1, str2);
                break;
            case 4:
                st.copystr(str1, str2);
                break;
            case 5:
                cout << st.catstr(str1, str2);
                break;
            case 6:
                cout << "Enter word you want to find" << endl;
                cin >> keyword;
                cout << st.searchword(keyword);
                break;
            case 7:
                cout << "Enter character you want to find" << endl;
                cin >> keych;
               cout << st.searchchar(keych);
                break;
            }
        } while (choice != 8);
    }

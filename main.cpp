#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Doctor {
    string name;
    string hospital;
    string contact;
};

void pressEnter() {
    cout << "\nPress Enter to return to the main menu...";
    cin.ignore();
    cin.get();
}

//feature 1
void skinTypeSelection()
{
    int choice;
    int attempts=0;

    while(attempts<3)
    {
        cout<<"\nSKIN TYPE SELECTION:\n";
        cout<<"----------------------\n\n";
        cout<<"1.Normal \n2.Dry \n3.Oily \n4.Combination \n5.Sensetive\n";
        cout<<"Select your skin type(1-5): ";
        cin>>choice;

        if(choice>=1 && choice<=5)
        {
            cout<<"\nRecommended Products for ";

            switch(choice)
            {
                case 1:
                    cout<<"Normal Skin:\n--------------------------------------\n \nGentle Foaming Cleanser \nBalanced Moisturizer \nSPF 30 sunscreen.\n";
                    break;
                case 2:
                    cout<<"Dry Skin:\n-----------------------------------\n \nHydrating Cleanser \nHyaluronic Acid Serum \nRich Cream Moisturizer.\n";
                    break;
                case 3:
                    cout <<"Oily Skin:\n------------------------------------\n \nSalicylic Acid Face Wash \nOil-free Gel Moisturizer \nClay Mask.\n";
                    break;
                case 4:
                    cout<<"Combination Skin:\n-------------------------------------------\n \nMild Cleanser \nBalancing Toner \nLightweight Moisturizer.\n";
                    break;
                case 5:
                    cout << "Sensitive Skin:\n-------------------------------------------\n \nFragrance-free Cleanser \nSoothing Aloe Vera Gel \nCalming Cream.\n";
                    break;
            }
            pressEnter();
            return;
        }
        else{
        attempts++;
        cout << "\nInvalid choice! (" << attempts << "/3 attempts used)\n";

        if(attempts==3)
        {
            cout<<"\nReturning to main menu\n";
            pressEnter();
            return;

            }
        }
    }
}
//feature 2
void identifySkinType() {
    cout << "\n IDENTIFY SKIN TYPE:\n";
        cout << "----------------------\n\n";
    char oilyAns, tightAns, breakoutAns, flakyAns;

    cout << "Answer with y/n:\n";
    cout << "Is your face oily after a few hours? ";
    cin >> oilyAns;
    cout << "Does your skin feel tight after washing? ";
    cin >> tightAns;
    cout << "Do you often have breakouts? ";
    cin >> breakoutAns;
    cout << "Do you notice dry, flaky patches? ";
    cin >> flakyAns;

    oilyAns = tolower(oilyAns);
    tightAns = tolower(tightAns);
    breakoutAns = tolower(breakoutAns);
    flakyAns = tolower(flakyAns);

    cout << "\nYour Skin Type: ";

    if (oilyAns == 'y' && breakoutAns == 'y')
        cout << "Oily Skin\n";
    else if (tightAns == 'y' && flakyAns == 'y')
        cout << "Dry Skin\n";
    else if (oilyAns == 'y' && tightAns == 'y')
        cout << "Combination Skin\n";
    else if (oilyAns == 'n' && tightAns == 'n')
        cout << "Normal Skin\n";
    else
        cout << "Sensitive Skin\n";

    pressEnter();
}

// feature 3
vector<Doctor> getDoctors() {
    vector<Doctor> doctors;

    doctors.push_back({
        "Dr. Mosharraf Ahmed Khasru",
        "Azgar Ali Hospital, Dhaka",
        "Contact via hospital"
    });

    doctors.push_back({
        "Prof. Dr. Hasibur Rahman",
        "Evercare Hospital Dhaka",
        "Contact via hospital"
    });

    doctors.push_back({
        "Dr. Asif Imran Siddiqui",
        "Skinic Dermatology Centre, Dhaka",
        "Contact via clinic"
    });

    return doctors;
}
void skinProblem() {
    int choice;

    cout << "\n SKIN PROBLEM & DOCTOR SUGGESTION: \n";
    cout << "-----------------------------------\n\n";
    cout << "1. Acne or Pimples\n";
    cout << "2. Redness or Rash\n";
    cout << "3. Pigmentation\n";
    cout << "4. Severe Dryness\n";
    cout << "Select your problem (1-4): ";
    cin >> choice;

    vector<Doctor> doctors = getDoctors();

    cout << "\nSuggestion:\n";

    switch (choice) {
        case 1:
            cout << "Use salicylic acid cleanser and avoid touching pimples.\n\n";
            cout << "Recommended Doctor:\n";
            cout << doctors[0].name << "\n"
                 << doctors[0].hospital << "\n"
                 << doctors[0].contact << "\n";
            break;

        case 2:
            cout << "Use soothing aloe vera gel and avoid harsh products.\n\n";
            cout << "Recommended Doctor:\n";
            cout << doctors[1].name << "\n"
                 << doctors[1].hospital << "\n"
                 << doctors[1].contact << "\n";
            break;

        case 3:
            cout << "Use Vitamin C serum and apply sunscreen daily.\n\n";
            cout << "Recommended Doctor:\n";
            cout << doctors[2].name << "\n"
                 << doctors[2].hospital << "\n"
                 << doctors[2].contact << "\n";
            break;

        case 4:
            cout << "Use thick moisturizer and drink plenty of water.\n\n";
            cout << "Recommended Doctor:\n";
            cout << doctors[0].name << "\n"
                 << doctors[0].hospital << "\n"
                 << doctors[0].contact << "\n";
            break;

        default:
            cout << "Invalid choice.\n";
    }

    pressEnter();
}

//Feature 4
void dailyRoutine() {
    int type;

    while (true) {
        cout << "\n DAILY SKIN CARE ROUTINE:\n";
        cout << "--------------------------\n\n";
        cout << "Select your skin type:\n";
        cout << "1. Normal\n2. Dry\n3. Oily\n4. Combination\n5. Sensitive\n";
        cout << "Enter choice: ";
        cin >> type;

        switch (type) {
            case 1:
                cout << "\nMorning: Cleanser , Moisturizer , Sunscreen";
                cout << "\nNight: Cleanser ,Toner , Light cream\n";
                pressEnter();
                return;

            case 2:
                cout << "\nMorning: Hydrating Cleanser , Serum , Rich Cream";
                cout << "\nNight: Cleanser , Facial Oil , Sleep Mask\n";
                pressEnter();
                return;

            case 3:
                cout << "\nMorning: Gel Cleanser , Oil-Free Moisturizer , Sunscreen";
                cout << "\nNight: Cleanser , Clay Mask , Toner\n";
                pressEnter();
                return;

            case 4:
                cout << "\nMorning: Mild Cleanser , Toner , Moisturizer";
                cout << "\nNight: Cleanser , Serum , Light Cream\n";
                pressEnter();
                return;

            case 5:
                cout << "\nMorning: Fragrance-Free Cleanser , Aloe Moisturizer , SPF";
                cout << "\nNight: Cleanser , Soothing Cream\n";
                pressEnter();
                return;

            default:
                cout << "\n Invalid option! Please enter 1 to 5 only.\n";

        }
    }
}

//Feature 5
void ingredientChecker() {
    cout << "\n PRODUCT INGREDIENT CHECKER:\n";
    cout << "------------------------------\n\n";
    cout << "Select the ingredients present in your product:\n";

    vector<pair<string, string>> harmful = {
        {"Alcohol", "Can dry out skin and cause irritation."},
        {"Sulfate", "Harsh cleanser, may damage skin barrier."},
        {"Paraben", "Preservative, may trigger allergies."},
        {"Fragrance", "May cause irritation or allergic reactions."},
        {"Mineral Oil", "Can block pores and cause acne."},
    };

    vector<string> presentIngredients;

    char ans;
    for (auto &item : harmful) {
        cout << "- " << item.first << "? (y/n): ";
        cin >> ans;
        ans = tolower(ans);
        if (ans == 'y') {
            presentIngredients.push_back(item.first + ": " + item.second);
        }
    }

    cout << "\nRESULT: \n\n";
    if (presentIngredients.empty()) {
        cout << "Safe: No harmful ingredients detected in your product.\n";
    } else {
        cout << "Warning! Your product contains the following harmful ingredients:\n";
        for (auto &msg : presentIngredients) {
            cout << "- " << msg << "\n";
        }
    }

    pressEnter();
}

//Feature 6
void showTips() {
    int choice;

    while (true) {
        cout << "\n SEASONAL SKIN CARE TIPS: \n";
        cout << "-------------------------\n\n";
        cout << "1. Summer\n2. Winter\n3. Monsoon\n";
        cout << "Select season: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nSummer Tips:\n";
                cout << "- Use oil-free sunscreen\n";
                cout << "- Wash face twice daily\n";
                cout << "- Stay hydrated\n";
                pressEnter();
                return;

            case 2:
                cout << "\nWinter Tips:\n";
                cout << "- Use heavy moisturizer\n";
                cout << "- Avoid hot showers\n";
                cout << "- Apply lip balm regularly\n";
                pressEnter();
                return;

            case 3:
                cout << "\nMonsoon Tips:\n";
                cout << "- Keep skin clean and dry\n";
                cout << "- Use antifungal face wash\n";
                cout << "- Avoid oily creams\n";
                pressEnter();
                return;

            default:
                cout << "\n Invalid option! Please select 1 to 3 only.\n";

        }
    }
}

// main function
int main() {
    int choice;
    do {
        system("cls");
        cout << "\n============================\n";
        cout << "   WELCOME TO SKINBUDDY \n";
        cout << "============================\n";
        cout << "1. Skin Type Selection\n";
        cout << "2. Identify My Skin Type\n";
        cout << "3. Skin Problem & Doctor Suggestion\n";
        cout << "4. Daily Skin Care Routine\n";
        cout << "5. Product Ingredient Checker\n";
        cout << "6. Seasonal Skin Tips\n";
        cout << "0. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: skinTypeSelection(); break;
            case 2: identifySkinType(); break;
            case 3: skinProblem(); break;
            case 4: dailyRoutine(); break;
            case 5: ingredientChecker(); break;
            case 6: showTips(); break;
            case 0: cout << "\nThank you for using SkinBuddy! Stay beautiful!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
            pressEnter();
        }
    } while (choice != 0);

    return 0;
}

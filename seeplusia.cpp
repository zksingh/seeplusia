//Legend of Seeplusia OOP Assignment 1
//Sydney Baffour and Zayn Singh
//2/18/19


#include <iostream>
using namespace std;
int enchantedForest();
int marshofTheUndead();
int sandsOfQuick();
int vampireCove();
int wereWolfHill();
int resetGame();
int bridgeOfDeath();
int elvenWaterfall();
int swampsOfDespair();
int wizardsCastle();
int deathCall();
int marshCrystal = 0;
int elvenCrystal = 0;
int wereWolfCrystal = 0;
int dayCount = 1;
int crystalsLeft = 3;

int main()
{
    cout << "\n"
         << "------------NEW GAME-----------"
         << "\n";
    cout << "\n";
    cout << "LEGEND OF SEEPLUSIA"
         << "\n";
    cout << "\n";
    cout << "Welcome to SeePlusia, brave heroine Zeldana!"
         << "\n";
    cout << "Our prince, Prince Lazy, has been captured by an evil wizard."
         << "\n";
    cout << "We need your help in rescuing the prince!"
         << "\n"; 
    cout << "To save Prince Lazy, you must travel through the world of SeePlusia and collect"
         << "\n";
    cout << "three precious Objectos crystals. Only when you have collected all three can you"
         << "\n";
    cout << "travel across the Bridge of Death and to the Wizard's Castle to resuce him."
         << "\n";
    cout << "You have enough food to last you 30 days. If you run out of food, the game is over and you die."
         << "\n";
    cout << "To move through the world, type a direction when prompted."
         << "\n";
    cout << "A valid input is North, South, East, or West."
         << "\n";
    cout << "It's time to begin your quest!"
         << "\n";
    enchantedForest();
}
int enchantedForest()
{
    while (dayCount < 30)
    {
        string str;
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        cout << "Welcome to the Enchanted Forest!"
             << "\n";

        if (dayCount == 0)
        {
            cout << "It is day zero of your adventure!"
                 << "\n";
        }
        else if (dayCount == 1)
        {
            cout << "It has been 1 day."
                 << "\n";
        }
        else
        {
            cout << "It has been " << dayCount
                 << " days."
                 << "\n";
        }

        cout << "Where would you like to go? ( North, South, East, West)"
             << "\n";
        cout << "Enter a direction: "
             << "\n";
        getline(cin, str);
        cout << "You entered: " << str << endl;

        if (str == "North")
        {

            dayCount++;
            marshofTheUndead();
        }

        else if (str == "South")
        {
            dayCount++;
            vampireCove();
        }
        else if (str == "East")
        {
            dayCount = dayCount + 1;
            swampsOfDespair();
        }
        else if (str == "West")
        {
            bridgeOfDeath();
        }
        else
        {
            cout << "Not a valid direction "
                 << "\n";
            enchantedForest();
        }
    }
    deathCall();
    return 0;
}
int marshofTheUndead()
{
    while (dayCount < 30)
    {
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        string str;
        
        cout << " It has been " << dayCount << " days"
             << "\n";
        cout << "You have arrived at the Marsh of the Undead"
             << "\n";


        if (marshCrystal == 0)
        {
            crystalsLeft--;
            cout << " Hoorah! You have found one of of the three crystals!"
                 << "\n";

            if (crystalsLeft == 0)
            {
                cout << " Double Hoorah! You have found all of the three crystals!"
                     << "\n";
                cout << " Travel to the Wizards Castle and save Prince Lazy!"
                     << "\n";
            }
            else
            {
                cout << " You have " << crystalsLeft << " to go!"
                     << "\n";
                marshCrystal = 1; 
            }
        }

        cout << " Where would you like to go? (South or East)"
             << "\n";
        cout << "Enter a direction: "
             << "\n";
        getline(cin, str);
        cout << "You entered: " << str << endl;

        if (str == "South")
        {
            dayCount++;
            enchantedForest();
        }
        else if (str == "East")
        {
            dayCount++;
            sandsOfQuick();
        }
        else
        {
            cout << " Not a valid direction "
                 << "\n";
            marshofTheUndead();
        }
    }

    deathCall();
    return 0;
}

int vampireCove()
{

    while (dayCount < 30)

    {
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        string str;
        cout << " It has been " << dayCount << " days. "
             << "\n";

        cout << "You have arrived at the Vampire Cove"
             << "\n";
        
        cout << " No crystals here! Keep Searching!"
             << "\n";

        cout << " Where would you like to go? (North or South)"
             << "\n";
        cout << "Enter a direction: "
             << "\n";
        getline(cin, str);
        cout << "You entered: " << str << endl;

        if (str == "North")
        {
            dayCount = dayCount + 3;
            enchantedForest();
        }
        else if (str == "South")
        {
            dayCount = dayCount + 3;
            wereWolfHill();
        }
        else
        {
            cout << "Not a valid direction"
                 << "\n";
            vampireCove();
        }
    }
    deathCall();
    return 0;
}
int resetGame()
{
    dayCount = 0;
    crystalsLeft = 3;
    main();
    return 0;
}

int sandsOfQuick()
{
    while (dayCount < 30)
    {
        string str;
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        cout << "You have arrived at the Sands of Quick"
             << "\n";
        cout << "Alas, you slowly sink into quicksand and die"
             << "\n";
        cout << "\n"
             << " -------GAME OVER-----------"
             << "\n";
        cout << "Game Over! Enter yes to play again. "
             << "\n";
        getline(cin, str);

        if (str == "yes")
        {
            resetGame();
        }

        resetGame();
    }
    return 0;
}

int wereWolfHill()
{
    while (dayCount < 30)
    {
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        string str;
        cout << " It has been " << dayCount << " days."
             << "\n";
        cout << "You have arrived at the Werewolf Hill"
             << "\n";

        if (wereWolfCrystal == 0)
        {
            crystalsLeft--;
            cout << " Hoorah! You have found one of of the three crystals!"
                 << "\n";
            if (crystalsLeft == 0)
            {
                cout << " Double Hoorah! You have found all of the three crystals!"
                     << "\n";
                cout << " Travel to the Wizards Castle and save Prince Lazy!"
                     << "\n";
            }
            else
            {
                cout << " You have " << crystalsLeft << " to go!"
                     << "\n";
                wereWolfCrystal = 1;
            }
        }
        cout << " Where would you like to go? (North)? "
             << "\n";
        cout << "Enter a direction: "
             << "\n";

        getline(cin, str);
        cout << "You entered: " << str << endl;

        if (str == "North")
        {
            dayCount = dayCount + 3;
            vampireCove();
        }
        else
        {
            cout << " Not a valid direction. Please choose North. "
                 << "\n";
            wereWolfHill();
        }
    }
    deathCall();
    return 0;
}
int swampsOfDespair()
{
    while (dayCount < 30)
    {
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        string str;
        cout << " It has been " << dayCount << " days"
             << "\n";
        cout << "You have arrived at the Swamps of Despair"
             << "\n";
    
        cout << " No crystals here! Keep Searching!"
             << "\n";
        cout << " Where would you like to go? (North, South, or West)"
             << "\n";
        cout << "Enter a direction: "
             << "\n";
        getline(cin, str);
        cout << "You entered: " << str << endl;
        if (str == "North")
        {
            dayCount = dayCount + 2;
            sandsOfQuick();
        }
        else if (str == "South")
        {
            dayCount++;
            elvenWaterfall();
        }
        else if (str == "East")
        {
            cout << "Cannot move East. Please pick North, West or South"
                 << "\n";
            swampsOfDespair();
        }
        else
        {

            dayCount++;
            enchantedForest();
        }
        deathCall();
    }

    return 0;
}
int deathCall()
{
    string str;
    cout << "\n"
         << "-----------------------"
         << "\n";
    cout << "\n";
    cout << "OH NO! You have been on your quest for over 30 days. "
         << "\n";
    cout << "You have ran out of food."
         << "\n";
    cout << "\n"
         << " -------GAME OVER-----------"
         << "\n";
    cout << "Enter yes to play again. "
         << "\n";
    getline(cin, str);

    if (str == "yes")
    {
        resetGame();
    }
    return 0;
}
int elvenWaterfall()
{
    while (dayCount < 30)
    {
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        string str;
        cout << " It has been " << dayCount << " days. "
             << "\n";
        cout << "You have arrived at the Elven Waterfall"
             << "\n";

        if (elvenCrystal == 0)
        {
            crystalsLeft--;
            cout << " Hoorah! You have found one of of the three crystals!"
                 << "\n";
            if (crystalsLeft == 0)
            {
                cout << " Double Hoorah! You have found all of the three crystals!"
                     << "\n";
                cout << " Travel to the Wizards Castle and save Prince Lazy!"
                     << "\n";
            }
            else
            {
                cout << " You have " << crystalsLeft << " to go!"
                     << "\n";
                elvenCrystal = 1;
            }
        }

        cout << " Where would you like to go? (North)? "
             << "\n";
        cout << "Enter a direction: "
             << "\n";
        getline(cin, str);
        cout << "You entered: " << str << endl;

        if (str == "North")
        {
            dayCount++;
            swampsOfDespair();
        }
        else
        {
            cout << " Not a valid direction "
                 << "\n";
            elvenWaterfall();
        }
    }
    deathCall();
    return 0;
}
int bridgeOfDeath()
{
    while (dayCount < 30)
    {
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        string str;
        cout << " It has been " << dayCount << " days. "
             << "\n";
        cout << "You have arrived at the Bridge of Death"
             << "\n";
        cout << "In the West lies the Wizard's Castle"
             << "\n";
        cout << "You may only proceed with all three Objectos crystals"
             << "\n";

        cout << "Where would you like to go? (East or West)? "
             << "\n";
        cout << "Enter a direction: "
             << "\n";
        getline(cin, str);
        cout << "You entered: " << str << endl;

        if (str == "East")
        {
            dayCount++;
            enchantedForest();
        }
        else if (str == "West")
        {
            dayCount = dayCount + 5;
            wizardsCastle();
        }
    }
    deathCall();
    return 0;
}

int wizardsCastle()
{
    while (dayCount < 30)
    {
        cout << "\n"
             << "-----------------------"
             << "\n";
        cout << "\n";
        if (crystalsLeft == 0)
        {
            string str;
            cout << "You have arrived at the Wizard's Castle"
                 << "\n";
            cout << "Ahh! You encounter the evil Wizard!"
                 << "\n";
            cout << "You use your trusty crystals and ..."
                 << "\n";
            cout <<"(∩｀-´)⊃━☆ﾟ.*･｡ﾟ"<< "\n";
            cout << "Success! You have successfully defeated the Wizard "
                 << "\n";
            cout << "and rescued Prince Lazy! "
                 << "\n";
            cout << "Great Work Zeldana! "
                 << "\n";

            cout << "\n"
                 << " -------GAME OVER-----------"
                 << "\n";
            cout << "Enter yes to play again. "
                 << "\n";
            getline(cin, str);

            if (str == "yes")
            {
                resetGame();
            }
        }
        else
        {
            cout << "Sorry, you have not obtained all three crystals yet."
                 << "\n";
            cout << "Come back with all the crystals in order to pass"<<
                "to the Wizard's Castle"
                 << "\n";
            
            bridgeOfDeath();
        }
    }
    deathCall();
    return 0;
}
#include <iostream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <memory>
#include <cctype>
#include <cstring>
#include <string>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <cmath>

#include "Chapter13IntroToClasses.h"
#include "Chapter13IntroToClasses.cpp"

/*
Starting Out With C++ Chapter 13 Introduction to Classes - 13. Tossing Coins for a Dollar
For this assignment, you will create a game program using the Coin class from Programming Challenge 12. 
The program should have three instances of the Coin class: 
one representing a quarter, one representing a dime, and one representing a nickel.
When the game begins, your starting balance is $0. 
During each round of the game, the program will toss the simulated coins. When a coin is tossed, the value of the coin is added to your balance if it lands heads-up. 
For example, if the quarter lands heads-up, 25 cents is added to your balance. Nothing is added to your balance for coins that land tails-up. 
The game is over when your balance reaches $1 or more. 
If your balance is exactly $1, you win the game. 
You lose if your balance exceeds $1.
*/

//*****************************************************
// Definition of function inputValidation_y_or_n function. 
// This function returns a y or n char.
//*****************************************************

char inputValidation_y_or_n(char &letter)
{
    std::cin >> letter;
		while (tolower(letter) != 'y' && tolower(letter) != 'n')
    {
        std::cout << "ERROR: a 'y' or an 'n' must be entered: ";
        std::cin.clear();
        std::cin >> letter;
    }
    return letter;
}

//*****************************************************
//	*=== START MAIN FUNCTION ===*
int main()
{
    char letter,
         userChoice;

	while(letter != 'n')
	{
        displayProgramMenu();
            std::cin >> userChoice;

        while(tolower(userChoice) != 'e')
        {
            while (toupper(userChoice) < 'A' || toupper(userChoice) > 'Z')
            {
                std::cout << "Please make a choice in the range of A through Z: ";
                displayProgramMenu();
                    std::cin >> userChoice;
            }
            
            if(tolower(userChoice) == 'a') 
            {
                // local variables 
                int m{0},
                    d{33},
                    y{1997};

                Date Sunday;
                    Sunday.displayDateFormat1(); std::cout << " " << "\n";
                    Sunday.displayDateFormat2(); std::cout << " " << "\n";
                    Sunday.displayDateFormat3(); std::cout << " " << "\n";
                
                std::cout << " " << "\n";

                Date Monday(m);
                    Monday.displayDateFormat1(); std::cout << " " << "\n";
                    Monday.displayDateFormat2(); std::cout << " " << "\n";
                    Monday.displayDateFormat3(); std::cout << " " << "\n";
                
                std::cout << " " << "\n";
                
                Date Tuesday(m,d);
                    Tuesday.displayDateFormat1(); std::cout << " " << "\n";
                    Tuesday.displayDateFormat2(); std::cout << " " << "\n";
                    Tuesday.displayDateFormat3(); std::cout << " " << "\n";
                
                std::cout << " " << "\n";
                
                Date Wednesday(m,d,y);
                    Wednesday.displayDateFormat1(); std::cout << " " << "\n";
                    Wednesday.displayDateFormat2(); std::cout << " " << "\n";
                    Wednesday.displayDateFormat3(); std::cout << " " << "\n";
                
                m = 18;
                d = 0;
                y = 2022;

                Date Today;
                    Today.updateMonth(m);
                    Today.updateDay(d);
                    Today.updateYear(y);
                    Today.displayDateFormat1(); std::cout << " " << "\n";
                    Today.displayDateFormat2(); std::cout << " " << "\n";
                    Today.displayDateFormat3(); std::cout << " " << "\n";
            }

            if(tolower(userChoice) == 'b')
            {
                // local variables
                std::string n;
                int id;
                std::string dep;
                std::string pos;

                // Susan Meyers 47899 Accounting Vice President
                    n = "Susan Meyers";
                    id = 47899;
                    dep = "Accounting";
                    pos = "Vice President";
                    Employee VicePresident;
                        VicePresident.getEmployeeName();
                        VicePresident.getEmployeeID();
                        VicePresident.getEmployeeDepartment();
                        VicePresident.getEmployeePosition();

                        VicePresident.setEmployeeName(n);
                        VicePresident.setEmployeeID(id);
                        VicePresident.setEmployeeDepartment(dep);
                        VicePresident.setEmployeePosition(pos);

                        VicePresident.getEmployeeName();
                        VicePresident.getEmployeeID();
                        VicePresident.getEmployeeDepartment();
                        VicePresident.getEmployeePosition();

                std::cout << " " << "\n";
                // Mark Jones 39119 IT Programmer
                    n = "Mark Jones";
                    id = 39119;
                    dep = "IT";
                    pos = "Programmer";
                    Employee Programmer(n, id);
                        Programmer.getEmployeeName();
                        Programmer.getEmployeeID();
                        Programmer.getEmployeeDepartment();
                        Programmer.getEmployeePosition();

                std::cout << " " << "\n";
                // Joy Rogers 81774 Manufacturing Engineer
                    n = "Joy Rogers";
                    id = 81774;
                    dep = "Manufacturing";
                    pos = "Engineer";
                    Employee Engineer(n, id, dep, pos);
                        Engineer.getEmployeeName();
                        Engineer.getEmployeeID();
                        Engineer.getEmployeeDepartment();
                        Engineer.getEmployeePosition();
                
                std::cout << " " << "\n";
            }

            if(tolower(userChoice) == 'c')
            {
                // Demonstrate the class in a program that creates a Car object, and then calls the accelerate function five times. 
                // After each call to the accelerate function, get the current speed of the car and display it. 
                // Then, call the brake function five times.
                // After each call to the brake function, get the current speed of the car and display it.

                //local variables
                int yM{2023};
                std::string m{"Tesla Roadster"};
                int s{60}; // 1.9 secs
                int laps{12};
                
                Car TeslaRoadster(yM,m);
                    TeslaRoadster.getCarMake();
                    TeslaRoadster.getCarYearModel();
                    TeslaRoadster.getCarSpeed();

                    for(unsigned int it{0}; it<laps; ++it)
                    {
                        TeslaRoadster.accelerateCar();
                        TeslaRoadster.getCarSpeed();
                    }

                    for(unsigned int it{0}; it<laps; ++it)
                    {
                        TeslaRoadster.brakeCar();
                        TeslaRoadster.getCarSpeed();
                    }
                
                std::cout << " " << "\n";

            }
            if(tolower(userChoice) == 'd')
            {
                // Demonstrate the class by writing a program that creates three instances of it. 
                // One instance should hold your information, and the other two should hold your friends’ or family members’ information.
                std::string n; 
                std::string addr; 
                int a; 
                std::string pN;

                PersonalInformation MichaelJordan;
                    n = "Air Jordan";
                        MichaelJordan.setPersonalInformationName(n);
                    addr = "2700 Point Dr, Highland Park, IL 60035";
                        MichaelJordan.setPersonalInformationAddress(addr);
                    a = 37;
                        MichaelJordan.setPersonalInformationAge(a);
                    pN = "(800) 806-6453";
                        MichaelJordan.setPersonalInformationPhoneNumber(pN);

                        MichaelJordan.getPersonalInformationName();
                        MichaelJordan.getPersonalInformationAddress();
                        MichaelJordan.getPersonalInformationAge();
                        MichaelJordan.getPersonalInformationPhoneNumber();

                PersonalInformation TomBrady;
                    n = "TB12";
                        TomBrady.setPersonalInformationName(n);
                    addr = "333 Far away";
                        TomBrady.setPersonalInformationAddress(addr);
                    a = 45;
                        TomBrady.setPersonalInformationAge(a);
                    pN = "(800) 999-9999";
                        TomBrady.setPersonalInformationPhoneNumber(pN);

                        TomBrady.getPersonalInformationName();
                        TomBrady.getPersonalInformationAddress();
                        TomBrady.getPersonalInformationAge();
                        TomBrady.getPersonalInformationPhoneNumber();

                PersonalInformation TigerWoods;
                    n = "TW";
                        TigerWoods.setPersonalInformationName(n);
                    addr = "111 Far Far away";
                        TigerWoods.setPersonalInformationAddress(addr);
                    a = 41;
                        TigerWoods.setPersonalInformationAge(a);
                    pN = "(800)-888-3333";
                        TigerWoods.setPersonalInformationPhoneNumber(pN);

                        TigerWoods.getPersonalInformationName();
                        TigerWoods.getPersonalInformationAddress();
                        TigerWoods.getPersonalInformationAge();
                        TigerWoods.getPersonalInformationPhoneNumber();

                std::cout << " " << "\n";
            }
            if(towlower(userChoice) == 'f')
            {
                
                // Once you have written the class, write a separate program that creates three RetailItem objects and stores the following data in them.
                std::string d; // A string that holds a brief description of the item.
                int uOH; // An int that holds the number of units currently in inventory.
                double p; // A double that holds the item’s retail price.

                d = "Jacket";
                uOH = -5;
                p = -1;

                RetailItem Item1(d,uOH,p);
                    Item1.getRetailItemDescription();
                    Item1.getRetailItemUnitsOnHand();
                    Item1.getRetailItemPrice();
                    std::cout << " " << "\n";

                d = "Designer Jeans";
                uOH = 40;
                p = 34.95;
                RetailItem Item2(d,uOH,p);
                    Item2.getRetailItemDescription();
                    Item2.getRetailItemUnitsOnHand();
                    Item2.getRetailItemPrice();
                    std::cout << " " << "\n";

                d = "Shirt";
                uOH = 20;
                p = 24.95;
                RetailItem Item3(d,uOH,p);
                    Item3.getRetailItemDescription();
                    Item3.getRetailItemUnitsOnHand();
                    Item3.getRetailItemPrice();
                    std::cout << " " << "\n";
                
                d = "hoodie";
                Item1.setRetailItemDescription(d);
                    Item1.getRetailItemDescription();
                    std::cout << " " << "\n";
                
                uOH = -99;
                Item2.setRetailItemUnitsOnHand(uOH);
                    Item2.getRetailItemUnitsOnHand();
                    std::cout << " " << "\n";
                
                p = -99.99;
                Item3.setRetailItemPrice(p);
                    Item3.getRetailItemPrice();
                
                std::cout << " " << "\n";
            }
            if(towlower(userChoice) == 'g')
            {
                int iN{10101010};
                int q{13};
                double c{19.99};

                Inventory Phones;
                    Phones.getItemNumber();
                    Phones.getQuantity();
                    Phones.getCost();
                    Phones.getTotalCost();
                    std::cout << " " << "\n";
                
                Inventory Books(iN,q,c);
                    Books.getItemNumber();
                    Books.getQuantity();
                    Books.getCost();
                    Books.getTotalCost();
                    std::cout << " " << "\n";
            }
            if(towlower(userChoice) == 'h')
            {
                int ts1{777};
                int ts2{-888};
                int ts3{999};

                TestScores student1;
                    student1.getTestScores1();
                    student1.getTestScores2();
                    student1.getTestScores3();
                    student1.setTestScores1();
                    student1.setTestScores2();
                    student1.setTestScores3();
                    std::cout << " " << "\n";
                
                TestScores student2(ts1,ts2,ts3);
                    student2.getTestScores1();
                    student2.getTestScores2();
                    student2.getTestScores3();
                    student2.averageTestScores();
                    std::cout << " " << "\n";
                            
            }
            if(towlower(userChoice) == 'i')
            {
                // Write a program that demonstrates the Circle class by asking the user for the circle’s
                // radius, creating a Circle object, and then reporting the circle’s area, diameter, and circumference.
                double r{10};

                Circle PizzaPie;
                    PizzaPie.getRadius();
                    PizzaPie.getArea();
                    PizzaPie.getDiameter();
                    PizzaPie.getCircumference();
                    PizzaPie.setRadius(r);
                    PizzaPie.getRadius();
                    PizzaPie.getArea();
                    PizzaPie.getDiameter();
                    PizzaPie.getCircumference();
                    std::cout << " " << "\n";
                
                r = 47;
                Circle Clock(r);
                    Clock.getRadius();
                    Clock.getArea();
                    Clock.getDiameter();
                    Clock.getCircumference();
                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'j')
            {
                // Design a Population class that stores a population, number of births, and number of deaths for a period of time. 
                // Member functions should return the birth rate and death rate. 
                // Implement the class in a program.

                Population NYC;
                    NYC.getPopulation();
                    NYC.getBirthRate();
                    NYC.getDeathRate();
                    std::cout << " " << "\n";
                
                double p = 100000;
                double nob = 8000;
                double nod = 6000;
                
                Population LA(p,nob,nod);
                    LA.getPopulation();
                    LA.getBirthRate();
                    LA.getDeathRate();
                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'k')
            {
                // Starting Out With C++ Chapter 13 Introduction to Classes - 10. Number Array Class
                // Design a class that has an array of floating-point numbers. 

                int index = -1;
                float value = 99999;

                NumberArray PennyStocks;
                    PennyStocks.getArrayValues();
                    PennyStocks.getArrayLowestValue();
                    PennyStocks.getArrayHighestValue();
                    PennyStocks.getArrayAverageValue();
                    PennyStocks.setArrayValue(index,value);
                    PennyStocks.getArrayValues();
                    std::cout << " " << "\n";  

                int sizeOfArray{250};

                NumberArray DollarStore(sizeOfArray);
                    DollarStore.getArrayValues();
                    DollarStore.getArrayLowestValue();
                    DollarStore.getArrayHighestValue();
                    DollarStore.getArrayAverageValue();
                    DollarStore.setArrayValue(index,value);
                    DollarStore.getArrayValues();
                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'l')
            {
                // Starting Out With C++ Chapter 13 Introduction to Classes - 11. Payroll
                // Write a program with an array of seven PayRoll objects. 
                // The program should ask the user for the number of hours each employee has worked and will then display the amount of gross pay each has earned.
                
                int PayRollArraySize{7},
                    HPR,
                    NOHW;
                
                Payroll PayRollArray[PayRollArraySize];
                    for(int index{0}; index<PayRollArraySize; ++index )
                    {
                        std::cout << "User, for object " << index+1 << "\n";
                        std::cout << "Input the hourlyPayRate : ";
                            std::cin >> HPR;
                        std::cout << "Input the numberOfHoursWorked : ";
                            std::cin >> NOHW;
                        PayRollArray[index].setTotalPay(HPR,NOHW);
                        std::cout << " " << "\n";
                    }

                    for(int index{0}; index<PayRollArraySize; ++index )
                    {
                        PayRollArray[index].getPayrollValues();
                        std::cout << " " << "\n";
                    }

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'm')
            {
                // The program should create an instance of the class and display the side that is initially facing up. 
                // Then, use a loop to toss the coin 20 times. 
                // Each time the coin is tossed, display the side that is facing up. 
                // The program should keep count of the number of times heads is facing up 
                // and the number of times tails is facing up, and display those values after the loop finishes.

                int numberOfTosses{1000},
                    tailsCount{0},
                    headsCount{0};
                
                Coin Quarter;
                    Quarter.getSideUp();

                    for(unsigned int it{0}; it<numberOfTosses; ++it) // 0-999
                    {
                        Quarter.toss();
                        Quarter.getSideUp();
                        std::cout << " " << "\n";

                        if(Quarter.getSideUp() == "heads")
                        {
                            headsCount += 1;
                        }
                        else 
                        {
                            tailsCount += 1;
                        }
                    }
                    
                    std::cout << "For " << numberOfTosses << " tosses of the coin, here are the stats." << "\n";
                    std::cout << "headsCount: " << headsCount << "\n";
                    std::cout << "tailsCount: " << tailsCount << "\n";
                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'n')
            {
                /*
                //*****************************************************
                Starting Out With C++ Chapter 13 Introduction to Classes - 13. Tossing Coins for a Dollar
                For this assignment, you will create a game program using the Coin class from Programming Challenge 12. 
                The program should have three instances of the Coin class: 
                one representing a quarter, one representing a dime, and one representing a nickel.
                When the game begins, your starting balance is $0. 
                During each round of the game, the program will toss the simulated coins. 
                When a coin is tossed, the value of the coin is added to your balance if it lands heads-up. 
                For example, if the quarter lands heads-up, 25 cents is added to your balance. Nothing is added to your balance for coins that land tails-up. 
                The game is over when your balance reaches $1 or more. 
                If your balance is exactly $1, you win the game. 
                You lose if your balance exceeds $1.
                //*****************************************************
                */

               double gameBalance{0};
               const double FINALSCORE{1};
               int countTosses{3};
               std::string tossResult;

               Coin gameQuater;
               Coin gameNickel;
               Coin gameDime;

               while( gameBalance < FINALSCORE )
               {
                    tossResult = gameQuater.getSideUp();

                    if( tossResult == "heads" && gameBalance < FINALSCORE )
                    {
                        gameBalance += 0.25;
                    }

                    std::cout << "gameBalance: " << gameBalance << "\n";

                    gameQuater.toss();
                    countTosses += 1;

                    // ---

                    tossResult = gameDime.getSideUp();

                    if( tossResult == "heads" && gameBalance < FINALSCORE )
                    {
                        gameBalance += 0.10;
                    }
                    
                    std::cout << "gameBalance: " << gameBalance << "\n";

                    gameDime.toss();
                    countTosses += 1;


                    // ---

                    tossResult = gameNickel.getSideUp();

                    if( tossResult == "heads" && gameBalance < FINALSCORE )
                    {
                        gameBalance += 0.05;
                    }

                    std::cout << "gameBalance: " << gameBalance << "\n";
                    
                    gameNickel.toss();
                    countTosses += 1;
               }

               if( gameBalance == FINALSCORE )
               { 
                    std::cout << "You Win!" << "\n";
                    std::cout << "countTosses: " << countTosses << "\n"; 
               }
               else // gameBalance != FINALSCORE
               { 
                    std::cout << "You lose!" << "\n"; 
                    std::cout << "countTosses: " << countTosses << "\n"; 
               }

                std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'o')
            {

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'p')
            {

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'q')
            {

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'r')
            {

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 's')
            {

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 't')
            {

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'u')
            {

                    std::cout << " " << "\n";              
            }
            if(towlower(userChoice) == 'v')
            {

                    std::cout << " " << "\n";              
            }

            std::cout << " " << "\n";
            displayProgramMenu();
                std::cin >> userChoice;
        }
        
		std::cout << " " << "\n";			
		std::cout << "Would you like to run the program again? (y/n) : "; 
			inputValidation_y_or_n(letter);	std::cout << " " << "\n";
    }

	return 0;
}
// *=== END MAIN FUNCTION ===*
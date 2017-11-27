#include <iostream>

using namespace std;

int main()
{
    double percent, num, result;
    char answer;

    std::cout << "Enter the percentage you want in decimal form." << endl;
    std::cin >> percent;
    std::cout << "Enter the number you want a percentage of: " << endl;
    std::cin >> num;

    result = percent * num;

    std::cout << percent << " percent of " << num << " is " << result;
    std::cout << "\n\nDo you want to compute another? Y/N ";
    cin >> answer;

    if (answer ==  'y')
        main();
    else if (answer == 'Y')
        main();
    else if (answer == 'n')
    {
        std::cout << "\nThanks for using the calculator." << std::endl;
        return 0;
    }
    else if (answer == 'N')
    {
        std::cout << "\nThanks for using the calculator." << std::endl;
        return 0;
    }
    else
    {
        std::cout << "\nPlease check your input entry and try again, thank you!" << std::endl;
        return 0;
    }
    return 0;

}

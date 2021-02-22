#include <iostream> //preprocessor
int main() //main function
{
    std::cout << "This is the first time running it without that pesky software checking the .exe\n";
    return 0;
}

// you'll always have a main function which carries out actions
// main function will at times have either or output input or both. return 0 in this case helps inform computer that action carried out was successful. 
// statements in main function inform the main function what actions to carry out
// preprocessor, in this case 'iostream' makes its own contents available for our statements to be complete and for the main function to carry out statements. In this case 'cout' is part of 'iostream' preprocessor
// item preceeding main function is return type and in this case an integer is what is to be returned
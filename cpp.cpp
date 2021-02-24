#include <iostream> //preprocessor

using std::cout; //directive

int main() //main function
{
    int number = 5; 
    cout << "The answer is: " << number << std::endl;
    return 0;
}

// You'll always have a main function which carries out actions.
// Main function will at times have either or output/input or both. return 0 in this case helps inform computer that action that was carried out was successful. 
// statements in main function inform the main function what actions to carry out
// preprocessor, in this case 'iostream' makes its own contents available for our statements to be complete and for the main function to carry out statements. In this case 'cout' is part of 'iostream' preprocessor
// item preceeding main function is return type and in this case an integer is what is to be returned

// Directive and Declarations-----------------------------------------------------------------

// A 'using directive' can be used so that we don't have to always prefix our statements with the standard name space 'std'. It's important to note however that 'using directives' can be problematic as programs grow in size and naming conflicts can arise.

// example code:
/*
include <iostream>

using namespace std;

int main()
{
    cout << "Hello World\n";
}
*/

/*
 Using Declarations differ slightly from directives as they instead specify directly the object to be used from the namespace. The location of the directives and declarations matter as well as they can be used for the entire program or a specific function you wish to use it for.

Example code:

using std::cout;

int main()
{
    cout << "Hello World\n";
}
*/

// Variable Declaration and Initialization ---------------------------------------------------

/*
#include <iostream>

using std::cout;

int main()
{
    int number = 5; // 'int' is the data type that the variable 'number' holds
    cout << number
}

'int number = 5' can be split into declaration and initialization:
'int number' is the declaration
'number = 5' is the initialization 
*/

// Templatization of strings------------------------------------------------------------------

/*
#include <iostream>

using std::cout;

int main()
{
    int number = 5;
    cout << "The answer is: " << number << std::endl;
    return 0;
}

within that example as templatization is occuring with the inclusion of the variable 'number', 'endl' was also used to allow for a new line at the end of the string.
*/


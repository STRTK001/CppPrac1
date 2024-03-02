// CppPrac1.cpp : Defines the entry point for the application.
//


#include <iostream>
/* The following are function declarations. They _declare_ that the functions
exist but they do not _define_ what the functions actually do (the definitions
appear after the main function). By declaring these functions here, they may be
called in the main before they are defined.
Note: function1 expects an int type, whereas function2 expects a pointer to an int
*/
void function1(int);
void function2(int*);

int main() {
	int number = 10;
	/* C1. display the contents of number to the screen */
	/* C2. display the address of variable number to the screen */
	/* C3. call function1 */
	/* C4. display the contents of number to the screen */
	/* C5. call function2 */
	/* C6. display the contents of number to the screen */
	return 0;
}
void function1(int number)
{
	/* C7. increment number by one */
	/* C8. display the contents of number to the screen (should be 11) */
	/* C9. display the address of number to the screen */
}
void function2(int* numberPtr)
{
	/* C10. display the address of number to the screen (should be the same
	address as you displayed first in main) */
	/* C11. display the value that the pointer numberPtr points to */
	/* C12. increment the value stored in number */
	/* C13. display the contents of number to the screen */
}
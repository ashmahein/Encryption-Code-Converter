/*******************************************************************************
* Programmer: Ash Mahein                                                      *
* Class: CptS 122; Lab Section 1                                              *
* Programming Assignment: 6                                                   *
* Date: 7/13/16                                                               *
*                                                                             *
* Description: This program reads in a file with english characters and morse *
*              code characters into a BST. It then reads in a file with       *
*              english characters and converts it to morse code using a look  *
*              function.                                                      *
*                                                                             *
* Relevant Formulas: NONE									                  *
* Collaboration: Andy O'Fallon, Rahul Singal.                                 *
* Websites used: Stackoverflow                                                *
******************************************************************************/
#include "BSTNode.h"
#include "BST.h"

int main(int argc, char *argv[])
{
	//BST object
	BST tree;

	//do while loop that keeps going until user exits.
	int option = 0;
	do
	{
		cout << "1. Print tree.\n2. Print out 'Convert.txt' file.\n3. Exit." << endl;
		cin >> option;
		//prints out entire tree in order. Only prints the english charcters.
		if (option == 1)
		{
			cout << "Current tree: " << endl;
			tree.inOrderTraversal();
			putchar('\n');
			system("pause");
			system("cls");
		}
		//opens file and searches for each character to display onto the screen.
		else if (option == 2)
		{
			tree.searchTree();
			system("pause");
			system("cls");
		}
	} while (option != 3);


	system("pause");
	return 0;
}
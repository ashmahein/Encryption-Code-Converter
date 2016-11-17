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

/*************************************************************
* Function: BST ()                                          *
* Date Created: 07/13/16                                    *
* Date Last Modified: 07/13/16                              *
* Description: constructor that opens and read file.        *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BST::BST()
{
	this->pRoot = nullptr;

	this->codeInfile.open("MorseTable.txt", ios::in);

	if (codeInfile.is_open())
	{
		while (!codeInfile.eof())
		{
			char alpha[10] = "";
			char code[10] = "";
			codeInfile.getline(alpha, 10);
			codeInfile.getline(code, 10);

			insert(*alpha, code);
		}
		codeInfile.close();
	}
}

/*************************************************************
* Function: ~BST ()                                         *
* Date Created: 07/13/16                                    *
* Date Last Modified: 07/13/16                              *
* Description: destructor destroys tree.                    *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BST::~BST()
{
	cout << "Tree destroyed" << endl;
}

/*************************************************************
* Function: insert ()                                       *
* Date Created: 07/14/16                                    *
* Date Last Modified: 07/15/16                              *
* Description: Takes what is read in from the file and then *
*              makes a new node. This node is then inserted *
*              into the tree.                               *
*                                                           *
* Input parameters: pTree, newCode, newText.                *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::insert(BSTNode *&pTree, const char &newText, const string &newCode)
{
	if (pTree == nullptr)
	{
		pTree = new BSTNode(newText, newCode);
	}
	else if (pTree->getNewText() < newText)
	{
		insert(pTree->getRight(), newText, newCode);
	}
	else
	{
		insert(pTree->getLeft(), newText, newCode);
	}
}

/*************************************************************
* Function: inOrderTraversal ()                             *
* Date Created: 07/14/16                                    *
* Date Last Modified: 07/14/16                              *
* Description: Runs through the tree and prints out each    *
*              alphabetic character.                        *
*                                                           *
* Input parameters: pTree.                                  *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::inOrderTraversal(BSTNode *&pTree)
{
	if (*&pTree != nullptr)
	{
		inOrderTraversal(*&pTree->getLeft());
		cout << ((pTree)->getNewText());
		inOrderTraversal(*&pTree->getRight());
	}
}

/*************************************************************
* Function: searchTree ()                                   *
* Date Created: 07/13/16                                    *
* Date Last Modified: 07/16/16                              *
* Description: Takes what is read in from convert.txt file  *
*              and searches for the character in the BST.   *
*              when found it prints out the morse code of   *
*              that character.                              *
*                                                           *
* Input parameters: pTree, upperCase.                       *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::searchTree(BSTNode *&pTree, char upperCase)
{
	if (upperCase == -1)
	{
		cout << "\nFile processed." << endl;
	}
	else if (upperCase == ' ')
	{
		cout << ' '; //check this line
	}
	else if (upperCase == '\n')
	{
		cout << '\n'; //check this line.
	}
	else if ((pTree->getNewText()) == upperCase)
	{
		cout << pTree->getNewCode() << ' ';
	}
	else if ((pTree->getNewText()) > upperCase)
	{
		searchTree(pTree->getLeft(), upperCase);
	}
	else
	{
		searchTree(pTree->getRight(), upperCase);
	}
}
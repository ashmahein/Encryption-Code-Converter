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

/*************************************************************
* Function: BSTNode ()                                      *
* Date Created: 07/14/16                                    *
* Date Last Modified: 07/14/16                              *
* Description: constructor                                  *
*                                                           *
* Input parameters: new text and code                       *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BSTNode::BSTNode(const char &newText, const string &newCode)
{
	this->englishText = newText;
	this->morseCode = newCode;
	this->pLeft = nullptr;
	this->pRight = nullptr;
}

/*************************************************************
* Function: ~BSTNode ()                                     *
* Date Created: 07/14/16                                    *
* Date Last Modified: 07/14/16                              *
* Description: destructor destroys tree.                    *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BSTNode::~BSTNode()
{
	cout << "Destoryed" << endl;
}

/*************************************************************
* Function: setters ()                                      *
* Date Created: 07/15/16                                    *
* Date Last Modified: 07/15/16                              *
* Description: sets values to the private data members.     *
*                                                           *
* Input parameters: new text.                               *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BSTNode::setNewText(const char &newText)
{
	this->englishText = newText;
}

/*************************************************************
* Function: setters ()                                      *
* Date Created: 07/15/16                                    *
* Date Last Modified: 07/15/16                              *
* Description: sets values to the private data members.     *
*                                                           *
* Input parameters: new code.                               *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BSTNode::setNewCode(const string &newCode)
{
	this->morseCode = newCode;
}

/*************************************************************
* Function: setters ()                                      *
* Date Created: 07/15/16                                    *
* Date Last Modified: 07/15/16                              *
* Description: sets values to the private data members.     *
*                                                           *
* Input parameters: left pointer.                           *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BSTNode::setPLeft(BSTNode * const &newPLeft)
{
	this->pLeft = newPLeft;
}

/*************************************************************
* Function: setters ()                                      *
* Date Created: 07/15/16                                    *
* Date Last Modified: 07/15/16                              *
* Description: sets values to the private data members.     *
*                                                           *
* Input parameters: right pointer.                          *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BSTNode::setPRight(BSTNode * const &newPRight)
{
	this->pRight = newPRight;
}

/*************************************************************
* Function: getters ()                                      *
* Date Created: 07/15/16                                    *
* Date Last Modified: 07/15/16                              *
* Description: gets values of the private data members.     *
*                                                           *
* Input parameters: gets text.                              *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
char BSTNode::getNewText() const
{
	return this->englishText;
}

/*************************************************************
* Function: getters ()                                      *
* Date Created: 07/15/16                                    *
* Date Last Modified: 07/15/16                              *
* Description: gets values of the private data members.     *
*                                                           *
* Input parameters: gets code.                              *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
string BSTNode::getNewCode() const
{
	return this->morseCode;
}

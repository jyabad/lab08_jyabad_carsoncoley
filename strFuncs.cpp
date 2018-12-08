#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  if(s1.length() != s2.length())
  {
	  return false;
  }
  for (int i = 0; i < s1.length; i++;)
  {
	  for (int j = 0; j < s2.length; i++)
	  {
		  if (s1.at(i) == s2.at(j))
		  {
			  s2.erase(j, 1);
			  break;
		  }
		  if (s2 == "")
		  {
			  return true;
		  }
		  if(j >= s2.length() - 1)
		  {
			  return false;
		  }
	  }
  }
  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){

  return true;
}



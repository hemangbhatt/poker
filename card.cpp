/*********************************************************
 ** File:        card.cpp
 ** Project:     CMSC 202 Project2, Spring 2016
 ** Author:      Hemang Bhatt
 ** Date:        03/10/15
 ** Description: This File contains code of Card Class' function implementation.
**********************************************************/

#include <iostream>
#include "card.h"

using namespace std ;


// Default constructor marks card as invalid
//
Card::Card() {
   m_suit = Invalid ;
   m_points = 0 ;
}


//Alternate constructor checks validation of suit and card value
// else sets invalid
Card::Card(cSuit s, cPoints p) {

  // validates card suit and value
  if ( ( 1 <= s && s <=4 ) && ( 2 <= p && p <= 14 ) ) {
    m_suit = s;
    m_points = p;
  }

  else {
    m_suit = Invalid ;
    m_points = 0;
  }

}

// returns card points
Card::cPoints Card::points() {

  return m_points;

}


// returns suit value
Card::cSuit Card::suit() {


  return m_suit;

}


// checks the values and suits of cards
// then print them according to their values

void Card::print() {
  // flags check the invalid card
  bool flag = true;
  if (m_points < 2 || m_points > 14 ) {

      cout << " Invalid Card" << endl;
      return;

  }
  // print the value and name for the Face Card
  switch ( m_points ) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    cout << m_points << " of ";
    break;
  case 11:
    cout << "Jack" << " of ";
    break;
  case 12:
    cout << "Queen" << " of ";
    break;
  case 13:
    cout << "King" << " of ";
    break;
  case 14:
    cout << "Ace" << " of ";
    break;
  default:
    flag = false;
    cerr << "InValid Card" << endl;
    break;

  }
  
  //prints the suits of a card if its valid
  if (flag == true) {
    switch (m_suit) {

    case 1:
      cout << "Clubs" << endl;
      break;
    case 2:
      cout << "Diamonds" << endl;
      break;
    case 3:
      cout << "Hearts" << endl;
      break;
    case 4:
      cout << "Spades" << endl;
      break;
    default:
      cerr << " Invalid Cards" << endl;
      break;

    }

  }

}

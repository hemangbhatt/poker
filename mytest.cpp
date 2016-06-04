/*********************************************************                                          
** File:        mytest.cpp                                                          
** Project:     CMSC 202 Project2, Spring 2016                                                      
** Author:      Hemang Bhatt                                                                      
** Date:        03/10/15                                                                          
** Description: This File contains main() function that test the functions
                of the Card and PokerHand classes to determine the rank of a poker hand.

**********************************************************/

#include <iostream>
using namespace std;

#include "pokerhand.h"

int main() {

  // Pick 5 cards
  //
  Card c0(Card::Spades,    14) ;
  Card c1(Card::Spades,    13) ;
  Card c2(Card::Spades,    12) ;
  Card c3(Card::Spades,    11) ;
  Card c4(Card::Spades,   10) ;

  PokerHand myHand(c0, c1, c2, c3, c4) ;

  if ( myHand.isRoyalFlush() ) {
    cout << "Yes!! I have a Royal Flush\n" ;
  } else {
    cout << "My hand is a " ;
    myHand.printRank() ; 
    cout << endl ;
  }

  // Pick 5 more cards
  //
  Card d0(Card::Spades,    12) ;
  Card d1(Card::Spades,    14) ;
  Card d2(Card::Spades,     8) ;
  Card d3(Card::Spades,     4) ;
  Card d4(Card::Spades,     7) ;

  PokerHand yourHand(d0, d1, d2, d3, d4) ;

  cout << "Your hand is a " ;
  yourHand.printRank() ; 
  cout << endl ;

  if (myHand.cmp(yourHand) > 0) {
    cout << "My hand beats yours.\n" ;
  } else if (myHand.cmp(yourHand) < 0) {
    cout << "Your hand beats mine.\n" ;
  } else {
    cout << "Our hands are tied.\n" ;
  }

  cout << "\nMy hand is:\n" ;
  myHand.printCards() ;
  cout << "\nYour hand is:\n" ;
  yourHand.printCards() ;


  // Second test

  // Straight Flush
  //
  Card a0(Card::Clubs,   5) ;
  Card a1(Card::Clubs,   8) ;
  Card a2(Card::Clubs,   7) ;
  Card a3(Card::Clubs,   9) ;
  Card a4(Card::Clubs,   6) ;

  PokerHand myHand1(a0, a1, a2, a3, a4) ;

  cout << endl << endl << "Second Test" << endl;
  if ( myHand1.isStraightFlush() ) {
    cout << "Yes!! I have a Straight Flush\n" ;
  } else {
    cout << "My hand is a " ;
    myHand.printRank() ; 
    cout << endl ;
  }

  // Four of a Kind
  //
  Card b0(Card::Spades,      12) ;
  Card b1(Card::Hearts,      12) ;
  Card b2(Card::Clubs,       12) ;
  Card b3(Card::Diamonds,    12) ;
  Card b4(Card::Spades,      14) ;

  PokerHand yourHand1(b0, b1, b2, b3, b4) ;

  cout << "Your hand is a " ;
  yourHand1.printRank() ; 
  cout << endl ;

  if (myHand1.cmp(yourHand1) > 0) {
    cout << "My hand beats yours.\n" ;
  } else if (myHand1.cmp(yourHand1) < 0) {
    cout << "Your hand beats mine.\n" ;
  } else {
    cout << "Our hands are tied.\n" ;
  }

  cout << "\nMy hand is:\n" ;
  myHand1.printCards() ;
  cout << "\nYour hand is:\n" ;
  yourHand1.printCards() ;

  // Pick 5 cards
  //
  Card e0(Card::Spades,   12) ;
  Card e1(Card::Clubs,     4) ;
  Card e2(Card::Clubs,    12) ;
  Card e3(Card::Diamonds,  4) ;
  Card e4(Card::Hearts,   12) ;

  PokerHand myHand2(e0, e1, e2, e3, e4) ;

  cout << endl << endl << "Third Test" << endl;
  if ( myHand2.isRoyalFlush() ) {
    cout << "Yes!! I have a Royal Flush\n" ;
  } else {
    cout << "My hand is a " ;
    myHand2.printRank() ; 
    cout << endl ;
  }

  // Pick 5 more cards
  //
  Card f0(Card::Spades,    12) ;
  Card f1(Card::Spades,    14) ;
  Card f2(Card::Spades,     8) ;
  Card f3(Card::Spades,     4) ;
  Card f4(Card::Spades,     7) ;

  PokerHand yourHand2(f0, f1, f2, f3, f4) ;

  cout << "Your hand is a " ;
  yourHand2.printRank() ; 
  cout << endl ;

  if (myHand2.cmp(yourHand2) > 0) {
    cout << "My hand beats yours.\n" ;
  } else if (myHand2.cmp(yourHand2) < 0) {
    cout << "Your hand beats mine.\n" ;
  } else {
    cout << "Our hands are tied.\n" ;
  }

  cout << "\nMy hand is:\n" ;
  myHand2.printCards() ;
  cout << "\nYour hand is:\n" ;
  yourHand2.printCards() ;

  // Pick 5 cards
  //
  Card g0(Card::Spades,   5) ;
  Card g1(Card::Clubs,    14) ;
  Card g2(Card::Clubs,    12) ;
  Card g3(Card::Diamonds, 14) ;
  Card g4(Card::Hearts,   12) ;

  PokerHand myHand3(g0, g1, g2, g3, g4) ;


  cout << endl << endl << "Test 4" << endl;
  if ( myHand3.isRoyalFlush() ) {
    cout << "Yes!! I have a Royal Flush\n" ;
  } else {
    cout << "My hand is a " ;
    myHand3.printRank() ; 
    cout << endl ;
  }

  // Pick 5 more cards
  //
  Card h0(Card::Spades,    12) ;
  Card h1(Card::Spades,    14) ;
  Card h2(Card::Clubs,     12) ;
  Card h3(Card::Spades,    12) ;
  Card h4(Card::Diamonds,  10) ;

  PokerHand yourHand3(h0, h1, h2, h3, h4) ;

  cout << "Your hand is a " ;
  yourHand3.printRank() ; 
  cout << endl ;

  if (myHand3.cmp(yourHand3) > 0) {
    cout << "My hand beats yours.\n" ;
  } else if (myHand3.cmp(yourHand3) < 0) {
    cout << "Your hand beats mine.\n" ;
  } else {
    cout << "Our hands are tied.\n" ;
  }

  cout << "\nMy hand is:\n" ;
  myHand3.printCards() ;
  cout << "\nYour hand is:\n" ;
  yourHand3.printCards() ;
}

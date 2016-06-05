/* File: test1.cpp

   CMSC 202 Computer Science II
   Spring 2016 Project 2


*/

#include <iostream>
using namespace std ;

#include "pokerhand.h"

const Card::cSuit C = Card::Clubs ;
const Card::cSuit D = Card::Diamonds ;
const Card::cSuit H = Card::Hearts ;
const Card::cSuit S = Card::Spades ;

const int T = 10 ;
const int J = 11 ;
const int Q = 12 ;
const int K = 13 ;
const int A = 14 ;

const PokerHand::pRank RF = PokerHand::RoyalFlush ;
const PokerHand::pRank SF = PokerHand::StraightFlush ;
const PokerHand::pRank FK = PokerHand::FourOfAKind ;
const PokerHand::pRank FH = PokerHand::FullHouse ;
const PokerHand::pRank FL = PokerHand::Flush ;
const PokerHand::pRank ST = PokerHand::Straight ;
const PokerHand::pRank TK = PokerHand::ThreeOfAKind ;
const PokerHand::pRank TP = PokerHand::TwoPair ;
const PokerHand::pRank OP = PokerHand::OnePair ;
const PokerHand::pRank HC = PokerHand::HighCard ;
const PokerHand::pRank NR = PokerHand::NoRank ;


void myPrintRank(PokerHand::pRank x) {

   switch (x) {

      case PokerHand::NoRank: 
         cout << "No Rank\n" ;
         break ;
      case PokerHand::HighCard:
         cout << "High Card" ;
         break ;
      case PokerHand::OnePair:
         cout << "One Pair" ;
         break ;
      case PokerHand::TwoPair:
         cout << "Two Pair" ;
         break ;
      case PokerHand::ThreeOfAKind:
         cout << "Three of a Kind" ;
         break ;
      case PokerHand::Straight:
         cout << "Straight" ;
         break ;
      case PokerHand::Flush:
         cout << "Flush" ;
         break ;
      case PokerHand::FullHouse:
         cout << "Full House" ;
         break ;
      case PokerHand::FourOfAKind:
         cout << "Four of a Kind" ;
         break ;
      case PokerHand::StraightFlush:
         cout << "Straight Flush" ;
         break ;
      case PokerHand::RoyalFlush:
         cout << "Royal Flush" ;
         break ;
      default:
         cout << "*** Bad rank in myPrintRank() ****\n" ;
   }

}


void PH_PrintRank_Test(PokerHand::pRank x, PokerHand h) {
   myPrintRank(x) ;
   cout << " == " ;
   h.printRank() ;
   cout << " ?\n" ;

}


void PH_Predicate_Test(PokerHand::pRank x, PokerHand h) {
   bool passed ;

   cout << "Predicate test:  " ; 

   // Note: !(A) != !(B) is A XOR B

   passed = true ;
   if (!h.isRoyalFlush()   != !(x == RF) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isStraightFlush()!= !(x == SF) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isFourOfAKind()  != !(x == FK) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isFullHouse()    != !(x == FH) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isFlush()        != !(x == FL) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isStraight()     != !(x == ST) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isThreeOfAKind() != !(x == TK) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isTwoPair()      != !(x == TP) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isOnePair()      != !(x == OP) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (!h.isHighCard()     != !(x == HC) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (passed) {
     cout << "  passed\n" ;
   } else {
     cout << "  FAILED\n" ;
   } 

   return ;
}


void PH_GetRank_Test(PokerHand::pRank x, PokerHand h) {

   bool passed ;

   cout << "getRank() test:  " ;

   passed = true ;
   if ( (h.getRank() == NR) != (x == NR) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == HC) != (x == HC) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == OP) != (x == OP) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == TP) != (x == TP) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == TK) != (x == TK) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == ST) != (x == ST) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == FL) != (x == FL) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == FH) != (x == FH) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == FK) != (x == FK) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == SF) != (x == SF) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if ( (h.getRank() == RF) != (x == RF) ) {
     passed = false ; 
     cout << "X" ;
   } else {
     cout << "O" ;
   }
   if (passed) {
     cout << " passed\n" ;
   } else {
     cout << " FAILED\n" ;
   } 
  
   return ;
}



int main() {

   cout << "\n--------------------------------------\n" ;
   cout << "Royal Flush, test #1\n" ;
   PH_PrintRank_Test( RF, 
      PokerHand(Card(C,A),Card(C,Q),Card(C,K),Card(C,T),Card(C,J)) ) ;
   PH_Predicate_Test( RF, 
      PokerHand(Card(C,A),Card(C,Q),Card(C,K),Card(C,T),Card(C,J)) ) ;
   PH_GetRank_Test  ( RF, 
      PokerHand(Card(C,A),Card(C,Q),Card(C,K),Card(C,T),Card(C,J)) ) ;

   cout << "\nRoyal Flush, test #2\n" ;
   PH_PrintRank_Test( RF, 
      PokerHand(Card(D,A),Card(D,K),Card(D,Q),Card(D,J),Card(D,T)) ) ;
   PH_GetRank_Test  ( RF, 
      PokerHand(Card(D,A),Card(D,K),Card(D,Q),Card(D,J),Card(D,T)) ) ;
   PH_Predicate_Test( RF, 
      PokerHand(Card(D,A),Card(D,K),Card(D,Q),Card(D,J),Card(D,T)) ) ;

   cout << "\nRoyal Flush, test #3\n" ;
   PH_PrintRank_Test( RF,
      PokerHand(Card(H,K),Card(H,J),Card(H,A),Card(H,Q),Card(H,T)) ) ;
   PH_Predicate_Test( RF,
      PokerHand(Card(H,K),Card(H,J),Card(H,A),Card(H,Q),Card(H,T)) ) ;
   PH_GetRank_Test  ( RF,
      PokerHand(Card(H,K),Card(H,J),Card(H,A),Card(H,Q),Card(H,T)) ) ;

   cout << "\nRoyal Flush, test #4\n" ;
   PH_PrintRank_Test( RF,
      PokerHand(Card(S,J),Card(S,Q),Card(S,K),Card(S,A),Card(S,T)) ) ;
   PH_GetRank_Test  ( RF,
      PokerHand(Card(S,J),Card(S,Q),Card(S,K),Card(S,A),Card(S,T)) ) ;
   PH_Predicate_Test( RF,
      PokerHand(Card(S,J),Card(S,Q),Card(S,K),Card(S,A),Card(S,T)) ) ;

   cout << "\nRoyal Flush, test #5\n" ;
   PH_PrintRank_Test( RF,
      PokerHand(Card(S,J),Card(S,T),Card(S,A),Card(S,Q),Card(S,K)) ) ;
   PH_Predicate_Test( RF,
      PokerHand(Card(S,J),Card(S,T),Card(S,A),Card(S,Q),Card(S,K)) ) ;
   PH_GetRank_Test  ( RF,
      PokerHand(Card(S,J),Card(S,T),Card(S,A),Card(S,Q),Card(S,K)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "Straight Flush, test #1\n" ;
   PH_PrintRank_Test( SF,
      PokerHand(Card(C,3),Card(C,2),Card(C,5),Card(C,4),Card(C,6)) ) ;
   PH_Predicate_Test( SF,
      PokerHand(Card(C,3),Card(C,2),Card(C,5),Card(C,4),Card(C,6)) ) ;
   PH_GetRank_Test  ( SF,
      PokerHand(Card(C,3),Card(C,2),Card(C,5),Card(C,4),Card(C,6)) ) ;

   cout << "\nStraight Flush, test #2\n" ;
   PH_PrintRank_Test( SF,
      PokerHand(Card(D,J),Card(D,9),Card(D,8),Card(D,T),Card(D,7)) ) ;
   PH_GetRank_Test  ( SF,
      PokerHand(Card(D,J),Card(D,9),Card(D,8),Card(D,T),Card(D,7)) ) ;
   PH_Predicate_Test( SF,
      PokerHand(Card(D,J),Card(D,9),Card(D,8),Card(D,T),Card(D,7)) ) ;

   cout << "\nStraight Flush, test #3\n" ;
   PH_PrintRank_Test( SF,
      PokerHand(Card(H,8),Card(H,5),Card(H,7),Card(H,6),Card(H,9)) ) ;
   PH_Predicate_Test( SF,
      PokerHand(Card(H,8),Card(H,5),Card(H,7),Card(H,6),Card(H,9)) ) ;
   PH_GetRank_Test  ( SF,
      PokerHand(Card(H,8),Card(H,5),Card(H,7),Card(H,6),Card(H,9)) ) ;

   cout << "\nStraight Flush, test #4\n" ;
   PH_PrintRank_Test( SF,
      PokerHand(Card(S,9),Card(S,T),Card(S,J),Card(S,Q),Card(S,K)) ) ;
   PH_GetRank_Test  ( SF,
      PokerHand(Card(S,9),Card(S,T),Card(S,J),Card(S,Q),Card(S,K)) ) ;
   PH_Predicate_Test( SF,
      PokerHand(Card(S,9),Card(S,T),Card(S,J),Card(S,Q),Card(S,K)) ) ;

   cout << "\nStraight Flush, test #5\n" ;
   PH_PrintRank_Test( SF,
      PokerHand(Card(S,7),Card(S,6),Card(S,5),Card(S,4),Card(S,3)) ) ;
   PH_Predicate_Test( SF,
      PokerHand(Card(S,7),Card(S,6),Card(S,5),Card(S,4),Card(S,3)) ) ;
   PH_GetRank_Test  ( SF,
      PokerHand(Card(S,7),Card(S,6),Card(S,5),Card(S,4),Card(S,3)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "Four of a Kind, test #1\n" ;
   PH_PrintRank_Test( FK,
      PokerHand(Card(C,4),Card(C,2),Card(D,4),Card(H,4),Card(S,4)) ) ;
   PH_Predicate_Test( FK,
      PokerHand(Card(C,4),Card(C,2),Card(D,4),Card(H,4),Card(S,4)) ) ;
   PH_GetRank_Test  ( FK,
      PokerHand(Card(C,4),Card(C,2),Card(D,4),Card(H,4),Card(S,4)) ) ;

   cout << "\nFour of a Kind, test #2\n" ;
   PH_PrintRank_Test( FK,
      PokerHand(Card(C,9),Card(D,9),Card(D,K),Card(H,9),Card(S,9)) ) ;
   PH_GetRank_Test  ( FK,
      PokerHand(Card(C,9),Card(D,9),Card(D,K),Card(H,9),Card(S,9)) ) ;
   PH_Predicate_Test( FK,
      PokerHand(Card(C,9),Card(D,9),Card(D,K),Card(H,9),Card(S,9)) ) ;

   cout << "\nFour of a Kind, test #3\n" ;
   PH_PrintRank_Test( FK,
      PokerHand(Card(C,7),Card(D,7),Card(H,7),Card(D,4),Card(S,7)) ) ;
   PH_Predicate_Test( FK,
      PokerHand(Card(C,7),Card(D,7),Card(H,7),Card(D,4),Card(S,7)) ) ;
   PH_GetRank_Test  ( FK,
      PokerHand(Card(C,7),Card(D,7),Card(H,7),Card(D,4),Card(S,7)) ) ;

   cout << "\nFour of a Kind, test #4\n" ;
   PH_PrintRank_Test( FK,
      PokerHand(Card(C,T),Card(D,T),Card(H,T),Card(S,T),Card(D,J)) ) ;
   PH_GetRank_Test  ( FK,
      PokerHand(Card(C,T),Card(D,T),Card(H,T),Card(S,T),Card(D,J)) ) ;
   PH_Predicate_Test( FK,
      PokerHand(Card(C,T),Card(D,T),Card(H,T),Card(S,T),Card(D,J)) ) ;

   cout << "\nFour of a Kind, test #5\n" ;
   PH_PrintRank_Test( FK,
      PokerHand(Card(D,Q),Card(C,3),Card(D,3),Card(H,3),Card(S,3)) ) ;
   PH_Predicate_Test( FK,
      PokerHand(Card(D,Q),Card(C,3),Card(D,3),Card(H,3),Card(S,3)) ) ;
   PH_GetRank_Test  ( FK,
      PokerHand(Card(D,Q),Card(C,3),Card(D,3),Card(H,3),Card(S,3)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "Full House, test #1\n" ;
   PH_PrintRank_Test( FH,
      PokerHand(Card(C,2),Card(D,2),Card(H,4),Card(S,4),Card(C,4)) ) ;
   PH_Predicate_Test( FH,
      PokerHand(Card(C,2),Card(D,2),Card(H,4),Card(S,4),Card(C,4)) ) ;
   PH_GetRank_Test  ( FH,
      PokerHand(Card(C,2),Card(D,2),Card(H,4),Card(S,4),Card(C,4)) ) ;

   cout << "\nFull House, test #2\n" ;
   PH_PrintRank_Test( FH,
      PokerHand(Card(C,9),Card(D,2),Card(H,9),Card(S,9),Card(C,2)) ) ;
   PH_GetRank_Test  ( FH,
      PokerHand(Card(C,9),Card(D,2),Card(H,9),Card(S,9),Card(C,2)) ) ;
   PH_Predicate_Test( FH,
      PokerHand(Card(C,9),Card(D,2),Card(H,9),Card(S,9),Card(C,2)) ) ;

   cout << "\nFull House, test #3\n" ;
   PH_PrintRank_Test( FH,
      PokerHand(Card(C,A),Card(D,7),Card(H,A),Card(S,7),Card(C,7)) ) ;
   PH_Predicate_Test( FH,
      PokerHand(Card(C,A),Card(D,7),Card(H,A),Card(S,7),Card(C,7)) ) ;
   PH_GetRank_Test  ( FH,
      PokerHand(Card(C,A),Card(D,7),Card(H,A),Card(S,7),Card(C,7)) ) ;

   cout << "\nFull House, test #4\n" ;
   PH_PrintRank_Test( FH,
      PokerHand(Card(C,T),Card(D,8),Card(H,T),Card(S,8),Card(S,T)) ) ;
   PH_GetRank_Test  ( FH,
      PokerHand(Card(C,T),Card(D,8),Card(H,T),Card(S,8),Card(S,T)) ) ;
   PH_Predicate_Test( FH,
      PokerHand(Card(C,T),Card(D,8),Card(H,T),Card(S,8),Card(S,T)) ) ;

   cout << "\nFull House, test #5\n" ;
   PH_PrintRank_Test( FH,
      PokerHand(Card(C,Q),Card(D,K),Card(H,Q),Card(S,K),Card(C,Q)) ) ;
   PH_Predicate_Test( FH,
      PokerHand(Card(C,Q),Card(D,K),Card(H,Q),Card(S,K),Card(C,Q)) ) ;
   PH_GetRank_Test  ( FH,
      PokerHand(Card(C,Q),Card(D,K),Card(H,Q),Card(S,K),Card(C,Q)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "Flush, test #1\n" ;
   PH_PrintRank_Test( FL,
      PokerHand(Card(C,A),Card(C,2),Card(C,9),Card(C,4),Card(C,J)) ) ;
   PH_Predicate_Test( FL,
      PokerHand(Card(C,A),Card(C,2),Card(C,9),Card(C,4),Card(C,J)) ) ;
   PH_GetRank_Test  ( FL,
      PokerHand(Card(C,A),Card(C,2),Card(C,9),Card(C,4),Card(C,J)) ) ;

   cout << "\nFlush, test #2\n" ;
   PH_PrintRank_Test( FL,
      PokerHand(Card(D,T),Card(D,8),Card(D,5),Card(D,6),Card(D,7)) ) ;
   PH_GetRank_Test  ( FL,
      PokerHand(Card(D,T),Card(D,8),Card(D,5),Card(D,6),Card(D,7)) ) ;
   PH_Predicate_Test( FL,
      PokerHand(Card(D,T),Card(D,8),Card(D,5),Card(D,6),Card(D,7)) ) ;

   cout << "\nFlush, test #3\n" ;
   PH_PrintRank_Test( FL,
      PokerHand(Card(H,Q),Card(H,9),Card(H,7),Card(H,J),Card(H,T)) ) ;
   PH_Predicate_Test( FL,
      PokerHand(Card(H,Q),Card(H,9),Card(H,7),Card(H,J),Card(H,T)) ) ;
   PH_GetRank_Test  ( FL,
      PokerHand(Card(H,Q),Card(H,9),Card(H,7),Card(H,J),Card(H,T)) ) ;

   cout << "\nFlush, test #4\n" ;
   PH_PrintRank_Test( FL,
      PokerHand(Card(S,A),Card(S,K),Card(S,Q),Card(S,J),Card(S,7)) ) ;
   PH_GetRank_Test  ( FL,
      PokerHand(Card(S,A),Card(S,K),Card(S,Q),Card(S,J),Card(S,7)) ) ;
   PH_Predicate_Test( FL,
      PokerHand(Card(S,A),Card(S,K),Card(S,Q),Card(S,J),Card(S,7)) ) ;

   cout << "\nFlush, test #5\n" ;
   PH_PrintRank_Test( FL,
      PokerHand(Card(S,2),Card(S,4),Card(S,6),Card(S,8),Card(S,T)) ) ;
   PH_Predicate_Test( FL,
      PokerHand(Card(S,2),Card(S,4),Card(S,6),Card(S,8),Card(S,T)) ) ;
   PH_GetRank_Test  ( FL,
      PokerHand(Card(S,2),Card(S,4),Card(S,6),Card(S,8),Card(S,T)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "Straight, test #1\n" ;
   PH_PrintRank_Test( ST,
      PokerHand(Card(D,3),Card(C,2),Card(C,5),Card(S,4),Card(C,6)) ) ;
   PH_Predicate_Test( ST,
      PokerHand(Card(D,3),Card(C,2),Card(C,5),Card(S,4),Card(C,6)) ) ;
   PH_GetRank_Test  ( ST,
      PokerHand(Card(D,3),Card(C,2),Card(C,5),Card(S,4),Card(C,6)) ) ;

   cout << "\nStraight, test #2\n" ;
   PH_PrintRank_Test( ST,
      PokerHand(Card(D,J),Card(H,9),Card(D,8),Card(D,T),Card(C,7)) ) ;
   PH_GetRank_Test  ( ST,
      PokerHand(Card(D,J),Card(H,9),Card(D,8),Card(D,T),Card(C,7)) ) ;
   PH_Predicate_Test( ST,
      PokerHand(Card(D,J),Card(H,9),Card(D,8),Card(D,T),Card(C,7)) ) ;

   cout << "\nStraight, test #3\n" ;
   PH_PrintRank_Test( ST,
      PokerHand(Card(H,K),Card(S,T),Card(D,J),Card(H,Q),Card(H,A)) ) ;
   PH_Predicate_Test( ST,
      PokerHand(Card(H,K),Card(S,T),Card(D,J),Card(H,Q),Card(H,A)) ) ;
   PH_GetRank_Test  ( ST,
      PokerHand(Card(H,K),Card(S,T),Card(D,J),Card(H,Q),Card(H,A)) ) ;

   cout << "\nStraight, test #4\n" ;
   PH_PrintRank_Test( ST,
      PokerHand(Card(C,9),Card(D,T),Card(D,J),Card(H,Q),Card(S,K)) ) ;
   PH_GetRank_Test  ( ST,
      PokerHand(Card(C,9),Card(D,T),Card(D,J),Card(H,Q),Card(S,K)) ) ;
   PH_Predicate_Test( ST,
      PokerHand(Card(C,9),Card(D,T),Card(D,J),Card(H,Q),Card(S,K)) ) ;

   cout << "\nStraight, test #5\n" ;
   PH_PrintRank_Test( ST,
      PokerHand(Card(H,7),Card(C,6),Card(S,5),Card(D,4),Card(S,3)) ) ;
   PH_Predicate_Test( ST,
      PokerHand(Card(H,7),Card(C,6),Card(S,5),Card(D,4),Card(S,3)) ) ;
   PH_GetRank_Test  ( ST,
      PokerHand(Card(H,7),Card(C,6),Card(S,5),Card(D,4),Card(S,3)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "Three of a Kind, test #1\n" ;
   PH_PrintRank_Test( TK,
      PokerHand(Card(C,2),Card(D,A),Card(H,4),Card(S,4),Card(C,4)) ) ;
   PH_Predicate_Test( TK,
      PokerHand(Card(C,2),Card(D,A),Card(H,4),Card(S,4),Card(C,4)) ) ;
   PH_GetRank_Test  ( TK,
      PokerHand(Card(C,2),Card(D,A),Card(H,4),Card(S,4),Card(C,4)) ) ;

   cout << "\nThree of a Kind, test #2\n" ;
   PH_PrintRank_Test( TK,
      PokerHand(Card(C,9),Card(D,2),Card(H,9),Card(S,9),Card(C,7)) ) ;
   PH_GetRank_Test  ( TK,
      PokerHand(Card(C,9),Card(D,2),Card(H,9),Card(S,9),Card(C,7)) ) ;
   PH_Predicate_Test( TK,
      PokerHand(Card(C,9),Card(D,2),Card(H,9),Card(S,9),Card(C,7)) ) ;

   cout << "\nThree of a Kind, test #3\n" ;
   PH_PrintRank_Test( TK,
      PokerHand(Card(C,A),Card(D,7),Card(H,K),Card(S,7),Card(C,7)) ) ;
   PH_Predicate_Test( TK,
      PokerHand(Card(C,A),Card(D,7),Card(H,K),Card(S,7),Card(C,7)) ) ;
   PH_GetRank_Test  ( TK,
      PokerHand(Card(C,A),Card(D,7),Card(H,K),Card(S,7),Card(C,7)) ) ;

   cout << "\nThree of a Kind, test #4\n" ;
   PH_PrintRank_Test( TK,
      PokerHand(Card(C,T),Card(D,8),Card(H,T),Card(S,7),Card(D,T)) ) ;
   PH_GetRank_Test  ( TK,
      PokerHand(Card(C,T),Card(D,8),Card(H,T),Card(S,7),Card(D,T)) ) ;
   PH_Predicate_Test( TK,
      PokerHand(Card(C,T),Card(D,8),Card(H,T),Card(S,7),Card(D,T)) ) ;

   cout << "\nThree of a Kind, test #5\n" ;
   PH_PrintRank_Test( TK,
      PokerHand(Card(C,Q),Card(D,3),Card(H,Q),Card(S,Q),Card(H,K)) ) ;
   PH_Predicate_Test( TK,
      PokerHand(Card(C,Q),Card(D,3),Card(H,Q),Card(S,Q),Card(H,K)) ) ;
   PH_GetRank_Test  ( TK,
      PokerHand(Card(C,Q),Card(D,3),Card(H,Q),Card(S,Q),Card(H,K)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "Two Pair, test #1\n" ;
   PH_PrintRank_Test( TP,
      PokerHand(Card(C,2),Card(D,2),Card(H,4),Card(S,8),Card(C,4)) ) ;
   PH_Predicate_Test( TP,
      PokerHand(Card(C,2),Card(D,2),Card(H,4),Card(S,8),Card(C,4)) ) ;
   PH_GetRank_Test  ( TP,
      PokerHand(Card(C,2),Card(D,2),Card(H,4),Card(S,8),Card(C,4)) ) ;

   cout << "\nTwo Pair, test #2\n" ;
   PH_PrintRank_Test( TP,
      PokerHand(Card(C,A),Card(D,2),Card(H,9),Card(S,9),Card(C,2)) ) ;
   PH_GetRank_Test  ( TP,
      PokerHand(Card(C,A),Card(D,2),Card(H,9),Card(S,9),Card(C,2)) ) ;
   PH_Predicate_Test( TP,
      PokerHand(Card(C,A),Card(D,2),Card(H,9),Card(S,9),Card(C,2)) ) ;

   cout << "\nTwo Pair, test #3\n" ;
   PH_PrintRank_Test( TP,
      PokerHand(Card(C,A),Card(D,7),Card(H,A),Card(S,7),Card(C,5)) ) ;
   PH_Predicate_Test( TP,
      PokerHand(Card(C,A),Card(D,7),Card(H,A),Card(S,7),Card(C,5)) ) ;
   PH_GetRank_Test  ( TP,
      PokerHand(Card(C,A),Card(D,7),Card(H,A),Card(S,7),Card(C,5)) ) ;

   cout << "\nTwo Pair, test #4\n" ;
   PH_PrintRank_Test( TP,
      PokerHand(Card(C,T),Card(D,8),Card(H,9),Card(S,8),Card(H,T)) ) ;
   PH_GetRank_Test  ( TP,
      PokerHand(Card(C,T),Card(D,8),Card(H,9),Card(S,8),Card(H,T)) ) ;
   PH_Predicate_Test( TP,
      PokerHand(Card(C,T),Card(D,8),Card(H,9),Card(S,8),Card(H,T)) ) ;

   cout << "\nTwo Pair, test #5\n" ;
   PH_PrintRank_Test( TP,
      PokerHand(Card(C,J),Card(D,K),Card(H,Q),Card(S,K),Card(C,Q)) ) ;
   PH_Predicate_Test( TP,
      PokerHand(Card(C,J),Card(D,K),Card(H,Q),Card(S,K),Card(C,Q)) ) ;
   PH_GetRank_Test  ( TP,
      PokerHand(Card(C,J),Card(D,K),Card(H,Q),Card(S,K),Card(C,Q)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "One Pair, test #1\n" ;
   PH_PrintRank_Test( OP,
      PokerHand(Card(C,2),Card(D,3),Card(H,4),Card(S,9),Card(C,4)) ) ;
   PH_Predicate_Test( OP,
      PokerHand(Card(C,2),Card(D,3),Card(H,4),Card(S,9),Card(C,4)) ) ;
   PH_GetRank_Test  ( OP,
      PokerHand(Card(C,2),Card(D,3),Card(H,4),Card(S,9),Card(C,4)) ) ;

   cout << "\nOne Pair, test #2\n" ;
   PH_PrintRank_Test( OP,
      PokerHand(Card(C,9),Card(D,2),Card(H,7),Card(S,9),Card(C,K)) ) ;
   PH_GetRank_Test  ( OP,
      PokerHand(Card(C,9),Card(D,2),Card(H,7),Card(S,9),Card(C,K)) ) ;
   PH_Predicate_Test( OP,
      PokerHand(Card(C,9),Card(D,2),Card(H,7),Card(S,9),Card(C,K)) ) ;

   cout << "\nOne Pair, test #3\n" ;
   PH_PrintRank_Test( OP,
      PokerHand(Card(C,A),Card(D,7),Card(H,Q),Card(S,T),Card(C,7)) ) ;
   PH_Predicate_Test( OP,
      PokerHand(Card(C,A),Card(D,7),Card(H,Q),Card(S,T),Card(C,7)) ) ;
   PH_GetRank_Test  ( OP,
      PokerHand(Card(C,A),Card(D,7),Card(H,Q),Card(S,T),Card(C,7)) ) ;

   cout << "\nOne Pair, test #4\n" ;
   PH_PrintRank_Test( OP,
      PokerHand(Card(C,T),Card(D,7),Card(H,4),Card(S,8),Card(H,T)) ) ;
   PH_GetRank_Test  ( OP,
      PokerHand(Card(C,T),Card(D,7),Card(H,4),Card(S,8),Card(H,T)) ) ;
   PH_Predicate_Test( OP,
      PokerHand(Card(C,T),Card(D,7),Card(H,4),Card(S,8),Card(H,T)) ) ;

   cout << "\nOne Pair, test #5\n" ;
   PH_PrintRank_Test( OP,
      PokerHand(Card(C,Q),Card(D,K),Card(H,3),Card(S,8),Card(H,Q)) ) ;
   PH_Predicate_Test( OP,
      PokerHand(Card(C,Q),Card(D,K),Card(H,3),Card(S,8),Card(H,Q)) ) ;
   PH_GetRank_Test  ( OP,
      PokerHand(Card(C,Q),Card(D,K),Card(H,3),Card(S,8),Card(H,Q)) ) ;


   cout << "\n--------------------------------------\n" ;
   cout << "High Card, test #1\n" ;
   PH_PrintRank_Test( HC,
      PokerHand(Card(C,A),Card(D,2),Card(C,9),Card(C,4),Card(C,J)) ) ;
   PH_Predicate_Test( HC,
      PokerHand(Card(C,A),Card(D,2),Card(C,9),Card(C,4),Card(C,J)) ) ;
   PH_GetRank_Test  ( HC,
      PokerHand(Card(C,A),Card(D,2),Card(C,9),Card(C,4),Card(C,J)) ) ;

   cout << "\nHigh Card, test #2\n" ;
   PH_PrintRank_Test( HC,
      PokerHand(Card(D,T),Card(H,8),Card(D,5),Card(C,6),Card(H,7)) ) ;
   PH_GetRank_Test  ( HC,
      PokerHand(Card(D,T),Card(H,8),Card(D,5),Card(C,6),Card(H,7)) ) ;
   PH_Predicate_Test( HC,
      PokerHand(Card(D,T),Card(H,8),Card(D,5),Card(C,6),Card(H,7)) ) ;

   cout << "\nHigh Card, test #3\n" ;
   PH_PrintRank_Test( HC,
      PokerHand(Card(H,Q),Card(H,9),Card(C,7),Card(H,J),Card(H,T)) ) ;
   PH_Predicate_Test( HC,
      PokerHand(Card(H,Q),Card(H,9),Card(C,7),Card(H,J),Card(H,T)) ) ;
   PH_GetRank_Test  ( HC,
      PokerHand(Card(H,Q),Card(H,9),Card(C,7),Card(H,J),Card(H,T)) ) ;

   cout << "\nHigh Card, test #4\n" ;
   PH_PrintRank_Test( HC,
      PokerHand(Card(H,A),Card(S,K),Card(S,Q),Card(S,J),Card(S,7)) ) ;
   PH_GetRank_Test  ( HC,
      PokerHand(Card(H,A),Card(S,K),Card(S,Q),Card(S,J),Card(S,7)) ) ;
   PH_Predicate_Test( HC,
      PokerHand(Card(H,A),Card(S,K),Card(S,Q),Card(S,J),Card(S,7)) ) ;

   cout << "\nHigh Card, test #5\n" ;
   PH_PrintRank_Test( HC,
      PokerHand(Card(S,2),Card(S,4),Card(S,6),Card(S,8),Card(C,T)) ) ;
   PH_Predicate_Test( HC,
      PokerHand(Card(S,2),Card(S,4),Card(S,6),Card(S,8),Card(C,T)) ) ;
   PH_GetRank_Test  ( HC,
      PokerHand(Card(S,2),Card(S,4),Card(S,6),Card(S,8),Card(C,T)) ) ;
}

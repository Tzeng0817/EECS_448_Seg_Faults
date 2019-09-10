#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Executive.h"
#include "Boards.h"

Executive::Executive(){

}
Executive::~Executive(){
}
void Executive::run(){
  int choice=0;
std::cout<< " ____        _   _   _      ____  _     _\n"<<"| __ )  __ _| |_| |_| | ___/ ___|| |__ (_)_ __\n"<<"|  _ \\ / _` | __| __| |/ _ \\___ \\| '_ \\| | '_ \\\n"<<"| |_) | (_| | |_| |_| |  __/___) | | | | | |_) |\n"<<"|____/ \\__,_|\\__|\\__|_|\\___|____/|_| |_|_| .__/\n"<<"                                        |_|\n";
std::cout<<"1)START GAME"<<"\n";
std::cout<<"2)EXIT"<<"\n";
std::cin>>choice;
if(choice==1){
Boards* newBoard = new Boards();
newBoard->displayOffensiveBoard();
newBoard->displayOffensiveBoard();
newBoard->displayBoth();
 int row = 0;
 char column = ' ';
 std::cout << "\nEnter the column letter: ";
 std::cin >> column;
 while(column < 65 || column > 72){
   if(column < 65 || column > 72){
   std::cout << "Invalid selection, try again\n";
   std::cout << "Enter the column letter: ";
   std::cin >> column;
  }
  else{
    std::cin >> column;
  }
 }
 std::cout << "\nEnter the row number: ";
 std::cin >> row;
 while (std::cin.fail() || row > 7 || row < 0){
   std::cin.clear();
   std::cin.ignore(INT8_MAX, '\n');
   std::cout << "Invalid selection, try again.\n";
   std::cout << "\nEnter the row number: ";
   std::cin >> row;
 }
 if(newBoard->isValid(column, row)){
   std::cout << "Is valid..\n";
 }
 else{
   std::cout << "Invalid location\n";
 }
}
else if(choice==2){
}
}

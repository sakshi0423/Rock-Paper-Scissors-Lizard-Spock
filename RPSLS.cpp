#include <iostream>
#include <cstdlib>
#include <time.h>

int main(){

    int rock = 1, paper = 2, scissors = 3, lizard = 4, spock = 5;

    std::cout << "ROCK PAPER SCISSORS LIZARD SPOCK GAMES! \n";
    std::cout << "1 for Rock \n";
    std::cout << "2 for Paper \n";
    std::cout << "3 for Scissors \n";
    std::cout << "4 for Lizard \n";
    std::cout << "5 for Spock \n\n";


    int userchoice;
    std::cout << "Enter your choice: ";
    std::cin >> userchoice;

    if(userchoice == 1){
        std::cout << "You choose: Rock \n";
    }
    else if(userchoice == 2){
        std::cout << "You choose: Paper \n";
    }
    else if(userchoice == 3){
        std::cout << "You choose: Scissors \n";
    }
    else if(userchoice == 4){
        std::cout << "You choose: Lizard \n";
    }
    else{
        std::cout << "You choose: Spock \n";
    }
    

  srand(time(NULL));

  std::string computername;
  int compchoicename;
  int computerchoice = std::rand() % 5;
  if(computerchoice == 0){
    compchoicename = 1;
    computername = "Rock";
  }
  else if(computerchoice == 1){
    compchoicename = 2;
    computername = "Paper";
  }
  else if(computerchoice == 2){
    compchoicename = 3;
    computername = "Scissors";
  }
  else if(computerchoice == 3){
    compchoicename = 4;
    computername = "Lizard";
  }
  else if(computerchoice == 4){
    compchoicename = 5;
    computername = "Spock";
  }

  std::cout << "Computer choose: " << computername << "\n";
 

    /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */

  

  if(userchoice == compchoicename){
    std::cout << "draw \n";
    return 0;
  }

  //USERCHOICE = ROCK
  else if(userchoice == rock &&  compchoicename == paper){
    std::cout << "you lose. \n";
  }
  else if(userchoice == rock && compchoicename == scissors){
    std::cout << "you win. \n";
  }
  else if(userchoice == rock && compchoicename == lizard){
    std::cout << "you win. \n";
  }
  else if(userchoice == rock && compchoicename == spock){
    std::cout << "you lose. \n";
  }

  //USERCHOICE = PAPER
  else if(userchoice == paper && compchoicename == rock){
    std::cout << "you win. \n";
  }
  else if(userchoice == paper && compchoicename == scissors){
    std::cout << "you lose. \n";
  }
  else if(userchoice == paper && compchoicename == lizard){
    std::cout << "you lose. \n";
  }
  else if(userchoice == paper && compchoicename == spock){
    std::cout << "you win. \n";
  }

  //USERCHOICE = SCISSORS
  else if(userchoice == scissors && compchoicename == rock){
    std::cout << "you lose. \n";
  }
  else if(userchoice == scissors && compchoicename == paper){
    std::cout << "you win. \n";
  }
  else if(userchoice == scissors && compchoicename == lizard){
    std::cout << "you win. \n";
  }
  else if(userchoice == scissors && compchoicename == spock){
    std::cout << "you lose. \n";
  }

  //USERCHOICE == LIZARD
  else if(userchoice == lizard && compchoicename == rock){
    std::cout << "you lose. \n";
  }
  else if(userchoice == lizard && compchoicename == paper){
    std::cout << "you win. \n";
  }
  else if(userchoice == lizard && compchoicename == scissors){
    std::cout << "you lose. \n";
  }
  else if(userchoice == lizard && compchoicename == spock){
    std::cout << "you win. \n";
  }

  //USERCHOICE == SPOCK
  else if(userchoice == spock && compchoicename == rock){
    std::cout << "you win. \n";
  }
  else if(userchoice == spock && compchoicename == paper){
    std::cout << "you lose. \n";
  }
  else if(userchoice == spock && compchoicename == scissors){
    std::cout << "you win. \n";
  }
  else if(userchoice == spock && compchoicename == lizard){
    std::cout << "you lose. \n";
  }

}
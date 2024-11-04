//Jefferson Zheng
//Lab 7
//October 29

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  //Opens File called game_scores.txt as stats
  ifstream stats("game_scores.txt");

  //Creates variables for names, the 3 scores, and the average
  string name;
  double scoreOne, scoreTwo, scoreThree, average;

  //For loop, loop 3 times
  for (int i = 1; i <= 3; i++) {
    //Takes name and 3 scores from game_scores.txt
    stats >> name >> scoreOne >> scoreTwo >> scoreThree;
    
    //Calculates the average of the scores
    average = scoreOne * .2 + scoreTwo * .3 + scoreThree * .5;
    
    //Beginner
    if (average < 1000)
      cout << name << " - Beginner - Keep Practing!" << endl;
    //Intermediate
    else if (average < 1500)
      cout << name << " - Intermediate" << endl;
    //Advanced
    else if (average < 1800)
      cout << name << " - Advanced - Good Job!" << endl;
    //Master
    else if (average < 2000)
      cout << name << " - Master - Good Job!" << endl;
    //Expert
    else
      cout << name << " - Congrats! You are an Expert!" << endl;
  }

  //Operation exited successfully
  return 0;
}

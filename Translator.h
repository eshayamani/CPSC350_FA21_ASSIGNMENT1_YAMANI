//header file for translator class
#include <iostream>
#include "Model.h"
using namespace std;

class Translator{
public:
  Translator(); //default constructor
  ~Translator(); //destructor

  //defining the methods used in the cpp file for translator class
  string translateEnglishWord(string word);
  string translateEnglishSentence(string line);
};

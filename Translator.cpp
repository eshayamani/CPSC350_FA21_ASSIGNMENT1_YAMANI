//implementation file
#include "Translator.h"

Translator :: Translator(){} // constructor
Translator :: ~Translator(){} //destructor

//takes in a word, runs the approproate method, converts to tutnese and outputs to a new string
string Translator :: translateEnglishWord(string word) {
  Model t;
  std :: string new_word = "";
  for (int i=0; i< word.size(); i++) {
    //checking if next letter is equal to current letter to check if translateDoubleCharacter is needed
    if (word[i] == word[i+1]){
      new_word.append(t.translateDoubleCharacter(word[i]));
      i++;
    }
    else {
      new_word.append(t.translateSingleCharacter(word[i]));
    }
  }
  return new_word;
}

//takes in a sentence and calls translate word on every word in the sentence.
string Translator :: translateEnglishSentence (string line) {
  std :: string new_line = "";
  new_line.append(translateEnglishWord(line));
  return new_line;
}

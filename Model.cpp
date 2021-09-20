//implementation file
#include "Model.h"

Model :: Model(){} // constructor
Model :: ~Model(){} //destructor

//takes in a single character, matches it to the case and returns a string
//constants change while vowels stay the same
//repeated for both capitalized and lower case letters
string Model :: translateSingleCharacter(char letter) {
  switch (letter){
    case 'B':
      return "Bub";
    case 'b':
      return "bub";
    case 'C':
      return "Cash";
    case 'c':
      return "cash";
    case 'D':
      return "Dud";
    case 'd':
      return "dud";
    case 'F':
      return "Fuf";
    case 'f':
      return "fuf";
    case 'G':
      return "Gug";
    case 'g':
      return "gug";
    case 'H':
      return "Hash";
    case 'h':
      return "hash";
    case 'J':
      return "Jay";
    case 'j':
      return "jay";
    case 'K':
      return "Kuck";
    case 'k':
      return "kuck";
    case 'L':
      return "Lul";
    case 'l':
      return "lul";
    case 'M':
      return "Mum";
    case 'm':
      return "mum";
    case 'N':
      return "Nun";
    case 'n':
      return "nun";
    case 'P':
      return "Pub";
    case 'p':
      return "pub";
    case 'Q':
      return "Quack";
    case 'q':
      return "quack";
    case 'R':
      return "Rug";
    case 'r':
      return "rug";
    case 'S':
      return "Sus";
    case 's':
      return "sus";
    case 'T':
      return "Tut";
    case 't':
      return "tut";
    case 'V':
      return "Vuv";
    case 'v':
      return "vuv";
    case 'W':
      return "Wack";
    case 'w':
      return "wack";
    case 'X':
      return "Ex";
    case 'x':
      return "ex";
    case 'Y':
      return "Yub";
    case 'y':
      return "yub";
    case 'Z':
      return "Zub";
    case 'z':
      return "zub";
    default:
      return string (1, letter);
    }
  }

  //takes in a single character, matches it to the case and returns a string
  //used when there are two same letters next to each other
  //takes capitalization into account
  string Model:: translateDoubleCharacter(char letter) {
    switch (letter){
      case 'B':
        return "Squab";
      case 'b':
        return "squab";
      case 'C':
        return "Squac";
      case 'c':
        return "squac";
      case 'D':
        return "Squad";
      case 'd':
        return "squad";
      case 'F':
        return "Squaf";
      case 'f':
        return "squaf";
      case 'G':
        return "Squag";
      case 'g':
        return "squag";
      case 'H':
        return "Squah";
      case 'h':
        return "squah";
      case 'J':
        return "Squaj";
      case 'j':
        return "squaj";
      case 'K':
        return "Squak";
      case 'k':
        return "squak";
      case 'L':
        return "Squal";
      case 'l':
        return "squal";
      case 'M':
        return "Squam";
      case 'm':
        return "squam";
      case 'N':
        return "Squan";
      case 'n':
        return "squan";
      case 'P':
        return "Squap";
      case 'p':
        return "squap";
      case 'Q':
        return "Squaq";
      case 'q':
        return "squaq";
      case 'R':
        return "Squar";
      case 'r':
        return "squar";
      case 'S':
        return "Squas";
      case 's':
        return "squas";
      case 'T':
        return "Squat";
      case 't':
        return "squat";
      case 'V':
        return "Squav";
      case 'v':
        return "squav";
      case 'W':
        return "Squaw";
      case 'w':
        return "squaw";
      case 'X':
        return "Squax";
      case 'x':
        return "squax";
      case 'Y':
        return "Squay";
      case 'y':
        return "squay";
      case 'Z':
        return "Squaz";
      case 'z':
        return "squaz";
      //adding vowels for double character as they need to change
      case 'A':
        return "Sqauta";
      case 'a':
        return "squata";
      case 'E':
        return "Sqaute";
      case 'e':
        return "squate";
      case 'I':
        return "Sqauti";
      case 'i':
        return "squati";
      case 'O':
        return "Sqauto";
      case 'o':
        return "squato";
      case 'U':
        return "Sqautu";
      case 'u':
        return "squatu";
      default:
        return string (1, letter);
      }
    }

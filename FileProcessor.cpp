//implementation file
#include "FileProcessor.h"

FileProcessor :: FileProcessor(){} // constructor
FileProcessor :: ~FileProcessor(){} //destructor

//takes in an input file name and an output file name
//takes sentences from the input file, converts to tutnese amd outputs to a new file
void FileProcessor :: processFile(string input_file, string output_file) {
  Translator s;
  ifstream file;
  ofstream file_name(output_file);
  file.open(input_file);
  string line;
  if(file.is_open()) {
    while (getline(file,line)) {
      //outputing the translated sentence to the output file
      file_name << s.translateEnglishSentence(line) << endl;
    }
  }
  else {
    //if input file does not exist
    cout<<"Unable to read file."<<endl;
  }
  file.close();

}

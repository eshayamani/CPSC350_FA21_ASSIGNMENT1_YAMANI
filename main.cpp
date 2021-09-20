//main method
#include "FileProcessor.h"

//invoked by two command line arugments representing input file name and desired output file name
//uses file processor class to translate from english to tutnese
int main(int argc, char**argv) {
  FileProcessor a;
  a.processFile(argv[1],argv[2]);
  cout<<"File has been created"<<endl;

}

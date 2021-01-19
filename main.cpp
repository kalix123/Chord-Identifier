#include <iostream>
#include <string>


#include "identifier.h"

int main() {
  int length;
  
  // std::cout << "How many notes does your chord have? ";
  // std::cin >> length;
  length = 3;
  int notePos[length];
  
  getNotes(notePos, length);
  // snowmanSort(notePos, length);
  for (int i = 0; i < length; i++) {
    std::cout << notePos[i] << " ";
  }
  std::cout << "type: " << chordIdent(notePos, length);
  
  return 0;
}
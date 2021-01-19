#include <iostream>
#include <string>


#include "identifier.h"

int main() {
  int length;
  std::cout << "How many notes does your chord have? ";
  std::cin >> length;
  int notePos[length];
  
  getNotes(notePos, length);
  // snowmanSort(notePos, length);
  for (int i = 0; i < length; i++) {
    std::cout << notePos[i] << " ";
  }
  std::cout << chordIdent(notePos, length);
  
  return 0;
}
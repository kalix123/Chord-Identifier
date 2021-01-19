#include <iostream>
#include <string>


#include "identifier.h"

int main() {
  int distance1;
  int distance2;
  int notePos[3];

  getNotes(notePos,3);
  snowmanSort(notePos, 3);
  for (int i = 0; i < 3; i++) {
    std::cout << notePos[i] << " ";
  }
  std::cout << chordIdent(notePos, 3);
  
  return 0;
}
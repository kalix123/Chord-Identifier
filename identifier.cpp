#include <iostream>
#include <string>

#include "identifier.h"

void getNotes(int notePos[], int length) {
  std::string temp[length];
  for (int i = 0; i < length; i++) {
    std::cout << "Enter a note: ";
    std::cin >> temp[i];
  }
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < length; j++) {
      if (temp[j] == notes[i]) {
        notePos[j] = i;
      }  
    }
  }
}
void snowmanSort(int notePos[], int length) { //bubble sort
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (notePos[j] > notePos[i]) {
        std::swap(notePos[i], notePos[j]);
      }
    }
  }
}
std::string chordIdent(int const notePos[], int length) {
  std::string chordName;
  int distances[length-1];
  for (size_t i = 0; i < length-1; i++) {
    distances[i] = notePos[i+1] - notePos[i];
  }
  
  //triads
  if (length == 3) {
    if (distances[0] == 4 && distances[1] == 3) { //Major triad
      chordName = "Major";
    } else if (distances[0] == 3 && distances[0] == 4) { //Minor triad
      chordName = "Minor";
    } else if (distances[0] == 3 && distances[1] == 3) { //Diminished triad
      chordName = "Diminished";
    } else if (distances[0] == 4 && distances[1] == 4) { //Augmented triad
      chordName = "Augmented";
    }
  }

  return chordName;
}
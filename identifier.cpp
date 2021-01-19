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
    if (temp[0] == notes[i]) {
      notePos[0] = i;
    }
    if (temp[1] == notes[i]) {
      notePos[1] = i;
    }
    if (temp[2] == notes[i]) {
      notePos[2] = i;
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
  
  if (distances[0] == 4) {
    chordName = "Major";
  }
  if (distances[0] == 3) {
    chordName = "Minor";
  }
  return chordName;
}
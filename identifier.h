#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <string>
#include <iostream>

const std::string notes[12] = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
void getNotes(int notePos[], int length);
void snowmanSort(int notePos[], int length);
std::string chordIdent(int const notePos[], int length);
#endif // TICTACTOE_H


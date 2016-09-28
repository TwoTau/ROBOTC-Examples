// This song is the Mario Bros Theme Song

// This is the "note interpreter" where an input (the midiNote from the array below) is converted to its corresponding pitch.
float noteToFreq(float midiNote) {
	return (pow(2, (midiNote-69)/12) * 440);
}
// End "note interpreter"

// This is a play function, were it takes the input "note" and "length" and plays a tone with the playTone function.
void play(float note, int length) {
	length = (float) length / 2;
	if(note > 0) {
		playTone(noteToFreq(note), length * 100);
	}
	wait(length * 100, milliseconds);
	ClearSounds();
}
// End play function

task main() {
	int totalNotes = 96; // sets how many notes in total will be played (so the program knows where to stop playing notes)
	int notes[96][2] = { // sets an array of notes and their lengths to be played
                       // an array is defined like this: <type (int, float, bool, etc)> <name><[number of rows]><[number of columns]>
		{76, 3}, //Line1   // {midiNoteNumber, lengthToBePlayed} // 76 midiNoteNumber = 4th E
		{76, 3},
		{0, 3}, // note 0 = rest
		{76, 3},
		{0, 3},
		{72, 3}, // 4th C
		{76, 3},
		{0, 3},
		{79, 3},
		{0, 9},
		{67, 3},
		{0, 9},

		{72, 3}, //Line2
		{0, 3},
		{0, 3},
		{67, 3},
		{0, 6},
		{64, 3},
		{0, 6},
		{69, 3},
		{0, 3},
		{71, 3},
		{0, 3},
		{70, 3},
		{69, 3},
		{0, 3},
		{67, 3}, 
		{76, 3},
		{79, 3}, 
		{81, 3},
		{0, 3},
		{77, 3},
		{79, 3},
		{0, 3},
		{76, 3},
		{0, 3},
		{72, 3},
		{74, 3},
		{71, 3},
		{0, 6},

		{72, 3}, //Line3
		{0, 3},
		{0, 3},
		{67, 3},
		{0, 6},
		{64, 3},
		{0, 6},
		{69, 3},
		{0, 3},
		{71, 3},
		{0, 3},
		{70, 3},
		{69, 3},
		{0, 3},
		{67, 3}, 
		{76, 3},
		{79, 3}, 
		{81, 3},
		{0, 3},
		{77, 3},
		{79, 3},
		{0, 3},
		{76, 3},
		{0, 3},
		{72, 3},
		{74, 3},
		{71, 3},
		{0, 6},

		{0, 6}, //Line4
		{79, 3},
		{78, 3},
		{77, 3},
		{75, 3},
		{0, 3},
		{76, 3},
		{0, 3},
		{68, 3},
		{69, 3},
		{72, 3},
		{0, 3},
		{69, 3},
		{72, 3},
		{74, 3},
		{0, 6},
		{79, 3},
		{78, 3},
		{77, 3},
		{75, 3},
		{0, 3},
		{76, 3},
		{0, 3},
		{84, 3},
		{0, 3},
		{84, 3},
		{84, 3},
		{0, 9}
	};
  
	while(true) {
		for(int i = 0; i < totalNotes - 1; i++) { // a FOR loop, basically plugs in "i" while increasing i by 1 every time one cycle is completed
			play(notes[i][0], notes[i][1]); // play() is a function defined above with two inputs: play(notes, length) 
                                      // notes[i][0] Takes the "i row" (in math, think of it as the nth row) and the first input (because 0 is the "first number" instead of 1)
                                      // notes[i][1] Takes the "i row" and the second input (because 1 is the "second number")
		}
	}
}

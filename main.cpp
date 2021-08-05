#include <iostream> // std::cout
#include "flavourtext-linux.h" // spicy text
#include <unistd.h> // usleep

int main () {
	srand(time(NULL)); // Set random seed based on the time
	char buffer[30]; // Allocate a buffer for the text
	
	while (true)
	{
		getFullLine(buffer, randomint(10)>5);
		// Slowly print the message
		int cursor_pos = 0;
		while (true)
		{
			char cursor_contents = buffer[cursor_pos];
			if (cursor_contents == 0) break; // Exit on nullbyte
			// Otherwise write it
			std::cout << cursor_contents << std::flush;
			cursor_pos++; // Select next character
			usleep(20000); // Wait for 20ms between characters
		}
		std::cout << std::endl;
		usleep(200000); // Wait for 200ms between lines
	}
	return 0;
}

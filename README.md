The code divides 60 seconds into 6 time segments, with each 10-second interval corresponding to one LED's active period. By checking the current second range, the program determines which LED should be lit.

Implementation of Blinking Logic
Using millis() and lastUpdate, the code creates a timer function that allows the LEDs to blink at a set interval (e.g., 500 milliseconds).
toggleState is the key to controlling the blinking. It is a boolean variable that toggles the LED state—switching from ON to OFF or OFF to ON repeatedly to create the blinking effect.
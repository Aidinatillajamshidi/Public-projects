**System Design - MAGHK - VHDL** <br />

**Midi-keyboard**

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

**As part of System Design, a MIDI-player was designed and built. The project aimed to create a complete functional system on the Altera DE2-115 FPGA board. The task consisted of using the DE2-115 board to modify/analyze a stereo sound signal. The input sound signal was to be converted into digital form and modified on the FPGA. The output sound was then to be sent to the loudspeakers. Relevant information was to be displayed graphically on a screen through VGA attached to the board.**

**A MIDI-player is a device used to send MIDI signals, a standardized communication protocol for communication between electronic musical devices. In this project the MIDI-player can produce notes within one chromatic scale based on keypresses on a PS/2 keyboard connected. The board also allows for passthrough sound from an external sound source with 3.5mm input. The notes are generated within the FPGA and then added to the signal from the external source before outputting both in stereo. Before the output, the sound and balance levels are adjustable from the keyboard. The settings for sound level and balance are shown on the VGA supported display as columns, depicting right and left volume and the played notes will be depicted by their corresponding note letters on the display as well.**

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

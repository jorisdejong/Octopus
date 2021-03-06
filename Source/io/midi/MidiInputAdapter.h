/*
  ==============================================================================

    MidiInputAdapter.h
    Created: 4 Apr 2017 11:05:41pm
    Author:  Joris

	MidiInputAdapter translates incoming midi messages to the correct fixtureparam

  ==============================================================================
*/

#ifndef MIDIINPUTADAPTER_H_INCLUDED
#define MIDIINPUTADAPTER_H_INCLUDED

#include "../InputAdapter.h"

class MidiInputAdapter : 
	public InputAdapter,
	public MidiInputCallback
{
public:
	MidiInputAdapter();
	~MidiInputAdapter();

	void set( int newInput );

	void handleIncomingMidiMessage( juce::MidiInput* source,
		const MidiMessage& message ) override;
	int getIndex();

private:
	ScopedPointer<juce::MidiInput> input;



};





#endif  // MIDIINPUTADAPTER_H_INCLUDED

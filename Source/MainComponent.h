/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "gui/BigDataLookAndFeel.h"
#include "gui/FixtureBlock.h"


//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent :
	public Component,
	public Button::Listener
{
public:
    //==============================================================================
    MainContentComponent();
    ~MainContentComponent();

    void paint (Graphics&) override;
    void resized() override;

	void buttonClicked( Button* b ) override;

private:
	ScopedPointer<BigDataLookAndFeel> lookAndFeel;
	OwnedArray<FixtureBlock> fixtureBlocks;

	ScopedPointer<TextButton> linkAllVideo;
	ScopedPointer<TextButton> linkAllLaser;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED

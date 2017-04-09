/*
  ==============================================================================

    ParamBlock.cpp
    Created: 9 Apr 2017 11:55:23am
    Author:  Joris

  ==============================================================================
*/

#include "../../JuceLibraryCode/JuceHeader.h"
#include "ParamBlock.h"

//==============================================================================
ParamBlock::ParamBlock( FixtureParameter* param )
{
	slider = new ParamSlider( param->getName() );
	addAndMakeVisible( slider );
	param->setSlider( slider );

	for ( ControlHandle* handle : param->getHandles() )
	{
		HandleBlock* block = new HandleBlock( handle );
		blocks.add( block );
		addAndMakeVisible( block );
	}
}

ParamBlock::~ParamBlock()
{
}

void ParamBlock::paint (Graphics& g)
{
   
}

void ParamBlock::resized()
{
	slider->setBoundsRelative( 0.33f, 0.0f, 0.33f, 1.0f );
	for ( auto block : blocks )
	{
		switch ( blocks.indexOf( block ) )
		{
		case 0:
			block->setBoundsRelative( 0.0f, 0.0f, 0.33f, 1.0f );
			break;
		case 1:
			block->setBoundsRelative( 0.66f, 0.0f, 0.33f, 1.0f );
			break;
		}
		
	}

}
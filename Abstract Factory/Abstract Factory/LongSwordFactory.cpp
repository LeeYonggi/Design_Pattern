#include "LongSwordFactory.h"

#include "Animation.h"
#include "LongSwordAnimation.h"
#include "LongSwordBothAnimation.h"

LongSwordFactory::LongSwordFactory()
{
}

LongSwordFactory::~LongSwordFactory()
{
}

Animation* LongSwordFactory::CreateAnimation(AnimationType type)
{
	switch (type)
	{
	case AnimationType::OneHand:
		return new LongSwordAnimation();
		break;
	case AnimationType::BothHand:
		return new LongSwordBothAnimation();
		break;
	}
	return nullptr;
}

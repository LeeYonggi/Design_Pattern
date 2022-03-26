#include "ShortSwordFactory.h"

#include "Animation.h"
#include "ShortSwordAnimation.h"
#include "ShortSwordBothAnimation.h"

ShortSwordFactory::ShortSwordFactory()
{
}

ShortSwordFactory::~ShortSwordFactory()
{
}

Animation* ShortSwordFactory::CreateAnimation(AnimationType type)
{
	switch (type)
	{
	case AnimationType::OneHand:
		return new ShortSwordAnimation();
		break;
	case AnimationType::BothHand:
		return new ShortSwordBothAnimation();
		break;
	}
	return nullptr;
}

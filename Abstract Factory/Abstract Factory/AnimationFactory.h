#pragma once

class Animation;

enum class AnimationType;

class AnimationFactory
{
public:
	AnimationFactory();
	virtual ~AnimationFactory();

public:
	virtual Animation* CreateAnimation(AnimationType type) = 0;
};


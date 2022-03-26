#pragma once

enum class AnimationType : int
{
	OneHand = 0,
	BothHand = 1
};

class Animation
{
public:
	Animation();
	virtual ~Animation();

public:
	virtual void OnAnimation() = 0;
};
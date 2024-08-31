// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"

AAuraEnemy::AAuraEnemy()
{
}

void AAuraEnemy::HighlightActor()
{
	bHighlighted = true;
}

void AAuraEnemy::UnhighlightActor()
{
	bHighlighted = false;
}

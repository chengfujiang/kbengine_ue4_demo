#include "kbengine_ue4_demo.h"
#include "Entity.h"
#include "Spell.h"


Spell::Spell(Entity* entity) :
	self(entity)
{
}

Spell::~Spell()
{
}

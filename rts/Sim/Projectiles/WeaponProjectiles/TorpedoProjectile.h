/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

#ifndef TORPEDO_PROJECTILE_H
#define TORPEDO_PROJECTILE_H

#include "WeaponProjectile.h"

class CTorpedoProjectile : public CWeaponProjectile
{
	CR_DECLARE(CTorpedoProjectile)
public:
	CTorpedoProjectile(const ProjectileParams& params);

	void Update() override;
	void Draw() override;

	virtual int GetProjectilesCount() const override;

private:
	float tracking;
	float maxSpeed;
	float areaOfEffect;
	int nextBubble;
	float texx;
	float texy;
};


#endif /* TORPEDO_PROJECTILE_H */

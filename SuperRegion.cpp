#include "SuperRegion.h"

SuperRegion::SuperRegion()
{
}

SuperRegion::~SuperRegion()
{
}

SuperRegion::SuperRegion(int pReward)
{
    reward=pReward;
}
void SuperRegion::addRegion(int noRegion)
{
    regions.push_back(noRegion);
    nbRegions++;
}
int SuperRegion::getNbRegions()
{
    return regions.size();
}

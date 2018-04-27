#ifndef PLATFORM_H
#define PLATFORM_H
#include <Imagine/Images.h>
using namespace Imagine
/*
1: Basique
2: Fragile
3: droitegauche
4: hautbas
5: evanescentes
6: oneshot
*/

class Platform
{
    int type;
    Image texture;
    int x,y;
    int bonus;
    int sautmax;

public:

    Platform();
    Platform(int type, int x, int y, int bonus);


};

#endif // PLATFORM_H

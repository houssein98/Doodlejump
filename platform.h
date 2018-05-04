#ifndef PLATFORM_H
#define PLATFORM_H
#include <Imagine/Images.h>
#include <player.h>

using namespace Imagine
/*

types de plateformes
1: Basique
2: Fragile
3: droitegauche
4: hautbas
5: evanescentes
6: oneshot
7: juste monstre

types de bonus:
positifs c'est cool
1: ressort
..

10: fusée

negatif c'est des monstres
-1: monstre simple sur plateforme


..
-5: monstre avec plateforme invisible
*/


class Platform
{
    int type;
    Image texture;
    int x,y;
    int bonus;
    int maxjump;

public:

    Platform();
    Platform(int type, int x, int y, int bonus);
    void display();
    bool slide(Player P); //quand on passe ymax en montant on slide
    void vanish();

};

#endif // PLATFORM_H

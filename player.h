#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    float x,y;
    float vx,vy;
    int h;
    int score; //h plus points venant des monstres / bonus
public:
    Player();
    void bounce(Plateform plat);
    bool dir();
    ////void shoot();
};

#endif // PLAYER_H

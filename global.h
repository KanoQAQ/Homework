#ifndef GLOBAL_H
#define GLOBAL_H
#include <QColor>

const int mapsize = 8;

const int blocksize = 40;
const int TOWER_SIZE = blocksize/4;
const int BULLET_SIZE = blocksize/4;
const int ENEMY_SIZE = blocksize/2;

const short MAX_TOWER_LEVEL = 5;

const qreal OPACITY_NORMAL = 1;
const qreal OPACITY_HOVER = 0.6;
const qreal OPACITY_OUT_OF_REACH = 0.2;

const short BLUE_TOWER_NR = 0;
const short GREEN_TOWER_NR = 1;
const short DARKCYAN_TOWER_NR = 2;
const short WHITE_TOWER_NR = 3;
const short YELLOW_TOWER_NR = 4;

const short WIDGET_WAIT_FOR_CLICK_HEX_NR = 0;
const short WIDGET_WITH_TOWER_OPTIONS_NR = 1;
const short WIDGET_TOWER_DETAILS_NR = 2;
const short WIDGET_END_GAME_NR = 3;





//const Qt::GlobalColor HEX_UNDER_MOUSE_COLOR = Qt::green;
//const Qt::GlobalColor HEX_IN_TOWER_RANGE_COLOR = Qt::gray;
const Qt::GlobalColor towergroundcolor = Qt::black;
const Qt::GlobalColor towerbordercolor = Qt::cyan;
//const Qt::GlobalColor EFFECT_PEN_COLOR = Qt::darkMagenta;
//const Qt::GlobalColor ENEMY_COLOR = Qt::yellow;
//const Qt::GlobalColor PATH_COLOR = Qt::white;

#endif // GLOBAL_H

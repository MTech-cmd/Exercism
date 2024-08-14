#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    if (queen_1.column > 7 || queen_1.row > 7 || queen_2.column > 7 || queen_2.row > 7 || (queen_1.column == queen_2.column && queen_1.row == queen_2.row))
    {
        return INVALID_POSITION;
    }

    // Same file
    if (queen_1.column == queen_2.column || queen_1.row == queen_2.row)
    {
        return CAN_ATTACK;
    }

    // Same diagonal
    int delta_row = make_pos(queen_1.row - queen_2.row);
    int delta_col = make_pos(queen_1.column - queen_2.column);

    if (delta_row == delta_col)
    {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}

int make_pos(int n)
{
    if (n >= 0)
    {
        return n;
    }
    else
        return n * -1;
}
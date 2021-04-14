#include "CApp.h"
void CApp::onLoop()
{
    if(temp_card==1)
    {
        queue_cards[card_1_player=(rand() % 52)];
        temp_card++;
    }
    if(temp_card==2)
    {
        random_card_2_player();
        queue_cards[card_2_player];

        random_card_1_computer1();
        queue_cards[card_1_computer1];
        random_card_2_computer1();
        queue_cards[card_2_computer1];

        random_card_1_computer2();
        queue_cards[card_1_computer2];
        random_card_2_computer2();
        queue_cards[card_2_computer2];

        random_card_1_computer3();
        queue_cards[card_1_computer3];
        random_card_2_computer3();
        queue_cards[card_2_computer3];

        random_card_1_computer4();
        queue_cards[card_1_computer4];
        random_card_2_computer4();
        queue_cards[card_2_computer4];

        random_card_1_computer5();
        queue_cards[card_1_computer5];
        random_card_2_computer5();
        queue_cards[card_2_computer5];
        temp_card++;
    }
    if(temp_card==4)
    {
        random_card_1_all();
        queue_cards[card_1_all];
        random_card_2_all();
        queue_cards[card_2_all];
        random_card_3_all();
        queue_cards[card_3_all];
        temp_card++;
    }
    if(temp_card==6)
    {
        random_card_4_all();
        queue_cards[card_4_all];
        temp_card++;
    }
    if(temp_card==8)
    {
        random_card_5_all();
        queue_cards[card_5_all];
        temp_card++;
    }
    if(temp_card==9)
    {
    combinations_check(card_1_player, card_2_player, &check_flush_royalP, &check_straight_flushP, &check_kareP, &check_tripleP, &check_triple2P, &check_doubleP, &check_double2P, &check_double3P, &check_straighP, &check_flushP, &check_full_houseP, &check_highP, &straight_tempP);
    check_temp_card_straight=0;
    check_temp_high_card=0;
    combinations_check(card_1_computer1, card_2_computer1, &check_flush_royalC1, &check_straight_flushC1, &check_kareC1, &check_tripleC1, &check_triple2C1, &check_doubleC1, &check_double2C1, &check_double3C1, &check_straighC1, &check_flushC1, &check_full_houseC1, &check_highC1, &straight_tempC1);
    check_temp_card_straight=0;
    check_temp_high_card=0;
    combinations_check(card_1_computer2, card_2_computer2, &check_flush_royalC2, &check_straight_flushC2, &check_kareC2, &check_tripleC2, &check_triple2C2, &check_doubleC2, &check_double2C2, &check_double3C2, &check_straighC2, &check_flushC2, &check_full_houseC2, &check_highC2, &straight_tempC2);
    check_temp_card_straight=0;
    check_temp_high_card=0;
    combinations_check(card_1_computer3, card_2_computer3, &check_flush_royalC3, &check_straight_flushC3, &check_kareC3, &check_tripleC3, &check_triple2C3, &check_doubleC3, &check_double2C3, &check_double3C3, &check_straighC3, &check_flushC3, &check_full_houseC3, &check_highC3, &straight_tempC3);
    check_temp_card_straight=0;
    check_temp_high_card=0;
    combinations_check(card_1_computer4, card_2_computer4, &check_flush_royalC4, &check_straight_flushC4, &check_kareC4, &check_tripleC4, &check_triple2C4, &check_doubleC4, &check_double2C4, &check_double3C4, &check_straighC4, &check_flushC4, &check_full_houseC4, &check_highC4, &straight_tempC4);
    check_temp_card_straight=0;
    check_temp_high_card=0;
    combinations_check(card_1_computer5, card_2_computer5, &check_flush_royalC5, &check_straight_flushC5, &check_kareC5, &check_tripleC5, &check_triple2C5, &check_doubleC5, &check_double2C5, &check_double3C5, &check_straighC5, &check_flushC5, &check_full_houseC5, &check_highC5, &straight_tempC5);
    }
}

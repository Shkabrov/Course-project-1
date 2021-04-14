#include "CApp.h"

void CApp::onRender()
{

    CSurface::drawSurface(background,screen, 0,0);
    field_draw();

    SDL_UpdateWindowSurface(window);
}
//***********************************
void CApp::field_draw()
{
    if(temp_card>10)
    {if(money<0)temp_card=-10;}
    std::string szPlayer = "Player";
    std::string szComputer1 = "Computer 1";
    std::string szComputer2 = "Computer 2";
    std::string szComputer3 = "Computer 3";
    std::string szComputer4 = "Computer 4";
    std::string szComputer5 = "Computer 5";
    std::string szWin1 = "WINNER";

    std::string szLose = "GAME OVER";
    std::string szWin = "CONGRATULATIONS";
    std::string szComp = "Press LBM to start the game...";
    std::string szDraw = "You have: " + std::to_string(money);
    //-----------------------------
    if(temp_card>0&&temp_card<9)
    {
        CSurface::drawSurface(Back_Card, screen, 0, 275);
        CSurface::drawSurface(Back_Card, screen, 55, 275);
        CSurface::drawSurface(Back_Card, screen, 20, 5);
        CSurface::drawSurface(Back_Card, screen, 75, 5);
        CSurface::drawSurface(Back_Card, screen, 260, 0);
        CSurface::drawSurface(Back_Card, screen, 315, 0);
        CSurface::drawSurface(Back_Card, screen, 510, 5);
        CSurface::drawSurface(Back_Card, screen, 565, 5);
        CSurface::drawSurface(Back_Card, screen, 535, 275);
        CSurface::drawSurface(Back_Card, screen, 590, 275);
    }
    if(win_cardP==1)
    {
        CSurface::drawTextSurface(font,screen,szWin1.c_str(),280,245,255,0,0);
    }
    if(win_cardC1==1)
    {
        CSurface::drawTextSurface(font,screen,szWin1.c_str(),0,215,255,0,0);
    }
    if(win_cardC2==1)
    {
        CSurface::drawTextSurface(font,screen,szWin1.c_str(),20,105,255,0,0);
    }
    if(win_cardC3==1)
    {
        CSurface::drawTextSurface(font,screen,szWin1.c_str(),260,95,255,0,0);
    }
    if(win_cardC4==1)
    {
        CSurface::drawTextSurface(font,screen,szWin1.c_str(),505,105,255,0,0);
    }
    if(win_cardC5==1)
    {
        CSurface::drawTextSurface(font,screen,szWin1.c_str(),535,215,255,0,0);
    }
    if(temp_card>0)
    {
        CSurface::drawTextSurface(font,screen,szPlayer.c_str(),280,265,255,155,0);
        CSurface::drawTextSurface(font,screen,szComputer1.c_str(),0,235,0,255,255);
        CSurface::drawTextSurface(font,screen,szComputer2.c_str(),20,80,0,255,255);
        CSurface::drawTextSurface(font,screen,szComputer3.c_str(),260,70,0,255,255);
        CSurface::drawTextSurface(font,screen,szComputer4.c_str(),505,80,0,255,255);
        CSurface::drawTextSurface(font,screen,szComputer5.c_str(),535,235,0,255,255);
    }
    if(temp_card==0)
    {
        CSurface::drawTextSurface(font,screen,szComp.c_str(),200,175,255,0,0);
    }
    CSurface::drawTextSurface(font,screen,szDraw.c_str(),8,410,0,0,0);
    //-----------------------------
    if(temp_card>0)
    {
        CSurface::drawSurface(queue_cards[card_1_player], screen, 260, 295);
    }
    if(temp_card>1)
    {
        CSurface::drawSurface(queue_cards[card_2_player], screen, 315, 295);
    }
    if(temp_card>4)
    {
        CSurface::drawSurface(queue_cards[card_1_all], screen, 120, 160);
        CSurface::drawSurface(queue_cards[card_2_all], screen, 210, 160);
        CSurface::drawSurface(queue_cards[card_3_all], screen, 300, 160);
    }
     if(temp_card>6)
    {
        CSurface::drawSurface(queue_cards[card_4_all], screen, 390, 160);
    }
    if(temp_card>8)
    {
        CSurface::drawSurface(queue_cards[card_5_all], screen, 480, 160);
    }
    if(temp_card>8)
    {
        CSurface::drawSurface(queue_cards[card_1_computer1], screen, 0, 275);
        CSurface::drawSurface(queue_cards[card_2_computer1], screen, 55, 275);
        CSurface::drawSurface(queue_cards[card_1_computer2], screen, 20, 5);
        CSurface::drawSurface(queue_cards[card_2_computer2], screen, 75, 5);
        CSurface::drawSurface(queue_cards[card_1_computer3], screen, 260, 0);
        CSurface::drawSurface(queue_cards[card_2_computer3], screen, 315, 0);
        CSurface::drawSurface(queue_cards[card_1_computer4], screen, 510, 5);
        CSurface::drawSurface(queue_cards[card_2_computer4], screen, 565, 5);
        CSurface::drawSurface(queue_cards[card_1_computer5], screen, 535, 275);
        CSurface::drawSurface(queue_cards[card_2_computer5], screen, 590, 275);
    }
    if(temp_card==9)
    {
        round_card++;
        check_card_win();
//====================================================================================================================================================================

        check_card_win( &check_flush_royalC1, &check_straight_flushC1, &check_kareC1, &check_tripleC1, &check_triple2C1, &check_doubleC1,
     &check_double2C1, &check_double3C1, &check_straighC1, &check_flushC1, &check_full_houseC1, &check_highC1, &straight_tempC1, &check_fh_double_C1,
     &check_fh_triple_C1, &check_tr_triple_C1, &check_db_double_C1, &check_2db_double_C1, &win_cardC1,

     &check_flush_royalP, &check_straight_flushP, &check_kareP, &check_tripleP, &check_triple2P, &check_doubleP, &check_double2P,
     &check_double3P, &check_straighP, &check_flushP, &check_full_houseP, &check_highP, &straight_tempP, &check_fh_double_P, &check_fh_triple_P,
     &check_tr_triple_P, &check_db_double_P, &check_2db_double_P, &win_cardP,

     &check_flush_royalC2, &check_straight_flushC2, &check_kareC2, &check_tripleC2, &check_triple2C2, &check_doubleC2, &check_double2C2, &check_double3C2,
     &check_straighC2, &check_flushC2, &check_full_houseC2, &check_highC2, &straight_tempC2, &check_fh_double_C2, &check_fh_triple_C2, &check_tr_triple_C2,
     &check_db_double_C2, &check_2db_double_C2, &win_cardC2,

     &check_flush_royalC3, &check_straight_flushC3, &check_kareC3, &check_tripleC3, &check_triple2C3, &check_doubleC3, &check_double2C3,
     &check_double3C3, &check_straighC3, &check_flushC3, &check_full_houseC3, &check_highC3, &straight_tempC3, &check_fh_double_C3, &check_fh_triple_C3, &check_tr_triple_C3,
     &check_db_double_C3, &check_2db_double_C3, &win_cardC3,

     &check_flush_royalC4, &check_straight_flushC4, &check_kareC4, &check_tripleC4, &check_triple2C4, &check_doubleC4, &check_double2C4, &check_double3C4,
     &check_straighC4, &check_flushC4, &check_full_houseC4, &check_highC4, &straight_tempC4, &check_fh_double_C4, &check_fh_triple_C4, &check_tr_triple_C4,
     &check_db_double_C4, &check_2db_double_C4, &win_cardC4,

     &check_flush_royalC5, &check_straight_flushC5, &check_kareC5, &check_tripleC5, &check_triple2C5, &check_doubleC5, &check_double2C5, &check_double3C5, &check_straighC5,
     &check_flushC5, &check_full_houseC5, &check_highC5, &straight_tempC5, &check_fh_double_C5, &check_fh_triple_C5, &check_tr_triple_C5,
     &check_db_double_C5, &check_2db_double_C5, &win_cardC5);
//====================================================================================================================================================================
        check_card_win( &check_flush_royalC2, &check_straight_flushC2, &check_kareC2, &check_tripleC2, &check_triple2C2, &check_doubleC2, &check_double2C2, &check_double3C2,
     &check_straighC2, &check_flushC2, &check_full_houseC2, &check_highC2, &straight_tempC2, &check_fh_double_C2, &check_fh_triple_C2, &check_tr_triple_C2,
     &check_db_double_C2, &check_2db_double_C2, &win_cardC2,

     &check_flush_royalC1, &check_straight_flushC1, &check_kareC1, &check_tripleC1, &check_triple2C1, &check_doubleC1,
     &check_double2C1, &check_double3C1, &check_straighC1, &check_flushC1, &check_full_houseC1, &check_highC1, &straight_tempC1, &check_fh_double_C1,
     &check_fh_triple_C1, &check_tr_triple_C1, &check_db_double_C1, &check_2db_double_C1, &win_cardC1,

     &check_flush_royalP, &check_straight_flushP, &check_kareP, &check_tripleP, &check_triple2P, &check_doubleP, &check_double2P,
     &check_double3P, &check_straighP, &check_flushP, &check_full_houseP, &check_highP, &straight_tempP, &check_fh_double_P, &check_fh_triple_P,
     &check_tr_triple_P, &check_db_double_P, &check_2db_double_P, &win_cardP,

     &check_flush_royalC3, &check_straight_flushC3, &check_kareC3, &check_tripleC3, &check_triple2C3, &check_doubleC3, &check_double2C3,
     &check_double3C3, &check_straighC3, &check_flushC3, &check_full_houseC3, &check_highC3, &straight_tempC3, &check_fh_double_C3, &check_fh_triple_C3, &check_tr_triple_C3,
     &check_db_double_C3, &check_2db_double_C3, &win_cardC3,

     &check_flush_royalC4, &check_straight_flushC4, &check_kareC4, &check_tripleC4, &check_triple2C4, &check_doubleC4, &check_double2C4, &check_double3C4,
     &check_straighC4, &check_flushC4, &check_full_houseC4, &check_highC4, &straight_tempC4, &check_fh_double_C4, &check_fh_triple_C4, &check_tr_triple_C4,
     &check_db_double_C4, &check_2db_double_C4, &win_cardC4,

     &check_flush_royalC5, &check_straight_flushC5, &check_kareC5, &check_tripleC5, &check_triple2C5, &check_doubleC5, &check_double2C5, &check_double3C5, &check_straighC5,
     &check_flushC5, &check_full_houseC5, &check_highC5, &straight_tempC5, &check_fh_double_C5, &check_fh_triple_C5, &check_tr_triple_C5,
     &check_db_double_C5, &check_2db_double_C5, &win_cardC5);
//====================================================================================================================================================================
        check_card_win(&check_flush_royalC3, &check_straight_flushC3, &check_kareC3, &check_tripleC3, &check_triple2C3, &check_doubleC3, &check_double2C3,
     &check_double3C3, &check_straighC3, &check_flushC3, &check_full_houseC3, &check_highC3, &straight_tempC3, &check_fh_double_C3, &check_fh_triple_C3, &check_tr_triple_C3,
     &check_db_double_C3, &check_2db_double_C3, &win_cardC3,

     &check_flush_royalC1, &check_straight_flushC1, &check_kareC1, &check_tripleC1, &check_triple2C1, &check_doubleC1,
     &check_double2C1, &check_double3C1, &check_straighC1, &check_flushC1, &check_full_houseC1, &check_highC1, &straight_tempC1, &check_fh_double_C1,
     &check_fh_triple_C1, &check_tr_triple_C1, &check_db_double_C1, &check_2db_double_C1, &win_cardC1,

     &check_flush_royalC2, &check_straight_flushC2, &check_kareC2, &check_tripleC2, &check_triple2C2, &check_doubleC2, &check_double2C2, &check_double3C2,
     &check_straighC2, &check_flushC2, &check_full_houseC2, &check_highC2, &straight_tempC2, &check_fh_double_C2, &check_fh_triple_C2, &check_tr_triple_C2,
     &check_db_double_C2, &check_2db_double_C2, &win_cardC2,

     &check_flush_royalP, &check_straight_flushP, &check_kareP, &check_tripleP, &check_triple2P, &check_doubleP, &check_double2P,
     &check_double3P, &check_straighP, &check_flushP, &check_full_houseP, &check_highP, &straight_tempP, &check_fh_double_P, &check_fh_triple_P,
     &check_tr_triple_P, &check_db_double_P, &check_2db_double_P, &win_cardP,

     &check_flush_royalC4, &check_straight_flushC4, &check_kareC4, &check_tripleC4, &check_triple2C4, &check_doubleC4, &check_double2C4, &check_double3C4,
     &check_straighC4, &check_flushC4, &check_full_houseC4, &check_highC4, &straight_tempC4, &check_fh_double_C4, &check_fh_triple_C4, &check_tr_triple_C4,
     &check_db_double_C4, &check_2db_double_C4, &win_cardC4,

     &check_flush_royalC5, &check_straight_flushC5, &check_kareC5, &check_tripleC5, &check_triple2C5, &check_doubleC5, &check_double2C5, &check_double3C5, &check_straighC5,
     &check_flushC5, &check_full_houseC5, &check_highC5, &straight_tempC5, &check_fh_double_C5, &check_fh_triple_C5, &check_tr_triple_C5,
     &check_db_double_C5, &check_2db_double_C5, &win_cardC5);
//====================================================================================================================================================================
        check_card_win(&check_flush_royalC4, &check_straight_flushC4, &check_kareC4, &check_tripleC4, &check_triple2C4, &check_doubleC4, &check_double2C4, &check_double3C4,
     &check_straighC4, &check_flushC4, &check_full_houseC4, &check_highC4, &straight_tempC4, &check_fh_double_C4, &check_fh_triple_C4, &check_tr_triple_C4,
     &check_db_double_C4, &check_2db_double_C4, &win_cardC4,

     &check_flush_royalC1, &check_straight_flushC1, &check_kareC1, &check_tripleC1, &check_triple2C1, &check_doubleC1,
     &check_double2C1, &check_double3C1, &check_straighC1, &check_flushC1, &check_full_houseC1, &check_highC1, &straight_tempC1, &check_fh_double_C1,
     &check_fh_triple_C1, &check_tr_triple_C1, &check_db_double_C1, &check_2db_double_C1, &win_cardC1,

     &check_flush_royalC2, &check_straight_flushC2, &check_kareC2, &check_tripleC2, &check_triple2C2, &check_doubleC2, &check_double2C2, &check_double3C2,
     &check_straighC2, &check_flushC2, &check_full_houseC2, &check_highC2, &straight_tempC2, &check_fh_double_C2, &check_fh_triple_C2, &check_tr_triple_C2,
     &check_db_double_C2, &check_2db_double_C2, &win_cardC2,

     &check_flush_royalC3, &check_straight_flushC3, &check_kareC3, &check_tripleC3, &check_triple2C3, &check_doubleC3, &check_double2C3,
     &check_double3C3, &check_straighC3, &check_flushC3, &check_full_houseC3, &check_highC3, &straight_tempC3, &check_fh_double_C3, &check_fh_triple_C3, &check_tr_triple_C3,
     &check_db_double_C3, &check_2db_double_C3, &win_cardC3,

     &check_flush_royalP, &check_straight_flushP, &check_kareP, &check_tripleP, &check_triple2P, &check_doubleP, &check_double2P,
     &check_double3P, &check_straighP, &check_flushP, &check_full_houseP, &check_highP, &straight_tempP, &check_fh_double_P, &check_fh_triple_P,
     &check_tr_triple_P, &check_db_double_P, &check_2db_double_P, &win_cardP,

     &check_flush_royalC5, &check_straight_flushC5, &check_kareC5, &check_tripleC5, &check_triple2C5, &check_doubleC5, &check_double2C5, &check_double3C5, &check_straighC5,
     &check_flushC5, &check_full_houseC5, &check_highC5, &straight_tempC5, &check_fh_double_C5, &check_fh_triple_C5, &check_tr_triple_C5,
     &check_db_double_C5, &check_2db_double_C5, &win_cardC5);
//====================================================================================================================================================================
        check_card_win(&check_flush_royalC5, &check_straight_flushC5, &check_kareC5, &check_tripleC5, &check_triple2C5, &check_doubleC5, &check_double2C5, &check_double3C5, &check_straighC5,
     &check_flushC5, &check_full_houseC5, &check_highC5, &straight_tempC5, &check_fh_double_C5, &check_fh_triple_C5, &check_tr_triple_C5,
     &check_db_double_C5, &check_2db_double_C5, &win_cardC5,

     &check_flush_royalC1, &check_straight_flushC1, &check_kareC1, &check_tripleC1, &check_triple2C1, &check_doubleC1,
     &check_double2C1, &check_double3C1, &check_straighC1, &check_flushC1, &check_full_houseC1, &check_highC1, &straight_tempC1, &check_fh_double_C1,
     &check_fh_triple_C1, &check_tr_triple_C1, &check_db_double_C1, &check_2db_double_C1, &win_cardC1,

     &check_flush_royalC2, &check_straight_flushC2, &check_kareC2, &check_tripleC2, &check_triple2C2, &check_doubleC2, &check_double2C2, &check_double3C2,
     &check_straighC2, &check_flushC2, &check_full_houseC2, &check_highC2, &straight_tempC2, &check_fh_double_C2, &check_fh_triple_C2, &check_tr_triple_C2,
     &check_db_double_C2, &check_2db_double_C2, &win_cardC2,

     &check_flush_royalC3, &check_straight_flushC3, &check_kareC3, &check_tripleC3, &check_triple2C3, &check_doubleC3, &check_double2C3,
     &check_double3C3, &check_straighC3, &check_flushC3, &check_full_houseC3, &check_highC3, &straight_tempC3, &check_fh_double_C3, &check_fh_triple_C3, &check_tr_triple_C3,
     &check_db_double_C3, &check_2db_double_C3, &win_cardC3,

     &check_flush_royalC4, &check_straight_flushC4, &check_kareC4, &check_tripleC4, &check_triple2C4, &check_doubleC4, &check_double2C4, &check_double3C4,
     &check_straighC4, &check_flushC4, &check_full_houseC4, &check_highC4, &straight_tempC4, &check_fh_double_C4, &check_fh_triple_C4, &check_tr_triple_C4,
     &check_db_double_C4, &check_2db_double_C4, &win_cardC4,

     &check_flush_royalP, &check_straight_flushP, &check_kareP, &check_tripleP, &check_triple2P, &check_doubleP, &check_double2P,
     &check_double3P, &check_straighP, &check_flushP, &check_full_houseP, &check_highP, &straight_tempP, &check_fh_double_P, &check_fh_triple_P,
     &check_tr_triple_P, &check_db_double_P, &check_2db_double_P, &win_cardP);
//====================================================================================================================================================================

        temp_card++;
    }
    if(temp_card<-3&&temp_card>-100)
    {
    if(money<0)
    {
    CSurface::drawTextSurface(font,screen,szLose.c_str(),265,175,255,0,0);
        if(temp_lose==0)
        {
        temp_card=-25;
        Mix_PlayChannel(-1,snd_draw,0);
        SDL_Delay(4000);
        Mix_PlayChannel(-1,snd_lose,0);
        SDL_Delay(1000);
        temp_lose++;
        }

//--------------player--------------------
        check_flush_royalP=0;
        check_straight_flushP=0;
        check_kareP=0;
        check_tripleP=0;
        check_triple2P=0;
        check_doubleP=0;
        check_double2P=0;
        check_double3P=0;
        check_straighP=0;
        check_flushP=0;
        check_full_houseP=0;
        check_highP=0;
        straight_tempP=10;
        proverkaP=0;
        check_fh_double_P=0;
        check_fh_triple_P=0;
        check_tr_triple_P=0;
        check_db_double_P=0;
        check_2db_double_P=0;
        win_cardP=0;
//--------------player(END)--------------
//--------------computer-1---------------
        check_flush_royalC1=0;
        check_straight_flushC1=0;
        check_kareC1=0;
        check_tripleC1=0;
        check_triple2C1=0;
        check_doubleC1=0;
        check_double2C1=0;
        check_double3C1=0;
        check_straighC1=0;
        check_flushC1=0;
        check_full_houseC1=0;
        check_highC1=0;
        straight_tempC1=10;
        check_fh_double_C1=0;
        check_fh_triple_C1=0;
        check_tr_triple_C1=0;
        check_db_double_C1=0;
        check_2db_double_C1=0;
        win_cardC1=0;
//--------------computer-1(END)----------
//--------------computer-2---------------
        check_flush_royalC2=0;
        check_straight_flushC2=0;
        check_kareC2=0;
        check_tripleC2=0;
        check_triple2C2=0;
        check_doubleC2=0;
        check_double2C2=0;
        check_double3C2=0;
        check_straighC2=0;
        check_flushC2=0;
        check_full_houseC2=0;
        check_highC2=0;
        straight_tempC2=10;
        check_fh_double_C2=0;
        check_fh_triple_C2=0;
        check_tr_triple_C2=0;
        check_db_double_C2=0;
        check_2db_double_C2=0;
        win_cardC2=0;
//--------------computer-2(END)----------
//--------------computer-3---------------
        check_flush_royalC3=0;
        check_straight_flushC3=0;
        check_kareC3=0;
        check_tripleC3=0;
        check_triple2C3=0;
        check_doubleC3=0;
        check_double2C3=0;
        check_double3C3=0;
        check_straighC3=0;
        check_flushC3=0;
        check_full_houseC3=0;
        check_highC3=0;
        straight_tempC3=10;
        check_fh_double_C3=0;
        check_fh_triple_C3=0;
        check_tr_triple_C3=0;
        check_db_double_C3=0;
        check_2db_double_C3=0;
        win_cardC3=0;
//--------------computer-3(END)----------
//--------------computer-4---------------
        check_flush_royalC4=0;
        check_straight_flushC4=0;
        check_kareC4=0;
        check_tripleC4=0;
        check_triple2C4=0;
        check_doubleC4=0;
        check_double2C4=0;
        check_double3C4=0;
        check_straighC4=0;
        check_flushC4=0;
        check_full_houseC4=0;
        check_highC4=0;
        straight_tempC4=10;
        check_fh_double_C4=0;
        check_fh_triple_C4=0;
        check_tr_triple_C4=0;
        check_db_double_C4=0;
        check_2db_double_C4=0;
        win_cardC4=0;
//--------------computer-4(END)----------
//--------------computer-5---------------
        check_flush_royalC5=0;
        check_straight_flushC5=0;
        check_kareC5=0;
        check_tripleC5=0;
        check_triple2C5=0;
        check_doubleC5=0;
        check_double2C5=0;
        check_double3C5=0;
        check_straighC5=0;
        check_flushC5=0;
        check_full_houseC5=0;
        check_highC5=0;
        straight_tempC5=10;
        check_fh_double_C5=0;
        check_fh_triple_C5=0;
        check_tr_triple_C5=0;
        check_db_double_C5=0;
        check_2db_double_C5=0;
        win_cardC5=0;
//--------------computer-5(END)----------
    counts_combinations=0;
    check_temp_card_straight=0;
    check_temp_high_card=0;
    moneybox=0;
    }
    }
    //if(temp_card==11)money=10000;
    if(money>4000)
    {
        temp_card=-1000;
        if(temp_card<-950)
        {
            CSurface::drawTextSurface(font,screen,szWin.c_str(),230,175,255,255,0);
            if(temp_win==0)
            {
                Mix_PlayChannel(-1,snd_win,0);
                temp_win++;
            }
        }

//--------------player--------------------
        check_flush_royalP=0;
        check_straight_flushP=0;
        check_kareP=0;
        check_tripleP=0;
        check_triple2P=0;
        check_doubleP=0;
        check_double2P=0;
        check_double3P=0;
        check_straighP=0;
        check_flushP=0;
        check_full_houseP=0;
        check_highP=0;
        straight_tempP=10;
        proverkaP=0;
        check_fh_double_P=0;
        check_fh_triple_P=0;
        check_tr_triple_P=0;
        check_db_double_P=0;
        check_2db_double_P=0;
        win_cardP=0;
//--------------player(END)--------------
//--------------computer-1---------------
        check_flush_royalC1=0;
        check_straight_flushC1=0;
        check_kareC1=0;
        check_tripleC1=0;
        check_triple2C1=0;
        check_doubleC1=0;
        check_double2C1=0;
        check_double3C1=0;
        check_straighC1=0;
        check_flushC1=0;
        check_full_houseC1=0;
        check_highC1=0;
        straight_tempC1=10;
        check_fh_double_C1=0;
        check_fh_triple_C1=0;
        check_tr_triple_C1=0;
        check_db_double_C1=0;
        check_2db_double_C1=0;
        win_cardC1=0;
//--------------computer-1(END)----------
//--------------computer-2---------------
        check_flush_royalC2=0;
        check_straight_flushC2=0;
        check_kareC2=0;
        check_tripleC2=0;
        check_triple2C2=0;
        check_doubleC2=0;
        check_double2C2=0;
        check_double3C2=0;
        check_straighC2=0;
        check_flushC2=0;
        check_full_houseC2=0;
        check_highC2=0;
        straight_tempC2=10;
        check_fh_double_C2=0;
        check_fh_triple_C2=0;
        check_tr_triple_C2=0;
        check_db_double_C2=0;
        check_2db_double_C2=0;
        win_cardC2=0;
//--------------computer-2(END)----------
//--------------computer-3---------------
        check_flush_royalC3=0;
        check_straight_flushC3=0;
        check_kareC3=0;
        check_tripleC3=0;
        check_triple2C3=0;
        check_doubleC3=0;
        check_double2C3=0;
        check_double3C3=0;
        check_straighC3=0;
        check_flushC3=0;
        check_full_houseC3=0;
        check_highC3=0;
        straight_tempC3=10;
        check_fh_double_C3=0;
        check_fh_triple_C3=0;
        check_tr_triple_C3=0;
        check_db_double_C3=0;
        check_2db_double_C3=0;
        win_cardC3=0;
//--------------computer-3(END)----------
//--------------computer-4---------------
        check_flush_royalC4=0;
        check_straight_flushC4=0;
        check_kareC4=0;
        check_tripleC4=0;
        check_triple2C4=0;
        check_doubleC4=0;
        check_double2C4=0;
        check_double3C4=0;
        check_straighC4=0;
        check_flushC4=0;
        check_full_houseC4=0;
        check_highC4=0;
        straight_tempC4=10;
        check_fh_double_C4=0;
        check_fh_triple_C4=0;
        check_tr_triple_C4=0;
        check_db_double_C4=0;
        check_2db_double_C4=0;
        win_cardC4=0;
//--------------computer-4(END)----------
//--------------computer-5---------------
        check_flush_royalC5=0;
        check_straight_flushC5=0;
        check_kareC5=0;
        check_tripleC5=0;
        check_triple2C5=0;
        check_doubleC5=0;
        check_double2C5=0;
        check_double3C5=0;
        check_straighC5=0;
        check_flushC5=0;
        check_full_houseC5=0;
        check_highC5=0;
        straight_tempC5=10;
        check_fh_double_C5=0;
        check_fh_triple_C5=0;
        check_tr_triple_C5=0;
        check_db_double_C5=0;
        check_2db_double_C5=0;
        win_cardC5=0;
//--------------computer-5(END)----------
    counts_combinations=0;
    check_temp_card_straight=0;
    check_temp_high_card=0;
    moneybox=0;
    }
}

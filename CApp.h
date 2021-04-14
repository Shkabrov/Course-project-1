#ifndef CAPP_H_INCLUDED
#define CAPP_H_INCLUDED

#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include "CEvent.h"
#include "CSurface.h"
#include "Defines.h"
#include <math.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <iostream>
#include <windows.h>

using namespace std;

class CApp:public CEvent
{
public:
    CApp();
    virtual ~CApp();

    int onExecute();

    virtual void onEvent(SDL_Event* e);//Обработка событий
    virtual void onExit();
    virtual void onLButtonDown(int xm, int ym);

private:

    bool running;

    SDL_Window *window;
    SDL_Surface* screen;

    SDL_Surface* background;
//--------------CARDS--------------------
    SDL_Surface* cart_2_spades;
    SDL_Surface* cart_2_clubs;
    SDL_Surface* cart_2_hearts;
    SDL_Surface* cart_2_diamonds;

    SDL_Surface* cart_3_spades;
    SDL_Surface* cart_3_clubs;
    SDL_Surface* cart_3_hearts;
    SDL_Surface* cart_3_diamonds;

    SDL_Surface* cart_4_spades;
    SDL_Surface* cart_4_clubs;
    SDL_Surface* cart_4_hearts;
    SDL_Surface* cart_4_diamonds;

    SDL_Surface* cart_5_spades;
    SDL_Surface* cart_5_clubs;
    SDL_Surface* cart_5_hearts;
    SDL_Surface* cart_5_diamonds;

    SDL_Surface* cart_6_spades;
    SDL_Surface* cart_6_clubs;
    SDL_Surface* cart_6_hearts;
    SDL_Surface* cart_6_diamonds;

    SDL_Surface* cart_7_spades;
    SDL_Surface* cart_7_clubs;
    SDL_Surface* cart_7_hearts;
    SDL_Surface* cart_7_diamonds;

    SDL_Surface* cart_8_spades;
    SDL_Surface* cart_8_clubs;
    SDL_Surface* cart_8_hearts;
    SDL_Surface* cart_8_diamonds;

    SDL_Surface* cart_9_spades;
    SDL_Surface* cart_9_clubs;
    SDL_Surface* cart_9_hearts;
    SDL_Surface* cart_9_diamonds;

    SDL_Surface* cart_10_spades;
    SDL_Surface* cart_10_clubs;
    SDL_Surface* cart_10_hearts;
    SDL_Surface* cart_10_diamonds;

    SDL_Surface* cart_J_spades;
    SDL_Surface* cart_J_clubs;
    SDL_Surface* cart_J_hearts;
    SDL_Surface* cart_J_diamonds;

    SDL_Surface* cart_Q_spades;
    SDL_Surface* cart_Q_clubs;
    SDL_Surface* cart_Q_hearts;
    SDL_Surface* cart_Q_diamonds;

    SDL_Surface* cart_K_spades;
    SDL_Surface* cart_K_clubs;
    SDL_Surface* cart_K_hearts;
    SDL_Surface* cart_K_diamonds;

    SDL_Surface* cart_A_spades;
    SDL_Surface* cart_A_clubs;
    SDL_Surface* cart_A_hearts;
    SDL_Surface* cart_A_diamonds;

    SDL_Surface* Back_Card;
//--------------CARDS--------------------
    SDL_Surface* queue_cards[52];
//--------------CARDS--------------------
    Mix_Chunk* snd_draw;
    Mix_Chunk* snd_lose;
    Mix_Chunk* snd_win;
    Mix_Chunk* snd_place;

    TTF_Font* font;
//--------------CARDS--------------------
    int temp_card=0;
    int money=2000;
    int moneybox=0;
    int card_1_player;
    int card_2_player;
    int card_1_computer1;
    int card_2_computer1;
    int card_1_computer2;
    int card_2_computer2;
    int card_1_computer3;
    int card_2_computer3;
    int card_1_computer4;
    int card_2_computer4;
    int card_1_computer5;
    int card_2_computer5;
    int card_1_all;
    int card_2_all;
    int card_3_all;
    int card_4_all;
    int card_5_all;
    int card_1_temp;
    int card_2_temp;
    int card_3_temp;
    int counts_combinations=0;
    int check_temp_card_straight=0;
    int check_temp_high_card=0;
    int round_card=0;
//--------------player--------------------
    int check_flush_royalP=0;
    int check_straight_flushP=0;
    int check_kareP=0;
    int check_tripleP=0;
    int check_triple2P=0;
    int check_doubleP=0;
    int check_double2P=0;
    int check_double3P=0;
    int check_straighP=0;
    int check_flushP=0;
    int check_full_houseP=0;
    int check_highP=0;
    int straight_tempP=11;
    int proverkaP=0;
    int check_fh_double_P=0;
    int check_fh_triple_P=0;
    int check_tr_triple_P=0;
    int check_db_double_P=0;
    int check_2db_double_P=0;
    int temp_lose=0;
    int temp_win=0;
    int win_cardP=0;
//--------------player(END)--------------
//--------------computer-1---------------
    int check_flush_royalC1=0;
    int check_straight_flushC1=0;
    int check_kareC1=0;
    int check_tripleC1=0;
    int check_triple2C1=0;
    int check_doubleC1=0;
    int check_double2C1=0;
    int check_double3C1=0;
    int check_straighC1=0;
    int check_flushC1=0;
    int check_full_houseC1=0;
    int check_highC1=0;
    int straight_tempC1=11;
    int check_fh_double_C1=0;
    int check_fh_triple_C1=0;
    int check_tr_triple_C1=0;
    int check_db_double_C1=0;
    int check_2db_double_C1=0;
    int win_cardC1=0;
    int proverkaT=0;
//--------------computer-1(END)----------
//--------------computer-2---------------
    int check_flush_royalC2=0;
    int check_straight_flushC2=0;
    int check_kareC2=0;
    int check_tripleC2=0;
    int check_triple2C2=0;
    int check_doubleC2=0;
    int check_double2C2=0;
    int check_double3C2=0;
    int check_straighC2=0;
    int check_flushC2=0;
    int check_full_houseC2=0;
    int check_highC2=0;
    int straight_tempC2=11;
    int check_fh_double_C2=0;
    int check_fh_triple_C2=0;
    int check_tr_triple_C2=0;
    int check_db_double_C2=0;
    int check_2db_double_C2=0;
    int win_cardC2=0;
//--------------computer-2(END)----------
//--------------computer-3---------------
    int check_flush_royalC3=0;
    int check_straight_flushC3=0;
    int check_kareC3=0;
    int check_tripleC3=0;
    int check_triple2C3=0;
    int check_doubleC3=0;
    int check_double2C3=0;
    int check_double3C3=0;
    int check_straighC3=0;
    int check_flushC3=0;
    int check_full_houseC3=0;
    int check_highC3=0;
    int straight_tempC3=11;
    int check_fh_double_C3=0;
    int check_fh_triple_C3=0;
    int check_tr_triple_C3=0;
    int check_db_double_C3=0;
    int check_2db_double_C3=0;
    int win_cardC3=0;
//--------------computer-3(END)----------
//--------------computer-4---------------
    int check_flush_royalC4=0;
    int check_straight_flushC4=0;
    int check_kareC4=0;
    int check_tripleC4=0;
    int check_triple2C4=0;
    int check_doubleC4=0;
    int check_double2C4=0;
    int check_double3C4=0;
    int check_straighC4=0;
    int check_flushC4=0;
    int check_full_houseC4=0;
    int check_highC4=0;
    int straight_tempC4=11;
    int check_fh_double_C4=0;
    int check_fh_triple_C4=0;
    int check_tr_triple_C4=0;
    int check_db_double_C4=0;
    int check_2db_double_C4=0;
    int win_cardC4=0;
//--------------computer-4(END)----------
//--------------computer-5---------------
    int check_flush_royalC5=0;
    int check_straight_flushC5=0;
    int check_kareC5=0;
    int check_tripleC5=0;
    int check_triple2C5=0;
    int check_doubleC5=0;
    int check_double2C5=0;
    int check_double3C5=0;
    int check_straighC5=0;
    int check_flushC5=0;
    int check_full_houseC5=0;
    int check_highC5=0;
    int straight_tempC5=11;
    int check_fh_double_C5=0;
    int check_fh_triple_C5=0;
    int check_tr_triple_C5=0;
    int check_db_double_C5=0;
    int check_2db_double_C5=0;
    int win_cardC5=0;
//--------------computer-5(END)----------
//--------------CARDS--------------------
    bool onInit();//Возвращает значение 1 или 0 в зависимости запустилась ли программа
    void onLoop();//Обновление игрового процесса
    void onRender();//Перерисовка
    void onQuit();//Закрытие игры


    void field_init();
    void field_draw();
//--------------CARDS--------------------
    void random_card_2_player();
    void random_card_1_computer1();
    void random_card_2_computer1();
    void random_card_1_computer2();
    void random_card_2_computer2();
    void random_card_1_computer3();
    void random_card_2_computer3();
    void random_card_1_computer4();
    void random_card_2_computer4();
    void random_card_1_computer5();
    void random_card_2_computer5();
    void random_card_1_all();
    void random_card_2_all();
    void random_card_3_all();
    void random_card_4_all();
    void random_card_5_all();
    void fold_card();
    void check_card();
    void bet_card();
    void combinations_check(int card1, int card2, int *check_flush_royal, int *check_straight_flush, int *check_kare, int *check_triple, int *check_triple2, int *check_double, int *check_double2, int *check_double3, int *check_straigh, int *check_flush, int *check_full_house, int *check_high, int *straight_temp);
    void combinations_double(int card1, int card2, int *check_double, int *check_double2, int *check_double3);
    void combinations_triple(int card1, int card2, int card3, int *check_triple, int *check_triple2);
    void combinations_kare(int card1, int card2, int card3, int card4, int *check_kare);
    void combinations_straight_flash(int card1, int card2, int card3, int card4, int card5, int *check_flush_royal, int *check_straight_flush);
    void combinations_flash(int card1, int card2, int card3, int card4, int card5, int *check_flush);
    void combinations_straight(int card1, int card2, int card3, int card4, int card5, int NS, int NS1, int temp, int *check_straigh);
    void combinations_full_house(int *check_full_house, int *check_double, int *check_double2, int *check_double3, int *check_triple, int *check_triple2);
    int high_card(int card1);
    void compare_temp(int temp1,int temp2,int temp3,int temp4,int temp5,int temp6,int temp7, int *check_high);
    void high_card_all(int card1,int card2, int *check_high);
    void check_card_win();
    void check_card_win(int *check_flush_royalP,int *check_straight_flushP,int *check_kareP,int *check_tripleP,int *check_triple2P,int *check_doubleP,int *check_double2P,
    int *check_double3P,int *check_straighP,int *check_flushP,int *check_full_houseP,int *check_highP,int *straight_tempP,int *check_fh_double_P,int *check_fh_triple_P,
    int *check_tr_triple_P,int *check_db_double_P,int *check_2db_double_P,int *win_cardP,

    int *check_flush_royalC1,int *check_straight_flushC1,int *check_kareC1,int *check_tripleC1,int *check_triple2C1,int *check_doubleC1,
    int *check_double2C1,int *check_double3C1,int *check_straighC1,int *check_flushC1,int *check_full_houseC1,int *check_highC1,int *straight_tempC1,int *check_fh_double_C1,
    int *check_fh_triple_C1,int *check_tr_triple_C1,int *check_db_double_C1,int *check_2db_double_C1,int *win_cardC1,

    int *check_flush_royalC2,int *check_straight_flushC2,int *check_kareC2,int *check_tripleC2,int *check_triple2C2,int *check_doubleC2,int *check_double2C2,int *check_double3C2,
    int *check_straighC2,int *check_flushC2,int *check_full_houseC2,int *check_highC2,int *straight_tempC2,int *check_fh_double_C2,int *check_fh_triple_C2,int *check_tr_triple_C2,
    int *check_db_double_C2,int *check_2db_double_C2,int *win_cardC2,

    int *check_flush_royalC3,int *check_straight_flushC3,int *check_kareC3,int *check_tripleC3,int *check_triple2C3,int *check_doubleC3,int *check_double2C3,
    int *check_double3C3,int *check_straighC3,int *check_flushC3,int *check_full_houseC3,int *check_highC3,int *straight_tempC3,int *check_fh_double_C3,int *check_fh_triple_C3,int *check_tr_triple_C3,
    int *check_db_double_C3,int *check_2db_double_C3,int *win_cardC3,

    int *check_flush_royalC4,int *check_straight_flushC4,int *check_kareC4,int *check_tripleC4,int *check_triple2C4,int *check_doubleC4,int *check_double2C4,int *check_double3C4,
    int *check_straighC4,int *check_flushC4,int *check_full_houseC4,int *check_highC4,int *straight_tempC4,int *check_fh_double_C4,int *check_fh_triple_C4,int *check_tr_triple_C4,
    int *check_db_double_C4,int *check_2db_double_C4,int *win_cardC4,

    int *check_flush_royalC5,int *check_straight_flushC5,int *check_kareC5,int *check_tripleC5,int *check_triple2C5,int *check_doubleC5,int *check_double2C5,int *check_double3C5,int *check_straighC5,
    int *check_flushC5,int *check_full_houseC5,int *check_highC5,int *straight_tempC5,int *check_fh_double_C5,int *check_fh_triple_C5,int *check_tr_triple_C5,
    int *check_db_double_C5,int *check_2db_double_C5,int *win_cardC5);
//--------------CARDS--------------------
    bool loadMedia();

};

#endif // CAPP_H_INCLUDED

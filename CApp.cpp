#include "CApp.h"

//Конструктор
CApp::CApp()
{
    running = true;
    window = NULL;
    screen = NULL;


    background = NULL;
//--------------CARDS--------------------
    cart_2_spades = NULL;
    cart_2_clubs = NULL;
    cart_2_hearts = NULL;
    cart_2_diamonds = NULL;

    cart_3_spades = NULL;
    cart_3_clubs = NULL;
    cart_3_hearts = NULL;
    cart_3_diamonds = NULL;

    cart_4_spades = NULL;
    cart_4_clubs = NULL;
    cart_4_hearts = NULL;
    cart_4_diamonds = NULL;

    cart_5_spades = NULL;
    cart_5_clubs = NULL;
    cart_5_hearts = NULL;
    cart_5_diamonds = NULL;

    cart_6_spades = NULL;
    cart_6_clubs = NULL;
    cart_6_hearts = NULL;
    cart_6_diamonds = NULL;

    cart_7_spades = NULL;
    cart_7_clubs = NULL;
    cart_7_hearts = NULL;
    cart_7_diamonds = NULL;

    cart_8_spades = NULL;
    cart_8_clubs = NULL;
    cart_8_hearts = NULL;
    cart_8_diamonds = NULL;

    cart_9_spades = NULL;
    cart_9_clubs = NULL;
    cart_9_hearts = NULL;
    cart_9_diamonds = NULL;

    cart_10_spades = NULL;
    cart_10_clubs = NULL;
    cart_10_hearts = NULL;
    cart_10_diamonds = NULL;

    cart_J_spades = NULL;
    cart_J_clubs = NULL;
    cart_J_hearts = NULL;
    cart_J_diamonds = NULL;

    cart_Q_spades = NULL;
    cart_Q_clubs = NULL;
    cart_Q_hearts = NULL;
    cart_Q_diamonds = NULL;

    cart_K_spades = NULL;
    cart_K_clubs = NULL;
    cart_K_hearts = NULL;
    cart_K_diamonds = NULL;

    cart_A_spades = NULL;
    cart_A_clubs = NULL;
    cart_A_hearts = NULL;
    cart_A_diamonds = NULL;

    Back_Card = NULL;
//--------------CARDS--------------------

    snd_draw = NULL;
    snd_lose = NULL;
    snd_place = NULL;
    snd_win = NULL;
}
//*************************
//Диструктор
CApp::~CApp()
{

}
//************************
//Главная функция
int CApp::onExecute()
{
    if(!onInit())
        return -1;

    SDL_Event e;

    while(running)
    {
        while(SDL_PollEvent(&e))
        {
            onEvent(&e);
        }

        onLoop();
        onRender();

    }

    onQuit();

    return 0;
}
//--------------CARDS--------------------
void CApp::fold_card()
{

    check_temp_card_straight=0;
    check_temp_high_card=0;
    temp_card=0;
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
        straight_tempP=11;
//--------------player(END)--------------
}
//--------------CARDS--------------------
void CApp::check_card()
{
    money-=100;
    moneybox+=600;
    temp_card++;
}
//--------------CARDS--------------------
void CApp::bet_card()
{
    money-=200;
    moneybox+=1200;
    temp_card++;
}
//--------------CARDS--------------------
void CApp::combinations_double(int card1, int card2, int *check_double, int *check_double2, int *check_double3)
{
    if(*check_double==0)
    {
    if((queue_cards[card1] == queue_cards[0] || queue_cards[card1] == queue_cards[1] || queue_cards[card1] == queue_cards[2] || queue_cards[card1] == queue_cards[3]) && (queue_cards[card2] == queue_cards[0] || queue_cards[card2] == queue_cards[1] || queue_cards[card2] == queue_cards[2] || queue_cards[card2] == queue_cards[3]))
    {
         *check_double=2;
    }
    if((queue_cards[card1] == queue_cards[4] || queue_cards[card1] == queue_cards[5] || queue_cards[card1] == queue_cards[6] || queue_cards[card1] == queue_cards[7]) && (queue_cards[card2] == queue_cards[4] || queue_cards[card2] == queue_cards[5] || queue_cards[card2] == queue_cards[6] || queue_cards[card2] == queue_cards[7]))
    {
         *check_double=3;
    }
    if((queue_cards[card1] == queue_cards[8] || queue_cards[card1] == queue_cards[9] || queue_cards[card1] == queue_cards[10] || queue_cards[card1] == queue_cards[11]) && (queue_cards[card2] == queue_cards[8] || queue_cards[card2] == queue_cards[9] || queue_cards[card2] == queue_cards[10] || queue_cards[card2] == queue_cards[11]))
    {
         *check_double=4;
    }
    if((queue_cards[card1] == queue_cards[12] || queue_cards[card1] == queue_cards[13] || queue_cards[card1] == queue_cards[14] || queue_cards[card1] == queue_cards[15]) && (queue_cards[card2] == queue_cards[12] || queue_cards[card2] == queue_cards[13] || queue_cards[card2] == queue_cards[14] || queue_cards[card2] == queue_cards[15]))
    {
         *check_double=5;
    }
    if((queue_cards[card1] == queue_cards[16] || queue_cards[card1] == queue_cards[17] || queue_cards[card1] == queue_cards[18] || queue_cards[card1] == queue_cards[19]) && (queue_cards[card2] == queue_cards[16] || queue_cards[card2] == queue_cards[17] || queue_cards[card2] == queue_cards[18] || queue_cards[card2] == queue_cards[19]))
    {
         *check_double=6;
    }
    if((queue_cards[card1] == queue_cards[20] || queue_cards[card1] == queue_cards[21] || queue_cards[card1] == queue_cards[22] || queue_cards[card1] == queue_cards[23]) && (queue_cards[card2] == queue_cards[20] || queue_cards[card2] == queue_cards[21] || queue_cards[card2] == queue_cards[22] || queue_cards[card2] == queue_cards[23]))
    {
         *check_double=7;
    }
    if((queue_cards[card1] == queue_cards[24] || queue_cards[card1] == queue_cards[25] || queue_cards[card1] == queue_cards[26] || queue_cards[card1] == queue_cards[27]) && (queue_cards[card2] == queue_cards[24] || queue_cards[card2] == queue_cards[25] || queue_cards[card2] == queue_cards[26] || queue_cards[card2] == queue_cards[27]))
    {
         *check_double=8;
    }
    if((queue_cards[card1] == queue_cards[28] || queue_cards[card1] == queue_cards[29] || queue_cards[card1] == queue_cards[30] || queue_cards[card1] == queue_cards[31]) && (queue_cards[card2] == queue_cards[28] || queue_cards[card2] == queue_cards[29] || queue_cards[card2] == queue_cards[30] || queue_cards[card2] == queue_cards[31]))
    {
         *check_double=9;
    }
    if((queue_cards[card1] == queue_cards[32] || queue_cards[card1] == queue_cards[33] || queue_cards[card1] == queue_cards[34] || queue_cards[card1] == queue_cards[35]) && (queue_cards[card2] == queue_cards[32] || queue_cards[card2] == queue_cards[33] || queue_cards[card2] == queue_cards[34] || queue_cards[card2] == queue_cards[35]))
    {
         *check_double=10;
    }
    if((queue_cards[card1] == queue_cards[36] || queue_cards[card1] == queue_cards[37] || queue_cards[card1] == queue_cards[38] || queue_cards[card1] == queue_cards[39]) && (queue_cards[card2] == queue_cards[36] || queue_cards[card2] == queue_cards[37] || queue_cards[card2] == queue_cards[38] || queue_cards[card2] == queue_cards[39]))
    {
         *check_double=11;
    }
    if((queue_cards[card1] == queue_cards[40] || queue_cards[card1] == queue_cards[41] || queue_cards[card1] == queue_cards[42] || queue_cards[card1] == queue_cards[43]) && (queue_cards[card2] == queue_cards[40] || queue_cards[card2] == queue_cards[41] || queue_cards[card2] == queue_cards[42] || queue_cards[card2] == queue_cards[43]))
    {
         *check_double=12;
    }
    if((queue_cards[card1] == queue_cards[44] || queue_cards[card1] == queue_cards[45] || queue_cards[card1] == queue_cards[46] || queue_cards[card1] == queue_cards[47]) && (queue_cards[card2] == queue_cards[44] || queue_cards[card2] == queue_cards[45] || queue_cards[card2] == queue_cards[46] || queue_cards[card2] == queue_cards[47]))
    {
         *check_double=13;
    }
    if((queue_cards[card1] == queue_cards[48] || queue_cards[card1] == queue_cards[49] || queue_cards[card1] == queue_cards[50] || queue_cards[card1] == queue_cards[51]) && (queue_cards[card2] == queue_cards[48] || queue_cards[card2] == queue_cards[49] || queue_cards[card2] == queue_cards[50] || queue_cards[card2] == queue_cards[51]))
    {
         *check_double=14;
    }
    }
    else
    {
    if(*check_double2==0&&*check_double!=0)
    {
    if((queue_cards[card1] == queue_cards[0] || queue_cards[card1] == queue_cards[1] || queue_cards[card1] == queue_cards[2] || queue_cards[card1] == queue_cards[3]) && (queue_cards[card2] == queue_cards[0] || queue_cards[card2] == queue_cards[1] || queue_cards[card2] == queue_cards[2] || queue_cards[card2] == queue_cards[3]))
    {
         *check_double2=2;
    }
    if((queue_cards[card1] == queue_cards[4] || queue_cards[card1] == queue_cards[5] || queue_cards[card1] == queue_cards[6] || queue_cards[card1] == queue_cards[7]) && (queue_cards[card2] == queue_cards[4] || queue_cards[card2] == queue_cards[5] || queue_cards[card2] == queue_cards[6] || queue_cards[card2] == queue_cards[7]))
    {
         *check_double2=3;
    }
    if((queue_cards[card1] == queue_cards[8] || queue_cards[card1] == queue_cards[9] || queue_cards[card1] == queue_cards[10] || queue_cards[card1] == queue_cards[11]) && (queue_cards[card2] == queue_cards[8] || queue_cards[card2] == queue_cards[9] || queue_cards[card2] == queue_cards[10] || queue_cards[card2] == queue_cards[11]))
    {
         *check_double2=4;
    }
    if((queue_cards[card1] == queue_cards[12] || queue_cards[card1] == queue_cards[13] || queue_cards[card1] == queue_cards[14] || queue_cards[card1] == queue_cards[15]) && (queue_cards[card2] == queue_cards[12] || queue_cards[card2] == queue_cards[13] || queue_cards[card2] == queue_cards[14] || queue_cards[card2] == queue_cards[15]))
    {
         *check_double2=5;
    }
    if((queue_cards[card1] == queue_cards[16] || queue_cards[card1] == queue_cards[17] || queue_cards[card1] == queue_cards[18] || queue_cards[card1] == queue_cards[19]) && (queue_cards[card2] == queue_cards[16] || queue_cards[card2] == queue_cards[17] || queue_cards[card2] == queue_cards[18] || queue_cards[card2] == queue_cards[19]))
    {
         *check_double2=6;
    }
    if((queue_cards[card1] == queue_cards[20] || queue_cards[card1] == queue_cards[21] || queue_cards[card1] == queue_cards[22] || queue_cards[card1] == queue_cards[23]) && (queue_cards[card2] == queue_cards[20] || queue_cards[card2] == queue_cards[21] || queue_cards[card2] == queue_cards[22] || queue_cards[card2] == queue_cards[23]))
    {
         *check_double2=7;
    }
    if((queue_cards[card1] == queue_cards[24] || queue_cards[card1] == queue_cards[25] || queue_cards[card1] == queue_cards[26] || queue_cards[card1] == queue_cards[27]) && (queue_cards[card2] == queue_cards[24] || queue_cards[card2] == queue_cards[25] || queue_cards[card2] == queue_cards[26] || queue_cards[card2] == queue_cards[27]))
    {
         *check_double2=8;
    }
    if((queue_cards[card1] == queue_cards[28] || queue_cards[card1] == queue_cards[29] || queue_cards[card1] == queue_cards[30] || queue_cards[card1] == queue_cards[31]) && (queue_cards[card2] == queue_cards[28] || queue_cards[card2] == queue_cards[29] || queue_cards[card2] == queue_cards[30] || queue_cards[card2] == queue_cards[31]))
    {
         *check_double2=9;
    }
    if((queue_cards[card1] == queue_cards[32] || queue_cards[card1] == queue_cards[33] || queue_cards[card1] == queue_cards[34] || queue_cards[card1] == queue_cards[35]) && (queue_cards[card2] == queue_cards[32] || queue_cards[card2] == queue_cards[33] || queue_cards[card2] == queue_cards[34] || queue_cards[card2] == queue_cards[35]))
    {
         *check_double2=10;
    }
    if((queue_cards[card1] == queue_cards[36] || queue_cards[card1] == queue_cards[37] || queue_cards[card1] == queue_cards[38] || queue_cards[card1] == queue_cards[39]) && (queue_cards[card2] == queue_cards[36] || queue_cards[card2] == queue_cards[37] || queue_cards[card2] == queue_cards[38] || queue_cards[card2] == queue_cards[39]))
    {
         *check_double2=11;
    }
    if((queue_cards[card1] == queue_cards[40] || queue_cards[card1] == queue_cards[41] || queue_cards[card1] == queue_cards[42] || queue_cards[card1] == queue_cards[43]) && (queue_cards[card2] == queue_cards[40] || queue_cards[card2] == queue_cards[41] || queue_cards[card2] == queue_cards[42] || queue_cards[card2] == queue_cards[43]))
    {
         *check_double2=12;
    }
    if((queue_cards[card1] == queue_cards[44] || queue_cards[card1] == queue_cards[45] || queue_cards[card1] == queue_cards[46] || queue_cards[card1] == queue_cards[47]) && (queue_cards[card2] == queue_cards[44] || queue_cards[card2] == queue_cards[45] || queue_cards[card2] == queue_cards[46] || queue_cards[card2] == queue_cards[47]))
    {
         *check_double2=13;
    }
    if((queue_cards[card1] == queue_cards[48] || queue_cards[card1] == queue_cards[49] || queue_cards[card1] == queue_cards[50] || queue_cards[card1] == queue_cards[51]) && (queue_cards[card2] == queue_cards[48] || queue_cards[card2] == queue_cards[49] || queue_cards[card2] == queue_cards[50] || queue_cards[card2] == queue_cards[51]))
    {
         *check_double2=14;
    }
    }
    else
    {
    if(*check_double3==0&&*check_double2!=0&&*check_double!=0)
    {
    if((queue_cards[card1] == queue_cards[0] || queue_cards[card1] == queue_cards[1] || queue_cards[card1] == queue_cards[2] || queue_cards[card1] == queue_cards[3]) && (queue_cards[card2] == queue_cards[0] || queue_cards[card2] == queue_cards[1] || queue_cards[card2] == queue_cards[2] || queue_cards[card2] == queue_cards[3]))
    {
         *check_double3=2;
    }
    if((queue_cards[card1] == queue_cards[4] || queue_cards[card1] == queue_cards[5] || queue_cards[card1] == queue_cards[6] || queue_cards[card1] == queue_cards[7]) && (queue_cards[card2] == queue_cards[4] || queue_cards[card2] == queue_cards[5] || queue_cards[card2] == queue_cards[6] || queue_cards[card2] == queue_cards[7]))
    {
         *check_double3=3;
    }
    if((queue_cards[card1] == queue_cards[8] || queue_cards[card1] == queue_cards[9] || queue_cards[card1] == queue_cards[10] || queue_cards[card1] == queue_cards[11]) && (queue_cards[card2] == queue_cards[8] || queue_cards[card2] == queue_cards[9] || queue_cards[card2] == queue_cards[10] || queue_cards[card2] == queue_cards[11]))
    {
         *check_double3=4;
    }
    if((queue_cards[card1] == queue_cards[12] || queue_cards[card1] == queue_cards[13] || queue_cards[card1] == queue_cards[14] || queue_cards[card1] == queue_cards[15]) && (queue_cards[card2] == queue_cards[12] || queue_cards[card2] == queue_cards[13] || queue_cards[card2] == queue_cards[14] || queue_cards[card2] == queue_cards[15]))
    {
         *check_double3=5;
    }
    if((queue_cards[card1] == queue_cards[16] || queue_cards[card1] == queue_cards[17] || queue_cards[card1] == queue_cards[18] || queue_cards[card1] == queue_cards[19]) && (queue_cards[card2] == queue_cards[16] || queue_cards[card2] == queue_cards[17] || queue_cards[card2] == queue_cards[18] || queue_cards[card2] == queue_cards[19]))
    {
         *check_double3=6;
    }
    if((queue_cards[card1] == queue_cards[20] || queue_cards[card1] == queue_cards[21] || queue_cards[card1] == queue_cards[22] || queue_cards[card1] == queue_cards[23]) && (queue_cards[card2] == queue_cards[20] || queue_cards[card2] == queue_cards[21] || queue_cards[card2] == queue_cards[22] || queue_cards[card2] == queue_cards[23]))
    {
         *check_double3=7;
    }
    if((queue_cards[card1] == queue_cards[24] || queue_cards[card1] == queue_cards[25] || queue_cards[card1] == queue_cards[26] || queue_cards[card1] == queue_cards[27]) && (queue_cards[card2] == queue_cards[24] || queue_cards[card2] == queue_cards[25] || queue_cards[card2] == queue_cards[26] || queue_cards[card2] == queue_cards[27]))
    {
         *check_double3=8;
    }
    if((queue_cards[card1] == queue_cards[28] || queue_cards[card1] == queue_cards[29] || queue_cards[card1] == queue_cards[30] || queue_cards[card1] == queue_cards[31]) && (queue_cards[card2] == queue_cards[28] || queue_cards[card2] == queue_cards[29] || queue_cards[card2] == queue_cards[30] || queue_cards[card2] == queue_cards[31]))
    {
         *check_double3=9;
    }
    if((queue_cards[card1] == queue_cards[32] || queue_cards[card1] == queue_cards[33] || queue_cards[card1] == queue_cards[34] || queue_cards[card1] == queue_cards[35]) && (queue_cards[card2] == queue_cards[32] || queue_cards[card2] == queue_cards[33] || queue_cards[card2] == queue_cards[34] || queue_cards[card2] == queue_cards[35]))
    {
         *check_double3=10;
    }
    if((queue_cards[card1] == queue_cards[36] || queue_cards[card1] == queue_cards[37] || queue_cards[card1] == queue_cards[38] || queue_cards[card1] == queue_cards[39]) && (queue_cards[card2] == queue_cards[36] || queue_cards[card2] == queue_cards[37] || queue_cards[card2] == queue_cards[38] || queue_cards[card2] == queue_cards[39]))
    {
         *check_double3=11;
    }
    if((queue_cards[card1] == queue_cards[40] || queue_cards[card1] == queue_cards[41] || queue_cards[card1] == queue_cards[42] || queue_cards[card1] == queue_cards[43]) && (queue_cards[card2] == queue_cards[40] || queue_cards[card2] == queue_cards[41] || queue_cards[card2] == queue_cards[42] || queue_cards[card2] == queue_cards[43]))
    {
         *check_double3=12;
    }
    if((queue_cards[card1] == queue_cards[44] || queue_cards[card1] == queue_cards[45] || queue_cards[card1] == queue_cards[46] || queue_cards[card1] == queue_cards[47]) && (queue_cards[card2] == queue_cards[44] || queue_cards[card2] == queue_cards[45] || queue_cards[card2] == queue_cards[46] || queue_cards[card2] == queue_cards[47]))
    {
         *check_double3=13;
    }
    if((queue_cards[card1] == queue_cards[48] || queue_cards[card1] == queue_cards[49] || queue_cards[card1] == queue_cards[50] || queue_cards[card1] == queue_cards[51]) && (queue_cards[card2] == queue_cards[48] || queue_cards[card2] == queue_cards[49] || queue_cards[card2] == queue_cards[50] || queue_cards[card2] == queue_cards[51]))
    {
         *check_double3=14;
    }
    }
    }
    }
    if(*check_double==*check_double2)
        *check_double2=0;
    if(*check_double==*check_double3)
        *check_double3=0;
    if(*check_double2==*check_double3)
        *check_double3=0;
}
//--------------CARDS--------------------
void CApp::combinations_triple(int card1, int card2, int card3, int *check_triple, int *check_triple2)
{
    if(*check_triple==0)
    {
    if((queue_cards[card1] == queue_cards[0] || queue_cards[card1] == queue_cards[1] || queue_cards[card1] == queue_cards[2] || queue_cards[card1] == queue_cards[3]) && (queue_cards[card2] == queue_cards[0] || queue_cards[card2] == queue_cards[1] || queue_cards[card2] == queue_cards[2] || queue_cards[card2] == queue_cards[3]) && (queue_cards[card3] == queue_cards[0] || queue_cards[card3] == queue_cards[1] || queue_cards[card3] == queue_cards[2] || queue_cards[card3] == queue_cards[3]))
    {
         *check_triple=2;
    }
    if((queue_cards[card1] == queue_cards[4] || queue_cards[card1] == queue_cards[5] || queue_cards[card1] == queue_cards[6] || queue_cards[card1] == queue_cards[7]) && (queue_cards[card2] == queue_cards[4] || queue_cards[card2] == queue_cards[5] || queue_cards[card2] == queue_cards[6] || queue_cards[card2] == queue_cards[7]) && (queue_cards[card3] == queue_cards[4] || queue_cards[card3] == queue_cards[5] || queue_cards[card3] == queue_cards[6] || queue_cards[card3] == queue_cards[7]))
    {
         *check_triple=3;
    }
    if((queue_cards[card1] == queue_cards[8] || queue_cards[card1] == queue_cards[9] || queue_cards[card1] == queue_cards[10] || queue_cards[card1] == queue_cards[11]) && (queue_cards[card2] == queue_cards[8] || queue_cards[card2] == queue_cards[9] || queue_cards[card2] == queue_cards[10] || queue_cards[card2] == queue_cards[11]) && (queue_cards[card3] == queue_cards[8] || queue_cards[card3] == queue_cards[9] || queue_cards[card3] == queue_cards[10] || queue_cards[card3] == queue_cards[11]))
    {
         *check_triple=4;
    }
    if((queue_cards[card1] == queue_cards[12] || queue_cards[card1] == queue_cards[13] || queue_cards[card1] == queue_cards[14] || queue_cards[card1] == queue_cards[15]) && (queue_cards[card2] == queue_cards[12] || queue_cards[card2] == queue_cards[13] || queue_cards[card2] == queue_cards[14] || queue_cards[card2] == queue_cards[15]) && (queue_cards[card3] == queue_cards[12] || queue_cards[card3] == queue_cards[13] || queue_cards[card3] == queue_cards[14] || queue_cards[card3] == queue_cards[15]))
    {
         *check_triple=5;
    }
    if((queue_cards[card1] == queue_cards[16] || queue_cards[card1] == queue_cards[17] || queue_cards[card1] == queue_cards[18] || queue_cards[card1] == queue_cards[19]) && (queue_cards[card2] == queue_cards[16] || queue_cards[card2] == queue_cards[17] || queue_cards[card2] == queue_cards[18] || queue_cards[card2] == queue_cards[19]) && (queue_cards[card3] == queue_cards[16] || queue_cards[card3] == queue_cards[17] || queue_cards[card3] == queue_cards[18] || queue_cards[card3] == queue_cards[19]))
    {
         *check_triple=6;
    }
    if((queue_cards[card1] == queue_cards[20] || queue_cards[card1] == queue_cards[21] || queue_cards[card1] == queue_cards[22] || queue_cards[card1] == queue_cards[23]) && (queue_cards[card2] == queue_cards[20] || queue_cards[card2] == queue_cards[21] || queue_cards[card2] == queue_cards[22] || queue_cards[card2] == queue_cards[23]) && (queue_cards[card3] == queue_cards[20] || queue_cards[card3] == queue_cards[21] || queue_cards[card3] == queue_cards[22] || queue_cards[card3] == queue_cards[23]))
    {
         *check_triple=7;
    }
    if((queue_cards[card1] == queue_cards[24] || queue_cards[card1] == queue_cards[25] || queue_cards[card1] == queue_cards[26] || queue_cards[card1] == queue_cards[27]) && (queue_cards[card2] == queue_cards[24] || queue_cards[card2] == queue_cards[25] || queue_cards[card2] == queue_cards[26] || queue_cards[card2] == queue_cards[27]) && (queue_cards[card3] == queue_cards[24] || queue_cards[card3] == queue_cards[25] || queue_cards[card3] == queue_cards[26] || queue_cards[card3] == queue_cards[27]))
    {
         *check_triple=8;
    }
    if((queue_cards[card1] == queue_cards[28] || queue_cards[card1] == queue_cards[29] || queue_cards[card1] == queue_cards[30] || queue_cards[card1] == queue_cards[31]) && (queue_cards[card2] == queue_cards[28] || queue_cards[card2] == queue_cards[29] || queue_cards[card2] == queue_cards[30] || queue_cards[card2] == queue_cards[31]) && (queue_cards[card3] == queue_cards[28] || queue_cards[card3] == queue_cards[29] || queue_cards[card3] == queue_cards[30] || queue_cards[card3] == queue_cards[31]))
    {
         *check_triple=9;
    }
    if((queue_cards[card1] == queue_cards[32] || queue_cards[card1] == queue_cards[33] || queue_cards[card1] == queue_cards[34] || queue_cards[card1] == queue_cards[35]) && (queue_cards[card2] == queue_cards[32] || queue_cards[card2] == queue_cards[33] || queue_cards[card2] == queue_cards[34] || queue_cards[card2] == queue_cards[35]) && (queue_cards[card3] == queue_cards[32] || queue_cards[card3] == queue_cards[33] || queue_cards[card3] == queue_cards[34] || queue_cards[card3] == queue_cards[35]))
    {
         *check_triple=10;
    }
    if((queue_cards[card1] == queue_cards[36] || queue_cards[card1] == queue_cards[37] || queue_cards[card1] == queue_cards[38] || queue_cards[card1] == queue_cards[39]) && (queue_cards[card2] == queue_cards[36] || queue_cards[card2] == queue_cards[37] || queue_cards[card2] == queue_cards[38] || queue_cards[card2] == queue_cards[39]) && (queue_cards[card3] == queue_cards[36] || queue_cards[card3] == queue_cards[37] || queue_cards[card3] == queue_cards[38] || queue_cards[card3] == queue_cards[39]))
    {
         *check_triple=11;
    }
    if((queue_cards[card1] == queue_cards[40] || queue_cards[card1] == queue_cards[41] || queue_cards[card1] == queue_cards[42] || queue_cards[card1] == queue_cards[43]) && (queue_cards[card2] == queue_cards[40] || queue_cards[card2] == queue_cards[41] || queue_cards[card2] == queue_cards[42] || queue_cards[card2] == queue_cards[43]) && (queue_cards[card3] == queue_cards[40] || queue_cards[card3] == queue_cards[41] || queue_cards[card3] == queue_cards[42] || queue_cards[card3] == queue_cards[43]))
    {
         *check_triple=12;
    }
    if((queue_cards[card1] == queue_cards[44] || queue_cards[card1] == queue_cards[45] || queue_cards[card1] == queue_cards[46] || queue_cards[card1] == queue_cards[47]) && (queue_cards[card2] == queue_cards[44] || queue_cards[card2] == queue_cards[45] || queue_cards[card2] == queue_cards[46] || queue_cards[card2] == queue_cards[47]) && (queue_cards[card3] == queue_cards[44] || queue_cards[card3] == queue_cards[45] || queue_cards[card3] == queue_cards[46] || queue_cards[card3] == queue_cards[47]))
    {
         *check_triple=13;
    }
    if((queue_cards[card1] == queue_cards[48] || queue_cards[card1] == queue_cards[49] || queue_cards[card1] == queue_cards[50] || queue_cards[card1] == queue_cards[51]) && (queue_cards[card2] == queue_cards[48] || queue_cards[card2] == queue_cards[49] || queue_cards[card2] == queue_cards[50] || queue_cards[card2] == queue_cards[51]) && (queue_cards[card3] == queue_cards[48] || queue_cards[card3] == queue_cards[49] || queue_cards[card3] == queue_cards[50] || queue_cards[card3] == queue_cards[51]))
    {
         *check_triple=14;
    }
    }
    else
    {
    if(*check_triple2==0)
    {
    if((queue_cards[card1] == queue_cards[0] || queue_cards[card1] == queue_cards[1] || queue_cards[card1] == queue_cards[2] || queue_cards[card1] == queue_cards[3]) && (queue_cards[card2] == queue_cards[0] || queue_cards[card2] == queue_cards[1] || queue_cards[card2] == queue_cards[2] || queue_cards[card2] == queue_cards[3]) && (queue_cards[card3] == queue_cards[0] || queue_cards[card3] == queue_cards[1] || queue_cards[card3] == queue_cards[2] || queue_cards[card3] == queue_cards[3]))
    {
         *check_triple2=2;
    }
    if((queue_cards[card1] == queue_cards[4] || queue_cards[card1] == queue_cards[5] || queue_cards[card1] == queue_cards[6] || queue_cards[card1] == queue_cards[7]) && (queue_cards[card2] == queue_cards[4] || queue_cards[card2] == queue_cards[5] || queue_cards[card2] == queue_cards[6] || queue_cards[card2] == queue_cards[7]) && (queue_cards[card3] == queue_cards[4] || queue_cards[card3] == queue_cards[5] || queue_cards[card3] == queue_cards[6] || queue_cards[card3] == queue_cards[7]))
    {
         *check_triple2=3;
    }
    if((queue_cards[card1] == queue_cards[8] || queue_cards[card1] == queue_cards[9] || queue_cards[card1] == queue_cards[10] || queue_cards[card1] == queue_cards[11]) && (queue_cards[card2] == queue_cards[8] || queue_cards[card2] == queue_cards[9] || queue_cards[card2] == queue_cards[10] || queue_cards[card2] == queue_cards[11]) && (queue_cards[card3] == queue_cards[8] || queue_cards[card3] == queue_cards[9] || queue_cards[card3] == queue_cards[10] || queue_cards[card3] == queue_cards[11]))
    {
         *check_triple2=4;
    }
    if((queue_cards[card1] == queue_cards[12] || queue_cards[card1] == queue_cards[13] || queue_cards[card1] == queue_cards[14] || queue_cards[card1] == queue_cards[15]) && (queue_cards[card2] == queue_cards[12] || queue_cards[card2] == queue_cards[13] || queue_cards[card2] == queue_cards[14] || queue_cards[card2] == queue_cards[15]) && (queue_cards[card3] == queue_cards[12] || queue_cards[card3] == queue_cards[13] || queue_cards[card3] == queue_cards[14] || queue_cards[card3] == queue_cards[15]))
    {
         *check_triple2=5;
    }
    if((queue_cards[card1] == queue_cards[16] || queue_cards[card1] == queue_cards[17] || queue_cards[card1] == queue_cards[18] || queue_cards[card1] == queue_cards[19]) && (queue_cards[card2] == queue_cards[16] || queue_cards[card2] == queue_cards[17] || queue_cards[card2] == queue_cards[18] || queue_cards[card2] == queue_cards[19]) && (queue_cards[card3] == queue_cards[16] || queue_cards[card3] == queue_cards[17] || queue_cards[card3] == queue_cards[18] || queue_cards[card3] == queue_cards[19]))
    {
         *check_triple2=6;
    }
    if((queue_cards[card1] == queue_cards[20] || queue_cards[card1] == queue_cards[21] || queue_cards[card1] == queue_cards[22] || queue_cards[card1] == queue_cards[23]) && (queue_cards[card2] == queue_cards[20] || queue_cards[card2] == queue_cards[21] || queue_cards[card2] == queue_cards[22] || queue_cards[card2] == queue_cards[23]) && (queue_cards[card3] == queue_cards[20] || queue_cards[card3] == queue_cards[21] || queue_cards[card3] == queue_cards[22] || queue_cards[card3] == queue_cards[23]))
    {
         *check_triple=7;
    }
    if((queue_cards[card1] == queue_cards[24] || queue_cards[card1] == queue_cards[25] || queue_cards[card1] == queue_cards[26] || queue_cards[card1] == queue_cards[27]) && (queue_cards[card2] == queue_cards[24] || queue_cards[card2] == queue_cards[25] || queue_cards[card2] == queue_cards[26] || queue_cards[card2] == queue_cards[27]) && (queue_cards[card3] == queue_cards[24] || queue_cards[card3] == queue_cards[25] || queue_cards[card3] == queue_cards[26] || queue_cards[card3] == queue_cards[27]))
    {
         *check_triple2=8;
    }
    if((queue_cards[card1] == queue_cards[28] || queue_cards[card1] == queue_cards[29] || queue_cards[card1] == queue_cards[30] || queue_cards[card1] == queue_cards[31]) && (queue_cards[card2] == queue_cards[28] || queue_cards[card2] == queue_cards[29] || queue_cards[card2] == queue_cards[30] || queue_cards[card2] == queue_cards[31]) && (queue_cards[card3] == queue_cards[28] || queue_cards[card3] == queue_cards[29] || queue_cards[card3] == queue_cards[30] || queue_cards[card3] == queue_cards[31]))
    {
         *check_triple2=9;
    }
    if((queue_cards[card1] == queue_cards[32] || queue_cards[card1] == queue_cards[33] || queue_cards[card1] == queue_cards[34] || queue_cards[card1] == queue_cards[35]) && (queue_cards[card2] == queue_cards[32] || queue_cards[card2] == queue_cards[33] || queue_cards[card2] == queue_cards[34] || queue_cards[card2] == queue_cards[35]) && (queue_cards[card3] == queue_cards[32] || queue_cards[card3] == queue_cards[33] || queue_cards[card3] == queue_cards[34] || queue_cards[card3] == queue_cards[35]))
    {
         *check_triple2=10;
    }
    if((queue_cards[card1] == queue_cards[36] || queue_cards[card1] == queue_cards[37] || queue_cards[card1] == queue_cards[38] || queue_cards[card1] == queue_cards[39]) && (queue_cards[card2] == queue_cards[36] || queue_cards[card2] == queue_cards[37] || queue_cards[card2] == queue_cards[38] || queue_cards[card2] == queue_cards[39]) && (queue_cards[card3] == queue_cards[36] || queue_cards[card3] == queue_cards[37] || queue_cards[card3] == queue_cards[38] || queue_cards[card3] == queue_cards[39]))
    {
         *check_triple2=11;
    }
    if((queue_cards[card1] == queue_cards[40] || queue_cards[card1] == queue_cards[41] || queue_cards[card1] == queue_cards[42] || queue_cards[card1] == queue_cards[43]) && (queue_cards[card2] == queue_cards[40] || queue_cards[card2] == queue_cards[41] || queue_cards[card2] == queue_cards[42] || queue_cards[card2] == queue_cards[43]) && (queue_cards[card3] == queue_cards[40] || queue_cards[card3] == queue_cards[41] || queue_cards[card3] == queue_cards[42] || queue_cards[card3] == queue_cards[43]))
    {
         *check_triple2=12;
    }
    if((queue_cards[card1] == queue_cards[44] || queue_cards[card1] == queue_cards[45] || queue_cards[card1] == queue_cards[46] || queue_cards[card1] == queue_cards[47]) && (queue_cards[card2] == queue_cards[44] || queue_cards[card2] == queue_cards[45] || queue_cards[card2] == queue_cards[46] || queue_cards[card2] == queue_cards[47]) && (queue_cards[card3] == queue_cards[44] || queue_cards[card3] == queue_cards[45] || queue_cards[card3] == queue_cards[46] || queue_cards[card3] == queue_cards[47]))
    {
         *check_triple2=13;
    }
    if((queue_cards[card1] == queue_cards[48] || queue_cards[card1] == queue_cards[49] || queue_cards[card1] == queue_cards[50] || queue_cards[card1] == queue_cards[51]) && (queue_cards[card2] == queue_cards[48] || queue_cards[card2] == queue_cards[49] || queue_cards[card2] == queue_cards[50] || queue_cards[card2] == queue_cards[51]) && (queue_cards[card3] == queue_cards[48] || queue_cards[card3] == queue_cards[49] || queue_cards[card3] == queue_cards[50] || queue_cards[card3] == queue_cards[51]))
    {
         *check_triple2=14;
    }
    }
    }
    if(*check_triple==*check_triple2)
        *check_triple2=0;
}
//--------------CARDS--------------------
void CApp::combinations_kare(int card1, int card2, int card3, int card4, int *check_kare)
{
    if((queue_cards[card1] == queue_cards[0] || queue_cards[card1] == queue_cards[1] || queue_cards[card1] == queue_cards[2] || queue_cards[card1] == queue_cards[3]) && (queue_cards[card2] == queue_cards[0] || queue_cards[card2] == queue_cards[1] || queue_cards[card2] == queue_cards[2] || queue_cards[card2] == queue_cards[3]) && (queue_cards[card3] == queue_cards[0] || queue_cards[card3] == queue_cards[1] || queue_cards[card3] == queue_cards[2] || queue_cards[card3] == queue_cards[3]) && (queue_cards[card4] == queue_cards[0] || queue_cards[card4] == queue_cards[1] || queue_cards[card4] == queue_cards[2] || queue_cards[card4] == queue_cards[3]))
    {
         *check_kare=2;
    }
    if((queue_cards[card1] == queue_cards[4] || queue_cards[card1] == queue_cards[5] || queue_cards[card1] == queue_cards[6] || queue_cards[card1] == queue_cards[7]) && (queue_cards[card2] == queue_cards[4] || queue_cards[card2] == queue_cards[5] || queue_cards[card2] == queue_cards[6] || queue_cards[card2] == queue_cards[7]) && (queue_cards[card3] == queue_cards[4] || queue_cards[card3] == queue_cards[5] || queue_cards[card3] == queue_cards[6] || queue_cards[card3] == queue_cards[7]) && (queue_cards[card4] == queue_cards[4] || queue_cards[card4] == queue_cards[5] || queue_cards[card4] == queue_cards[6] || queue_cards[card4] == queue_cards[7]))
    {
         *check_kare=3;
    }
    if((queue_cards[card1] == queue_cards[8] || queue_cards[card1] == queue_cards[9] || queue_cards[card1] == queue_cards[10] || queue_cards[card1] == queue_cards[11]) && (queue_cards[card2] == queue_cards[8] || queue_cards[card2] == queue_cards[9] || queue_cards[card2] == queue_cards[10] || queue_cards[card2] == queue_cards[11]) && (queue_cards[card3] == queue_cards[8] || queue_cards[card3] == queue_cards[9] || queue_cards[card3] == queue_cards[10] || queue_cards[card3] == queue_cards[11]) && (queue_cards[card4] == queue_cards[8] || queue_cards[card4] == queue_cards[9] || queue_cards[card4] == queue_cards[10] || queue_cards[card4] == queue_cards[11]))
    {
         *check_kare=4;
    }
    if((queue_cards[card1] == queue_cards[12] || queue_cards[card1] == queue_cards[13] || queue_cards[card1] == queue_cards[14] || queue_cards[card1] == queue_cards[15]) && (queue_cards[card2] == queue_cards[12] || queue_cards[card2] == queue_cards[13] || queue_cards[card2] == queue_cards[14] || queue_cards[card2] == queue_cards[15]) && (queue_cards[card3] == queue_cards[12] || queue_cards[card3] == queue_cards[13] || queue_cards[card3] == queue_cards[14] || queue_cards[card3] == queue_cards[15]) && (queue_cards[card4] == queue_cards[12] || queue_cards[card4] == queue_cards[13] || queue_cards[card4] == queue_cards[14] || queue_cards[card4] == queue_cards[15]))
    {
         *check_kare=5;
    }
    if((queue_cards[card1] == queue_cards[16] || queue_cards[card1] == queue_cards[17] || queue_cards[card1] == queue_cards[18] || queue_cards[card1] == queue_cards[19]) && (queue_cards[card2] == queue_cards[16] || queue_cards[card2] == queue_cards[17] || queue_cards[card2] == queue_cards[18] || queue_cards[card2] == queue_cards[19]) && (queue_cards[card3] == queue_cards[16] || queue_cards[card3] == queue_cards[17] || queue_cards[card3] == queue_cards[18] || queue_cards[card3] == queue_cards[19]) && (queue_cards[card4] == queue_cards[16] || queue_cards[card4] == queue_cards[17] || queue_cards[card4] == queue_cards[18] || queue_cards[card4] == queue_cards[19]))
    {
         *check_kare=6;
    }
    if((queue_cards[card1] == queue_cards[20] || queue_cards[card1] == queue_cards[21] || queue_cards[card1] == queue_cards[22] || queue_cards[card1] == queue_cards[23]) && (queue_cards[card2] == queue_cards[20] || queue_cards[card2] == queue_cards[21] || queue_cards[card2] == queue_cards[22] || queue_cards[card2] == queue_cards[23]) && (queue_cards[card3] == queue_cards[20] || queue_cards[card3] == queue_cards[21] || queue_cards[card3] == queue_cards[22] || queue_cards[card3] == queue_cards[23]) && (queue_cards[card4] == queue_cards[20] || queue_cards[card4] == queue_cards[21] || queue_cards[card4] == queue_cards[22] || queue_cards[card4] == queue_cards[23]))
    {
         *check_kare=7;
    }
    if((queue_cards[card1] == queue_cards[24] || queue_cards[card1] == queue_cards[25] || queue_cards[card1] == queue_cards[26] || queue_cards[card1] == queue_cards[27]) && (queue_cards[card2] == queue_cards[24] || queue_cards[card2] == queue_cards[25] || queue_cards[card2] == queue_cards[26] || queue_cards[card2] == queue_cards[27]) && (queue_cards[card3] == queue_cards[24] || queue_cards[card3] == queue_cards[25] || queue_cards[card3] == queue_cards[26] || queue_cards[card3] == queue_cards[27]) && (queue_cards[card4] == queue_cards[24] || queue_cards[card4] == queue_cards[25] || queue_cards[card4] == queue_cards[26] || queue_cards[card4] == queue_cards[27]))
    {
         *check_kare=8;
    }
    if((queue_cards[card1] == queue_cards[28] || queue_cards[card1] == queue_cards[29] || queue_cards[card1] == queue_cards[30] || queue_cards[card1] == queue_cards[31]) && (queue_cards[card2] == queue_cards[28] || queue_cards[card2] == queue_cards[29] || queue_cards[card2] == queue_cards[30] || queue_cards[card2] == queue_cards[31]) && (queue_cards[card3] == queue_cards[28] || queue_cards[card3] == queue_cards[29] || queue_cards[card3] == queue_cards[30] || queue_cards[card3] == queue_cards[31]) && (queue_cards[card4] == queue_cards[28] || queue_cards[card4] == queue_cards[29] || queue_cards[card4] == queue_cards[30] || queue_cards[card4] == queue_cards[31]))
    {
         *check_kare=9;
    }
    if((queue_cards[card1] == queue_cards[32] || queue_cards[card1] == queue_cards[33] || queue_cards[card1] == queue_cards[34] || queue_cards[card1] == queue_cards[35]) && (queue_cards[card2] == queue_cards[32] || queue_cards[card2] == queue_cards[33] || queue_cards[card2] == queue_cards[34] || queue_cards[card2] == queue_cards[35]) && (queue_cards[card3] == queue_cards[32] || queue_cards[card3] == queue_cards[33] || queue_cards[card3] == queue_cards[34] || queue_cards[card3] == queue_cards[35]) && (queue_cards[card4] == queue_cards[32] || queue_cards[card4] == queue_cards[33] || queue_cards[card4] == queue_cards[34] || queue_cards[card4] == queue_cards[35]))
    {
         *check_kare=10;
    }
    if((queue_cards[card1] == queue_cards[36] || queue_cards[card1] == queue_cards[37] || queue_cards[card1] == queue_cards[38] || queue_cards[card1] == queue_cards[39]) && (queue_cards[card2] == queue_cards[36] || queue_cards[card2] == queue_cards[37] || queue_cards[card2] == queue_cards[38] || queue_cards[card2] == queue_cards[39]) && (queue_cards[card3] == queue_cards[36] || queue_cards[card3] == queue_cards[37] || queue_cards[card3] == queue_cards[38] || queue_cards[card3] == queue_cards[39]) && (queue_cards[card4] == queue_cards[36] || queue_cards[card4] == queue_cards[37] || queue_cards[card4] == queue_cards[38] || queue_cards[card4] == queue_cards[39]))
    {
         *check_kare=11;
    }
    if((queue_cards[card1] == queue_cards[40] || queue_cards[card1] == queue_cards[41] || queue_cards[card1] == queue_cards[42] || queue_cards[card1] == queue_cards[43]) && (queue_cards[card2] == queue_cards[40] || queue_cards[card2] == queue_cards[41] || queue_cards[card2] == queue_cards[42] || queue_cards[card2] == queue_cards[43]) && (queue_cards[card3] == queue_cards[40] || queue_cards[card3] == queue_cards[41] || queue_cards[card3] == queue_cards[42] || queue_cards[card3] == queue_cards[43]) && (queue_cards[card4] == queue_cards[40] || queue_cards[card4] == queue_cards[41] || queue_cards[card4] == queue_cards[42] || queue_cards[card4] == queue_cards[43]))
    {
         *check_kare=12;
    }
    if((queue_cards[card1] == queue_cards[44] || queue_cards[card1] == queue_cards[45] || queue_cards[card1] == queue_cards[46] || queue_cards[card1] == queue_cards[47]) && (queue_cards[card2] == queue_cards[44] || queue_cards[card2] == queue_cards[45] || queue_cards[card2] == queue_cards[46] || queue_cards[card2] == queue_cards[47]) && (queue_cards[card3] == queue_cards[44] || queue_cards[card3] == queue_cards[45] || queue_cards[card3] == queue_cards[46] || queue_cards[card3] == queue_cards[47]) && (queue_cards[card4] == queue_cards[44] || queue_cards[card4] == queue_cards[45] || queue_cards[card4] == queue_cards[46] || queue_cards[card4] == queue_cards[47]))
    {
         *check_kare=13;
    }
    if((queue_cards[card1] == queue_cards[48] || queue_cards[card1] == queue_cards[49] || queue_cards[card1] == queue_cards[50] || queue_cards[card1] == queue_cards[51]) && (queue_cards[card2] == queue_cards[48] || queue_cards[card2] == queue_cards[49] || queue_cards[card2] == queue_cards[50] || queue_cards[card2] == queue_cards[51]) && (queue_cards[card3] == queue_cards[48] || queue_cards[card3] == queue_cards[49] || queue_cards[card3] == queue_cards[50] || queue_cards[card3] == queue_cards[51]) && (queue_cards[card4] == queue_cards[48] || queue_cards[card4] == queue_cards[49] || queue_cards[card4] == queue_cards[50] || queue_cards[card4] == queue_cards[51]))
    {
         *check_kare=14;
    }
}
//--------------CARDS--------------------
void CApp::combinations_straight_flash(int card1, int card2, int card3, int card4, int card5, int *check_flush_royal, int *check_straight_flush)
{
    if((queue_cards[card1] == queue_cards[0]||queue_cards[card1] == queue_cards[4]||queue_cards[card1] == queue_cards[8]||queue_cards[card1] == queue_cards[12]||queue_cards[card1] == queue_cards[16]) && (queue_cards[card2] == queue_cards[0]||queue_cards[card2] == queue_cards[4]||queue_cards[card2] == queue_cards[8]||queue_cards[card2] == queue_cards[12]||queue_cards[card2] == queue_cards[16]) && (queue_cards[card3] == queue_cards[0]||queue_cards[card3] == queue_cards[4]||queue_cards[card3] == queue_cards[8]||queue_cards[card3] == queue_cards[12]||queue_cards[card3] == queue_cards[16]) && (queue_cards[card4] == queue_cards[0]||queue_cards[card4] == queue_cards[4]||queue_cards[card4] == queue_cards[8]||queue_cards[card4] == queue_cards[12]||queue_cards[card4] == queue_cards[16]) && (queue_cards[card5] == queue_cards[0]||queue_cards[card5] == queue_cards[4]||queue_cards[card5] == queue_cards[8]||queue_cards[card5] == queue_cards[12]||queue_cards[card5] == queue_cards[16]))
    {
         *check_straight_flush=1;
    }
    if((queue_cards[card1] == queue_cards[1]||queue_cards[card1] == queue_cards[5]||queue_cards[card1] == queue_cards[9]||queue_cards[card1] == queue_cards[13]||queue_cards[card1] == queue_cards[17]) && (queue_cards[card2] == queue_cards[1]||queue_cards[card2] == queue_cards[5]||queue_cards[card2] == queue_cards[9]||queue_cards[card2] == queue_cards[13]||queue_cards[card2] == queue_cards[17]) && (queue_cards[card3] == queue_cards[1]||queue_cards[card3] == queue_cards[5]||queue_cards[card3] == queue_cards[9]||queue_cards[card3] == queue_cards[13]||queue_cards[card3] == queue_cards[17]) && (queue_cards[card4] == queue_cards[1]||queue_cards[card4] == queue_cards[5]||queue_cards[card4] == queue_cards[9]||queue_cards[card4] == queue_cards[13]||queue_cards[card4] == queue_cards[17]) && (queue_cards[card5] == queue_cards[1]||queue_cards[card5] == queue_cards[5]||queue_cards[card5] == queue_cards[9]||queue_cards[card5] == queue_cards[13]||queue_cards[card5] == queue_cards[17]))
    {
         *check_straight_flush=1;
    }
    if((queue_cards[card1] == queue_cards[2]||queue_cards[card1] == queue_cards[6]||queue_cards[card1] == queue_cards[10]||queue_cards[card1] == queue_cards[14]||queue_cards[card1] == queue_cards[18]) && (queue_cards[card2] == queue_cards[2]||queue_cards[card2] == queue_cards[6]||queue_cards[card2] == queue_cards[10]||queue_cards[card2] == queue_cards[14]||queue_cards[card2] == queue_cards[18]) && (queue_cards[card3] == queue_cards[2]||queue_cards[card3] == queue_cards[6]||queue_cards[card3] == queue_cards[10]||queue_cards[card3] == queue_cards[14]||queue_cards[card3] == queue_cards[18]) && (queue_cards[card4] == queue_cards[2]||queue_cards[card4] == queue_cards[6]||queue_cards[card4] == queue_cards[10]||queue_cards[card4] == queue_cards[14]||queue_cards[card4] == queue_cards[18]) && (queue_cards[card5] == queue_cards[2]||queue_cards[card5] == queue_cards[6]||queue_cards[card5] == queue_cards[10]||queue_cards[card5] == queue_cards[14]||queue_cards[card5] == queue_cards[18]))
    {
         *check_straight_flush=1;
    }
    if((queue_cards[card1] == queue_cards[3]||queue_cards[card1] == queue_cards[7]||queue_cards[card1] == queue_cards[11]||queue_cards[card1] == queue_cards[15]||queue_cards[card1] == queue_cards[19]) && (queue_cards[card2] == queue_cards[3]||queue_cards[card2] == queue_cards[7]||queue_cards[card2] == queue_cards[11]||queue_cards[card2] == queue_cards[15]||queue_cards[card2] == queue_cards[19]) && (queue_cards[card3] == queue_cards[3]||queue_cards[card3] == queue_cards[7]||queue_cards[card3] == queue_cards[11]||queue_cards[card3] == queue_cards[15]||queue_cards[card3] == queue_cards[19]) && (queue_cards[card4] == queue_cards[3]||queue_cards[card4] == queue_cards[7]||queue_cards[card4] == queue_cards[11]||queue_cards[card4] == queue_cards[15]||queue_cards[card4] == queue_cards[19]) && (queue_cards[card5] == queue_cards[3]||queue_cards[card5] == queue_cards[7]||queue_cards[card5] == queue_cards[11]||queue_cards[card5] == queue_cards[15]||queue_cards[card5] == queue_cards[19]))
    {
         *check_straight_flush=1;
    }
    if((queue_cards[card1] == queue_cards[4]||queue_cards[card1] == queue_cards[8]||queue_cards[card1] == queue_cards[12]||queue_cards[card1] == queue_cards[16]||queue_cards[card1] == queue_cards[20]) && (queue_cards[card2] == queue_cards[4]||queue_cards[card2] == queue_cards[8]||queue_cards[card2] == queue_cards[12]||queue_cards[card2] == queue_cards[16]||queue_cards[card2] == queue_cards[20]) && (queue_cards[card3] == queue_cards[4]||queue_cards[card3] == queue_cards[8]||queue_cards[card3] == queue_cards[12]||queue_cards[card3] == queue_cards[16]||queue_cards[card3] == queue_cards[20]) && (queue_cards[card4] == queue_cards[4]||queue_cards[card4] == queue_cards[8]||queue_cards[card4] == queue_cards[12]||queue_cards[card4] == queue_cards[16]||queue_cards[card4] == queue_cards[20]) && (queue_cards[card5] == queue_cards[4]||queue_cards[card5] == queue_cards[8]||queue_cards[card5] == queue_cards[12]||queue_cards[card5] == queue_cards[16]||queue_cards[card5] == queue_cards[20]))
    {
         *check_straight_flush=2;
    }
    if((queue_cards[card1] == queue_cards[5]||queue_cards[card1] == queue_cards[9]||queue_cards[card1] == queue_cards[13]||queue_cards[card1] == queue_cards[17]||queue_cards[card1] == queue_cards[21]) && (queue_cards[card2] == queue_cards[5]||queue_cards[card2] == queue_cards[9]||queue_cards[card2] == queue_cards[13]||queue_cards[card2] == queue_cards[17]||queue_cards[card2] == queue_cards[21]) && (queue_cards[card3] == queue_cards[5]||queue_cards[card3] == queue_cards[9]||queue_cards[card3] == queue_cards[13]||queue_cards[card3] == queue_cards[17]||queue_cards[card3] == queue_cards[21]) && (queue_cards[card4] == queue_cards[5]||queue_cards[card4] == queue_cards[9]||queue_cards[card4] == queue_cards[13]||queue_cards[card4] == queue_cards[17]||queue_cards[card4] == queue_cards[21]) && (queue_cards[card5] == queue_cards[5]||queue_cards[card5] == queue_cards[9]||queue_cards[card5] == queue_cards[13]||queue_cards[card5] == queue_cards[17]||queue_cards[card5] == queue_cards[21]))
    {
        *check_straight_flush=2;
    }
    if((queue_cards[card1] == queue_cards[6]||queue_cards[card1] == queue_cards[10]||queue_cards[card1] == queue_cards[14]||queue_cards[card1] == queue_cards[18]||queue_cards[card1] == queue_cards[22]) && (queue_cards[card2] == queue_cards[6]||queue_cards[card2] == queue_cards[10]||queue_cards[card2] == queue_cards[14]||queue_cards[card2] == queue_cards[18]||queue_cards[card2] == queue_cards[22]) && (queue_cards[card3] == queue_cards[6]||queue_cards[card3] == queue_cards[10]||queue_cards[card3] == queue_cards[14]||queue_cards[card3] == queue_cards[18]||queue_cards[card3] == queue_cards[22]) && (queue_cards[card4] == queue_cards[6]||queue_cards[card4] == queue_cards[10]||queue_cards[card4] == queue_cards[14]||queue_cards[card4] == queue_cards[18]||queue_cards[card4] == queue_cards[22]) && (queue_cards[card5] == queue_cards[6]||queue_cards[card5] == queue_cards[10]||queue_cards[card5] == queue_cards[14]||queue_cards[card5] == queue_cards[18]||queue_cards[card5] == queue_cards[22]))
    {
       *check_straight_flush=2;
    }
    if((queue_cards[card1] == queue_cards[7]||queue_cards[card1] == queue_cards[11]||queue_cards[card1] == queue_cards[15]||queue_cards[card1] == queue_cards[19]||queue_cards[card1] == queue_cards[23]) && (queue_cards[card2] == queue_cards[7]||queue_cards[card2] == queue_cards[11]||queue_cards[card2] == queue_cards[15]||queue_cards[card2] == queue_cards[19]||queue_cards[card2] == queue_cards[23]) && (queue_cards[card3] == queue_cards[7]||queue_cards[card3] == queue_cards[11]||queue_cards[card3] == queue_cards[15]||queue_cards[card3] == queue_cards[19]||queue_cards[card3] == queue_cards[23]) && (queue_cards[card4] == queue_cards[7]||queue_cards[card4] == queue_cards[11]||queue_cards[card4] == queue_cards[15]||queue_cards[card4] == queue_cards[19]||queue_cards[card4] == queue_cards[23]) && (queue_cards[card5] == queue_cards[7]||queue_cards[card5] == queue_cards[11]||queue_cards[card5] == queue_cards[15]||queue_cards[card5] == queue_cards[19]||queue_cards[card5] == queue_cards[23]))
    {
        *check_straight_flush=2;
    }
    if((queue_cards[card1] == queue_cards[8]||queue_cards[card1] == queue_cards[12]||queue_cards[card1] == queue_cards[16]||queue_cards[card1] == queue_cards[20]||queue_cards[card1] == queue_cards[24]) && (queue_cards[card2] == queue_cards[8]||queue_cards[card2] == queue_cards[12]||queue_cards[card2] == queue_cards[16]||queue_cards[card2] == queue_cards[20]||queue_cards[card2] == queue_cards[24]) && (queue_cards[card3] == queue_cards[8]||queue_cards[card3] == queue_cards[12]||queue_cards[card3] == queue_cards[16]||queue_cards[card3] == queue_cards[20]||queue_cards[card3] == queue_cards[24]) && (queue_cards[card4] == queue_cards[8]||queue_cards[card4] == queue_cards[12]||queue_cards[card4] == queue_cards[16]||queue_cards[card4] == queue_cards[20]||queue_cards[card4] == queue_cards[24]) && (queue_cards[card5] == queue_cards[8]||queue_cards[card5] == queue_cards[12]||queue_cards[card5] == queue_cards[16]||queue_cards[card5] == queue_cards[20]||queue_cards[card5] == queue_cards[24]))
    {
        *check_straight_flush=3;
    }
    if((queue_cards[card1] == queue_cards[9]||queue_cards[card1] == queue_cards[13]||queue_cards[card1] == queue_cards[17]||queue_cards[card1] == queue_cards[21]||queue_cards[card1] == queue_cards[25]) && (queue_cards[card2] == queue_cards[9]||queue_cards[card2] == queue_cards[13]||queue_cards[card2] == queue_cards[17]||queue_cards[card2] == queue_cards[21]||queue_cards[card2] == queue_cards[25]) && (queue_cards[card3] == queue_cards[9]||queue_cards[card3] == queue_cards[13]||queue_cards[card3] == queue_cards[17]||queue_cards[card3] == queue_cards[21]||queue_cards[card3] == queue_cards[25]) && (queue_cards[card4] == queue_cards[9]||queue_cards[card4] == queue_cards[13]||queue_cards[card4] == queue_cards[17]||queue_cards[card4] == queue_cards[21]||queue_cards[card4] == queue_cards[25]) && (queue_cards[card5] == queue_cards[9]||queue_cards[card5] == queue_cards[13]||queue_cards[card5] == queue_cards[17]||queue_cards[card5] == queue_cards[21]||queue_cards[card5] == queue_cards[25]))
    {
        *check_straight_flush=3;
    }
    if((queue_cards[card1] == queue_cards[10]||queue_cards[card1] == queue_cards[14]||queue_cards[card1] == queue_cards[18]||queue_cards[card1] == queue_cards[22]||queue_cards[card1] == queue_cards[26]) && (queue_cards[card2] == queue_cards[10]||queue_cards[card2] == queue_cards[14]||queue_cards[card2] == queue_cards[18]||queue_cards[card2] == queue_cards[22]||queue_cards[card2] == queue_cards[26]) && (queue_cards[card3] == queue_cards[10]||queue_cards[card3] == queue_cards[14]||queue_cards[card3] == queue_cards[18]||queue_cards[card3] == queue_cards[22]||queue_cards[card3] == queue_cards[26]) && (queue_cards[card4] == queue_cards[10]||queue_cards[card4] == queue_cards[14]||queue_cards[card4] == queue_cards[18]||queue_cards[card4] == queue_cards[22]||queue_cards[card4] == queue_cards[26]) && (queue_cards[card5] == queue_cards[10]||queue_cards[card5] == queue_cards[14]||queue_cards[card5] == queue_cards[18]||queue_cards[card5] == queue_cards[22]||queue_cards[card5] == queue_cards[26]))
    {
        *check_straight_flush=3;
    }
    if((queue_cards[card1] == queue_cards[11]||queue_cards[card1] == queue_cards[15]||queue_cards[card1] == queue_cards[19]||queue_cards[card1] == queue_cards[23]||queue_cards[card1] == queue_cards[27]) && (queue_cards[card2] == queue_cards[11]||queue_cards[card2] == queue_cards[15]||queue_cards[card2] == queue_cards[19]||queue_cards[card2] == queue_cards[23]||queue_cards[card2] == queue_cards[27]) && (queue_cards[card3] == queue_cards[11]||queue_cards[card3] == queue_cards[15]||queue_cards[card3] == queue_cards[19]||queue_cards[card3] == queue_cards[23]||queue_cards[card3] == queue_cards[27]) && (queue_cards[card4] == queue_cards[11]||queue_cards[card4] == queue_cards[15]||queue_cards[card4] == queue_cards[19]||queue_cards[card4] == queue_cards[23]||queue_cards[card4] == queue_cards[27]) && (queue_cards[card5] == queue_cards[11]||queue_cards[card5] == queue_cards[15]||queue_cards[card5] == queue_cards[19]||queue_cards[card5] == queue_cards[23]||queue_cards[card5] == queue_cards[27]))
    {
        *check_straight_flush=3;
    }
    if((queue_cards[card1] == queue_cards[12]||queue_cards[card1] == queue_cards[16]||queue_cards[card1] == queue_cards[20]||queue_cards[card1] == queue_cards[24]||queue_cards[card1] == queue_cards[28]) && (queue_cards[card2] == queue_cards[12]||queue_cards[card2] == queue_cards[16]||queue_cards[card2] == queue_cards[20]||queue_cards[card2] == queue_cards[24]||queue_cards[card2] == queue_cards[28]) && (queue_cards[card3] == queue_cards[12]||queue_cards[card3] == queue_cards[16]||queue_cards[card3] == queue_cards[20]||queue_cards[card3] == queue_cards[24]||queue_cards[card3] == queue_cards[28]) && (queue_cards[card4] == queue_cards[12]||queue_cards[card4] == queue_cards[16]||queue_cards[card4] == queue_cards[20]||queue_cards[card4] == queue_cards[24]||queue_cards[card4] == queue_cards[28]) && (queue_cards[card5] == queue_cards[12]||queue_cards[card5] == queue_cards[16]||queue_cards[card5] == queue_cards[20]||queue_cards[card5] == queue_cards[24]||queue_cards[card5] == queue_cards[28]))
    {
        *check_straight_flush=4;
    }
    if((queue_cards[card1] == queue_cards[13]||queue_cards[card1] == queue_cards[17]||queue_cards[card1] == queue_cards[21]||queue_cards[card1] == queue_cards[25]||queue_cards[card1] == queue_cards[29]) && (queue_cards[card2] == queue_cards[13]||queue_cards[card2] == queue_cards[17]||queue_cards[card2] == queue_cards[21]||queue_cards[card2] == queue_cards[25]||queue_cards[card2] == queue_cards[29]) && (queue_cards[card3] == queue_cards[13]||queue_cards[card3] == queue_cards[17]||queue_cards[card3] == queue_cards[21]||queue_cards[card3] == queue_cards[25]||queue_cards[card3] == queue_cards[29]) && (queue_cards[card4] == queue_cards[13]||queue_cards[card4] == queue_cards[17]||queue_cards[card4] == queue_cards[21]||queue_cards[card4] == queue_cards[25]||queue_cards[card4] == queue_cards[29]) && (queue_cards[card5] == queue_cards[13]||queue_cards[card5] == queue_cards[17]||queue_cards[card5] == queue_cards[21]||queue_cards[card5] == queue_cards[25]||queue_cards[card5] == queue_cards[29]))
    {
        *check_straight_flush=4;
    }
    if((queue_cards[card1] == queue_cards[14]||queue_cards[card1] == queue_cards[18]||queue_cards[card1] == queue_cards[22]||queue_cards[card1] == queue_cards[26]||queue_cards[card1] == queue_cards[30]) && (queue_cards[card2] == queue_cards[14]||queue_cards[card2] == queue_cards[18]||queue_cards[card2] == queue_cards[22]||queue_cards[card2] == queue_cards[26]||queue_cards[card2] == queue_cards[30]) && (queue_cards[card3] == queue_cards[14]||queue_cards[card3] == queue_cards[18]||queue_cards[card3] == queue_cards[22]||queue_cards[card3] == queue_cards[26]||queue_cards[card3] == queue_cards[30]) && (queue_cards[card4] == queue_cards[14]||queue_cards[card4] == queue_cards[18]||queue_cards[card4] == queue_cards[22]||queue_cards[card4] == queue_cards[26]||queue_cards[card4] == queue_cards[30]) && (queue_cards[card5] == queue_cards[14]||queue_cards[card5] == queue_cards[18]||queue_cards[card5] == queue_cards[22]||queue_cards[card5] == queue_cards[26]||queue_cards[card5] == queue_cards[30]))
    {
        *check_straight_flush=4;
    }
    if((queue_cards[card1] == queue_cards[15]||queue_cards[card1] == queue_cards[19]||queue_cards[card1] == queue_cards[23]||queue_cards[card1] == queue_cards[27]||queue_cards[card1] == queue_cards[31]) && (queue_cards[card2] == queue_cards[15]||queue_cards[card2] == queue_cards[19]||queue_cards[card2] == queue_cards[23]||queue_cards[card2] == queue_cards[27]||queue_cards[card2] == queue_cards[31]) && (queue_cards[card3] == queue_cards[15]||queue_cards[card3] == queue_cards[19]||queue_cards[card3] == queue_cards[23]||queue_cards[card3] == queue_cards[27]||queue_cards[card3] == queue_cards[31]) && (queue_cards[card4] == queue_cards[15]||queue_cards[card4] == queue_cards[19]||queue_cards[card4] == queue_cards[23]||queue_cards[card4] == queue_cards[27]||queue_cards[card4] == queue_cards[31]) && (queue_cards[card5] == queue_cards[15]||queue_cards[card5] == queue_cards[19]||queue_cards[card5] == queue_cards[23]||queue_cards[card5] == queue_cards[27]||queue_cards[card5] == queue_cards[31]))
    {
        *check_straight_flush=4;
    }
    if((queue_cards[card1] == queue_cards[16]||queue_cards[card1] == queue_cards[20]||queue_cards[card1] == queue_cards[24]||queue_cards[card1] == queue_cards[28]||queue_cards[card1] == queue_cards[32]) && (queue_cards[card2] == queue_cards[16]||queue_cards[card2] == queue_cards[20]||queue_cards[card2] == queue_cards[24]||queue_cards[card2] == queue_cards[28]||queue_cards[card2] == queue_cards[32]) && (queue_cards[card3] == queue_cards[16]||queue_cards[card3] == queue_cards[20]||queue_cards[card3] == queue_cards[24]||queue_cards[card3] == queue_cards[28]||queue_cards[card3] == queue_cards[32]) && (queue_cards[card4] == queue_cards[16]||queue_cards[card4] == queue_cards[20]||queue_cards[card4] == queue_cards[24]||queue_cards[card4] == queue_cards[28]||queue_cards[card4] == queue_cards[32]) && (queue_cards[card5] == queue_cards[16]||queue_cards[card5] == queue_cards[20]||queue_cards[card5] == queue_cards[24]||queue_cards[card5] == queue_cards[28]||queue_cards[card5] == queue_cards[32]))
    {
        *check_straight_flush=5;
    }
    if((queue_cards[card1] == queue_cards[17]||queue_cards[card1] == queue_cards[21]||queue_cards[card1] == queue_cards[25]||queue_cards[card1] == queue_cards[29]||queue_cards[card1] == queue_cards[33]) && (queue_cards[card2] == queue_cards[17]||queue_cards[card2] == queue_cards[21]||queue_cards[card2] == queue_cards[25]||queue_cards[card2] == queue_cards[29]||queue_cards[card2] == queue_cards[33]) && (queue_cards[card3] == queue_cards[17]||queue_cards[card3] == queue_cards[21]||queue_cards[card3] == queue_cards[25]||queue_cards[card3] == queue_cards[29]||queue_cards[card3] == queue_cards[33]) && (queue_cards[card4] == queue_cards[17]||queue_cards[card4] == queue_cards[21]||queue_cards[card4] == queue_cards[25]||queue_cards[card4] == queue_cards[29]||queue_cards[card4] == queue_cards[33]) && (queue_cards[card5] == queue_cards[17]||queue_cards[card5] == queue_cards[21]||queue_cards[card5] == queue_cards[25]||queue_cards[card5] == queue_cards[29]||queue_cards[card5] == queue_cards[33]))
    {
        *check_straight_flush=5;
    }
    if((queue_cards[card1] == queue_cards[18]||queue_cards[card1] == queue_cards[22]||queue_cards[card1] == queue_cards[26]||queue_cards[card1] == queue_cards[30]||queue_cards[card1] == queue_cards[34]) && (queue_cards[card2] == queue_cards[18]||queue_cards[card2] == queue_cards[22]||queue_cards[card2] == queue_cards[26]||queue_cards[card2] == queue_cards[30]||queue_cards[card2] == queue_cards[34]) && (queue_cards[card3] == queue_cards[18]||queue_cards[card3] == queue_cards[22]||queue_cards[card3] == queue_cards[26]||queue_cards[card3] == queue_cards[30]||queue_cards[card3] == queue_cards[34]) && (queue_cards[card4] == queue_cards[18]||queue_cards[card4] == queue_cards[22]||queue_cards[card4] == queue_cards[26]||queue_cards[card4] == queue_cards[30]||queue_cards[card4] == queue_cards[34]) && (queue_cards[card5] == queue_cards[18]||queue_cards[card5] == queue_cards[22]||queue_cards[card5] == queue_cards[26]||queue_cards[card5] == queue_cards[30]||queue_cards[card5] == queue_cards[34]))
    {
        *check_straight_flush=5;
    }
    if((queue_cards[card1] == queue_cards[19]||queue_cards[card1] == queue_cards[23]||queue_cards[card1] == queue_cards[27]||queue_cards[card1] == queue_cards[31]||queue_cards[card1] == queue_cards[35]) && (queue_cards[card2] == queue_cards[19]||queue_cards[card2] == queue_cards[23]||queue_cards[card2] == queue_cards[27]||queue_cards[card2] == queue_cards[31]||queue_cards[card2] == queue_cards[35]) && (queue_cards[card3] == queue_cards[19]||queue_cards[card3] == queue_cards[23]||queue_cards[card3] == queue_cards[27]||queue_cards[card3] == queue_cards[31]||queue_cards[card3] == queue_cards[35]) && (queue_cards[card4] == queue_cards[19]||queue_cards[card4] == queue_cards[23]||queue_cards[card4] == queue_cards[27]||queue_cards[card4] == queue_cards[31]||queue_cards[card4] == queue_cards[35]) && (queue_cards[card5] == queue_cards[19]||queue_cards[card5] == queue_cards[23]||queue_cards[card5] == queue_cards[27]||queue_cards[card5] == queue_cards[31]||queue_cards[card5] == queue_cards[35]))
    {
        *check_straight_flush=5;
    }
    if((queue_cards[card1] == queue_cards[20]||queue_cards[card1] == queue_cards[24]||queue_cards[card1] == queue_cards[28]||queue_cards[card1] == queue_cards[32]||queue_cards[card1] == queue_cards[36]) && (queue_cards[card2] == queue_cards[20]||queue_cards[card2] == queue_cards[24]||queue_cards[card2] == queue_cards[28]||queue_cards[card2] == queue_cards[32]||queue_cards[card2] == queue_cards[36]) && (queue_cards[card3] == queue_cards[20]||queue_cards[card3] == queue_cards[24]||queue_cards[card3] == queue_cards[28]||queue_cards[card3] == queue_cards[32]||queue_cards[card3] == queue_cards[36]) && (queue_cards[card4] == queue_cards[20]||queue_cards[card4] == queue_cards[24]||queue_cards[card4] == queue_cards[28]||queue_cards[card4] == queue_cards[32]||queue_cards[card4] == queue_cards[36]) && (queue_cards[card5] == queue_cards[20]||queue_cards[card5] == queue_cards[24]||queue_cards[card5] == queue_cards[28]||queue_cards[card5] == queue_cards[32]||queue_cards[card5] == queue_cards[36]))
    {
        *check_straight_flush=6;
    }
    if((queue_cards[card1] == queue_cards[21]||queue_cards[card1] == queue_cards[25]||queue_cards[card1] == queue_cards[29]||queue_cards[card1] == queue_cards[33]||queue_cards[card1] == queue_cards[37]) && (queue_cards[card2] == queue_cards[21]||queue_cards[card2] == queue_cards[25]||queue_cards[card2] == queue_cards[29]||queue_cards[card2] == queue_cards[33]||queue_cards[card2] == queue_cards[37]) && (queue_cards[card3] == queue_cards[21]||queue_cards[card3] == queue_cards[25]||queue_cards[card3] == queue_cards[29]||queue_cards[card3] == queue_cards[33]||queue_cards[card3] == queue_cards[37]) && (queue_cards[card4] == queue_cards[21]||queue_cards[card4] == queue_cards[25]||queue_cards[card4] == queue_cards[29]||queue_cards[card4] == queue_cards[33]||queue_cards[card4] == queue_cards[37]) && (queue_cards[card5] == queue_cards[21]||queue_cards[card5] == queue_cards[25]||queue_cards[card5] == queue_cards[29]||queue_cards[card5] == queue_cards[33]||queue_cards[card5] == queue_cards[37]))
    {
        *check_straight_flush=6;
    }
    if((queue_cards[card1] == queue_cards[22]||queue_cards[card1] == queue_cards[26]||queue_cards[card1] == queue_cards[30]||queue_cards[card1] == queue_cards[34]||queue_cards[card1] == queue_cards[38]) && (queue_cards[card2] == queue_cards[22]||queue_cards[card2] == queue_cards[26]||queue_cards[card2] == queue_cards[30]||queue_cards[card2] == queue_cards[34]||queue_cards[card2] == queue_cards[38]) && (queue_cards[card3] == queue_cards[22]||queue_cards[card3] == queue_cards[26]||queue_cards[card3] == queue_cards[30]||queue_cards[card3] == queue_cards[34]||queue_cards[card3] == queue_cards[38]) && (queue_cards[card4] == queue_cards[22]||queue_cards[card4] == queue_cards[26]||queue_cards[card4] == queue_cards[30]||queue_cards[card4] == queue_cards[34]||queue_cards[card4] == queue_cards[38]) && (queue_cards[card5] == queue_cards[22]||queue_cards[card5] == queue_cards[26]||queue_cards[card5] == queue_cards[30]||queue_cards[card5] == queue_cards[34]||queue_cards[card5] == queue_cards[38]))
    {
        *check_straight_flush=6;
    }
    if((queue_cards[card1] == queue_cards[23]||queue_cards[card1] == queue_cards[27]||queue_cards[card1] == queue_cards[31]||queue_cards[card1] == queue_cards[35]||queue_cards[card1] == queue_cards[39]) && (queue_cards[card2] == queue_cards[23]||queue_cards[card2] == queue_cards[27]||queue_cards[card2] == queue_cards[31]||queue_cards[card2] == queue_cards[35]||queue_cards[card2] == queue_cards[39]) && (queue_cards[card3] == queue_cards[23]||queue_cards[card3] == queue_cards[27]||queue_cards[card3] == queue_cards[31]||queue_cards[card3] == queue_cards[35]||queue_cards[card3] == queue_cards[39]) && (queue_cards[card4] == queue_cards[23]||queue_cards[card4] == queue_cards[27]||queue_cards[card4] == queue_cards[31]||queue_cards[card4] == queue_cards[35]||queue_cards[card4] == queue_cards[39]) && (queue_cards[card5] == queue_cards[23]||queue_cards[card5] == queue_cards[27]||queue_cards[card5] == queue_cards[31]||queue_cards[card5] == queue_cards[35]||queue_cards[card5] == queue_cards[39]))
    {
        *check_straight_flush=6;
    }
    if((queue_cards[card1] == queue_cards[24]||queue_cards[card1] == queue_cards[28]||queue_cards[card1] == queue_cards[32]||queue_cards[card1] == queue_cards[36]||queue_cards[card1] == queue_cards[40]) && (queue_cards[card2] == queue_cards[24]||queue_cards[card2] == queue_cards[28]||queue_cards[card2] == queue_cards[32]||queue_cards[card2] == queue_cards[36]||queue_cards[card2] == queue_cards[40]) && (queue_cards[card3] == queue_cards[24]||queue_cards[card3] == queue_cards[28]||queue_cards[card3] == queue_cards[32]||queue_cards[card3] == queue_cards[36]||queue_cards[card3] == queue_cards[40]) && (queue_cards[card4] == queue_cards[24]||queue_cards[card4] == queue_cards[28]||queue_cards[card4] == queue_cards[32]||queue_cards[card4] == queue_cards[36]||queue_cards[card4] == queue_cards[40]) && (queue_cards[card5] == queue_cards[24]||queue_cards[card5] == queue_cards[28]||queue_cards[card5] == queue_cards[32]||queue_cards[card5] == queue_cards[36]||queue_cards[card5] == queue_cards[40]))
    {
        *check_straight_flush=7;
    }
    if((queue_cards[card1] == queue_cards[25]||queue_cards[card1] == queue_cards[29]||queue_cards[card1] == queue_cards[33]||queue_cards[card1] == queue_cards[37]||queue_cards[card1] == queue_cards[41]) && (queue_cards[card2] == queue_cards[25]||queue_cards[card2] == queue_cards[29]||queue_cards[card2] == queue_cards[33]||queue_cards[card2] == queue_cards[37]||queue_cards[card2] == queue_cards[41]) && (queue_cards[card3] == queue_cards[25]||queue_cards[card3] == queue_cards[29]||queue_cards[card3] == queue_cards[33]||queue_cards[card3] == queue_cards[37]||queue_cards[card3] == queue_cards[41]) && (queue_cards[card4] == queue_cards[25]||queue_cards[card4] == queue_cards[29]||queue_cards[card4] == queue_cards[33]||queue_cards[card4] == queue_cards[37]||queue_cards[card4] == queue_cards[41]) && (queue_cards[card5] == queue_cards[25]||queue_cards[card5] == queue_cards[29]||queue_cards[card5] == queue_cards[33]||queue_cards[card5] == queue_cards[37]||queue_cards[card5] == queue_cards[41]))
    {
        *check_straight_flush=7;
    }
    if((queue_cards[card1] == queue_cards[26]||queue_cards[card1] == queue_cards[30]||queue_cards[card1] == queue_cards[34]||queue_cards[card1] == queue_cards[38]||queue_cards[card1] == queue_cards[42]) && (queue_cards[card2] == queue_cards[26]||queue_cards[card2] == queue_cards[30]||queue_cards[card2] == queue_cards[34]||queue_cards[card2] == queue_cards[38]||queue_cards[card2] == queue_cards[42]) && (queue_cards[card3] == queue_cards[26]||queue_cards[card3] == queue_cards[30]||queue_cards[card3] == queue_cards[34]||queue_cards[card3] == queue_cards[38]||queue_cards[card3] == queue_cards[42]) && (queue_cards[card4] == queue_cards[26]||queue_cards[card4] == queue_cards[30]||queue_cards[card4] == queue_cards[34]||queue_cards[card4] == queue_cards[38]||queue_cards[card4] == queue_cards[42]) && (queue_cards[card5] == queue_cards[26]||queue_cards[card5] == queue_cards[30]||queue_cards[card5] == queue_cards[34]||queue_cards[card5] == queue_cards[38]||queue_cards[card5] == queue_cards[42]))
    {
        *check_straight_flush=7;
    }
    if((queue_cards[card1] == queue_cards[27]||queue_cards[card1] == queue_cards[31]||queue_cards[card1] == queue_cards[35]||queue_cards[card1] == queue_cards[39]||queue_cards[card1] == queue_cards[43]) && (queue_cards[card2] == queue_cards[27]||queue_cards[card2] == queue_cards[31]||queue_cards[card2] == queue_cards[35]||queue_cards[card2] == queue_cards[39]||queue_cards[card2] == queue_cards[43]) && (queue_cards[card3] == queue_cards[27]||queue_cards[card3] == queue_cards[31]||queue_cards[card3] == queue_cards[35]||queue_cards[card3] == queue_cards[39]||queue_cards[card3] == queue_cards[43]) && (queue_cards[card4] == queue_cards[27]||queue_cards[card4] == queue_cards[31]||queue_cards[card4] == queue_cards[35]||queue_cards[card4] == queue_cards[39]||queue_cards[card4] == queue_cards[43]) && (queue_cards[card5] == queue_cards[27]||queue_cards[card5] == queue_cards[31]||queue_cards[card5] == queue_cards[35]||queue_cards[card5] == queue_cards[39]||queue_cards[card5] == queue_cards[43]))
    {
        *check_straight_flush=7;
    }
    if((queue_cards[card1] == queue_cards[28]||queue_cards[card1] == queue_cards[32]||queue_cards[card1] == queue_cards[36]||queue_cards[card1] == queue_cards[40]||queue_cards[card1] == queue_cards[44]) && (queue_cards[card2] == queue_cards[28]||queue_cards[card2] == queue_cards[32]||queue_cards[card2] == queue_cards[36]||queue_cards[card2] == queue_cards[40]||queue_cards[card2] == queue_cards[44]) && (queue_cards[card3] == queue_cards[28]||queue_cards[card3] == queue_cards[32]||queue_cards[card3] == queue_cards[36]||queue_cards[card3] == queue_cards[40]||queue_cards[card3] == queue_cards[44]) && (queue_cards[card4] == queue_cards[28]||queue_cards[card4] == queue_cards[32]||queue_cards[card4] == queue_cards[36]||queue_cards[card4] == queue_cards[40]||queue_cards[card4] == queue_cards[44]) && (queue_cards[card5] == queue_cards[28]||queue_cards[card5] == queue_cards[32]||queue_cards[card5] == queue_cards[36]||queue_cards[card5] == queue_cards[40]||queue_cards[card5] == queue_cards[44]))
    {
        *check_straight_flush=8;
    }
    if((queue_cards[card1] == queue_cards[29]||queue_cards[card1] == queue_cards[33]||queue_cards[card1] == queue_cards[37]||queue_cards[card1] == queue_cards[41]||queue_cards[card1] == queue_cards[45]) && (queue_cards[card2] == queue_cards[29]||queue_cards[card2] == queue_cards[33]||queue_cards[card2] == queue_cards[37]||queue_cards[card2] == queue_cards[41]||queue_cards[card2] == queue_cards[45]) && (queue_cards[card3] == queue_cards[29]||queue_cards[card3] == queue_cards[33]||queue_cards[card3] == queue_cards[37]||queue_cards[card3] == queue_cards[41]||queue_cards[card3] == queue_cards[45]) && (queue_cards[card4] == queue_cards[29]||queue_cards[card4] == queue_cards[33]||queue_cards[card4] == queue_cards[37]||queue_cards[card4] == queue_cards[41]||queue_cards[card4] == queue_cards[45]) && (queue_cards[card5] == queue_cards[29]||queue_cards[card5] == queue_cards[33]||queue_cards[card5] == queue_cards[37]||queue_cards[card5] == queue_cards[41]||queue_cards[card5] == queue_cards[45]))
    {
        *check_straight_flush=8;
    }
    if((queue_cards[card1] == queue_cards[30]||queue_cards[card1] == queue_cards[34]||queue_cards[card1] == queue_cards[38]||queue_cards[card1] == queue_cards[42]||queue_cards[card1] == queue_cards[46]) && (queue_cards[card2] == queue_cards[30]||queue_cards[card2] == queue_cards[34]||queue_cards[card2] == queue_cards[38]||queue_cards[card2] == queue_cards[42]||queue_cards[card2] == queue_cards[46]) && (queue_cards[card3] == queue_cards[30]||queue_cards[card3] == queue_cards[34]||queue_cards[card3] == queue_cards[38]||queue_cards[card3] == queue_cards[42]||queue_cards[card3] == queue_cards[46]) && (queue_cards[card4] == queue_cards[30]||queue_cards[card4] == queue_cards[34]||queue_cards[card4] == queue_cards[38]||queue_cards[card4] == queue_cards[42]||queue_cards[card4] == queue_cards[46]) && (queue_cards[card5] == queue_cards[30]||queue_cards[card5] == queue_cards[34]||queue_cards[card5] == queue_cards[38]||queue_cards[card5] == queue_cards[42]||queue_cards[card5] == queue_cards[46]))
    {
        *check_straight_flush=8;
    }
    if((queue_cards[card1] == queue_cards[31]||queue_cards[card1] == queue_cards[35]||queue_cards[card1] == queue_cards[39]||queue_cards[card1] == queue_cards[43]||queue_cards[card1] == queue_cards[47]) && (queue_cards[card2] == queue_cards[31]||queue_cards[card2] == queue_cards[35]||queue_cards[card2] == queue_cards[39]||queue_cards[card2] == queue_cards[43]||queue_cards[card2] == queue_cards[47]) && (queue_cards[card3] == queue_cards[31]||queue_cards[card3] == queue_cards[35]||queue_cards[card3] == queue_cards[39]||queue_cards[card3] == queue_cards[43]||queue_cards[card3] == queue_cards[47]) && (queue_cards[card4] == queue_cards[31]||queue_cards[card4] == queue_cards[35]||queue_cards[card4] == queue_cards[39]||queue_cards[card4] == queue_cards[43]||queue_cards[card4] == queue_cards[47]) && (queue_cards[card5] == queue_cards[31]||queue_cards[card5] == queue_cards[35]||queue_cards[card5] == queue_cards[39]||queue_cards[card5] == queue_cards[43]||queue_cards[card5] == queue_cards[47]))
    {
        *check_straight_flush=8;
    }
    if((queue_cards[card1] == queue_cards[32]||queue_cards[card1] == queue_cards[36]||queue_cards[card1] == queue_cards[40]||queue_cards[card1] == queue_cards[44]||queue_cards[card1] == queue_cards[48]) && (queue_cards[card2] == queue_cards[32]||queue_cards[card2] == queue_cards[36]||queue_cards[card2] == queue_cards[40]||queue_cards[card2] == queue_cards[44]||queue_cards[card2] == queue_cards[48]) && (queue_cards[card3] == queue_cards[32]||queue_cards[card3] == queue_cards[36]||queue_cards[card3] == queue_cards[40]||queue_cards[card3] == queue_cards[44]||queue_cards[card3] == queue_cards[48]) && (queue_cards[card4] == queue_cards[32]||queue_cards[card4] == queue_cards[36]||queue_cards[card4] == queue_cards[40]||queue_cards[card4] == queue_cards[44]||queue_cards[card4] == queue_cards[48]) && (queue_cards[card5] == queue_cards[32]||queue_cards[card5] == queue_cards[36]||queue_cards[card5] == queue_cards[40]||queue_cards[card5] == queue_cards[44]||queue_cards[card5] == queue_cards[48]))
    {
        *check_flush_royal=1;
    }
    if((queue_cards[card1] == queue_cards[33]||queue_cards[card1] == queue_cards[37]||queue_cards[card1] == queue_cards[41]||queue_cards[card1] == queue_cards[45]||queue_cards[card1] == queue_cards[49]) && (queue_cards[card2] == queue_cards[33]||queue_cards[card2] == queue_cards[37]||queue_cards[card2] == queue_cards[41]||queue_cards[card2] == queue_cards[45]||queue_cards[card2] == queue_cards[49]) && (queue_cards[card3] == queue_cards[33]||queue_cards[card3] == queue_cards[37]||queue_cards[card3] == queue_cards[41]||queue_cards[card3] == queue_cards[45]||queue_cards[card3] == queue_cards[49]) && (queue_cards[card4] == queue_cards[33]||queue_cards[card4] == queue_cards[37]||queue_cards[card4] == queue_cards[41]||queue_cards[card4] == queue_cards[45]||queue_cards[card4] == queue_cards[49]) && (queue_cards[card5] == queue_cards[33]||queue_cards[card5] == queue_cards[37]||queue_cards[card5] == queue_cards[41]||queue_cards[card5] == queue_cards[45]||queue_cards[card5] == queue_cards[49]))
    {
        *check_flush_royal=1;
    }
    if((queue_cards[card1] == queue_cards[34]||queue_cards[card1] == queue_cards[38]||queue_cards[card1] == queue_cards[42]||queue_cards[card1] == queue_cards[46]||queue_cards[card1] == queue_cards[50]) && (queue_cards[card2] == queue_cards[34]||queue_cards[card2] == queue_cards[38]||queue_cards[card2] == queue_cards[42]||queue_cards[card2] == queue_cards[46]||queue_cards[card2] == queue_cards[50]) && (queue_cards[card3] == queue_cards[34]||queue_cards[card3] == queue_cards[38]||queue_cards[card3] == queue_cards[42]||queue_cards[card3] == queue_cards[46]||queue_cards[card3] == queue_cards[50]) && (queue_cards[card4] == queue_cards[34]||queue_cards[card4] == queue_cards[38]||queue_cards[card4] == queue_cards[42]||queue_cards[card4] == queue_cards[46]||queue_cards[card4] == queue_cards[50]) && (queue_cards[card5] == queue_cards[34]||queue_cards[card5] == queue_cards[38]||queue_cards[card5] == queue_cards[42]||queue_cards[card5] == queue_cards[46]||queue_cards[card5] == queue_cards[50]))
    {
        *check_flush_royal=1;
    }
    if((queue_cards[card1] == queue_cards[35]||queue_cards[card1] == queue_cards[39]||queue_cards[card1] == queue_cards[43]||queue_cards[card1] == queue_cards[47]||queue_cards[card1] == queue_cards[51]) && (queue_cards[card2] == queue_cards[35]||queue_cards[card2] == queue_cards[39]||queue_cards[card2] == queue_cards[43]||queue_cards[card2] == queue_cards[47]||queue_cards[card2] == queue_cards[51]) && (queue_cards[card3] == queue_cards[35]||queue_cards[card3] == queue_cards[39]||queue_cards[card3] == queue_cards[43]||queue_cards[card3] == queue_cards[47]||queue_cards[card3] == queue_cards[51]) && (queue_cards[card4] == queue_cards[35]||queue_cards[card4] == queue_cards[39]||queue_cards[card4] == queue_cards[43]||queue_cards[card4] == queue_cards[47]||queue_cards[card4] == queue_cards[51]) && (queue_cards[card5] == queue_cards[35]||queue_cards[card5] == queue_cards[39]||queue_cards[card5] == queue_cards[43]||queue_cards[card5] == queue_cards[47]||queue_cards[card5] == queue_cards[51]))
    {
        *check_flush_royal=1;
    }
}
//--------------CARDS--------------------
void CApp::combinations_straight(int card1, int card2, int card3, int card4, int card5, int NS, int NS1, int temp, int *check_straigh)
{
//----------------STRAIGHT-2-------------
    if(queue_cards[card1] == queue_cards[NS+0]||queue_cards[card1] == queue_cards[NS+1]||queue_cards[card1] == queue_cards[NS+2]||queue_cards[card1] == queue_cards[NS+3])
    {
        if(queue_cards[card2] == queue_cards[NS+4]||queue_cards[card2] == queue_cards[NS+5]||queue_cards[card2] == queue_cards[NS+6]||queue_cards[card2] == queue_cards[NS+7])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+8]||queue_cards[card2] == queue_cards[NS+9]||queue_cards[card2] == queue_cards[NS+10]||queue_cards[card2] == queue_cards[NS+11])
        {
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+12]||queue_cards[card2] == queue_cards[NS+13]||queue_cards[card2] == queue_cards[NS+14]||queue_cards[card2] == queue_cards[NS+15])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS1+NS+16]||queue_cards[card2] == queue_cards[NS1+NS+17]||queue_cards[card2] == queue_cards[NS1+NS+18]||queue_cards[card2] == queue_cards[NS1+NS+19])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
    }
    if(queue_cards[card1] == queue_cards[NS+4]||queue_cards[card1] == queue_cards[NS+5]||queue_cards[card1] == queue_cards[NS+6]||queue_cards[card1] == queue_cards[NS+7])
    {
        if(queue_cards[card2] == queue_cards[NS+0]||queue_cards[card2] == queue_cards[NS+1]||queue_cards[card2] == queue_cards[NS+2]||queue_cards[card2] == queue_cards[NS+3])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+8]||queue_cards[card2] == queue_cards[NS+9]||queue_cards[card2] == queue_cards[NS+10]||queue_cards[card2] == queue_cards[NS+11])
        {
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+12]||queue_cards[card2] == queue_cards[NS+13]||queue_cards[card2] == queue_cards[NS+14]||queue_cards[card2] == queue_cards[NS+15])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS1+NS+16]||queue_cards[card2] == queue_cards[NS1+NS+17]||queue_cards[card2] == queue_cards[NS1+NS+18]||queue_cards[card2] == queue_cards[NS1+NS+19])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
    }
    if(queue_cards[card1] == queue_cards[NS+8]||queue_cards[card1] == queue_cards[NS+9]||queue_cards[card1] == queue_cards[NS+10]||queue_cards[card1] == queue_cards[NS+11])
    {
        if(queue_cards[card2] == queue_cards[NS+4]||queue_cards[card2] == queue_cards[NS+5]||queue_cards[card2] == queue_cards[NS+6]||queue_cards[card2] == queue_cards[NS+7])
        {
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+0]||queue_cards[card2] == queue_cards[NS+1]||queue_cards[card2] == queue_cards[NS+2]||queue_cards[card2] == queue_cards[NS+3])
        {
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+12]||queue_cards[card2] == queue_cards[NS+13]||queue_cards[card2] == queue_cards[NS+14]||queue_cards[card2] == queue_cards[NS+15])
        {
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS1+NS+16]||queue_cards[card2] == queue_cards[NS1+NS+17]||queue_cards[card2] == queue_cards[NS1+NS+18]||queue_cards[card2] == queue_cards[NS1+NS+19])
        {
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
    }
    if(queue_cards[card1] == queue_cards[NS+12]||queue_cards[card1] == queue_cards[NS+13]||queue_cards[card1] == queue_cards[NS+14]||queue_cards[card1] == queue_cards[NS+15])
    {
        if(queue_cards[card2] == queue_cards[NS+4]||queue_cards[card2] == queue_cards[NS+5]||queue_cards[card2] == queue_cards[NS+6]||queue_cards[card2] == queue_cards[NS+7])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+8]||queue_cards[card2] == queue_cards[NS+9]||queue_cards[card2] == queue_cards[NS+10]||queue_cards[card2] == queue_cards[NS+11])
        {
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+0]||queue_cards[card2] == queue_cards[NS+1]||queue_cards[card2] == queue_cards[NS+2]||queue_cards[card2] == queue_cards[NS+3])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS1+NS+16]||queue_cards[card5] == queue_cards[NS1+NS+17]||queue_cards[card5] == queue_cards[NS1+NS+18]||queue_cards[card5] == queue_cards[NS1+NS+19])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS1+NS+16]||queue_cards[card4] == queue_cards[NS1+NS+17]||queue_cards[card4] == queue_cards[NS1+NS+18]||queue_cards[card4] == queue_cards[NS1+NS+19])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS1+NS+16]||queue_cards[card3] == queue_cards[NS1+NS+17]||queue_cards[card3] == queue_cards[NS1+NS+18]||queue_cards[card3] == queue_cards[NS1+NS+19])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS1+NS+16]||queue_cards[card2] == queue_cards[NS1+NS+17]||queue_cards[card2] == queue_cards[NS1+NS+18]||queue_cards[card2] == queue_cards[NS1+NS+19])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
    }

    if(queue_cards[card1] == queue_cards[NS1+NS+16]||queue_cards[card1] == queue_cards[NS1+NS+17]||queue_cards[card1] == queue_cards[NS1+NS+18]||queue_cards[card1] == queue_cards[NS1+NS+19])
    {
        if(queue_cards[card2] == queue_cards[NS+4]||queue_cards[card2] == queue_cards[NS+5]||queue_cards[card2] == queue_cards[NS+6]||queue_cards[card2] == queue_cards[NS+7])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+8]||queue_cards[card2] == queue_cards[NS+9]||queue_cards[card2] == queue_cards[NS+10]||queue_cards[card2] == queue_cards[NS+11])
        {
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+12]||queue_cards[card2] == queue_cards[NS+13]||queue_cards[card2] == queue_cards[NS+14]||queue_cards[card2] == queue_cards[NS+15])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+0]||queue_cards[card5] == queue_cards[NS+1]||queue_cards[card5] == queue_cards[NS+2]||queue_cards[card5] == queue_cards[NS+3])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+0]||queue_cards[card4] == queue_cards[NS+1]||queue_cards[card4] == queue_cards[NS+2]||queue_cards[card4] == queue_cards[NS+3])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+0]||queue_cards[card3] == queue_cards[NS+1]||queue_cards[card3] == queue_cards[NS+2]||queue_cards[card3] == queue_cards[NS+3])
            {
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
        if(queue_cards[card2] == queue_cards[NS+0]||queue_cards[card2] == queue_cards[NS+1]||queue_cards[card2] == queue_cards[NS+2]||queue_cards[card2] == queue_cards[NS+3])
        {
            if(queue_cards[card3] == queue_cards[NS+8]||queue_cards[card3] == queue_cards[NS+9]||queue_cards[card3] == queue_cards[NS+10]||queue_cards[card3] == queue_cards[NS+11])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+12]||queue_cards[card3] == queue_cards[NS+13]||queue_cards[card3] == queue_cards[NS+14]||queue_cards[card3] == queue_cards[NS+15])
            {
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+4]||queue_cards[card5] == queue_cards[NS+5]||queue_cards[card5] == queue_cards[NS+6]||queue_cards[card5] == queue_cards[NS+7])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+4]||queue_cards[card4] == queue_cards[NS+5]||queue_cards[card4] == queue_cards[NS+6]||queue_cards[card4] == queue_cards[NS+7])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
            if(queue_cards[card3] == queue_cards[NS+4]||queue_cards[card3] == queue_cards[NS+5]||queue_cards[card3] == queue_cards[NS+6]||queue_cards[card3] == queue_cards[NS+7])
            {
                if(queue_cards[card4] == queue_cards[NS+12]||queue_cards[card4] == queue_cards[NS+13]||queue_cards[card4] == queue_cards[NS+14]||queue_cards[card4] == queue_cards[NS+15])
                {
                    if(queue_cards[card5] == queue_cards[NS+8]||queue_cards[card5] == queue_cards[NS+9]||queue_cards[card5] == queue_cards[NS+10]||queue_cards[card5] == queue_cards[NS+11])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
                if(queue_cards[card4] == queue_cards[NS+8]||queue_cards[card4] == queue_cards[NS+9]||queue_cards[card4] == queue_cards[NS+10]||queue_cards[card4] == queue_cards[NS+11])
                {
                    if(queue_cards[card5] == queue_cards[NS+12]||queue_cards[card5] == queue_cards[NS+13]||queue_cards[card5] == queue_cards[NS+14]||queue_cards[card5] == queue_cards[NS+15])
                    {
                        *check_straigh=1+temp;
                        check_temp_card_straight=1;
                        return;
                    }
                }
            }
        }
    }
//----------------STRAIGHT-2(END)--------
}
//--------------CARDS--------------------
void CApp::combinations_flash(int card1, int card2, int card3, int card4, int card5, int *check_flush)
{
//--------------SPADES-------------------
    if(queue_cards[card1] == queue_cards[0]||queue_cards[card1] == queue_cards[4]||queue_cards[card1] == queue_cards[8]||queue_cards[card1] == queue_cards[12]||queue_cards[card1] == queue_cards[16]||queue_cards[card1] == queue_cards[20]||queue_cards[card1] == queue_cards[24]||queue_cards[card1] == queue_cards[28]||queue_cards[card1] == queue_cards[32]||queue_cards[card1] == queue_cards[36]||queue_cards[card1] == queue_cards[40]||queue_cards[card1] == queue_cards[44]||queue_cards[card1] == queue_cards[48])
    {
        if(queue_cards[card2] == queue_cards[0]||queue_cards[card2] == queue_cards[4]||queue_cards[card2] == queue_cards[8]||queue_cards[card2] == queue_cards[12]||queue_cards[card2] == queue_cards[16]||queue_cards[card2] == queue_cards[20]||queue_cards[card2] == queue_cards[24]||queue_cards[card2] == queue_cards[28]||queue_cards[card2] == queue_cards[32]||queue_cards[card2] == queue_cards[36]||queue_cards[card2] == queue_cards[40]||queue_cards[card2] == queue_cards[44]||queue_cards[card2] == queue_cards[48])
        {
            if(queue_cards[card3] == queue_cards[0]||queue_cards[card3] == queue_cards[4]||queue_cards[card3] == queue_cards[8]||queue_cards[card3] == queue_cards[12]||queue_cards[card3] == queue_cards[16]||queue_cards[card3] == queue_cards[20]||queue_cards[card3] == queue_cards[24]||queue_cards[card3] == queue_cards[28]||queue_cards[card3] == queue_cards[32]||queue_cards[card3] == queue_cards[36]||queue_cards[card3] == queue_cards[40]||queue_cards[card3] == queue_cards[44]||queue_cards[card3] == queue_cards[48])
            {
                if(queue_cards[card4] == queue_cards[0]||queue_cards[card4] == queue_cards[4]||queue_cards[card4] == queue_cards[8]||queue_cards[card4] == queue_cards[12]||queue_cards[card4] == queue_cards[16]||queue_cards[card4] == queue_cards[20]||queue_cards[card4] == queue_cards[24]||queue_cards[card4] == queue_cards[28]||queue_cards[card4] == queue_cards[32]||queue_cards[card4] == queue_cards[36]||queue_cards[card4] == queue_cards[40]||queue_cards[card4] == queue_cards[44]||queue_cards[card4] == queue_cards[48])
                {
                    if(queue_cards[card5] == queue_cards[0]||queue_cards[card5] == queue_cards[4]||queue_cards[card5] == queue_cards[8]||queue_cards[card5] == queue_cards[12]||queue_cards[card5] == queue_cards[16]||queue_cards[card5] == queue_cards[20]||queue_cards[card5] == queue_cards[24]||queue_cards[card5] == queue_cards[28]||queue_cards[card5] == queue_cards[32]||queue_cards[card5] == queue_cards[36]||queue_cards[card5] == queue_cards[40]||queue_cards[card5] == queue_cards[44]||queue_cards[card5] == queue_cards[48])
                    {
                        *check_flush=1;
                    }
                }
            }
        }
    }
//--------------SPADES(END)--------------
//--------------CLUBS--------------------
    if(queue_cards[card1] == queue_cards[1]||queue_cards[card1] == queue_cards[5]||queue_cards[card1] == queue_cards[9]||queue_cards[card1] == queue_cards[13]||queue_cards[card1] == queue_cards[17]||queue_cards[card1] == queue_cards[21]||queue_cards[card1] == queue_cards[25]||queue_cards[card1] == queue_cards[29]||queue_cards[card1] == queue_cards[33]||queue_cards[card1] == queue_cards[37]||queue_cards[card1] == queue_cards[41]||queue_cards[card1] == queue_cards[45]||queue_cards[card1] == queue_cards[49])
    {
        if(queue_cards[card2] == queue_cards[1]||queue_cards[card2] == queue_cards[5]||queue_cards[card2] == queue_cards[9]||queue_cards[card2] == queue_cards[13]||queue_cards[card2] == queue_cards[17]||queue_cards[card2] == queue_cards[21]||queue_cards[card2] == queue_cards[25]||queue_cards[card2] == queue_cards[29]||queue_cards[card2] == queue_cards[33]||queue_cards[card2] == queue_cards[37]||queue_cards[card2] == queue_cards[41]||queue_cards[card2] == queue_cards[45]||queue_cards[card2] == queue_cards[49])
        {
            if(queue_cards[card3] == queue_cards[1]||queue_cards[card3] == queue_cards[5]||queue_cards[card3] == queue_cards[9]||queue_cards[card3] == queue_cards[13]||queue_cards[card3] == queue_cards[17]||queue_cards[card3] == queue_cards[21]||queue_cards[card3] == queue_cards[25]||queue_cards[card3] == queue_cards[29]||queue_cards[card3] == queue_cards[33]||queue_cards[card3] == queue_cards[37]||queue_cards[card3] == queue_cards[41]||queue_cards[card3] == queue_cards[45]||queue_cards[card3] == queue_cards[49])
            {
                if(queue_cards[card4] == queue_cards[1]||queue_cards[card4] == queue_cards[5]||queue_cards[card4] == queue_cards[9]||queue_cards[card4] == queue_cards[13]||queue_cards[card4] == queue_cards[17]||queue_cards[card4] == queue_cards[21]||queue_cards[card4] == queue_cards[25]||queue_cards[card4] == queue_cards[29]||queue_cards[card4] == queue_cards[33]||queue_cards[card4] == queue_cards[37]||queue_cards[card4] == queue_cards[41]||queue_cards[card4] == queue_cards[45]||queue_cards[card4] == queue_cards[49])
                {
                    if(queue_cards[card5] == queue_cards[1]||queue_cards[card5] == queue_cards[5]||queue_cards[card5] == queue_cards[9]||queue_cards[card5] == queue_cards[13]||queue_cards[card5] == queue_cards[17]||queue_cards[card5] == queue_cards[21]||queue_cards[card5] == queue_cards[25]||queue_cards[card5] == queue_cards[29]||queue_cards[card5] == queue_cards[33]||queue_cards[card5] == queue_cards[37]||queue_cards[card5] == queue_cards[41]||queue_cards[card5] == queue_cards[45]||queue_cards[card5] == queue_cards[49])
                    {
                        *check_flush=1;
                    }
                }
            }
        }
    }
//--------------CLUBS(END)---------------
//--------------HEARTS-------------------
    if(queue_cards[card1] == queue_cards[2]||queue_cards[card1] == queue_cards[6]||queue_cards[card1] == queue_cards[10]||queue_cards[card1] == queue_cards[14]||queue_cards[card1] == queue_cards[18]||queue_cards[card1] == queue_cards[22]||queue_cards[card1] == queue_cards[26]||queue_cards[card1] == queue_cards[30]||queue_cards[card1] == queue_cards[34]||queue_cards[card1] == queue_cards[38]||queue_cards[card1] == queue_cards[42]||queue_cards[card1] == queue_cards[46]||queue_cards[card1] == queue_cards[50])
    {
        if(queue_cards[card2] == queue_cards[2]||queue_cards[card2] == queue_cards[6]||queue_cards[card2] == queue_cards[10]||queue_cards[card2] == queue_cards[14]||queue_cards[card2] == queue_cards[18]||queue_cards[card2] == queue_cards[22]||queue_cards[card2] == queue_cards[26]||queue_cards[card2] == queue_cards[30]||queue_cards[card2] == queue_cards[34]||queue_cards[card2] == queue_cards[38]||queue_cards[card2] == queue_cards[42]||queue_cards[card2] == queue_cards[46]||queue_cards[card2] == queue_cards[50])
        {
            if(queue_cards[card3] == queue_cards[2]||queue_cards[card3] == queue_cards[6]||queue_cards[card3] == queue_cards[10]||queue_cards[card3] == queue_cards[14]||queue_cards[card3] == queue_cards[18]||queue_cards[card3] == queue_cards[22]||queue_cards[card3] == queue_cards[26]||queue_cards[card3] == queue_cards[30]||queue_cards[card3] == queue_cards[34]||queue_cards[card3] == queue_cards[38]||queue_cards[card3] == queue_cards[42]||queue_cards[card3] == queue_cards[46]||queue_cards[card3] == queue_cards[50])
            {
                if(queue_cards[card4] == queue_cards[2]||queue_cards[card4] == queue_cards[6]||queue_cards[card4] == queue_cards[10]||queue_cards[card4] == queue_cards[14]||queue_cards[card4] == queue_cards[18]||queue_cards[card4] == queue_cards[22]||queue_cards[card4] == queue_cards[26]||queue_cards[card4] == queue_cards[30]||queue_cards[card4] == queue_cards[34]||queue_cards[card4] == queue_cards[38]||queue_cards[card4] == queue_cards[42]||queue_cards[card4] == queue_cards[46]||queue_cards[card4] == queue_cards[50])
                {
                    if(queue_cards[card5] == queue_cards[2]||queue_cards[card5] == queue_cards[6]||queue_cards[card5] == queue_cards[10]||queue_cards[card5] == queue_cards[14]||queue_cards[card5] == queue_cards[18]||queue_cards[card5] == queue_cards[22]||queue_cards[card5] == queue_cards[26]||queue_cards[card5] == queue_cards[30]||queue_cards[card5] == queue_cards[34]||queue_cards[card5] == queue_cards[38]||queue_cards[card5] == queue_cards[42]||queue_cards[card5] == queue_cards[46]||queue_cards[card5] == queue_cards[50])
                    {
                        *check_flush=1;
                    }
                }
            }
        }
    }

//--------------HEARTS(END)--------------
//--------------DIAMONDS-----------------
    if(queue_cards[card1] == queue_cards[3]||queue_cards[card1] == queue_cards[7]||queue_cards[card1] == queue_cards[11]||queue_cards[card1] == queue_cards[15]||queue_cards[card1] == queue_cards[19]||queue_cards[card1] == queue_cards[23]||queue_cards[card1] == queue_cards[27]||queue_cards[card1] == queue_cards[31]||queue_cards[card1] == queue_cards[35]||queue_cards[card1] == queue_cards[39]||queue_cards[card1] == queue_cards[43]||queue_cards[card1] == queue_cards[47]||queue_cards[card1] == queue_cards[51])
    {
        if(queue_cards[card2] == queue_cards[3]||queue_cards[card2] == queue_cards[7]||queue_cards[card2] == queue_cards[11]||queue_cards[card2] == queue_cards[15]||queue_cards[card2] == queue_cards[19]||queue_cards[card2] == queue_cards[23]||queue_cards[card2] == queue_cards[27]||queue_cards[card2] == queue_cards[31]||queue_cards[card2] == queue_cards[35]||queue_cards[card2] == queue_cards[39]||queue_cards[card2] == queue_cards[43]||queue_cards[card2] == queue_cards[47]||queue_cards[card2] == queue_cards[51])
        {
            if(queue_cards[card3] == queue_cards[3]||queue_cards[card3] == queue_cards[7]||queue_cards[card3] == queue_cards[11]||queue_cards[card3] == queue_cards[15]||queue_cards[card3] == queue_cards[19]||queue_cards[card3] == queue_cards[23]||queue_cards[card3] == queue_cards[27]||queue_cards[card3] == queue_cards[31]||queue_cards[card3] == queue_cards[35]||queue_cards[card3] == queue_cards[39]||queue_cards[card3] == queue_cards[43]||queue_cards[card3] == queue_cards[47]||queue_cards[card3] == queue_cards[51])
            {
                if(queue_cards[card4] == queue_cards[3]||queue_cards[card4] == queue_cards[7]||queue_cards[card4] == queue_cards[11]||queue_cards[card4] == queue_cards[15]||queue_cards[card4] == queue_cards[19]||queue_cards[card4] == queue_cards[23]||queue_cards[card4] == queue_cards[27]||queue_cards[card4] == queue_cards[31]||queue_cards[card4] == queue_cards[35]||queue_cards[card4] == queue_cards[39]||queue_cards[card4] == queue_cards[43]||queue_cards[card4] == queue_cards[47]||queue_cards[card4] == queue_cards[51])
                {
                    if(queue_cards[card5] == queue_cards[3]||queue_cards[card5] == queue_cards[7]||queue_cards[card5] == queue_cards[11]||queue_cards[card5] == queue_cards[15]||queue_cards[card5] == queue_cards[19]||queue_cards[card5] == queue_cards[23]||queue_cards[card5] == queue_cards[27]||queue_cards[card5] == queue_cards[31]||queue_cards[card5] == queue_cards[35]||queue_cards[card5] == queue_cards[39]||queue_cards[card5] == queue_cards[43]||queue_cards[card5] == queue_cards[47]||queue_cards[card5] == queue_cards[51])
                    {
                        *check_flush=1;
                    }
                }
            }
        }
    }
//--------------DIAMONDS(END)------------
}
//--------------CARDS--------------------
int CApp::high_card(int card1)
{
    int check_temp_high_card=1;
    if(card1==48||card1==49||card1==50||card1==51)
       {
            return check_temp_high_card=14;
       }
    if(card1==44||card1==45||card1==46||card1==47)
       {
            return check_temp_high_card=13;
       }
    if(card1==40||card1==41||card1==42||card1==43)
       {
            return check_temp_high_card=12;
       }
    if(card1==36||card1==37||card1==38||card1==39)
       {
            return check_temp_high_card=11;
       }
    if(card1==32||card1==33||card1==34||card1==35)
       {
            return check_temp_high_card=10;
       }
    if(card1==28||card1==29||card1==30||card1==31)
       {
            return check_temp_high_card=9;
       }
    if(card1==24||card1==25||card1==26||card1==27)
       {
            return check_temp_high_card=8;
       }
    if(card1==20||card1==21||card1==22||card1==23)
       {
            return check_temp_high_card=7;
       }
    if(card1==16||card1==17||card1==18||card1==19)
       {
            return check_temp_high_card=6;
       }
    if(card1==12||card1==13||card1==14||card1==15)
       {
            return check_temp_high_card=5;
       }
    if(card1==8||card1==9||card1==10||card1==11)
       {
            return check_temp_high_card=4;
       }
    if(card1==4||card1==5||card1==6||card1==7)
       {
            return check_temp_high_card=3;
       }
    if(card1==0||card1==1||card1==2||card1==3)
       {
            return check_temp_high_card=2;
       }
}
//--------------CARDS--------------------
void CApp::combinations_full_house(int *check_full_house, int *check_double, int *check_double2, int *check_double3, int *check_triple, int *check_triple2)
{


    if(*check_double!=*check_triple&&*check_double>0&&*check_triple>0)
    {
        *check_full_house=1;
    }
    if(*check_double2!=*check_triple&&*check_double2>0&&*check_triple>0)
    {
        *check_full_house=1;
    }
    if(*check_double3!=*check_triple&&*check_double3>0&&*check_triple>0)
    {
        *check_full_house=1;
    }
}
//--------------CARDS--------------------
void CApp::high_card_all(int card1,int card2, int *check_high)
{
//---------------------------HIGH-CARD---------------------------
if(check_temp_high_card!=1)
{
int temp_hc1;
int temp_hc2;
int temp_hc3;
int temp_hc4;
int temp_hc5;
int temp_hc6;
int temp_hc7;
temp_hc1=high_card(card1);
temp_hc2=high_card(card2);
temp_hc3=high_card(card_1_all);
temp_hc4=high_card(card_2_all);
temp_hc5=high_card(card_3_all);
temp_hc6=high_card(card_4_all);
temp_hc7=high_card(card_5_all);
compare_temp( temp_hc1, temp_hc2, temp_hc3, temp_hc4, temp_hc5, temp_hc6, temp_hc7, check_high);
compare_temp( temp_hc2, temp_hc1, temp_hc3, temp_hc4, temp_hc5, temp_hc6, temp_hc7, check_high);
compare_temp( temp_hc3, temp_hc1, temp_hc2, temp_hc4, temp_hc5, temp_hc6, temp_hc7, check_high);
compare_temp( temp_hc4, temp_hc1, temp_hc2, temp_hc3, temp_hc5, temp_hc6, temp_hc7, check_high);
compare_temp( temp_hc5, temp_hc1, temp_hc2, temp_hc3, temp_hc4, temp_hc6, temp_hc7, check_high);
compare_temp( temp_hc6, temp_hc1, temp_hc2, temp_hc3, temp_hc4, temp_hc5, temp_hc7, check_high);
compare_temp( temp_hc7, temp_hc1, temp_hc2, temp_hc3, temp_hc4, temp_hc5, temp_hc6, check_high);
}
//---------------------------HIGH-CARD(END)----------------------
}
//--------------CARDS--------------------
void CApp::compare_temp(int temp1,int temp2,int temp3,int temp4,int temp5,int temp6,int temp7, int *check_high)
{
    if(temp1>=temp2&&temp1>=temp3&&temp1>=temp4&&temp1>=temp5&&temp1>=temp6&&temp1>=temp7)
{
    *check_high=temp1;
    check_temp_high_card=1;
}
}
//--------------CARDS--------------------

void CApp::combinations_check(int card1, int card2, int *check_flush_royal, int *check_straight_flush, int *check_kare, int *check_triple, int *check_triple2, int *check_double, int *check_double2, int *check_double3, int *check_straigh, int *check_flush, int *check_full_house, int *check_high, int *straight_temp)
{
    if(temp_card==9)
    {

//---------------CHECK-COMBINATIONS-TRIPLE--------------------
//----------------check 2 hands card with 1 card table--------
        combinations_triple(card1,card2,card_1_all, check_triple, check_triple2);
        combinations_triple(card1,card2,card_2_all, check_triple, check_triple2);
        combinations_triple(card1,card2,card_3_all, check_triple, check_triple2);
        combinations_triple(card1,card2,card_4_all, check_triple, check_triple2);
        combinations_triple(card1,card2,card_5_all, check_triple, check_triple2);
//----------------check 2 hands card with 1 card table(END)---
//----------------check 1 hands card with 2 card table--------
//---------------------------1 player-------------------------
        combinations_triple(card1,card_1_all,card_2_all, check_triple, check_triple2);
        combinations_triple(card1,card_1_all,card_3_all, check_triple, check_triple2);
        combinations_triple(card1,card_1_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card1,card_1_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card1,card_2_all,card_3_all, check_triple, check_triple2);
        combinations_triple(card1,card_2_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card1,card_2_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card1,card_3_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card1,card_3_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card1,card_4_all,card_5_all, check_triple, check_triple2);
//---------------------------2 player-------------------------
         combinations_triple(card2,card_1_all,card_2_all, check_triple, check_triple2);
        combinations_triple(card2,card_1_all,card_3_all, check_triple, check_triple2);
        combinations_triple(card2,card_1_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card2,card_1_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card2,card_2_all,card_3_all, check_triple, check_triple2);
        combinations_triple(card2,card_2_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card2,card_2_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card2,card_3_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card2,card_3_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card2,card_4_all,card_5_all, check_triple, check_triple2);
//----------------check 1 hands card with 2 card table(END)---
//--------------------------table-----------------------------
        combinations_triple(card_1_all,card_2_all,card_3_all, check_triple, check_triple2);
        combinations_triple(card_1_all,card_2_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card_1_all,card_2_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card_1_all,card_3_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card_1_all,card_3_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card_1_all,card_4_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card_2_all,card_3_all,card_4_all, check_triple, check_triple2);
        combinations_triple(card_2_all,card_3_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card_2_all,card_4_all,card_5_all, check_triple, check_triple2);

        combinations_triple(card_3_all,card_4_all,card_5_all, check_triple, check_triple2);
//--------------------------table(END)------------------------
//---------------CHECK-COMBINATIONS-TRIPLE(END)---------------

//---------------CHECK-COMBINATIONS-DOUBLE--------------------
//----------------check hands---------------------------------
        combinations_double(card1,card2,check_double,check_double2,check_double3);
//------------------------------------------------------------
//----------------check table with hands----------------------
        combinations_double(card1,card_1_all,check_double,check_double2,check_double3);
        combinations_double(card2,card_1_all,check_double,check_double2,check_double3);
        combinations_double(card1,card_2_all,check_double,check_double2,check_double3);
        combinations_double(card2,card_2_all,check_double,check_double2,check_double3);
        combinations_double(card1,card_3_all,check_double,check_double2,check_double3);
        combinations_double(card2,card_3_all,check_double,check_double2,check_double3);
        combinations_double(card1,card_4_all,check_double,check_double2,check_double3);
        combinations_double(card2,card_4_all,check_double,check_double2,check_double3);
        combinations_double(card1,card_5_all,check_double,check_double2,check_double3);
        combinations_double(card2,card_5_all,check_double,check_double2,check_double3);
//------------------------------------------------------------
//-----------------------check table--------------------------
        combinations_double(card_1_all,card_2_all,check_double,check_double2,check_double3);
        combinations_double(card_1_all,card_3_all,check_double,check_double2,check_double3);
        combinations_double(card_1_all,card_4_all,check_double,check_double2,check_double3);
        combinations_double(card_1_all,card_5_all,check_double,check_double2,check_double3);
        combinations_double(card_2_all,card_3_all,check_double,check_double2,check_double3);
        combinations_double(card_2_all,card_4_all,check_double,check_double2,check_double3);
        combinations_double(card_2_all,card_5_all,check_double,check_double2,check_double3);
        combinations_double(card_3_all,card_4_all,check_double,check_double2,check_double3);
        combinations_double(card_3_all,card_5_all,check_double,check_double2,check_double3);
        combinations_double(card_4_all,card_5_all,check_double,check_double2,check_double3);
//------------------------------------------------------------
//---------------CHECK-COMBINATIONS-DOUBLE(END)---------------

//-----------------CHECK-COMBINATIONS-KARE--------------------
//----------------check 2 hands card with 2 card table--------
combinations_kare(card1, card2, card_1_all, card_2_all, check_kare);
combinations_kare(card1, card2, card_1_all, card_3_all, check_kare);
combinations_kare(card1, card2, card_1_all, card_4_all, check_kare);
combinations_kare(card1, card2, card_1_all, card_5_all, check_kare);

combinations_kare(card1, card2, card_2_all, card_3_all, check_kare);
combinations_kare(card1, card2, card_2_all, card_4_all, check_kare);
combinations_kare(card1, card2, card_2_all, card_5_all, check_kare);

combinations_kare(card1, card2, card_3_all, card_4_all, check_kare);
combinations_kare(card1, card2, card_3_all, card_5_all, check_kare);

combinations_kare(card1, card2, card_4_all, card_5_all, check_kare);
//----------------check 2 hands card with 2 card table(END)---
//----------------check 1 hands card with 3 card table--------
//---------------------------1 player-------------------------
combinations_kare(card1, card_1_all, card_2_all, card_3_all, check_kare);
combinations_kare(card1, card_1_all, card_2_all, card_4_all, check_kare);
combinations_kare(card1, card_1_all, card_2_all, card_5_all, check_kare);

combinations_kare(card1, card_1_all, card_3_all, card_4_all, check_kare);
combinations_kare(card1, card_1_all, card_3_all, card_5_all, check_kare);

combinations_kare(card1, card_1_all, card_4_all, card_5_all, check_kare);

combinations_kare(card1, card_2_all, card_3_all, card_4_all, check_kare);
combinations_kare(card1, card_2_all, card_4_all, card_5_all, check_kare);

combinations_kare(card1, card_3_all, card_4_all, card_5_all, check_kare);
//---------------------------2 player-------------------------
combinations_kare(card2, card_1_all, card_2_all, card_3_all, check_kare);
combinations_kare(card2, card_1_all, card_2_all, card_4_all, check_kare);
combinations_kare(card2, card_1_all, card_2_all, card_5_all, check_kare);

combinations_kare(card2, card_1_all, card_3_all, card_4_all, check_kare);
combinations_kare(card2, card_1_all, card_3_all, card_5_all, check_kare);

combinations_kare(card2, card_1_all, card_4_all, card_5_all, check_kare);

combinations_kare(card2, card_2_all, card_3_all, card_4_all, check_kare);
combinations_kare(card2, card_2_all, card_4_all, card_5_all, check_kare);

combinations_kare(card2, card_3_all, card_4_all, card_5_all, check_kare);
//----------------check 1 hands card with 3 card table(END)---
//-----------------------------table--------------------------
combinations_kare(card_1_all, card_2_all, card_3_all, card_4_all, check_kare);
combinations_kare(card_1_all, card_2_all, card_3_all, card_5_all, check_kare);

combinations_kare(card_1_all, card_2_all, card_4_all, card_5_all, check_kare);

combinations_kare(card_1_all, card_3_all, card_4_all, card_5_all, check_kare);

combinations_kare(card_2_all, card_3_all, card_4_all, card_5_all, check_kare);
//--------------------------table(END)------------------------
//---------------CHECK-COMBINATIONS-KARE(END)-----------------
//-------------CHECK-COMBINATIONS-STRAIGHT-FLASH--------------

//----------------check 2 hands card with 3 card table--------
combinations_straight_flash(card1, card2, card_1_all, card_2_all, card_3_all, check_flush_royal, check_straight_flush);
combinations_straight_flash(card1, card2, card_1_all, card_3_all, card_2_all, check_flush_royal, check_straight_flush);
combinations_straight_flash(card1, card2, card_3_all, card_2_all, card_1_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card2, card_1_all, card_2_all, card_4_all, check_flush_royal, check_straight_flush);
combinations_straight_flash(card1, card2, card_1_all, card_2_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card2, card_1_all, card_3_all, card_4_all, check_flush_royal, check_straight_flush);
combinations_straight_flash(card1, card2, card_1_all, card_3_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card2, card_1_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card2, card_2_all, card_3_all, card_4_all, check_flush_royal, check_straight_flush);
combinations_straight_flash(card1, card2, card_2_all, card_3_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card2, card_2_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card2, card_3_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);
//----------------check 2 hands card with 3 card table(END)---
//----------------check 1 hands card with 4 card table--------
//---------------------------1 player-------------------------
combinations_straight_flash(card1, card_1_all, card_2_all, card_3_all, card_4_all, check_flush_royal, check_straight_flush);
combinations_straight_flash(card1, card_1_all, card_2_all, card_3_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card_1_all, card_2_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card_1_all, card_3_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card1, card_2_all, card_3_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);
//---------------------------2 player-------------------------
combinations_straight_flash(card2, card_1_all, card_2_all, card_3_all, card_4_all, check_flush_royal, check_straight_flush);
combinations_straight_flash(card2, card_1_all, card_2_all, card_3_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card2, card_1_all, card_2_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card2, card_1_all, card_3_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);

combinations_straight_flash(card2, card_2_all, card_3_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);
//----------------check 1 hands card with 3 card table(END)---
//-----------------------------table--------------------------
combinations_straight_flash(card_1_all, card_2_all, card_3_all, card_4_all, card_5_all, check_flush_royal, check_straight_flush);
//--------------------------table(END)------------------------
//----------CHECK-COMBINATIONS-STRAIGHT-FLASH(END)------------

//-----------------CHECK-COMBINATIONS-FLASH-------------------
//----------------check 2 hands card with 3 card table--------
combinations_flash(card1, card2, card_1_all, card_2_all, card_3_all, check_flush);
combinations_flash(card1, card2, card_1_all, card_3_all, card_2_all, check_flush);
combinations_flash(card1, card2, card_3_all, card_2_all, card_1_all, check_flush);

combinations_flash(card1, card2, card_1_all, card_2_all, card_4_all, check_flush);
combinations_flash(card1, card2, card_1_all, card_2_all, card_5_all, check_flush);

combinations_flash(card1, card2, card_1_all, card_3_all, card_4_all, check_flush);
combinations_flash(card1, card2, card_1_all, card_3_all, card_5_all, check_flush);

combinations_flash(card1, card2, card_1_all, card_4_all, card_5_all, check_flush);

combinations_flash(card1, card2, card_2_all, card_3_all, card_4_all, check_flush);
combinations_flash(card1, card2, card_2_all, card_3_all, card_5_all, check_flush);

combinations_flash(card1, card2, card_2_all, card_4_all, card_5_all, check_flush);

combinations_flash(card1, card2, card_3_all, card_4_all, card_5_all, check_flush);
//----------------check 2 hands card with 3 card table(END)---
//----------------check 1 hands card with 4 card table--------
//---------------------------1 player-------------------------
combinations_flash(card1, card_1_all, card_2_all, card_3_all, card_4_all, check_flush);
combinations_flash(card1, card_1_all, card_2_all, card_3_all, card_5_all, check_flush);

combinations_flash(card1, card_1_all, card_2_all, card_4_all, card_5_all, check_flush);

combinations_flash(card1, card_1_all, card_3_all, card_4_all, card_5_all, check_flush);

combinations_flash(card1, card_2_all, card_3_all, card_4_all, card_5_all, check_flush);
//---------------------------2 player-------------------------
combinations_flash(card2, card_1_all, card_2_all, card_3_all, card_4_all, check_flush);
combinations_flash(card2, card_1_all, card_2_all, card_3_all, card_5_all, check_flush);

combinations_flash(card2, card_1_all, card_2_all, card_4_all, card_5_all, check_flush);

combinations_flash(card2, card_1_all, card_3_all, card_4_all, card_5_all, check_flush);

combinations_flash(card2, card_2_all, card_3_all, card_4_all, card_5_all, check_flush);
//----------------check 1 hands card with 3 card table(END)---
//-----------------------------table--------------------------
combinations_flash(card_1_all, card_2_all, card_3_all, card_4_all, card_5_all, check_flush);
//--------------------------table(END)------------------------
//-----------------CHECK-COMBINATIONS-FLASH(END)--------------

//-----------------CHECK-COMBINATIONS-STRAIGHT----------------
for(int i = 32;i >= 0; i-=4 )
{
if(check_temp_card_straight!=1)
{
//----------------check 2 hands card with 3 card table--------
combinations_straight(card1, card2, card_1_all, card_2_all, card_3_all, i, 0, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_1_all, card_3_all, card_2_all, i, 0, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_3_all, card_2_all, card_1_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_1_all, card_2_all, card_4_all, i, 0, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_1_all, card_2_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_1_all, card_3_all, card_4_all, i, 0, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_1_all, card_3_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_1_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_2_all, card_3_all, card_4_all, i, 0, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_2_all, card_3_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_2_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_3_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);
//----------------check 2 hands card with 3 card table(END)---
//----------------check 1 hands card with 4 card table--------
//---------------------------1 player-------------------------
combinations_straight(card1, card_1_all, card_2_all, card_3_all, card_4_all, i, 0, *straight_temp, check_straigh);
combinations_straight(card1, card_1_all, card_2_all, card_3_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card_1_all, card_2_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card_1_all, card_3_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card1, card_2_all, card_3_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);
//---------------------------2 player-------------------------
combinations_straight(card2, card_1_all, card_2_all, card_3_all, card_4_all, i, 0, *straight_temp, check_straigh);
combinations_straight(card2, card_1_all, card_2_all, card_3_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card2, card_1_all, card_2_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card2, card_1_all, card_3_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);

combinations_straight(card2, card_2_all, card_3_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);
//----------------check 1 hands card with 3 card table(END)---
//-----------------------------table--------------------------
combinations_straight(card_1_all, card_2_all, card_3_all, card_4_all, card_5_all, i, 0, *straight_temp, check_straigh);
//--------------------------table(END)------------------------
(*straight_temp)--;
}
}
//-----------------CHECK-COMBINATIONS-STRAIGHT(END)-----------
if(check_temp_card_straight!=1)
{
*straight_temp=1;
//----------------check 2 hands card with 3 card table--------
combinations_straight(card1, card2, card_1_all, card_2_all, card_3_all, 0, 32, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_1_all, card_3_all, card_2_all, 0, 32, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_3_all, card_2_all, card_1_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_1_all, card_2_all, card_4_all, 0, 32, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_1_all, card_2_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_1_all, card_3_all, card_4_all, 0, 32, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_1_all, card_3_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_1_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_2_all, card_3_all, card_4_all, 0, 32, *straight_temp, check_straigh);
combinations_straight(card1, card2, card_2_all, card_3_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_2_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card2, card_3_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);
//----------------check 2 hands card with 3 card table(END)---
//----------------check 1 hands card with 4 card table--------
//---------------------------1 player-------------------------
combinations_straight(card1, card_1_all, card_2_all, card_3_all, card_4_all, 0, 32, *straight_temp, check_straigh);
combinations_straight(card1, card_1_all, card_2_all, card_3_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card_1_all, card_2_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card_1_all, card_3_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card1, card_2_all, card_3_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);
//---------------------------2 player-------------------------
combinations_straight(card2, card_1_all, card_2_all, card_3_all, card_4_all, 0, 32, *straight_temp, check_straigh);
combinations_straight(card2, card_1_all, card_2_all, card_3_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card2, card_1_all, card_2_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card2, card_1_all, card_3_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);

combinations_straight(card2, card_2_all, card_3_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);
//----------------check 1 hands card with 3 card table(END)---
//-----------------------------table--------------------------
combinations_straight(card_1_all, card_2_all, card_3_all, card_4_all, card_5_all, 0, 32, *straight_temp, check_straigh);
//--------------------------table(END)------------------------
*straight_temp=1;
}
//-----------------CHECK-COMBINATIONS-STRAIGHT(END)-----------
combinations_full_house(check_full_house, check_double, check_double2, check_double3, check_triple, check_triple2);
high_card_all(card1,card2, check_high);
    }
}
//--------------CARDS--------------------
    void CApp::random_card_2_player()
    {
        card_2_player=(rand() % 52);
        while(card_2_player==card_1_player)
        {
            card_2_player=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_1_computer1()
    {
        card_1_computer1=(rand() % 52);
        while(card_1_computer1==card_1_player||card_1_computer1==card_2_player)
        {
            card_1_computer1=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_2_computer1()
    {
        card_2_computer1=(rand() % 52);
        while(card_2_computer1==card_1_player||card_2_computer1==card_2_player||card_2_computer1==card_1_computer1)
        {
            card_2_computer1=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_1_computer2()
    {
        card_1_computer2=(rand() % 52);
        while(card_1_computer2==card_1_player||card_1_computer2==card_2_player||card_1_computer2==card_1_computer1||card_1_computer2==card_2_computer1)
        {
            card_1_computer2=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_2_computer2()
    {
        card_2_computer2=(rand() % 52);
        while(card_2_computer2==card_1_player||card_2_computer2==card_2_player||card_2_computer2==card_1_computer1||card_2_computer2==card_2_computer1||card_2_computer2==card_1_computer2)
        {
            card_2_computer2=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_1_computer3()
    {
        card_1_computer3=(rand() % 52);
        while(card_1_computer3==card_1_player||card_1_computer3==card_2_player||card_1_computer3==card_1_computer1||card_1_computer3==card_2_computer1||card_1_computer3==card_1_computer2||card_1_computer3==card_2_computer2)
        {
            card_1_computer3=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_2_computer3()
    {
        card_2_computer3=(rand() % 52);
        while(card_2_computer3==card_1_player||card_2_computer3==card_2_player||card_2_computer3==card_1_computer1||card_2_computer3==card_2_computer1||card_2_computer3==card_1_computer2||card_2_computer3==card_2_computer2||card_2_computer3==card_1_computer3)
        {
            card_2_computer3=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_1_computer4()
    {
        card_1_computer4=(rand() % 52);
        while(card_1_computer4==card_1_player||card_1_computer4==card_2_player||card_1_computer4==card_1_computer1||card_1_computer4==card_2_computer1||card_1_computer4==card_1_computer2||card_1_computer4==card_2_computer2||card_1_computer4==card_1_computer3||card_1_computer4==card_2_computer3)
        {
            card_1_computer4=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_2_computer4()
    {
        card_2_computer4=(rand() % 52);
        while(card_2_computer4==card_1_player||card_2_computer4==card_2_player||card_2_computer4==card_1_computer1||card_2_computer4==card_2_computer1||card_2_computer4==card_1_computer2||card_2_computer4==card_2_computer2||card_2_computer4==card_1_computer3||card_2_computer4==card_2_computer3||card_2_computer4==card_1_computer4)
        {
            card_2_computer4=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_1_computer5()
    {
        card_1_computer5=(rand() % 52);
        while(card_1_computer5==card_1_player||card_1_computer5==card_2_player||card_1_computer5==card_1_computer1||card_1_computer5==card_2_computer1||card_1_computer5==card_1_computer2||card_1_computer5==card_2_computer2||card_1_computer5==card_1_computer3||card_1_computer5==card_2_computer3||card_1_computer5==card_1_computer4||card_1_computer5==card_2_computer4)
        {
            card_1_computer5=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_2_computer5()
    {
        card_2_computer5=(rand() % 52);
        while(card_2_computer5==card_1_player||card_2_computer5==card_2_player||card_2_computer5==card_1_computer1||card_2_computer5==card_2_computer1||card_2_computer5==card_1_computer2||card_2_computer5==card_2_computer2||card_2_computer5==card_1_computer3||card_2_computer5==card_2_computer3||card_2_computer5==card_1_computer4||card_2_computer5==card_2_computer4||card_2_computer5==card_1_computer5)
        {
            card_2_computer5=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_1_all()
    {
        card_1_all=(rand() % 52);
        while(card_1_all==card_1_player||card_1_all==card_2_player||card_1_all==card_1_computer1||card_1_all==card_2_computer1||card_1_all==card_1_computer2||card_1_all==card_2_computer2||card_1_all==card_1_computer3||card_1_all==card_2_computer3||card_1_all==card_1_computer4||card_1_all==card_2_computer4||card_1_all==card_1_computer5||card_1_all==card_2_computer5)
        {
            card_1_all=(rand() % 52);
        }
    }
//--------------CARDS--------------------

    void CApp::random_card_2_all()
    {
        card_2_all=(rand() % 52);
        while(card_2_all==card_1_player||card_2_all==card_2_player||card_2_all==card_1_all||card_2_all==card_1_computer1||card_2_all==card_2_computer1||card_2_all==card_1_computer2||card_2_all==card_2_computer2||card_2_all==card_1_computer3||card_2_all==card_2_computer3||card_2_all==card_1_computer4||card_2_all==card_2_computer4||card_2_all==card_1_computer5||card_2_all==card_2_computer5)
        {
            card_2_all=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_3_all()
    {
        card_3_all=(rand() % 52);
        while(card_3_all==card_1_player||card_3_all==card_2_player||card_3_all==card_1_all||card_3_all==card_2_all||card_3_all==card_1_computer1||card_3_all==card_2_computer1||card_3_all==card_1_computer2||card_3_all==card_2_computer2||card_3_all==card_1_computer3||card_3_all==card_2_computer3||card_3_all==card_1_computer4||card_3_all==card_2_computer4||card_3_all==card_1_computer5||card_3_all==card_2_computer5)
        {
            card_3_all=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_4_all()
    {
        card_4_all=(rand() % 52);
        while(card_4_all==card_1_player||card_4_all==card_2_player||card_4_all==card_1_all||card_4_all==card_2_all||card_4_all==card_3_all||card_4_all==card_1_computer1||card_4_all==card_2_computer1||card_4_all==card_1_computer2||card_4_all==card_2_computer2||card_4_all==card_1_computer3||card_4_all==card_2_computer3||card_4_all==card_1_computer4||card_4_all==card_2_computer4||card_4_all==card_1_computer5||card_4_all==card_2_computer5)
        {
            card_4_all=(rand() % 52);
        }
    }
//--------------CARDS--------------------
    void CApp::random_card_5_all()
    {
        card_5_all=(rand() % 52);
        while(card_5_all==card_1_player||card_5_all==card_2_player||card_5_all==card_1_all||card_5_all==card_2_all||card_5_all==card_3_all||card_5_all==card_4_all||card_5_all==card_1_computer1||card_5_all==card_2_computer1||card_5_all==card_1_computer2||card_5_all==card_2_computer2||card_5_all==card_1_computer3||card_5_all==card_2_computer3||card_5_all==card_1_computer4||card_5_all==card_2_computer4||card_5_all==card_1_computer5||card_5_all==card_2_computer5)
        {
            card_5_all=(rand() % 52);
        }
    }
//--------------CARDS--------------------
void CApp::check_card_win()
{
    int check_rfl=1;
    int check_fl=1;
    int check_tr=1;
    int check_ful=1;
    int checl_db=1;
    int chek_hg=1;
    int check_str=1;
    int temp_flhs=0;
    int str_tp=0;
    int db_temp=0;
    int db1_temp=0;
    int db2_temp=0;
    int db_max=0;
    int db2_max=0;
    int hg_temp=0;
    int tp_fl=0;
    if(proverkaP==0)
    {
    cout<<"\t\t\t    "<<round_card<<" игра"<<endl;
    cout<<"________________________________________________________________________________________________________________________"<<endl;
    cout<<" Игрок"<<"\t\t\t  ";                                   cout<<"1 Компьютер"<<"\t\t   ";                               cout<<"2 Компьютер"<<endl;
    cout<<"________________________________________________________________________________________________________________________"<<endl;

    cout<<" Флеш рояль: "<<check_flush_royalP<<"\t \t  ";         cout<<"Флеш рояль: "<<check_flush_royalC1<<"\t  \t   ";      cout<<"Флеш рояль: "<<check_flush_royalC2<<endl;
    cout<<" Стрит флеш: "<<check_straight_flushP<<"\t \t  ";      cout<<"Стрит флеш: "<<check_straight_flushC1<<"\t  \t   ";   cout<<"Стрит флеш: "<<check_straight_flushC2<<endl;
    cout<<" Каре: "<<check_kareP<<"\t  \t  ";                     cout<<"Каре: "<<check_kareC1<<"\t  \t   ";                   cout<<"Каре: "<<check_kareC2<<endl;
    cout<<" Фул хаус: "<<check_full_houseP<<"\t \t  ";            cout<<"Фул хаус: "<<check_full_houseC1<<"\t   \t   ";        cout<<"Фул хаус: "<<check_full_houseC2<<endl;
    cout<<" Флеш: "<<check_flushP<<"\t \t  ";                     cout<<"Флеш: "<<check_flushC1<<"\t   \t   ";                 cout<<"Флеш: "<<check_flushC2<<endl;
    cout<<" Стрит: "<<check_straighP<<"\t \t  ";                  cout<<"Стрит: "<<check_straighC1<<"\t   \t   ";              cout<<"Стрит: "<<check_straighC2<<endl;
    cout<<" 1 тройка: "<<check_tripleP<<"\t \t  ";                cout<<"1 тройка: "<<check_tripleC1<<"\t \t   ";              cout<<"1 тройка: "<<check_tripleC2<<endl;
    cout<<" 2 тройка: "<<check_triple2P<<"\t \t  ";               cout<<"2 тройка: "<<check_triple2C1<<"\t  \t   ";            cout<<"2 тройка: "<<check_triple2C2<<endl;
    cout<<" 1 пара: "<<check_doubleP<<"\t \t  ";                  cout<<"1 пара: "<<check_doubleC1<<"\t   \t   ";              cout<<"1 пара: "<<check_doubleC2<<endl;
    cout<<" 2 пара: "<<check_double2P<<"\t \t  ";                 cout<<"2 пара: "<<check_double2C1<<"\t  \t   ";              cout<<"2 пара: "<<check_double2C2<<endl;
    cout<<" 3 пара: "<<check_double3P<<"\t \t  ";                 cout<<"3 пара: "<<check_double3C1<<"\t  \t   ";              cout<<"3 пара: "<<check_double3C2<<endl;
    cout<<" Высшая карта: "<<check_highP<<"\t  ";                 cout<<"Высшая карта: "<<check_highC1<<"\t   ";               cout<<"Высшая карта: "<<check_highC2<<endl;
    cout<<endl;
    cout<<"________________________________________________________________________________________________________________________"<<endl;
    cout<<" 3 Компьютер"<<"\t\t  ";                               cout<<"4 Компьютер"<<"\t\t   ";                                cout<<"5 Компьютер"<<endl;
    cout<<"________________________________________________________________________________________________________________________"<<endl;

    cout<<endl<<" Флеш рояль: "<<check_flush_royalC3<<"\t \t  ";  cout<<"Флеш рояль: "<<check_flush_royalC4<<"\t  \t   ";       cout<<"Флеш рояль: "<<check_flush_royalC5<<endl;
    cout<<" Стрит флеш: "<<check_straight_flushC3<<"\t \t  ";     cout<<"Стрит флеш: "<<check_straight_flushC4<<"\t  \t   ";    cout<<"Стрит флеш: "<<check_straight_flushC5<<endl;
    cout<<" Каре: "<<check_kareC3<<"\t  \t  ";                    cout<<"Каре: "<<check_kareC4<<"\t  \t   ";                    cout<<"Каре: "<<check_kareC5<<endl;
    cout<<" Фул хаус: "<<check_full_houseC3<<"\t \t  ";           cout<<"Фул хаус: "<<check_full_houseC4<<"\t   \t   ";         cout<<"Фул хаус: "<<check_full_houseC5<<endl;
    cout<<" Флеш: "<<check_flushC3<<"\t \t  ";                    cout<<"Флеш: "<<check_flushC4<<"\t   \t   ";                  cout<<"Флеш: "<<check_flushC5<<endl;
    cout<<" Стрит: "<<check_straighC3<<"\t \t  ";                 cout<<"Стрит: "<<check_straighC4<<"\t   \t   ";               cout<<"Стрит: "<<check_straighC5<<endl;
    cout<<" 1 тройка: "<<check_tripleC3<<"\t \t  ";               cout<<"1 тройка: "<<check_tripleC4<<"\t   \t   ";             cout<<"1 тройка: "<<check_tripleC5<<endl;
    cout<<" 2 тройка: "<<check_triple2C3<<"\t \t  ";              cout<<"2 тройка: "<<check_triple2C4<<"\t   \t   ";            cout<<"2 тройка: "<<check_triple2C5<<endl;
    cout<<" 1 пара: "<<check_doubleC3<<"\t \t  ";                 cout<<"1 пара: "<<check_doubleC4<<"\t   \t   ";               cout<<"1 пара: "<<check_doubleC5<<endl;
    cout<<" 2 пара: "<<check_double2C3<<"\t \t  ";                cout<<"2 пара: "<<check_double2C4<<"\t   \t   ";              cout<<"2 пара: "<<check_double2C5<<endl;
    cout<<" 3 пара: "<<check_double3C3<<"\t \t  ";                cout<<"3 пара: "<<check_double3C4<<"\t   \t   ";              cout<<"3 пара: "<<check_double3C5<<endl;
    cout<<" Высшая карта: "<<check_highC3<<"\t  ";                cout<<"Высшая карта: "<<check_highC4<<"\t   ";                cout<<"Высшая карта: "<<check_highC5<<endl;
    cout<<"________________________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    }
//--------------------FLUSH-ROYAL---------------------
    if(check_flush_royalP==1||check_flush_royalC1==1||check_flush_royalC2==1||check_flush_royalC3==1||check_flush_royalC4==1||check_flush_royalC5==1)
    {
        if(check_flush_royalP>=check_flush_royalC1&&check_flush_royalP>=check_flush_royalC2&&check_flush_royalP>=check_flush_royalC3&&check_flush_royalP>=check_flush_royalC4&&check_flush_royalP>=check_flush_royalC5)
        {
            if(check_flush_royalC1==1)
            {
                check_rfl++;
                win_cardC1=1;
            }
            if(check_flush_royalC2==1)
            {
                check_rfl++;
                win_cardC2=1;
            }
            if(check_flush_royalC3==1)
            {
                check_rfl++;
                win_cardC3=1;
            }
            if(check_flush_royalC4==1)
            {
                check_rfl++;
                win_cardC4=1;
            }
            if(check_flush_royalC5==1)
            {
                check_rfl++;
                win_cardC5=1;
            }
            money+=moneybox/check_rfl;
            temp_flhs=1;
            temp_card=10;
            win_cardP=1;
        }
        if(check_flush_royalP<check_flush_royalC1||check_flush_royalP<check_flush_royalC2||check_flush_royalP<check_flush_royalC3||check_flush_royalP<check_flush_royalC4||check_flush_royalP<check_flush_royalC5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
//--------------------STRAIGHT-FLUSH---------------------
else
{
    if(check_straight_flushP>0||check_straight_flushC1>0||check_straight_flushC2>0||check_straight_flushC3>0||check_straight_flushC4>0||check_straight_flushC5>0)
    {
        if(check_straight_flushP>=check_straight_flushC1&&check_straight_flushP>=check_straight_flushC2&&check_straight_flushP>=check_straight_flushC3&&check_straight_flushP>=check_straight_flushC4&&check_straight_flushP>=check_straight_flushC5)
        {
            if(check_straight_flushP==check_straight_flushC1&&check_straight_flushP==check_straight_flushC2&&check_straight_flushP==check_straight_flushC3&&check_straight_flushP==check_straight_flushC4&&check_straight_flushP==check_straight_flushC5)
            {
                temp_flhs=1;
                money+=moneybox/6;
                temp_card=10;
                win_cardP=1;
                win_cardC1=1;
                win_cardC2=1;
                win_cardC3=1;
                win_cardC4=1;
                win_cardC5=1;
            }
            if(check_straight_flushP>check_straight_flushC1&&check_straight_flushP>check_straight_flushC2&&check_straight_flushP>check_straight_flushC3&&check_straight_flushP>check_straight_flushC4&&check_straight_flushP>check_straight_flushC5)
            {
                temp_flhs=1;
                money+=moneybox;
                temp_card=10;
                win_cardP=1;
            }
        }
        if(check_straight_flushP<check_straight_flushC1||check_straight_flushP<check_straight_flushC2||check_straight_flushP<check_straight_flushC3||check_straight_flushP<check_straight_flushC4||check_straight_flushP<check_straight_flushC5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
//--------------------KARE-----------------------------
else
{
    if(check_kareP>=1||check_kareC1>=1||check_kareC2>=1||check_kareC3>=1||check_kareC4>=1||check_kareC5>=1)
    {
        if(check_kareP>=check_kareC1&&check_kareP>=check_kareC2&&check_kareP>=check_kareC3&&check_kareP>=check_kareC4&&check_kareP>=check_kareC5)
        {
            if(check_kareP==check_kareC1&&check_kareP==check_kareC2&&check_kareP==check_kareC3&&check_kareP==check_kareC4&&check_kareP==check_kareC5)
            {
                if(check_highP>check_highC1&&check_highP>check_highC2&&check_highP>check_highC3&&check_highP>check_highC4&&check_highP>check_highC5)
                {
                    temp_flhs=1;
                    money+=moneybox;
                    temp_card=10;
                }
                if(check_highP==check_highC1&&check_highP==check_highC2&&check_highP==check_highC3&&check_highP==check_highC4&&check_highP==check_highC5)
                {
                    temp_flhs=1;
                    money+=moneybox/6;
                    temp_card=10;
                    win_cardP=1;
                    win_cardC1=1;
                    win_cardC2=1;
                    win_cardC3=1;
                    win_cardC4=1;
                    win_cardC5=1;
                }
                if(check_highP<check_highC1||check_highP<check_highC2||check_highP<check_highC3||check_highP<check_highC4||check_highP<check_highC5)
                {
                    temp_flhs=1;
                    temp_card=10;
                }
            }
            if(check_kareP>check_kareC1&&check_kareP>check_kareC2&&check_kareP>check_kareC3&&check_kareP>check_kareC4&&check_kareP>check_kareC5)
            {
                temp_flhs=1;
                money+=moneybox;
                temp_card=10;
                win_cardP=1;
            }
        }
        if(check_kareP<check_kareC1||check_kareP<check_kareC2||check_kareP<check_kareC3||check_kareP<check_kareC4||check_kareP<check_kareC5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
//--------------------FULL-HOUSE----------------------
else
{
    if(check_full_houseP>=1||check_full_houseC1>=1||check_full_houseC2>=1||check_full_houseC3>=1||check_full_houseC4>=1||check_full_houseC5>=1)
    {
//------------------------PLAYER--------------------
                if(check_tripleP>check_triple2P)
                {
                    check_fh_triple_P=check_tripleP;
                }
                if(check_triple2P>check_tripleP)
                {
                    check_fh_triple_P=check_triple2P;
                }
                if(check_doubleP==check_fh_triple_P)
               {
                   if(check_double2P>check_double3P)
                {
                    check_fh_double_P=check_double2P;
                }
                    if(check_double3P>check_double2P)
                {
                    check_fh_double_P=check_double3P;
                }
               }
                if(check_double2P==check_fh_triple_P)
               {
                   if(check_doubleP>check_double3P)
                {
                    check_fh_double_P=check_doubleP;
                }
                    if(check_double3P>check_doubleP)
                {
                    check_fh_double_P=check_double3P;
                }
               }
                if(check_double3P==check_fh_triple_P)
               {
                   if(check_doubleP>check_double2P)
                {
                    check_fh_double_P=check_doubleP;
                }
                    if(check_double2P>check_doubleP)
                {
                    check_fh_double_P=check_double2P;
                }
               }
//------------------------COMPUTER1-----------------
                if(check_tripleC1>check_triple2C1)
                {
                    check_fh_triple_C1=check_tripleC1;
                }
                if(check_triple2C1>check_tripleC1)
                {
                    check_fh_triple_C1=check_triple2C1;
                }
                if(check_doubleC1==check_fh_triple_C1)
               {
                   if(check_double2C1>check_double3C1)
                {
                    check_fh_double_C1=check_double2C1;
                }
                    if(check_double3C1>check_double2C1)
                {
                    check_fh_double_C1=check_double3C1;
                }
               }
                if(check_double2C1==check_fh_triple_C1)
               {
                   if(check_doubleC1>check_double3C1)
                {
                    check_fh_double_C1=check_doubleC1;
                }
                    if(check_double3C1>check_doubleC1)
                {
                    check_fh_double_C1=check_double3C1;
                }
               }
                if(check_double3C1==check_fh_triple_C1)
               {
                   if(check_doubleC1>check_double2C1)
                {
                    check_fh_double_C1=check_doubleC1;
                }
                    if(check_double2C1>check_doubleC1)
                {
                    check_fh_double_C1=check_double2C1;
                }
               }
//------------------------COMPUTER2-----------------
                if(check_tripleC2>check_triple2C2)
                {
                    check_fh_triple_C2=check_tripleC2;
                }
                if(check_triple2C2>check_tripleC2)
                {
                    check_fh_triple_C2=check_triple2C2;
                }
                if(check_doubleC2==check_fh_triple_C2)
               {
                   if(check_double2C2>check_double3C2)
                {
                    check_fh_double_C2=check_double2C2;
                }
                    if(check_double3C2>check_double2C2)
                {
                    check_fh_double_C2=check_double3C2;
                }
               }
                if(check_double2C2==check_fh_triple_C2)
               {
                   if(check_doubleC2>check_double3C2)
                {
                    check_fh_double_C2=check_doubleC2;
                }
                    if(check_double3C2>check_doubleC2)
                {
                    check_fh_double_C2=check_double3C2;
                }
               }
                if(check_double3C2==check_fh_triple_C2)
               {
                   if(check_doubleC2>check_double2C2)
                {
                    check_fh_double_C2=check_doubleC2;
                }
                    if(check_double2C2>check_doubleC2)
                {
                    check_fh_double_C2=check_double2C2;
                }
               }
//------------------------COMPUTER3-----------------
                if(check_tripleC3>check_triple2C3)
                {
                    check_fh_triple_C3=check_tripleC3;
                }
                if(check_triple2C3>check_tripleC3)
                {
                    check_fh_triple_C3=check_triple2C3;
                }
                if(check_doubleC3==check_fh_triple_C3)
               {
                   if(check_double2C3>check_double3C3)
                {
                    check_fh_double_C3=check_double2C3;
                }
                    if(check_double3C3>check_double2C3)
                {
                    check_fh_double_C3=check_double3C3;
                }
               }
                if(check_double2C3==check_fh_triple_C3)
               {
                   if(check_doubleC3>check_double3C3)
                {
                    check_fh_double_C3=check_doubleC3;
                }
                    if(check_double3C3>check_doubleC3)
                {
                    check_fh_double_C3=check_double3C3;
                }
               }
                if(check_double3C3==check_fh_triple_C3)
               {
                   if(check_doubleC3>check_double2C3)
                {
                    check_fh_double_C3=check_doubleC3;
                }
                    if(check_double2C3>check_doubleC3)
                {
                    check_fh_double_C3=check_double2C3;
                }
               }
//------------------------COMPUTER4-----------------
                if(check_tripleC4>check_triple2C4)
                {
                    check_fh_triple_C4=check_tripleC4;
                }
                if(check_triple2C4>check_tripleC4)
                {
                    check_fh_triple_C4=check_triple2C4;
                }
                if(check_doubleC4==check_fh_triple_C4)
               {
                   if(check_double2C4>check_double3C4)
                {
                    check_fh_double_C4=check_double2C4;
                }
                    if(check_double3C4>check_double2C4)
                {
                    check_fh_double_C4=check_double3C4;
                }
               }
                if(check_double2C4==check_fh_triple_C4)
               {
                   if(check_doubleC4>check_double3C4)
                {
                    check_fh_double_C4=check_doubleC4;
                }
                    if(check_double3C4>check_doubleC4)
                {
                    check_fh_double_C4=check_double3C4;
                }
               }
                if(check_double3C4==check_fh_triple_C4)
               {
                   if(check_doubleC4>check_double2C4)
                {
                    check_fh_double_C4=check_doubleC4;
                }
                    if(check_double2C4>check_doubleC4)
                {
                    check_fh_double_C4=check_double2C4;
                }
               }
//------------------------COMPUTER5-----------------
                if(check_tripleC5>check_triple2C5)
                {
                    check_fh_triple_C5=check_tripleC5;
                }
                if(check_triple2C5>check_tripleC5)
                {
                    check_fh_triple_C5=check_triple2C5;
                }
                if(check_doubleC5==check_fh_triple_C5)
               {
                   if(check_double2C5>check_double3C5)
                {
                    check_fh_double_C5=check_double2C5;
                }
                    if(check_double3C5>check_double2C5)
                {
                    check_fh_double_C5=check_double3C5;
                }
               }
                if(check_double2C5==check_fh_triple_C5)
               {
                   if(check_doubleC5>check_double3C5)
                {
                    check_fh_double_C5=check_doubleC5;
                }
                    if(check_double3C5>check_doubleC5)
                {
                    check_fh_double_C5=check_double3C5;
                }
               }
                if(check_double3C5==check_fh_triple_C5)
               {
                   if(check_doubleC5>check_double2C5)
                {
                    check_fh_double_C5=check_doubleC5;
                }
                    if(check_double2C5>check_doubleC5)
                {
                    check_fh_double_C5=check_double2C5;
                }
               }
//-------------------------------------------------
        if(check_full_houseP>=check_full_houseC1&&check_full_houseP>=check_full_houseC2&&check_full_houseP>=check_full_houseC3&&check_full_houseP>=check_full_houseC4&&check_full_houseP>=check_full_houseC5)
        {
            if(check_fh_triple_P>check_fh_triple_C1&&check_fh_triple_P>check_fh_triple_C2&&check_fh_triple_P>check_fh_triple_C3&&check_fh_triple_P>check_fh_triple_C4&&check_fh_triple_P>check_fh_triple_C5)
            {
                money+=moneybox;
                temp_flhs=1;
                temp_card=10;
                win_cardP=1;
                tp_fl=1;
            }
                if(check_fh_triple_P==check_fh_triple_C1||check_fh_triple_P==check_fh_triple_C2||check_fh_triple_P==check_fh_triple_C3||check_fh_triple_P==check_fh_triple_C4||check_fh_triple_P==check_fh_triple_C5)
                {
                    if(win_cardP==0)
                    {
                    if(check_fh_double_P>=check_fh_double_C1&&check_fh_double_P>=check_fh_double_C2&&check_fh_double_P>=check_fh_double_C3&&check_fh_double_P>=check_fh_double_C4&&check_fh_double_P>=check_fh_double_C5)
                    {
                    if(check_fh_double_P>check_fh_double_C1&&check_fh_double_P>check_fh_double_C2&&check_fh_double_P>check_fh_double_C3&&check_fh_double_P>check_fh_double_C4&&check_fh_double_P>check_fh_double_C5)
                    {
                        money+=moneybox;
                        temp_flhs=1;
                        temp_card=10;
                        win_cardP=1;
                        tp_fl=1;
                    }

                    if(check_fh_double_P>check_fh_double_C1&&check_fh_double_P>check_fh_double_C2&&check_fh_double_P>check_fh_double_C3&&check_fh_double_P>check_fh_double_C4&&check_fh_double_P>check_fh_double_C5)
                    {
                        money+=moneybox;
                        temp_flhs=1;
                        temp_card=10;
                        win_cardP=1;
                        tp_fl=1;
                    }
                    if(check_fh_double_P<check_fh_double_C1||check_fh_double_P<check_fh_double_C2||check_fh_double_P<check_fh_double_C3||check_fh_double_P<check_fh_double_C4||check_fh_double_P<check_fh_double_C5)
                    {
                        temp_flhs=1;
                        temp_card=10;
                    }
                    if(check_fh_double_P==check_fh_double_C1&&check_fh_triple_P==check_fh_triple_C1)
                    {
                        check_ful++;
                    }
                    if(check_fh_double_P==check_fh_double_C2&&check_fh_triple_P==check_fh_triple_C2)
                    {
                        check_ful++;
                    }
                    if(check_fh_double_P==check_fh_double_C2&&check_fh_triple_P==check_fh_triple_C2)
                    {
                        check_ful++;
                    }
                    if(check_fh_double_P==check_fh_double_C2&&check_fh_triple_P==check_fh_triple_C2)
                    {
                        check_ful++;
                    }
                    if(check_fh_double_P==check_fh_double_C2&&check_fh_triple_P==check_fh_triple_C2)
                    {
                        check_ful++;
                    }
                        money+=moneybox/check_ful;
                        temp_flhs=1;
                        temp_card=10;
                        win_cardP=1;
                        tp_fl=1;
                }
                }
                if(check_fh_triple_P<check_fh_triple_C1||check_fh_triple_P<check_fh_triple_C2||check_fh_triple_P<check_fh_triple_C3||check_fh_triple_P<check_fh_triple_C4||check_fh_triple_P<check_fh_triple_C5)
                {
                    temp_flhs=1;
                    temp_card=10;
                }
            }
            if(check_full_houseP>check_full_houseC1&&check_full_houseP>check_full_houseC2&&check_full_houseP>check_full_houseC3&&check_full_houseP>check_full_houseC4&&check_full_houseP>check_full_houseC5)
            {
                money+=moneybox;
                temp_flhs=1;
                temp_card=10;
                win_cardP=1;
                tp_fl=1;
            }
            if(check_full_houseP<check_full_houseC1||check_full_houseP<check_full_houseC2||check_full_houseP<check_full_houseC3||check_full_houseP<check_full_houseC4||check_full_houseP<check_full_houseC5)
            {
                temp_flhs=1;
                temp_card=10;
            }
        }
        if(check_full_houseP<check_full_houseC1||check_full_houseP<check_full_houseC2||check_full_houseP<check_full_houseC3||check_full_houseP<check_full_houseC4||check_full_houseP<check_full_houseC5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
//--------------------FLUSH-------------------------
else
{
    if(check_flushP>=1||check_flushC1>=1||check_flushC2>=1||check_flushC3>=1||check_flushC4>=1||check_flushC5>=1)
    {
        if(check_flushP>=check_flushC1&&check_flushP>=check_flushC2&&check_flushP>=check_flushC3&&check_flushP>=check_flushC4&&check_flushP>=check_flushC5)
        {
            if(check_flushC1==1)
            {
                check_fl++;
                win_cardC1=1;
            }
            if(check_flushC2==1)
            {
                check_fl++;
                win_cardC2=1;
            }
            if(check_flushC3==1)
            {
                check_fl++;
                win_cardC3=1;
            }
            if(check_flushC4==1)
            {
                check_fl++;
                win_cardC4=1;
            }
            if(check_flushC5==1)
            {
                check_fl++;
                win_cardC5=1;
            }
            temp_flhs=1;
            money+=moneybox/check_fl;
            temp_card=10;
            win_cardP=1;
        }
        if(check_flushP<check_flushC1||check_flushP<check_flushC2||check_flushP<check_flushC3||check_flushP<check_flushC4||check_flushP<check_flushC5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
//--------------------STRAIGHT-----------------------
else
{
    if(check_straighP>=1||check_straighC1>=1||check_straighC2>=1||check_straighC3>=1||check_straighC4>=1||check_straighC5>=1)
    {
        if(check_straighP>=check_straighC1&&check_straighP>=check_straighC2&&check_straighP>=check_straighC3&&check_straighP>=check_straighC4&&check_straighP>=check_straighC5)
        {
            if(check_straighP==check_straighC1||check_straighP==check_straighC2||check_straighP==check_straighC3||check_straighP==check_straighC4||check_straighP||check_straighC5)
            {
                if(check_straighP==check_straighC1)
                   {
                       check_str++;
                       win_cardC1=1;
                   }
                if(check_straighP==check_straighC2)
                   {
                       check_str++;
                       win_cardC2=1;
                   }
                if(check_straighP==check_straighC3)
                   {
                       check_str++;
                       win_cardC3=1;
                   }
                if(check_straighP==check_straighC4)
                   {
                       check_str++;
                       win_cardC4=1;
                   }
                if(check_straighP==check_straighC5)
                   {
                       check_str++;
                       win_cardC5=1;
                   }
                temp_flhs=1;
                money+=moneybox/check_str;
                str_tp=1;
                temp_card=10;
                win_cardP=1;
            }
            if(str_tp==0)
            {
            if(check_straighP>check_straighC1&&check_straighP>check_straighC2&&check_straighP>check_straighC3&&check_straighP>check_straighC4&&check_straighP>check_straighC5)
            {
                temp_flhs=1;
                money+=moneybox;
                temp_card=10;
                win_cardP=1;
            }
            }
        }
        if(check_straighP<check_straighC1||check_straighP<check_straighC2||check_straighP<check_straighC3||check_straighP<check_straighC4||check_straighP<check_straighC5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
//--------------------TRIPLE-----------------------
else
{
    if(check_tripleP>0||check_tripleC1>0||check_tripleC2>0||check_tripleC3>0||check_tripleC4>0||check_tripleC5>0)
    {
    if(temp_flhs==0)
    {
//-------------------PLAYER------------------------
        if(check_tripleP>check_triple2P)
        {
            check_tr_triple_P=check_tripleP;
        }
        if(check_triple2P>check_tripleP)
        {
            check_tr_triple_P=check_triple2P;
        }
//-------------------COMPUTER1---------------------
        if(check_tripleC1>check_triple2C1)
        {
            check_tr_triple_C1=check_tripleC1;
        }
        if(check_triple2C1>check_tripleC1)
        {
            check_tr_triple_C1=check_triple2C1;
        }
//-------------------COMPUTER2---------------------
        if(check_tripleC2>check_triple2C2)
        {
            check_tr_triple_C2=check_tripleC2;
        }
        if(check_triple2C2>check_tripleC2)
        {
            check_tr_triple_C2=check_triple2C2;
        }
//-------------------COMPUTER3---------------------
        if(check_tripleC3>check_triple2C3)
        {
            check_tr_triple_C3=check_tripleC3;
        }
        if(check_triple2C3>check_tripleC3)
        {
            check_tr_triple_C3=check_triple2C3;
        }
//-------------------COMPUTER4---------------------
        if(check_tripleC4>check_triple2C4)
        {
            check_tr_triple_C4=check_tripleC4;
        }
        if(check_triple2C4>check_tripleC4)
        {
            check_tr_triple_C4=check_triple2C4;
        }
//-------------------COMPUTER5---------------------
        if(check_tripleC5>check_triple2C5)
        {
            check_tr_triple_C5=check_tripleC5;
        }
        if(check_triple2C5>check_tripleC5)
        {
            check_tr_triple_C5=check_triple2C5;
        }
//-------------------------------------------------
        if(check_tr_triple_P>=check_tr_triple_C1&&check_tr_triple_P>=check_tr_triple_C2&&check_tr_triple_P>=check_tr_triple_C3&&check_tr_triple_P>=check_tr_triple_C4&&check_tr_triple_P>=check_tr_triple_C5)
        {
            if(check_tr_triple_P>check_tr_triple_C1&&check_tr_triple_P>check_tr_triple_C2&&check_tr_triple_P>check_tr_triple_C3&&check_tr_triple_P>check_tr_triple_C4&&check_tr_triple_P>check_tr_triple_C5)
            {
                money+=moneybox;
                temp_flhs=1;
                temp_card=10;
                win_cardP=1;
            }
            if(check_tr_triple_P==check_tr_triple_C1||check_tr_triple_P==check_tr_triple_C2||check_tr_triple_P==check_tr_triple_C3||check_tr_triple_P==check_tr_triple_C4||check_tr_triple_P==check_tr_triple_C5)
            {
                if((check_highP>=check_highC1&&check_tr_triple_P==check_tr_triple_C1)||(check_highP>=check_highC2&&check_tr_triple_P==check_tr_triple_C2)||(check_highP>=check_highC3&&check_tr_triple_P==check_tr_triple_C3)||(check_highP>=check_highC4&&check_tr_triple_P==check_tr_triple_C4)||(check_highP>=check_highC5&&check_tr_triple_P==check_tr_triple_C5))
                    {
                    if(check_highP>check_highC1&&check_highP>check_highC2&&check_highP>check_highC3&&check_highP>check_highC4&&check_highP>check_highC5)
                    {
                        money+=moneybox;
                        temp_flhs=1;
                        temp_card=10;
                        win_cardP=1;
                    }
                    if(check_highP==check_highC1&&check_tr_triple_P==check_tr_triple_C1)
                    {
                        check_tr++;
                        win_cardC1=1;
                    }
                    if(check_highP==check_highC2&&check_tr_triple_P==check_tr_triple_C2)
                    {
                        check_tr++;
                        win_cardC2=1;
                    }
                    if(check_highP==check_highC3&&check_tr_triple_P==check_tr_triple_C3)
                    {
                        check_tr++;
                        win_cardC3=1;
                    }
                    if(check_highP==check_highC4&&check_tr_triple_P==check_tr_triple_C4)
                    {
                        check_tr++;
                        win_cardC4=1;
                    }
                    if(check_highP==check_highC5&&check_tr_triple_P==check_tr_triple_C5)
                    {
                        check_tr++;
                        win_cardC5=1;
                    }
                    temp_flhs=1;
                    money+=moneybox/check_tr;
                    temp_card=10;
                    win_cardP=1;
                }
            }
        }
        if(check_tr_triple_P<check_tr_triple_C1||check_tr_triple_P<check_tr_triple_C2||check_tr_triple_P<check_tr_triple_C3||check_tr_triple_P<check_tr_triple_C4||check_tr_triple_P<check_tr_triple_C5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
    }
//--------------------DOUBLE-----------------------
else
{
    if(check_doubleP>0||check_doubleC1>0||check_doubleC2>0||check_doubleC3>0||check_doubleC4>0||check_doubleC5>0)
    {
    if(tp_fl==0)
    {
    if(temp_flhs==0)
    {
//-------------------PLAYER------------------------
        if(check_doubleP>check_double2P&&check_doubleP>check_double3P)
        {
            check_db_double_P=check_doubleP;
            if(check_double2P>check_double3P)
            {
                check_2db_double_P=check_double2P;
            }
            if(check_double3P>check_double2P)
            {
                check_2db_double_P=check_double3P;
            }
        }
        if(check_double2P>check_doubleP&&check_double2P>check_double3P)
        {
            check_db_double_P=check_double2P;
            if(check_doubleP>check_double3P)
            {
                check_2db_double_P=check_doubleP;
            }
            if(check_double3P>check_doubleP)
            {
                check_2db_double_P=check_double3P;
            }
        }
        if(check_double3P>check_doubleP&&check_double3P>check_double2P)
        {
            check_db_double_P=check_double3P;
            if(check_doubleP>check_double2P)
            {
                check_2db_double_P=check_doubleP;
            }
            if(check_double2P>check_doubleP)
            {
                check_2db_double_P=check_double2P;
            }
        }
//-------------------COMPUTER1---------------------

        if(check_doubleC1>check_double2C1&&check_doubleC1>check_double3C1)
        {
            check_db_double_C1=check_doubleC1;
            if(check_double2C1>check_double3C1)
            {
                check_2db_double_C1=check_double2C1;
            }
            if(check_double3C1>check_double2C1)
            {
                check_2db_double_C1=check_double3C1;
            }
        }
        if(check_double2C1>check_doubleC1&&check_double2C1>check_double3C1)
        {
            check_db_double_C1=check_double2C1;
            if(check_doubleC1>check_double3C1)
            {
                check_2db_double_C1=check_doubleC1;
            }
            if(check_double3C1>check_doubleC1)
            {
                check_2db_double_C1=check_double3C1;
            }
        }
        if(check_double3C1>check_doubleC1&&check_double3C1>check_double2C1)
        {
            check_db_double_C1=check_double3C1;
            if(check_doubleC1>check_double2C1)
            {
                check_2db_double_C1=check_doubleC1;
            }
            if(check_double2C1>check_doubleC1)
            {
                check_2db_double_C1=check_double2C1;
            }
        }
//-------------------COMPUTER2---------------------

        if(check_doubleC2>check_double2C2&&check_doubleC2>check_double3C2)
        {
            check_db_double_C2=check_doubleC2;
            if(check_double2C2>check_double3C2)
            {
                check_2db_double_C2=check_double2C2;
            }
            if(check_double3C2>check_double2C2)
            {
                check_2db_double_C2=check_double3C2;
            }
        }
        if(check_double2C2>check_doubleC2&&check_double2C2>check_double3C2)
        {
            check_db_double_C2=check_double2C2;
            if(check_doubleC2>check_double3C2)
            {
                check_2db_double_C2=check_doubleC2;
            }
            if(check_double3C2>check_doubleC2)
            {
                check_2db_double_C2=check_double3C2;
            }
        }
        if(check_double3C2>check_doubleC2&&check_double3C2>check_double2C2)
        {
            check_db_double_C2=check_double3C2;
            if(check_doubleC2>check_double2C2)
            {
                check_2db_double_C2=check_doubleC2;
            }
            if(check_double2C2>check_doubleC2)
            {
                check_2db_double_C2=check_double2C2;
            }
        }
//-------------------COMPUTER3---------------------

        if(check_doubleC3>check_double2C3&&check_doubleC3>check_double3C3)
        {
            check_db_double_C3=check_doubleC3;
            if(check_double2C3>check_double3C3)
            {
                check_2db_double_C3=check_double2C3;
            }
            if(check_double3C3>check_double2C3)
            {
                check_2db_double_C3=check_double3C3;
            }
        }
        if(check_double2C3>check_doubleC3&&check_double2C3>check_double3C3)
        {
            check_db_double_C3=check_double2C3;
            if(check_doubleC3>check_double3C3)
            {
                check_2db_double_C3=check_doubleC3;
            }
            if(check_double3C3>check_doubleC3)
            {
                check_2db_double_C3=check_double3C3;
            }
        }
        if(check_double3C3>check_doubleC3&&check_double3C3>check_double2C3)
        {
            check_db_double_C3=check_double3C3;
            if(check_doubleC3>check_double2C3)
            {
                check_2db_double_C3=check_doubleC3;
            }
            if(check_double2C3>check_doubleC3)
            {
                check_2db_double_C3=check_double2C3;
            }
        }
//-------------------COMPUTER4---------------------

        if(check_doubleC4>check_double2C4&&check_doubleC4>check_double3C4)
        {
            check_db_double_C4=check_doubleC4;
            if(check_double2C4>check_double3C4)
            {
                check_2db_double_C4=check_double2C4;
            }
            if(check_double3C4>check_double2C4)
            {
                check_2db_double_C4=check_double3C4;
            }
        }
        if(check_double2C4>check_doubleC4&&check_double2C4>check_double3C4)
        {
            check_db_double_C4=check_double2C4;
            if(check_doubleC4>check_double3C4)
            {
                check_2db_double_C4=check_doubleC4;
            }
            if(check_double3C4>check_doubleC4)
            {
                check_2db_double_C4=check_double3C4;
            }
        }
        if(check_double3C4>check_doubleC4&&check_double3C4>check_double2C4)
        {
            check_db_double_C4=check_double3C4;
            if(check_doubleC4>check_double2C4)
            {
                check_2db_double_C4=check_doubleC4;
            }
            if(check_double2C4>check_doubleC4)
            {
                check_2db_double_C4=check_double2C4;
            }
        }
//-------------------COMPUTER5---------------------

        if(check_doubleC5>check_double2C5&&check_doubleC5>check_double3C5)
        {
            check_db_double_C5=check_doubleC5;
            if(check_double2C5>check_double3C5)
            {
                check_2db_double_C5=check_double2C5;
            }
            if(check_double3C5>check_double2C5)
            {
                check_2db_double_C5=check_double3C5;
            }
        }
        if(check_double2C5>check_doubleC5&&check_double2C5>check_double3C5)
        {
            check_db_double_C5=check_double2C5;
            if(check_doubleC5>check_double3C5)
            {
                check_2db_double_C5=check_doubleC5;
            }
            if(check_double3C5>check_doubleC5)
            {
                check_2db_double_C5=check_double3C5;
            }
        }
        if(check_double3C5>check_doubleC5&&check_double3C5>check_double2C5)
        {
            check_db_double_C5=check_double3C5;
            if(check_doubleC5>check_double2C5)
            {
                check_2db_double_C5=check_doubleC5;
            }
            if(check_double2C5>check_doubleC5)
            {
                check_2db_double_C5=check_double2C5;
            }
        }
//-------------------------------------------------
if(check_db_double_P>check_db_double_C1)
{
    if(db_max<check_db_double_P)db_max=check_db_double_P;
}
else if(db_max<check_db_double_C1)db_max=check_db_double_C1;
if(check_db_double_P>check_db_double_C2)
{
    if(db_max<check_db_double_P)db_max=check_db_double_P;
}
else if(db_max<check_db_double_C2)db_max=check_db_double_C2;
if(check_db_double_P>check_db_double_C3)
{
    if(db_max<check_db_double_P)db_max=check_db_double_P;
}
else if(db_max<check_db_double_C3)db_max=check_db_double_C3;
if(check_db_double_P>check_db_double_C4)
{
    if(db_max<check_db_double_P)db_max=check_db_double_P;
}
else if(db_max<check_db_double_C4)db_max=check_db_double_C4;
if(check_db_double_P>check_db_double_C5)
{
    if(db_max<check_db_double_P)db_max=check_db_double_P;
}
else if(db_max<check_db_double_C5)db_max=check_db_double_C5;
//-------------------------------------------------
if(check_2db_double_P>check_2db_double_C1)
{
    if(db2_max<check_2db_double_P)db2_max=check_2db_double_P;
}
else if(db2_max<check_2db_double_C1)db2_max=check_2db_double_C1;
if(check_2db_double_P>check_2db_double_C2)
{
    if(db2_max<check_2db_double_P)db2_max=check_2db_double_P;
}
else if(db2_max<check_2db_double_C2)db2_max=check_2db_double_C2;
if(check_2db_double_P>check_2db_double_C3)
{
    if(db2_max<check_2db_double_P)db2_max=check_2db_double_P;
}
else if(db2_max<check_2db_double_C3)db2_max=check_2db_double_C3;
if(check_2db_double_P>check_2db_double_C4)
{
    if(db2_max<check_2db_double_P)db2_max=check_2db_double_P;
}
else if(db2_max<check_2db_double_C4)db2_max=check_2db_double_C4;
if(check_2db_double_P>check_2db_double_C5)
{
    if(db2_max<check_2db_double_P)db2_max=check_2db_double_P;
}
else if(db2_max<check_2db_double_C5)db2_max=check_2db_double_C5;
//-------------------------------------------------
        if(win_cardP==0&&win_cardC1==0&&win_cardC2==0&&win_cardC3==0&&win_cardC4==0&&win_cardC5==0)
        {
        if((check_db_double_P>=check_db_double_C1&&check_db_double_P>=check_db_double_C2&&check_db_double_P>=check_db_double_C3&&check_db_double_P>=check_db_double_C4&&check_db_double_P>=check_db_double_C5)||(check_2db_double_P>=check_2db_double_C1&&check_2db_double_P>=check_2db_double_C2&&check_2db_double_P>=check_2db_double_C3&&check_2db_double_P>=check_2db_double_C4&&check_2db_double_P>=check_2db_double_C5))
        {
            if(check_2db_double_P>0&&check_2db_double_C1==0&&check_2db_double_C2==0&&check_2db_double_C3==0&&check_2db_double_C4==0&&check_2db_double_C5==0)
            {
                money+=moneybox;
                temp_flhs=1;
                temp_card=10;
                win_cardP=1;
            }

            if(win_cardP==0&&win_cardC1==0&&win_cardC2==0&&win_cardC3==0&&win_cardC4==0&&win_cardC5==0)
            {
            if(check_db_double_P>check_db_double_C1&&check_2db_double_P>0&&check_db_double_P>check_db_double_C2&&check_2db_double_P>0&&check_db_double_P>check_db_double_C3&&check_2db_double_P>0&&check_db_double_P>check_db_double_C4&&check_2db_double_P>0&&check_db_double_P>check_db_double_C5&&check_2db_double_P>0)
            {
                money+=moneybox;
                temp_flhs=1;
                temp_card=10;
                win_cardP=1;
            }
            }
            if(check_2db_double_P==0&&check_2db_double_C1==0&&check_2db_double_C2==0&&check_2db_double_C3==0&&check_2db_double_C4==0&&check_2db_double_C5==0)
            {
            if(check_db_double_P==0&&check_2db_double_P==0)
            {
                db_temp=1;
            }


            if(win_cardP==0&&win_cardC1==0&&win_cardC2==0&&win_cardC3==0&&win_cardC4==0&&win_cardC5==0)
            {

                if(check_db_double_P>0)
                {
                    if((check_db_double_P>=db2_max&&check_2db_double_P>=db_max)||(check_2db_double_P>=db2_max&&check_db_double_P>=db_max))
                {
                if(check_db_double_P>check_db_double_C1&&check_db_double_P>check_db_double_C2&&check_db_double_P>check_db_double_C3&&check_db_double_P>check_db_double_C4&&check_db_double_P>check_db_double_C5)
                {
                    money+=moneybox;
                    temp_flhs=1;
                    temp_card=10;
                    win_cardP=1;
                }
                if((check_highP<check_highC1&&((check_db_double_C1>=db2_max&&check_2db_double_C1>=db_max)||(check_2db_double_C1>=db2_max&&check_db_double_C1>=db_max)))||(check_highP<check_highC2&&((check_db_double_C2>=db2_max&&check_2db_double_C2>=db_max)||(check_2db_double_C2>=db2_max&&check_db_double_C2>=db_max)))||(check_highP<check_highC3&&((check_db_double_C3>=db2_max&&check_2db_double_C3>=db_max)||(check_2db_double_C3>=db2_max&&check_db_double_C3>=db_max)))||(check_highP<check_highC4&&((check_db_double_C4>=db2_max&&check_2db_double_C4>=db_max)||(check_2db_double_C4>=db2_max&&check_db_double_C4>=db_max)))||(check_highP<check_highC5&&((check_db_double_C5>=db2_max&&check_2db_double_C5>=db_max)||(check_2db_double_C5>=db2_max&&check_db_double_C5>=db_max))))
                    {
                        db_temp=1;
                        temp_flhs=1;
                        temp_card=10;
                    }
                if(check_highP>=check_highC1||check_highP>=check_highC2||check_highP>=check_highC3||check_highP>=check_highC4||check_highP>=check_highC5)
                {
                    if(db_temp==0)
                    {


                    if(win_cardP==0&&win_cardC1==0&&win_cardC2==0&&win_cardC3==0&&win_cardC4==0&&win_cardC5==0)
                    {
                    if(check_highP>check_highC1&&check_highP>check_highC2&&check_highP>check_highC3&&check_highP>check_highC4&&check_highP>check_highC5)
                    {
                        money+=moneybox;
                        temp_flhs=1;
                        temp_card=10;
                    }


                    if(win_cardP==0&&win_cardC1==0&&win_cardC2==0&&win_cardC3==0&&win_cardC4==0&&win_cardC5==0)
                    {
                    if(check_highP==check_highC1&&check_db_double_P==check_db_double_C1)
                    {
                        checl_db++;
                        win_cardC1=1;
                    }
                    if(check_highP==check_highC2&&check_db_double_P==check_db_double_C2)
                    {
                        checl_db++;
                        win_cardC2=1;
                    }
                    if(check_highP==check_highC3&&check_db_double_P==check_db_double_C3)
                    {
                        checl_db++;
                        win_cardC3=1;
                    }
                    if(check_highP==check_highC4&&check_db_double_P==check_db_double_C4)
                    {
                        checl_db++;
                        win_cardC4=1;
                    }
                    if(check_highP==check_highC5&&check_db_double_P==check_db_double_C5)
                    {
                        checl_db++;
                        win_cardC5=1;
                    }
                        temp_flhs=1;
                        money+=moneybox/checl_db;
                        temp_card=10;
                        win_cardP=1;
                    }
                    }
                    }
                }
                    }
                }
            }
            }
                if(check_db_double_P>0&&check_2db_double_P>=check_2db_double_C1&&check_2db_double_P>=check_2db_double_C2&&check_2db_double_P>=check_2db_double_C3&&check_2db_double_P>=check_2db_double_C4&&check_2db_double_P>=check_2db_double_C5)
                {


                    if(win_cardP==0&&win_cardC1==0&&win_cardC2==0&&win_cardC3==0&&win_cardC4==0&&win_cardC5==0)
                    {
                    if(check_2db_double_P>check_2db_double_C1&&check_2db_double_P>check_2db_double_C2&&check_2db_double_P>check_2db_double_C3&&check_2db_double_P>check_2db_double_C4&&check_2db_double_P>check_2db_double_C5)
                    {
                        money+=moneybox;
                        temp_flhs=1;
                        db1_temp=1;
                        temp_card=10;
                        win_cardP=1;
                    }
                    }
                    if(win_cardP==0&&win_cardC1==0&&win_cardC2==0&&win_cardC3==0&&win_cardC4==0&&win_cardC5==0)
                    {
                if(check_2db_double_P>0)
                {
                    if((check_db_double_P>=db2_max&&check_2db_double_P>=db_max)||(check_2db_double_P>=db2_max&&check_db_double_P>=db_max))
                {
                    if((check_highP<check_highC1&&((check_db_double_C1>=db2_max&&check_2db_double_C1>=db_max)||(check_2db_double_C1>=db2_max&&check_db_double_C1>=db_max)))||(check_highP<check_highC2&&((check_db_double_C2>=db2_max&&check_2db_double_C2>=db_max)||(check_2db_double_C2>=db2_max&&check_db_double_C2>=db_max)))||(check_highP<check_highC3&&((check_db_double_C3>=db2_max&&check_2db_double_C3>=db_max)||(check_2db_double_C3>=db2_max&&check_db_double_C3>=db_max)))||(check_highP<check_highC4&&((check_db_double_C4>=db2_max&&check_2db_double_C4>=db_max)||(check_2db_double_C4>=db2_max&&check_db_double_C4>=db_max)))||(check_highP<check_highC5&&((check_db_double_C5>=db2_max&&check_2db_double_C5>=db_max)||(check_2db_double_C5>=db2_max&&check_db_double_C5>=db_max))))
                    {
                        db2_temp=1;
                        temp_flhs=1;
                        temp_card=10;
                    }
                        if(check_highP>=check_highC1||check_highP>=check_highC2||check_highP>=check_highC3||check_highP>=check_highC4||check_highP>=check_highC5)
                        {
                            if(db2_temp==0)
                            {
                            if(check_highP>check_highC1&&check_highP>check_highC2&&check_highP>check_highC3&&check_highP>check_highC4&&check_highP>check_highC5)
                            {
                                money+=moneybox;
                                temp_flhs=1;
                                temp_card=10;
                                win_cardP=1;
                            }
                            if(check_highP==check_highC1&&check_2db_double_P==check_2db_double_C1&&check_db_double_P==check_db_double_C1)
                            {
                                checl_db++;
                                win_cardC1=1;
                            }
                            if(check_highP==check_highC2&&check_2db_double_P==check_2db_double_C2&&check_db_double_P==check_db_double_C1)
                            {
                                checl_db++;
                                win_cardC2=1;
                            }
                            if(check_highP==check_highC3&&check_2db_double_P==check_2db_double_C3&&check_db_double_P==check_db_double_C1)
                            {
                                checl_db++;
                                win_cardC3=1;
                            }
                            if(check_highP==check_highC4&&check_2db_double_P==check_2db_double_C4&&check_db_double_P==check_db_double_C1)
                            {
                                checl_db++;
                                win_cardC4=1;
                            }
                            if(check_highP==check_highC5&&check_2db_double_P==check_2db_double_C5&&check_db_double_P==check_db_double_C1)
                            {
                                checl_db++;
                                win_cardC5=1;
                            }

                                temp_flhs=1;
                                money+=moneybox/checl_db;
                                temp_card=10;
                                win_cardP=1;
                            }
                        }
                }
                }
                    }
                }
                if(check_2db_double_P<check_2db_double_C1||check_2db_double_P<check_2db_double_C2||check_2db_double_P<check_2db_double_C3||check_2db_double_P<check_2db_double_C4||check_2db_double_P<check_2db_double_C5)
                {
                    temp_flhs=1;
                    temp_card=10;
                }
            if(check_db_double_P<check_db_double_C1||check_db_double_P<check_db_double_C2||check_db_double_P<check_db_double_C3||check_db_double_P<check_db_double_C4||check_db_double_P<check_db_double_C5)
            {
                temp_flhs=1;
                temp_card=10;
            }
        }
        if(check_db_double_P<check_db_double_C1||check_db_double_P<check_db_double_C2||check_db_double_P<check_db_double_C3||check_db_double_P<check_db_double_C4||check_db_double_P<check_db_double_C5)
        {
            temp_flhs=1;
            temp_card=10;
        }
    }
    }
    }
    }
//-------------------HIGH-CARD---------------------
else
{
    if(check_db_double_P==0&&check_db_double_C1==0&&check_db_double_C2==0&&check_db_double_C3==0&&check_db_double_C4==0&&check_db_double_C5==0&&check_2db_double_P==0&&check_2db_double_C1==0&&check_2db_double_C2==0&&check_2db_double_C3==0&&check_2db_double_C4==0&&check_2db_double_C5==0&&check_tr_triple_P==0&&check_tr_triple_C1==0&&check_tr_triple_C2==0&&check_tr_triple_C3==0&&check_tr_triple_C4==0&&check_tr_triple_C5==0&&check_straighP==0&&check_straighC1==0&&check_straighC2==0&&check_straighC3==0&&check_straighC4==0&&check_straighC5==0&&check_flushP==0&&check_flushC1==0&&check_flushC2==0&&check_flushC3==0&&check_flushC4==0&&check_flushC5==0&&check_straight_flushP==0&&check_straight_flushC1==0&&check_straight_flushC2==0&&check_straight_flushC3==0&&check_straight_flushC4==0&&check_straight_flushC5==0&&check_flush_royalP==0&&check_flush_royalC1==0&&check_flush_royalC2==0&&check_flush_royalC3==0&&check_flush_royalC4==0&&check_flush_royalC5==0)
    {
    if(check_highP<check_highC1||check_highP<check_highC2||check_highP<check_highC3||check_highP<check_highC4||check_highP<check_highC5)
    {
        temp_flhs=1;
        temp_card=10;
        hg_temp=1;
    }
    if(check_highP>=check_highC1&&check_highP>=check_highC2&&check_highP>=check_highC3&&check_highP>=check_highC4&&check_highP>=check_highC5)
    {
        if(hg_temp==0)
        {
        if(check_highP>check_highC1&&check_highP>check_highC2&&check_highP>check_highC3&&check_highP>check_highC4&&check_highP>check_highC5)
        {
            temp_flhs=1;
            money+=moneybox;
            temp_card=10;
            win_cardP=1;
        }
        if(check_highP==check_highC1)
        {
            chek_hg++;
            win_cardC1=1;
        }
        if(check_highP==check_highC2)
        {
            chek_hg++;
            win_cardC2=1;
        }
        if(check_highP==check_highC3)
        {
            chek_hg++;
            win_cardC3=1;
        }
        if(check_highP==check_highC4)
        {
            chek_hg++;
            win_cardC4=1;
        }
        if(check_highP==check_highC5)
        {
            chek_hg++;
            win_cardC5=1;
        }
        temp_flhs=1;
        money+=moneybox/chek_hg;
        temp_card=10;
        win_cardP=1;
        }
    }
    }
}
}
}
}
}
}
}
}
    temp_card=10;
//-------------------------------------------------
    check_rfl=1;
    check_fl=1;
    check_tr=1;
    checl_db=1;
    chek_hg=1;
    check_ful=1;
    check_str=1;
    temp_flhs=0;
    str_tp=0;
    db_temp=0;
    db1_temp=0;
    db2_temp=0;
    hg_temp=0;
    db_max=0;
    db2_max=0;
    check_fh_double_P=0;
    check_fh_triple_P=0;
    check_tr_triple_P=0;
    check_db_double_P=0;
    check_2db_double_P=0;

    check_fh_double_C1=0;
    check_fh_triple_C1=0;
    check_tr_triple_C1=0;
    check_db_double_C1=0;
    check_2db_double_C1=0;

    check_fh_double_C2=0;
    check_fh_triple_C2=0;
    check_tr_triple_C2=0;
    check_db_double_C2=0;
    check_2db_double_C2=0;

    check_fh_double_C3=0;
    check_fh_triple_C3=0;
    check_tr_triple_C3=0;
    check_db_double_C3=0;
    check_2db_double_C3=0;

    check_fh_double_C4=0;
    check_fh_triple_C4=0;
    check_tr_triple_C4=0;
    check_db_double_C4=0;
    check_2db_double_C4=0;

    check_fh_double_C5=0;
    check_fh_triple_C5=0;
    check_tr_triple_C5=0;
    check_db_double_C5=0;
    check_2db_double_C5=0;
}

//--------------CARDS--------------------
void CApp::check_card_win(int *check_flush_royalP,int *check_straight_flushP,int *check_kareP,int *check_tripleP,int *check_triple2P,int *check_doubleP,int *check_double2P,
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
    int *check_db_double_C5,int *check_2db_double_C5,int *win_cardC5)
{
    int check_rfl=1;
    int check_fl=1;
    int check_tr=1;
    int checl_db=1;
    int chek_hg=1;
    int check_str=1;
    int temp_flhs=0;
    int str_tp=0;
    int db_temp=0;
    int db1_temp=0;
    int db2_temp=0;
    int hg_temp=0;
    int tp_fl=0;
    int db_max=0;
    int db2_max=0;
    if(proverkaT==0)
    {
//--------------------FLUSH-ROYAL---------------------
    if(*check_flush_royalP==1||*check_flush_royalC1==1||*check_flush_royalC2==1||*check_flush_royalC3==1||*check_flush_royalC4==1||*check_flush_royalC5==1)
    {
        if(*check_flush_royalP>=*check_flush_royalC1&&*check_flush_royalP>=*check_flush_royalC2&&*check_flush_royalP>=*check_flush_royalC3&&*check_flush_royalP>=*check_flush_royalC4&&*check_flush_royalP>=*check_flush_royalC5)
        {
            if(*check_flush_royalC1==1)
            {
                check_rfl++;
                *win_cardC1=1;
            }
            if(*check_flush_royalC2==1)
            {
                check_rfl++;
                *win_cardC2=1;
            }
            if(*check_flush_royalC3==1)
            {
                check_rfl++;
                *win_cardC3=1;
            }
            if(*check_flush_royalC4==1)
            {
                check_rfl++;
                *win_cardC4=1;
            }
            if(*check_flush_royalC5==1)
            {
                check_rfl++;
                *win_cardC5=1;
            }
            temp_flhs=1;
            *win_cardP=1;
        }
        if(*check_flush_royalP<*check_flush_royalC1||*check_flush_royalP<*check_flush_royalC2||*check_flush_royalP<*check_flush_royalC3||*check_flush_royalP<*check_flush_royalC4||*check_flush_royalP<*check_flush_royalC5)
        {
            temp_flhs=1;
        }
    }
//--------------------STRAIGHT-FLUSH---------------------
else
{
    if(*check_straight_flushP>0||*check_straight_flushC1>0||*check_straight_flushC2>0||*check_straight_flushC3>0||*check_straight_flushC4>0||*check_straight_flushC5>0)
    {
        if(*check_straight_flushP>=*check_straight_flushC1&&*check_straight_flushP>=*check_straight_flushC2&&*check_straight_flushP>=*check_straight_flushC3&&*check_straight_flushP>=*check_straight_flushC4&&*check_straight_flushP>=*check_straight_flushC5)
        {
            if(*check_straight_flushP==*check_straight_flushC1&&*check_straight_flushP==*check_straight_flushC2&&*check_straight_flushP==*check_straight_flushC3&&*check_straight_flushP==*check_straight_flushC4&&*check_straight_flushP==*check_straight_flushC5)
            {
                temp_flhs=1;
                *win_cardP=1;
                *win_cardC1=1;
                *win_cardC2=1;
                *win_cardC3=1;
                *win_cardC4=1;
                *win_cardC5=1;
            }
            if(*check_straight_flushP>*check_straight_flushC1&&*check_straight_flushP>*check_straight_flushC2&&*check_straight_flushP>*check_straight_flushC3&&*check_straight_flushP>*check_straight_flushC4&&*check_straight_flushP>*check_straight_flushC5)
            {
                temp_flhs=1;
                *win_cardP=1;
            }
        }
        if(*check_straight_flushP<*check_straight_flushC1||*check_straight_flushP<*check_straight_flushC2||*check_straight_flushP<*check_straight_flushC3||*check_straight_flushP<*check_straight_flushC4||*check_straight_flushP<*check_straight_flushC5)
        {
            temp_flhs=1;
        }
    }
//--------------------KARE-----------------------------
else
{
    if(*check_kareP>=1||*check_kareC1>=1||*check_kareC2>=1||*check_kareC3>=1||*check_kareC4>=1||*check_kareC5>=1)
    {
        if(*check_kareP>=*check_kareC1&&*check_kareP>=*check_kareC2&&*check_kareP>=*check_kareC3&&*check_kareP>=*check_kareC4&&*check_kareP>=*check_kareC5)
        {
            if(*check_kareP==*check_kareC1&&*check_kareP==*check_kareC2&&*check_kareP==*check_kareC3&&*check_kareP==*check_kareC4&&*check_kareP==*check_kareC5)
            {
                if(*check_highP>*check_highC1&&*check_highP>*check_highC2&&*check_highP>*check_highC3&&*check_highP>*check_highC4&&*check_highP>*check_highC5)
                {
                    temp_flhs=1;
                }
                if(*check_highP==*check_highC1&&*check_highP==*check_highC2&&*check_highP==*check_highC3&&*check_highP==*check_highC4&&*check_highP==*check_highC5)
                {
                    temp_flhs=1;
                    *win_cardP=1;
                    *win_cardC1=1;
                    *win_cardC2=1;
                    *win_cardC3=1;
                    *win_cardC4=1;
                    *win_cardC5=1;
                }
                if(*check_highP<*check_highC1||*check_highP<*check_highC2||*check_highP<*check_highC3||*check_highP<*check_highC4||*check_highP<*check_highC5)
                {
                    temp_flhs=1;
                }
            }
            if(*check_kareP>*check_kareC1&&*check_kareP>*check_kareC2&&*check_kareP>*check_kareC3&&*check_kareP>*check_kareC4&&*check_kareP>*check_kareC5)
            {
                temp_flhs=1;
                temp_card=10;
                *win_cardP=1;
            }
        }
        if(*check_kareP<*check_kareC1||*check_kareP<*check_kareC2||*check_kareP<*check_kareC3||*check_kareP<*check_kareC4||*check_kareP<*check_kareC5)
        {
            temp_flhs=1;
        }
    }
//--------------------FULL-HOUSE----------------------
else
{
    if(*check_full_houseP>=1||*check_full_houseC1>=1||*check_full_houseC2>=1||*check_full_houseC3>=1||*check_full_houseC4>=1||*check_full_houseC5>=1)
    {
//------------------------PLAYER--------------------
                if(*check_tripleP>*check_triple2P)
                {
                    *check_fh_triple_P=*check_tripleP;
                }
                if(*check_triple2P>*check_tripleP)
                {
                    *check_fh_triple_P=*check_triple2P;
                }
                if(*check_doubleP==*check_fh_triple_P)
               {
                   if(*check_double2P>*check_double3P)
                {
                    *check_fh_double_P=*check_double2P;
                }
                    if(*check_double3P>*check_double2P)
                {
                    *check_fh_double_P=*check_double3P;
                }
               }
                if(*check_double2P==*check_fh_triple_P)
               {
                   if(*check_doubleP>*check_double3P)
                {
                    *check_fh_double_P=*check_doubleP;
                }
                    if(*check_double3P>*check_doubleP)
                {
                    *check_fh_double_P=*check_double3P;
                }
               }
                if(*check_double3P==*check_fh_triple_P)
               {
                   if(*check_doubleP>*check_double2P)
                {
                    *check_fh_double_P=*check_doubleP;
                }
                    if(*check_double2P>*check_doubleP)
                {
                    *check_fh_double_P=*check_double2P;
                }
               }
//------------------------COMPUTER1-----------------
                if(*check_tripleC1>*check_triple2C1)
                {
                    *check_fh_triple_C1=*check_tripleC1;
                }
                if(*check_triple2C1>*check_tripleC1)
                {
                    *check_fh_triple_C1=*check_triple2C1;
                }
                if(*check_doubleC1==*check_fh_triple_C1)
               {
                   if(*check_double2C1>*check_double3C1)
                {
                    *check_fh_double_C1=*check_double2C1;
                }
                    if(*check_double3C1>*check_double2C1)
                {
                    *check_fh_double_C1=*check_double3C1;
                }
               }
                if(*check_double2C1==*check_fh_triple_C1)
               {
                   if(*check_doubleC1>*check_double3C1)
                {
                    *check_fh_double_C1=*check_doubleC1;
                }
                    if(*check_double3C1>*check_doubleC1)
                {
                    *check_fh_double_C1=*check_double3C1;
                }
               }
                if(*check_double3C1==*check_fh_triple_C1)
               {
                   if(*check_doubleC1>*check_double2C1)
                {
                    *check_fh_double_C1=*check_doubleC1;
                }
                    if(*check_double2C1>*check_doubleC1)
                {
                    *check_fh_double_C1=*check_double2C1;
                }
               }
//------------------------COMPUTER2-----------------
                if(*check_tripleC2>*check_triple2C2)
                {
                    *check_fh_triple_C2=*check_tripleC2;
                }
                if(*check_triple2C2>*check_tripleC2)
                {
                    *check_fh_triple_C2=*check_triple2C2;
                }
                if(*check_doubleC2==*check_fh_triple_C2)
               {
                   if(*check_double2C2>*check_double3C2)
                {
                    *check_fh_double_C2=*check_double2C2;
                }
                    if(*check_double3C2>*check_double2C2)
                {
                    *check_fh_double_C2=*check_double3C2;
                }
               }
                if(*check_double2C2==*check_fh_triple_C2)
               {
                   if(*check_doubleC2>*check_double3C2)
                {
                    *check_fh_double_C2=*check_doubleC2;
                }
                    if(*check_double3C2>*check_doubleC2)
                {
                    *check_fh_double_C2=*check_double3C2;
                }
               }
                if(*check_double3C2==*check_fh_triple_C2)
               {
                   if(*check_doubleC2>*check_double2C2)
                {
                    *check_fh_double_C2=*check_doubleC2;
                }
                    if(*check_double2C2>*check_doubleC2)
                {
                    *check_fh_double_C2=*check_double2C2;
                }
               }
//------------------------COMPUTER3-----------------
                if(*check_tripleC3>*check_triple2C3)
                {
                    *check_fh_triple_C3=*check_tripleC3;
                }
                if(*check_triple2C3>*check_tripleC3)
                {
                    *check_fh_triple_C3=*check_triple2C3;
                }
                if(*check_doubleC3==*check_fh_triple_C3)
               {
                   if(*check_double2C3>*check_double3C3)
                {
                    *check_fh_double_C3=*check_double2C3;
                }
                    if(*check_double3C3>*check_double2C3)
                {
                    *check_fh_double_C3=*check_double3C3;
                }
               }
                if(*check_double2C3==*check_fh_triple_C3)
               {
                   if(*check_doubleC3>*check_double3C3)
                {
                    *check_fh_double_C3=*check_doubleC3;
                }
                    if(*check_double3C3>*check_doubleC3)
                {
                    *check_fh_double_C3=*check_double3C3;
                }
               }
                if(*check_double3C3==*check_fh_triple_C3)
               {
                   if(*check_doubleC3>*check_double2C3)
                {
                    *check_fh_double_C3=*check_doubleC3;
                }
                    if(*check_double2C3>*check_doubleC3)
                {
                    *check_fh_double_C3=*check_double2C3;
                }
               }
//------------------------COMPUTER4-----------------
                if(*check_tripleC4>*check_triple2C4)
                {
                    *check_fh_triple_C4=*check_tripleC4;
                }
                if(*check_triple2C4>*check_tripleC4)
                {
                    *check_fh_triple_C4=*check_triple2C4;
                }
                if(*check_doubleC4==*check_fh_triple_C4)
               {
                   if(*check_double2C4>*check_double3C4)
                {
                    *check_fh_double_C4=*check_double2C4;
                }
                    if(*check_double3C4>*check_double2C4)
                {
                    *check_fh_double_C4=*check_double3C4;
                }
               }
                if(*check_double2C4==*check_fh_triple_C4)
               {
                   if(*check_doubleC4>*check_double3C4)
                {
                    *check_fh_double_C4=*check_doubleC4;
                }
                    if(*check_double3C4>*check_doubleC4)
                {
                    *check_fh_double_C4=*check_double3C4;
                }
               }
                if(*check_double3C4==*check_fh_triple_C4)
               {
                   if(*check_doubleC4>*check_double2C4)
                {
                    *check_fh_double_C4=*check_doubleC4;
                }
                    if(*check_double2C4>*check_doubleC4)
                {
                    *check_fh_double_C4=*check_double2C4;
                }
               }
//------------------------COMPUTER5-----------------
                if(*check_tripleC5>*check_triple2C5)
                {
                    *check_fh_triple_C5=*check_tripleC5;
                }
                if(*check_triple2C5>*check_tripleC5)
                {
                    *check_fh_triple_C5=*check_triple2C5;
                }
                if(*check_doubleC5==*check_fh_triple_C5)
               {
                   if(*check_double2C5>*check_double3C5)
                {
                    *check_fh_double_C5=*check_double2C5;
                }
                    if(*check_double3C5>*check_double2C5)
                {
                    *check_fh_double_C5=*check_double3C5;
                }
               }
                if(*check_double2C5==*check_fh_triple_C5)
               {
                   if(*check_doubleC5>*check_double3C5)
                {
                    *check_fh_double_C5=*check_doubleC5;
                }
                    if(*check_double3C5>*check_doubleC5)
                {
                    *check_fh_double_C5=*check_double3C5;
                }
               }
                if(*check_double3C5==*check_fh_triple_C5)
               {
                   if(*check_doubleC5>*check_double2C5)
                {
                    *check_fh_double_C5=*check_doubleC5;
                }
                    if(*check_double2C5>*check_doubleC5)
                {
                    *check_fh_double_C5=*check_double2C5;
                }
               }
//-------------------------------------------------
        if(*check_full_houseP>=*check_full_houseC1&&*check_full_houseP>=*check_full_houseC2&&*check_full_houseP>=*check_full_houseC3&&*check_full_houseP>=*check_full_houseC4&&*check_full_houseP>=*check_full_houseC5)
        {
            if(*check_fh_triple_P>*check_fh_triple_C1&&*check_fh_triple_P>*check_fh_triple_C2&&*check_fh_triple_P>*check_fh_triple_C3&&*check_fh_triple_P>*check_fh_triple_C4&&*check_fh_triple_P>*check_fh_triple_C5)
            {
                temp_flhs=1;
                *win_cardP=1;
                tp_fl=1;
            }

                if(*check_fh_triple_P==*check_fh_triple_C1||*check_fh_triple_P==*check_fh_triple_C2||*check_fh_triple_P==*check_fh_triple_C3||*check_fh_triple_P||*check_fh_triple_C4||*check_fh_triple_P||*check_fh_triple_C5)
                {
                    if(*check_fh_double_P>=*check_fh_double_C1&&*check_fh_double_P>=*check_fh_double_C2&&*check_fh_double_P>=*check_fh_double_C3&&*check_fh_double_P>=*check_fh_double_C4&&*check_fh_double_P>=*check_fh_double_C5)
                    {
                    if(*check_fh_double_P>*check_fh_double_C1&&*check_fh_double_P>*check_fh_double_C2&&*check_fh_double_P>*check_fh_double_C3&&*check_fh_double_P>*check_fh_double_C4&&*check_fh_double_P>*check_fh_double_C5)
                    {
                        temp_flhs=1;
                        *win_cardP=1;
                        tp_fl=1;
                    }
                    if(*win_cardP==0)
                    {
                    if(*check_fh_double_P<*check_fh_double_C1||*check_fh_double_P<*check_fh_double_C2||*check_fh_double_P<*check_fh_double_C3||*check_fh_double_P<*check_fh_double_C4||*check_fh_double_P<*check_fh_double_C5)
                    {
                        temp_flhs=1;
                    }

                    if(*check_fh_double_P==*check_fh_double_C1&&*check_fh_triple_P==*check_fh_triple_C1)
                    {
                        *win_cardC1=1;
                    }
                    if(*check_fh_double_P==*check_fh_double_C2&&*check_fh_triple_P==*check_fh_triple_C2)
                    {
                        *win_cardC2=1;
                    }
                    if(*check_fh_double_P==*check_fh_double_C3&&*check_fh_triple_P==*check_fh_triple_C3)
                    {
                        *win_cardC3=1;
                    }
                    if(*check_fh_double_P==*check_fh_double_C4&&*check_fh_triple_P==*check_fh_triple_C4)
                    {
                        *win_cardC4=1;
                    }
                    if(*check_fh_double_P==*check_fh_double_C5&&*check_fh_triple_P==*check_fh_triple_C5)
                    {
                        *win_cardC5=1;
                    }
                        temp_flhs=1;
                        *win_cardP=1;
                        tp_fl=1;
                    }
                }
                if(*check_fh_triple_P<*check_fh_triple_C1||*check_fh_triple_P<*check_fh_triple_C2||*check_fh_triple_P<*check_fh_triple_C3||*check_fh_triple_P<*check_fh_triple_C4||*check_fh_triple_P<*check_fh_triple_C5)
                {
                    temp_flhs=1;
                }
            }
            if(*check_full_houseP>*check_full_houseC1&&*check_full_houseP>*check_full_houseC2&&*check_full_houseP>*check_full_houseC3&&*check_full_houseP>*check_full_houseC4&&*check_full_houseP>*check_full_houseC5)
            {
                temp_flhs=1;
                *win_cardP=1;
                tp_fl=1;
            }
            if(*check_full_houseP<*check_full_houseC1||*check_full_houseP<*check_full_houseC2||*check_full_houseP<*check_full_houseC3||*check_full_houseP<*check_full_houseC4||*check_full_houseP<*check_full_houseC5)
            {
                temp_flhs=1;
            }
        }
        if(*check_full_houseP<*check_full_houseC1||*check_full_houseP<*check_full_houseC2||*check_full_houseP<*check_full_houseC3||*check_full_houseP<*check_full_houseC4||*check_full_houseP<*check_full_houseC5)
        {
            temp_flhs=1;
        }
    }
//--------------------FLUSH-------------------------
else
{
    if(*check_flushP>=1||*check_flushC1>=1||*check_flushC2>=1||*check_flushC3>=1||*check_flushC4>=1||*check_flushC5>=1)
    {
        if(*check_flushP>=*check_flushC1&&*check_flushP>=*check_flushC2&&*check_flushP>=*check_flushC3&&*check_flushP>=*check_flushC4&&*check_flushP>=*check_flushC5)
        {
            if(*check_flushC1==1)
            {
                check_fl++;
                *win_cardC1=1;
            }
            if(*check_flushC2==1)
            {
                check_fl++;
                *win_cardC2=1;
            }
            if(*check_flushC3==1)
            {
                check_fl++;
                *win_cardC3=1;
            }
            if(*check_flushC4==1)
            {
                check_fl++;
                *win_cardC4=1;
            }
            if(*check_flushC5==1)
            {
                check_fl++;
                *win_cardC5=1;
            }
            temp_flhs=1;
            *win_cardP=1;
        }
        if(*check_flushP<*check_flushC1||*check_flushP<*check_flushC2||*check_flushP<*check_flushC3||*check_flushP<*check_flushC4||*check_flushP<*check_flushC5)
        {
            temp_flhs=1;
        }
    }
//--------------------STRAIGHT-----------------------
else
{
    if(*check_straighP>=1||*check_straighC1>=1||*check_straighC2>=1||*check_straighC3>=1||*check_straighC4>=1||*check_straighC5>=1)
    {
        if(*check_straighP>=*check_straighC1&&*check_straighP>=*check_straighC2&&*check_straighP>=*check_straighC3&&*check_straighP>=*check_straighC4&&*check_straighP>=*check_straighC5)
        {
            if(*check_straighP==*check_straighC1||*check_straighP==*check_straighC2||*check_straighP==*check_straighC3||*check_straighP==*check_straighC4||*check_straighP||*check_straighC5)
            {
                if(*check_straighP==*check_straighC1)
                   {
                       check_str++;
                       *win_cardC1=1;
                   }
                if(*check_straighP==*check_straighC2)
                   {
                       check_str++;
                       *win_cardC2=1;
                   }
                if(*check_straighP==*check_straighC3)
                   {
                       check_str++;
                       *win_cardC3=1;
                   }
                if(*check_straighP==*check_straighC4)
                   {
                       check_str++;
                       *win_cardC4=1;
                   }
                if(*check_straighP==*check_straighC5)
                   {
                       check_str++;
                       *win_cardC5=1;
                   }
                temp_flhs=1;
                str_tp=1;
                *win_cardP=1;
            }
            if(str_tp==0)
            {
            if(*check_straighP>*check_straighC1&&*check_straighP>*check_straighC2&&*check_straighP>*check_straighC3&&*check_straighP>*check_straighC4&&*check_straighP>*check_straighC5)
            {
                temp_flhs=1;
                *win_cardP=1;
            }
            }
        }
        if(*check_straighP<*check_straighC1||*check_straighP<*check_straighC2||*check_straighP<*check_straighC3||*check_straighP<*check_straighC4||*check_straighP<*check_straighC5)
        {
            temp_flhs=1;
        }
    }
//--------------------TRIPLE-----------------------
else
{
    if(*check_tripleP>0||*check_tripleC1>0||*check_tripleC2>0||*check_tripleC3>0||*check_tripleC4>0||*check_tripleC5>0)
    {
    if(temp_flhs==0)
    {
//-------------------PLAYER------------------------
        if(*check_tripleP>*check_triple2P)
        {
            *check_tr_triple_P=*check_tripleP;
        }
        if(*check_triple2P>*check_tripleP)
        {
            *check_tr_triple_P=*check_triple2P;
        }
//-------------------COMPUTER1---------------------
        if(*check_tripleC1>*check_triple2C1)
        {
            *check_tr_triple_C1=*check_tripleC1;
        }
        if(*check_triple2C1>*check_tripleC1)
        {
            *check_tr_triple_C1=*check_triple2C1;
        }
//-------------------COMPUTER2---------------------
        if(*check_tripleC2>*check_triple2C2)
        {
            *check_tr_triple_C2=*check_tripleC2;
        }
        if(*check_triple2C2>*check_tripleC2)
        {
            *check_tr_triple_C2=*check_triple2C2;
        }
//-------------------COMPUTER3---------------------
        if(*check_tripleC3>*check_triple2C3)
        {
            *check_tr_triple_C3=*check_tripleC3;
        }
        if(*check_triple2C3>*check_tripleC3)
        {
            *check_tr_triple_C3=*check_triple2C3;
        }
//-------------------COMPUTER4---------------------
        if(*check_tripleC4>*check_triple2C4)
        {
            *check_tr_triple_C4=*check_tripleC4;
        }
        if(*check_triple2C4>*check_tripleC4)
        {
            *check_tr_triple_C4=*check_triple2C4;
        }
//-------------------COMPUTER5---------------------
        if(*check_tripleC5>*check_triple2C5)
        {
            *check_tr_triple_C5=*check_tripleC5;
        }
        if(*check_triple2C5>*check_tripleC5)
        {
            *check_tr_triple_C5=*check_triple2C5;
        }
//-------------------------------------------------
        if(*check_tr_triple_P>=*check_tr_triple_C1&&*check_tr_triple_P>=*check_tr_triple_C2&&*check_tr_triple_P>=*check_tr_triple_C3&&*check_tr_triple_P>=*check_tr_triple_C4&&*check_tr_triple_P>=*check_tr_triple_C5)
        {
            if(*check_tr_triple_P>*check_tr_triple_C1&&*check_tr_triple_P>*check_tr_triple_C2&&*check_tr_triple_P>*check_tr_triple_C3&&*check_tr_triple_P>*check_tr_triple_C4&&*check_tr_triple_P>*check_tr_triple_C5)
            {
                temp_flhs=1;
                *win_cardP=1;
            }
            if(*check_tr_triple_P==*check_tr_triple_C1||*check_tr_triple_P==*check_tr_triple_C2||*check_tr_triple_P==*check_tr_triple_C3||*check_tr_triple_P==*check_tr_triple_C4||*check_tr_triple_P==*check_tr_triple_C5)
            {
                if((*check_highP>=*check_highC1&&*check_tr_triple_P==*check_tr_triple_C1)||(*check_highP>=*check_highC2&&*check_tr_triple_P==*check_tr_triple_C2)||(*check_highP>=*check_highC3&&*check_tr_triple_P==*check_tr_triple_C3)||(*check_highP>=*check_highC4&&*check_tr_triple_P==*check_tr_triple_C4)||(*check_highP>=*check_highC5&&*check_tr_triple_P==*check_tr_triple_C5))
                    {
                    if((*check_highP>*check_highC1&&*check_tr_triple_P==*check_tr_triple_C1)&&(*check_highP>*check_highC2&&*check_tr_triple_P==*check_tr_triple_C2)&&(*check_highP>*check_highC3&&*check_tr_triple_P==*check_tr_triple_C3)&&(*check_highP>*check_highC4&&*check_tr_triple_P==*check_tr_triple_C4)&&(*check_highP>*check_highC5&&*check_tr_triple_P==*check_tr_triple_C5))
                    {
                        temp_flhs=1;
                        *win_cardP=1;
                    }
                    if(*check_highP==*check_highC1&&*check_tr_triple_P==*check_tr_triple_C1)
                    {
                        check_tr++;
                        *win_cardC1=1;
                    }
                    if(*check_highP==*check_highC2&&*check_tr_triple_P==*check_tr_triple_C2)
                    {
                        check_tr++;
                        *win_cardC2=1;
                    }
                    if(*check_highP==*check_highC3&&*check_tr_triple_P==*check_tr_triple_C3)
                    {
                        check_tr++;
                        *win_cardC3=1;
                    }
                    if(*check_highP==*check_highC4&&*check_tr_triple_P==*check_tr_triple_C4)
                    {
                        check_tr++;
                        *win_cardC4=1;
                    }
                    if(*check_highP==*check_highC5&&*check_tr_triple_P==*check_tr_triple_C5)
                    {
                        check_tr++;
                        *win_cardC5=1;
                    }
                    temp_flhs=1;
                    *win_cardP=1;
                }
            }
        }
        if(*check_tr_triple_P<*check_tr_triple_C1||*check_tr_triple_P<*check_tr_triple_C2||*check_tr_triple_P<*check_tr_triple_C3||*check_tr_triple_P<*check_tr_triple_C4||*check_tr_triple_P<*check_tr_triple_C5)
        {
            temp_flhs=1;
        }
    }
    }
//--------------------DOUBLE-----------------------
else
{
    if(*check_doubleP>0||*check_doubleC1>0||*check_doubleC2>0||*check_doubleC3>0||*check_doubleC4>0||*check_doubleC5>0)
    {
    if(tp_fl==0)
    {
    if(temp_flhs==0)
    {
//-------------------PLAYER------------------------
        if(*check_doubleP>*check_double2P&&*check_doubleP>*check_double3P)
        {
            *check_db_double_P=*check_doubleP;
            if(*check_double2P>*check_double3P)
            {
                *check_2db_double_P=*check_double2P;
            }
            if(*check_double3P>*check_double2P)
            {
                *check_2db_double_P=*check_double3P;
            }
        }
        if(*check_double2P>*check_doubleP&&*check_double2P>*check_double3P)
        {
            *check_db_double_P=*check_double2P;
            if(*check_doubleP>*check_double3P)
            {
                *check_2db_double_P=*check_doubleP;
            }
            if(*check_double3P>*check_doubleP)
            {
                *check_2db_double_P=*check_double3P;
            }
        }
        if(*check_double3P>*check_doubleP&&*check_double3P>*check_double2P)
        {
            *check_db_double_P=*check_double3P;
            if(*check_doubleP>*check_double2P)
            {
                *check_2db_double_P=*check_doubleP;
            }
            if(*check_double2P>*check_doubleP)
            {
                *check_2db_double_P=*check_double2P;
            }
        }
//-------------------COMPUTER1---------------------

        if(*check_doubleC1>*check_double2C1&&*check_doubleC1>*check_double3C1)
        {
            *check_db_double_C1=*check_doubleC1;
            if(*check_double2C1>*check_double3C1)
            {
                *check_2db_double_C1=*check_double2C1;
            }
            if(*check_double3C1>*check_double2C1)
            {
                *check_2db_double_C1=*check_double3C1;
            }
        }
        if(*check_double2C1>*check_doubleC1&&*check_double2C1>*check_double3C1)
        {
            *check_db_double_C1=*check_double2C1;
            if(*check_doubleC1>*check_double3C1)
            {
                *check_2db_double_C1=*check_doubleC1;
            }
            if(*check_double3C1>*check_doubleC1)
            {
                *check_2db_double_C1=*check_double3C1;
            }
        }
        if(*check_double3C1>*check_doubleC1&&*check_double3C1>*check_double2C1)
        {
            *check_db_double_C1=*check_double3C1;
            if(*check_doubleC1>*check_double2C1)
            {
                *check_2db_double_C1=*check_doubleC1;
            }
            if(*check_double2C1>*check_doubleC1)
            {
                *check_2db_double_C1=*check_double2C1;
            }
        }
//-------------------COMPUTER2---------------------

        if(*check_doubleC2>*check_double2C2&&*check_doubleC2>*check_double3C2)
        {
            *check_db_double_C2=*check_doubleC2;
            if(*check_double2C2>*check_double3C2)
            {
                *check_2db_double_C2=*check_double2C2;
            }
            if(*check_double3C2>*check_double2C2)
            {
                *check_2db_double_C2=*check_double3C2;
            }
        }
        if(*check_double2C2>*check_doubleC2&&*check_double2C2>*check_double3C2)
        {
            *check_db_double_C2=*check_double2C2;
            if(*check_doubleC2>*check_double3C2)
            {
                *check_2db_double_C2=*check_doubleC2;
            }
            if(*check_double3C2>*check_doubleC2)
            {
                *check_2db_double_C2=*check_double3C2;
            }
        }
        if(*check_double3C2>*check_doubleC2&&*check_double3C2>*check_double2C2)
        {
            *check_db_double_C2=*check_double3C2;
            if(*check_doubleC2>*check_double2C2)
            {
                *check_2db_double_C2=*check_doubleC2;
            }
            if(*check_double2C2>*check_doubleC2)
            {
                *check_2db_double_C2=*check_double2C2;
            }
        }
//-------------------COMPUTER3---------------------

        if(*check_doubleC3>*check_double2C3&&*check_doubleC3>*check_double3C3)
        {
            *check_db_double_C3=*check_doubleC3;
            if(*check_double2C3>*check_double3C3)
            {
                *check_2db_double_C3=*check_double2C3;
            }
            if(*check_double3C3>*check_double2C3)
            {
                *check_2db_double_C3=*check_double3C3;
            }
        }
        if(*check_double2C3>*check_doubleC3&&*check_double2C3>*check_double3C3)
        {
            *check_db_double_C3=*check_double2C3;
            if(*check_doubleC3>*check_double3C3)
            {
                *check_2db_double_C3=*check_doubleC3;
            }
            if(*check_double3C3>*check_doubleC3)
            {
                *check_2db_double_C3=*check_double3C3;
            }
        }
        if(*check_double3C3>*check_doubleC3&&*check_double3C3>*check_double2C3)
        {
            *check_db_double_C3=*check_double3C3;
            if(*check_doubleC3>*check_double2C3)
            {
                *check_2db_double_C3=*check_doubleC3;
            }
            if(*check_double2C3>*check_doubleC3)
            {
                *check_2db_double_C3=*check_double2C3;
            }
        }
//-------------------COMPUTER4---------------------

        if(*check_doubleC4>*check_double2C4&&*check_doubleC4>*check_double3C4)
        {
            *check_db_double_C4=*check_doubleC4;
            if(*check_double2C4>*check_double3C4)
            {
                *check_2db_double_C4=*check_double2C4;
            }
            if(*check_double3C4>*check_double2C4)
            {
                *check_2db_double_C4=*check_double3C4;
            }
        }
        if(*check_double2C4>*check_doubleC4&&*check_double2C4>*check_double3C4)
        {
            *check_db_double_C4=*check_double2C4;
            if(*check_doubleC4>*check_double3C4)
            {
                *check_2db_double_C4=*check_doubleC4;
            }
            if(*check_double3C4>*check_doubleC4)
            {
                *check_2db_double_C4=*check_double3C4;
            }
        }
        if(*check_double3C4>*check_doubleC4&&*check_double3C4>*check_double2C4)
        {
            *check_db_double_C4=*check_double3C4;
            if(*check_doubleC4>*check_double2C4)
            {
                *check_2db_double_C4=*check_doubleC4;
            }
            if(*check_double2C4>*check_doubleC4)
            {
                *check_2db_double_C4=*check_double2C4;
            }
        }
//-------------------COMPUTER5---------------------

        if(*check_doubleC5>*check_double2C5&&*check_doubleC5>*check_double3C5)
        {
            *check_db_double_C5=*check_doubleC5;
            if(*check_double2C5>*check_double3C5)
            {
                *check_2db_double_C5=*check_double2C5;
            }
            if(*check_double3C5>*check_double2C5)
            {
                *check_2db_double_C5=*check_double3C5;
            }
        }
        if(*check_double2C5>*check_doubleC5&&*check_double2C5>*check_double3C5)
        {
            *check_db_double_C5=*check_double2C5;
            if(*check_doubleC5>*check_double3C5)
            {
                *check_2db_double_C5=*check_doubleC5;
            }
            if(*check_double3C5>*check_doubleC5)
            {
                *check_2db_double_C5=*check_double3C5;
            }
        }
        if(*check_double3C5>*check_doubleC5&&*check_double3C5>*check_double2C5)
        {
            *check_db_double_C5=*check_double3C5;
            if(*check_doubleC5>*check_double2C5)
            {
                *check_2db_double_C5=*check_doubleC5;
            }
            if(*check_double2C5>*check_doubleC5)
            {
                *check_2db_double_C5=*check_double2C5;
            }
        }
//-------------------------------------------------
if(*check_db_double_P>*check_db_double_C1)
{
    if(db_max<*check_db_double_P)db_max=*check_db_double_P;
}
else if(db_max<*check_db_double_C1)db_max=*check_db_double_C1;
if(*check_db_double_P>*check_db_double_C2)
{
    if(db_max<*check_db_double_P)db_max=*check_db_double_P;
}
else if(db_max<*check_db_double_C2)db_max=*check_db_double_C2;
if(*check_db_double_P>*check_db_double_C3)
{
    if(db_max<*check_db_double_P)db_max=*check_db_double_P;
}
else if(db_max<*check_db_double_C3)db_max=*check_db_double_C3;
if(*check_db_double_P>*check_db_double_C4)
{
    if(db_max<*check_db_double_P)db_max=*check_db_double_P;
}
else if(db_max<*check_db_double_C4)db_max=*check_db_double_C4;
if(*check_db_double_P>*check_db_double_C5)
{
    if(db_max<*check_db_double_P)db_max=*check_db_double_P;
}
else if(db_max<*check_db_double_C5)db_max=*check_db_double_C5;
//-------------------------------------------------
if(*check_2db_double_P>*check_2db_double_C1)
{
    if(db2_max<*check_2db_double_P)db2_max=*check_2db_double_P;
}
else if(db2_max<*check_2db_double_C1)db2_max=*check_2db_double_C1;
if(*check_2db_double_P>*check_2db_double_C2)
{
    if(db2_max<*check_2db_double_P)db2_max=*check_2db_double_P;
}
else if(db2_max<*check_2db_double_C2)db2_max=*check_2db_double_C2;
if(*check_2db_double_P>*check_2db_double_C3)
{
    if(db2_max<*check_2db_double_P)db2_max=*check_2db_double_P;
}
else if(db2_max<*check_2db_double_C3)db2_max=*check_2db_double_C3;
if(*check_2db_double_P>*check_2db_double_C4)
{
    if(db2_max<*check_2db_double_P)db2_max=*check_2db_double_P;
}
else if(db2_max<*check_2db_double_C4)db2_max=*check_2db_double_C4;
if(*check_2db_double_P>*check_2db_double_C5)
{
    if(db2_max<*check_2db_double_P)db2_max=*check_2db_double_P;
}
else if(db2_max<*check_2db_double_C5)db2_max=*check_2db_double_C5;
//-------------------------------------------------
        if((*check_db_double_P>=*check_db_double_C1&&*check_db_double_P>=*check_db_double_C2&&*check_db_double_P>=*check_db_double_C3&&*check_db_double_P>=*check_db_double_C4&&*check_db_double_P>=*check_db_double_C5)||(*check_2db_double_P>=*check_2db_double_C1&&*check_2db_double_P>=*check_2db_double_C2&&*check_2db_double_P>=*check_2db_double_C3&&*check_2db_double_P>=*check_2db_double_C4&&*check_2db_double_P>=*check_2db_double_C5))
        {
            if(*check_2db_double_P>0&&*check_2db_double_C1==0&&*check_2db_double_C2==0&&*check_2db_double_C3==0&&*check_2db_double_C4==0&&*check_2db_double_C5==0)
            {
                temp_flhs=1;
                *win_cardP=1;
            }
            if(*check_db_double_P>*check_db_double_C1&&*check_2db_double_P>0&&*check_db_double_P>*check_db_double_C2&&*check_2db_double_P>0&&*check_db_double_P>*check_db_double_C3&&*check_2db_double_P>0&&*check_db_double_P>*check_db_double_C4&&*check_2db_double_P>0&&*check_db_double_P>*check_db_double_C5&&*check_2db_double_P>0)
            {
                temp_flhs=1;
                *win_cardP=1;
            }
            if(*check_2db_double_P==0&&*check_2db_double_C1==0&&*check_2db_double_C2==0&&*check_2db_double_C3==0&&*check_2db_double_C4==0&&*check_2db_double_C5==0)
            {
                if(*check_db_double_P>*check_db_double_C1&&*check_db_double_P>*check_db_double_C2&&*check_db_double_P>*check_db_double_C3&&*check_db_double_P>*check_db_double_C4&&*check_db_double_P>*check_db_double_C5)
                {
                    temp_flhs=1;
                    *win_cardP=1;
                }
                if(*check_highP>=*check_highC1||*check_highP>=*check_highC2||*check_highP>=*check_highC3||*check_highP>=*check_highC4||*check_highP>=*check_highC5)
                {
                if(*check_db_double_P==0&&*check_2db_double_P==0)
                {
                    db_temp=1;
                }
                if((*check_highP<*check_highC1&&((*check_db_double_C1>=db2_max&&*check_2db_double_C1>=db_max)||(*check_2db_double_C1>=db2_max&&*check_db_double_C1>=db_max)))||(*check_highP<*check_highC2&&((*check_db_double_C2>=db2_max&&*check_2db_double_C2>=db_max)||(*check_2db_double_C2>=db2_max&&*check_db_double_C2>=db_max)))||(*check_highP<*check_highC3&&((*check_db_double_C3>=db2_max&&*check_2db_double_C3>=db_max)||(*check_2db_double_C3>=db2_max&&*check_db_double_C3>=db_max)))||(*check_highP<*check_highC4&&((*check_db_double_C4>=db2_max&&*check_2db_double_C4>=db_max)||(*check_2db_double_C4>=db2_max&&*check_db_double_C4>=db_max)))||(*check_highP<*check_highC5&&((*check_db_double_C5>=db2_max&&*check_2db_double_C5>=db_max)||(*check_2db_double_C5>=db2_max&&*check_db_double_C5>=db_max))))
                    {
                        db_temp=1;
                        temp_flhs=1;
                    }
                if((*check_db_double_P>=db2_max&&*check_2db_double_P>=db_max)||(*check_2db_double_P>=db2_max&&*check_db_double_P>=db_max))
                {
                    if(db_temp==0)
                    {
                    if(*check_highP>*check_highC1&&*check_highP>*check_highC2&&*check_highP>*check_highC3&&*check_highP>*check_highC4&&*check_highP>*check_highC5)
                    {
                        temp_flhs=1;
                    }
                    if(*check_highP==*check_highC1&&*check_db_double_P==*check_db_double_C1)
                    {
                        checl_db++;
                        *win_cardC1=1;
                    }
                    if(*check_highP==*check_highC2&&*check_db_double_P==*check_db_double_C2)
                    {
                        checl_db++;
                        *win_cardC2=1;
                    }
                    if(*check_highP==*check_highC3&&*check_db_double_P==*check_db_double_C3)
                    {
                        checl_db++;
                        *win_cardC3=1;
                    }
                    if(*check_highP==*check_highC4&&*check_db_double_P==*check_db_double_C4)
                    {
                        checl_db++;
                        *win_cardC4=1;
                    }
                    if(*check_highP==*check_highC5&&*check_db_double_P==*check_db_double_C5)
                    {
                        checl_db++;
                        *win_cardC5=1;
                    }
                        temp_flhs=1;
                        *win_cardP=1;
                    }
                }
                }
            }
                if(*check_db_double_P>0&&*check_2db_double_P>=*check_2db_double_C1&&*check_2db_double_P>=*check_2db_double_C2&&*check_2db_double_P>=*check_2db_double_C3&&*check_2db_double_P>=*check_2db_double_C4&&*check_2db_double_P>=*check_2db_double_C5)
                {
                if(*check_2db_double_P>0)
                {
                if((*check_db_double_P>=db2_max&&*check_2db_double_P>=db_max)||(*check_2db_double_P>=db2_max&&*check_db_double_P>=db_max))
                {
                    if((*check_highP<*check_highC1&&((*check_db_double_C1>=db2_max&&*check_2db_double_C1>=db_max)||(*check_2db_double_C1>=db2_max&&*check_db_double_C1>=db_max)))||(*check_highP<*check_highC2&&((*check_db_double_C2>=db2_max&&*check_2db_double_C2>=db_max)||(*check_2db_double_C2>=db2_max&&*check_db_double_C2>=db_max)))||(*check_highP<*check_highC3&&((*check_db_double_C3>=db2_max&&*check_2db_double_C3>=db_max)||(*check_2db_double_C3>=db2_max&&*check_db_double_C3>=db_max)))||(*check_highP<*check_highC4&&((*check_db_double_C4>=db2_max&&*check_2db_double_C4>=db_max)||(*check_2db_double_C4>=db2_max&&*check_db_double_C4>=db_max)))||(*check_highP<*check_highC5&&((*check_db_double_C5>=db2_max&&*check_2db_double_C5>=db_max)||(*check_2db_double_C5>=db2_max&&*check_db_double_C5>=db_max))))
                    {
                        db2_temp=1;
                        temp_flhs=1;
                    }
                    if(*check_2db_double_P>*check_2db_double_C1&&*check_2db_double_P>*check_2db_double_C2&&*check_2db_double_P>*check_2db_double_C3&&*check_2db_double_P>*check_2db_double_C4&&*check_2db_double_P>*check_2db_double_C5)
                    {
                        temp_flhs=1;
                        db1_temp=1;
                        *win_cardP=1;
                    }
                    if(db2_temp==0)
                    {
                    if(*check_2db_double_P==*check_2db_double_C1||*check_2db_double_P==*check_2db_double_C2||*check_2db_double_P==*check_2db_double_C3||*check_2db_double_P==*check_2db_double_C4||*check_2db_double_P==*check_2db_double_C5)
                    {
                        if(*check_highP>=*check_highC1||*check_highP>=*check_highC2||*check_highP>=*check_highC3||*check_highP>=*check_highC4||*check_highP>=*check_highC5)
                        {
                            if(db2_temp==0)
                            {
                            if(*check_highP>*check_highC1&&*check_highP>*check_highC2&&*check_highP>*check_highC3&&*check_highP>*check_highC4&&*check_highP>*check_highC5)
                            {
                                temp_flhs=1;
                                *win_cardP=1;
                            }
                            if(db2_temp==0)
                            {
                            if(*check_highP==*check_highC1&&*check_2db_double_P==*check_2db_double_C1&&*check_db_double_P==*check_db_double_C1)
                            {
                                checl_db++;
                                *win_cardC1=1;
                            }
                            if(*check_highP==*check_highC2&&*check_2db_double_P==*check_2db_double_C2&&*check_db_double_P==*check_db_double_C1)
                            {
                                checl_db++;
                                *win_cardC2=1;
                            }
                            if(*check_highP==*check_highC3&&*check_2db_double_P==*check_2db_double_C3&&*check_db_double_P==*check_db_double_C1)
                            {
                                checl_db++;
                                *win_cardC3=1;
                            }
                            if(*check_highP==*check_highC4&&*check_2db_double_P==*check_2db_double_C4&&*check_db_double_P==*check_db_double_C1)
                            {
                                checl_db++;
                                *win_cardC4=1;
                            }
                            if(*check_highP==*check_highC5&&*check_2db_double_P==*check_2db_double_C5&&*check_db_double_P==*check_db_double_C1)
                            {
                                checl_db++;
                                *win_cardC5=1;
                            }
                                temp_flhs=1;
                                *win_cardP=1;
                            }
                            }
                        }
                    }
                    }
                }
                }
                }
                if(*check_2db_double_P<*check_2db_double_C1||*check_2db_double_P<*check_2db_double_C2||*check_2db_double_P<*check_2db_double_C3||*check_2db_double_P<*check_2db_double_C4||*check_2db_double_P<*check_2db_double_C5)
                {
                    temp_flhs=1;
                }
            if(*check_db_double_P<*check_db_double_C1||*check_db_double_P<*check_db_double_C2||*check_db_double_P<*check_db_double_C3||*check_db_double_P<*check_db_double_C4||*check_db_double_P<*check_db_double_C5)
            {
                temp_flhs=1;
            }
        }
        if(*check_db_double_P<*check_db_double_C1||*check_db_double_P<*check_db_double_C2||*check_db_double_P<*check_db_double_C3||*check_db_double_P<*check_db_double_C4||*check_db_double_P<*check_db_double_C5)
        {
            temp_flhs=1;
        }
    }
    }
    }
//-------------------HIGH-CARD---------------------
else
{
    if(*check_db_double_P==0&&*check_db_double_C1==0&&*check_db_double_C2==0&&*check_db_double_C3==0&&*check_db_double_C4==0&&*check_db_double_C5==0&&*check_2db_double_P==0&&*check_2db_double_C1==0&&*check_2db_double_C2==0&&*check_2db_double_C3==0&&*check_2db_double_C4==0&&*check_2db_double_C5==0&&*check_tr_triple_P==0&&*check_tr_triple_C1==0&&*check_tr_triple_C2==0&&*check_tr_triple_C3==0&&*check_tr_triple_C4==0&&*check_tr_triple_C5==0&&*check_straighP==0&&*check_straighC1==0&&*check_straighC2==0&&*check_straighC3==0&&*check_straighC4==0&&*check_straighC5==0&&*check_flushP==0&&*check_flushC1==0&&*check_flushC2==0&&*check_flushC3==0&&*check_flushC4==0&&*check_flushC5==0&&*check_straight_flushP==0&&*check_straight_flushC1==0&&*check_straight_flushC2==0&&*check_straight_flushC3==0&&*check_straight_flushC4==0&&*check_straight_flushC5==0&&*check_flush_royalP==0&&*check_flush_royalC1==0&&*check_flush_royalC2==0&&*check_flush_royalC3==0&&*check_flush_royalC4==0&&*check_flush_royalC5==0)
    {
    if(*check_highP<*check_highC1||*check_highP<*check_highC2||*check_highP<*check_highC3||*check_highP<*check_highC4||*check_highP<*check_highC5)
    {
        temp_flhs=1;
        hg_temp=1;
    }
    if(*check_highP>=*check_highC1&&*check_highP>=*check_highC2&&*check_highP>=*check_highC3&&*check_highP>=*check_highC4&&*check_highP>=*check_highC5)
    {
        if(hg_temp==0)
        {
        if(*check_highP>*check_highC1&&*check_highP>*check_highC2&&*check_highP>*check_highC3&&*check_highP>*check_highC4&&*check_highP>*check_highC5)
        {
            temp_flhs=1;
            *win_cardP=1;
        }
        if(*check_highP==*check_highC1)
        {
            chek_hg++;
            *win_cardC1=1;
        }
        if(*check_highP==*check_highC2)
        {
            chek_hg++;
            *win_cardC2=1;
        }
        if(*check_highP==*check_highC3)
        {
            chek_hg++;
            *win_cardC3=1;
        }
        if(*check_highP==*check_highC4)
        {
            chek_hg++;
            *win_cardC4=1;
        }
        if(*check_highP==*check_highC5)
        {
            chek_hg++;
            *win_cardC5=1;
        }
        temp_flhs=1;
        *win_cardP=1;
        }
    }
    }
}
}
}
}
}
}
}
}
//-------------------------------------------------
    check_rfl=1;
    check_fl=1;
    check_tr=1;
    checl_db=1;
    chek_hg=1;
    check_str=1;
    temp_flhs=0;
    str_tp=0;
    db_temp=0;
    db1_temp=0;
    db2_temp=0;
    hg_temp=0;
    db_max=0;
    db2_max=0;
    *check_fh_double_P=0;
    *check_fh_triple_P=0;
    *check_tr_triple_P=0;
    *check_db_double_P=0;
    *check_2db_double_P=0;

    *check_fh_double_C1=0;
    *check_fh_triple_C1=0;
    *check_tr_triple_C1=0;
    *check_db_double_C1=0;
    *check_2db_double_C1=0;

    *check_fh_double_C2=0;
    *check_fh_triple_C2=0;
    *check_tr_triple_C2=0;
    *check_db_double_C2=0;
    *check_2db_double_C2=0;

    *check_fh_double_C3=0;
    *check_fh_triple_C3=0;
    *check_tr_triple_C3=0;
    *check_db_double_C3=0;
    *check_2db_double_C3=0;

    *check_fh_double_C4=0;
    *check_fh_triple_C4=0;
    *check_tr_triple_C4=0;
    *check_db_double_C4=0;
    *check_2db_double_C4=0;

    *check_fh_double_C5=0;
    *check_fh_triple_C5=0;
    *check_tr_triple_C5=0;
    *check_db_double_C5=0;
    *check_2db_double_C5=0;
}
}
//--------------CARDS--------------------

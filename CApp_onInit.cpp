#include "CApp.h"

bool CApp::onInit()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        return false;
    }
    //----------------------------------
    window = SDL_CreateWindow(WINDOW_CAPTION, 450, 200, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if(window == NULL)
    {
        return false;
    }
    //----------------------------------
    screen = SDL_GetWindowSurface(window);
    if(screen == NULL)
        return false;
    //----------------------------------
    SDL_SetSurfaceRLE(screen,1);
    //----------------------------------
    background = CSurface::loadSursface("Backgrounds/Background.bmp",screen);

//--------------CARDS--------------------
    queue_cards[0] = cart_2_spades = CSurface::loadSursface("Cards/2Spades.bmp",screen);
    queue_cards[1] = cart_2_clubs = CSurface::loadSursface("Cards/2Clubs.bmp",screen);
    queue_cards[2] = cart_2_hearts = CSurface::loadSursface("Cards/2Hearts.bmp",screen);
    queue_cards[3] = cart_2_diamonds = CSurface::loadSursface("Cards/2Diamonds.bmp",screen);

    queue_cards[4] = cart_3_spades = CSurface::loadSursface("Cards/3Spades.bmp",screen);
    queue_cards[5] = cart_3_clubs = CSurface::loadSursface("Cards/3Clubs.bmp",screen);
    queue_cards[6] = cart_3_hearts = CSurface::loadSursface("Cards/3Hearts.bmp",screen);
    queue_cards[7] = cart_3_diamonds = CSurface::loadSursface("Cards/3Diamonds.bmp",screen);

    queue_cards[8] = cart_4_spades = CSurface::loadSursface("Cards/4Spades.bmp",screen);
    queue_cards[9] = cart_4_clubs = CSurface::loadSursface("Cards/4Clubs.bmp",screen);
    queue_cards[10] = cart_4_hearts = CSurface::loadSursface("Cards/4Hearts.bmp",screen);
    queue_cards[11] = cart_4_diamonds = CSurface::loadSursface("Cards/4Diamonds.bmp",screen);

    queue_cards[12] = cart_5_spades = CSurface::loadSursface("Cards/5Spades.bmp",screen);
    queue_cards[13] = cart_5_clubs = CSurface::loadSursface("Cards/5Clubs.bmp",screen);
    queue_cards[14] = cart_5_hearts = CSurface::loadSursface("Cards/5Hearts.bmp",screen);
    queue_cards[15] = cart_5_diamonds = CSurface::loadSursface("Cards/5Diamonds.bmp",screen);

    queue_cards[16] = cart_6_spades = CSurface::loadSursface("Cards/6Spades.bmp",screen);
    queue_cards[17] = cart_6_clubs = CSurface::loadSursface("Cards/6Clubs.bmp",screen);
    queue_cards[18] = cart_6_hearts = CSurface::loadSursface("Cards/6Hearts.bmp",screen);
    queue_cards[19] = cart_6_diamonds = CSurface::loadSursface("Cards/6Diamonds.bmp",screen);

    queue_cards[20] = cart_7_spades = CSurface::loadSursface("Cards/7Spades.bmp",screen);
    queue_cards[21] = cart_7_clubs = CSurface::loadSursface("Cards/7Clubs.bmp",screen);
    queue_cards[22] = cart_7_hearts = CSurface::loadSursface("Cards/7Hearts.bmp",screen);
    queue_cards[23] = cart_7_diamonds = CSurface::loadSursface("Cards/7Diamonds.bmp",screen);

    queue_cards[24] = cart_8_spades = CSurface::loadSursface("Cards/8Spades.bmp",screen);
    queue_cards[25] = cart_8_clubs = CSurface::loadSursface("Cards/8Clubs.bmp",screen);
    queue_cards[26] = cart_8_hearts = CSurface::loadSursface("Cards/8Hearts.bmp",screen);
    queue_cards[27] = cart_8_diamonds = CSurface::loadSursface("Cards/8Diamonds.bmp",screen);

    queue_cards[28] = cart_9_spades = CSurface::loadSursface("Cards/9Spades.bmp",screen);
    queue_cards[29] = cart_9_clubs = CSurface::loadSursface("Cards/9Clubs.bmp",screen);
    queue_cards[30] = cart_9_hearts = CSurface::loadSursface("Cards/9Hearts.bmp",screen);
    queue_cards[31] = cart_9_diamonds = CSurface::loadSursface("Cards/9Diamonds.bmp",screen);

    queue_cards[32] = cart_10_spades = CSurface::loadSursface("Cards/10Spades.bmp",screen);
    queue_cards[33] = cart_10_clubs = CSurface::loadSursface("Cards/10Clubs.bmp",screen);
    queue_cards[34] = cart_10_hearts = CSurface::loadSursface("Cards/10Hearts.bmp",screen);
    queue_cards[35] = cart_10_diamonds = CSurface::loadSursface("Cards/10Diamonds.bmp",screen);

    queue_cards[36] = cart_J_spades = CSurface::loadSursface("Cards/JSpades.bmp",screen);
    queue_cards[37] = cart_J_clubs = CSurface::loadSursface("Cards/JClubs.bmp",screen);
    queue_cards[38] = cart_J_hearts = CSurface::loadSursface("Cards/JHearts.bmp",screen);
    queue_cards[39] = cart_J_diamonds = CSurface::loadSursface("Cards/JDiamonds.bmp",screen);

    queue_cards[40] = cart_Q_spades = CSurface::loadSursface("Cards/QSpades.bmp",screen);
    queue_cards[41] = cart_Q_clubs = CSurface::loadSursface("Cards/QClubs.bmp",screen);
    queue_cards[42] = cart_Q_hearts = CSurface::loadSursface("Cards/QHearts.bmp",screen);
    queue_cards[43] = cart_Q_diamonds = CSurface::loadSursface("Cards/QDiamonds.bmp",screen);

    queue_cards[44] = cart_K_spades = CSurface::loadSursface("Cards/KSpades.bmp",screen);
    queue_cards[45] = cart_K_clubs = CSurface::loadSursface("Cards/KClubs.bmp",screen);
    queue_cards[46] = cart_K_hearts = CSurface::loadSursface("Cards/KHearts.bmp",screen);
    queue_cards[47] = cart_K_diamonds = CSurface::loadSursface("Cards/KDiamonds.bmp",screen);

    queue_cards[48] = cart_A_spades = CSurface::loadSursface("Cards/ASpades.bmp",screen);
    queue_cards[49] = cart_A_clubs = CSurface::loadSursface("Cards/AClubs.bmp",screen);
    queue_cards[50] = cart_A_hearts = CSurface::loadSursface("Cards/AHearts.bmp",screen);
    queue_cards[51] = cart_A_diamonds = CSurface::loadSursface("Cards/ADiamonds.bmp",screen);

    Back_Card = CSurface::loadSursface("Cards/BackCard.bmp",screen);
//--------------CARDS--------------------
if(cart_2_spades == NULL || cart_2_clubs == NULL || cart_2_hearts == NULL || cart_2_diamonds == NULL)
    {
        return false;
    }

if(cart_3_spades == NULL || cart_3_clubs == NULL || cart_3_hearts == NULL || cart_3_diamonds == NULL)
    {
        return false;
    }

if(cart_4_spades == NULL || cart_4_clubs == NULL || cart_4_hearts == NULL || cart_4_diamonds == NULL)
    {
        return false;
    }

if(cart_5_spades == NULL || cart_5_clubs == NULL || cart_5_hearts == NULL || cart_5_diamonds == NULL)
    {
        return false;
    }

if(cart_6_spades == NULL || cart_6_clubs == NULL || cart_6_hearts == NULL || cart_6_diamonds == NULL)
    {
        return false;
    }

if(cart_7_spades == NULL || cart_7_clubs == NULL || cart_7_hearts == NULL || cart_7_diamonds == NULL)
    {
        return false;
    }

if(cart_8_spades == NULL || cart_8_clubs == NULL || cart_8_hearts == NULL || cart_8_diamonds == NULL)
    {
        return false;
    }

if(cart_9_spades == NULL || cart_9_clubs == NULL || cart_9_hearts == NULL || cart_9_diamonds == NULL)
    {
        return false;
    }

if(cart_10_spades == NULL || cart_10_clubs == NULL || cart_10_hearts == NULL || cart_10_diamonds == NULL)
    {
        return false;
    }

if(cart_J_spades == NULL || cart_J_clubs == NULL || cart_J_hearts == NULL || cart_J_diamonds == NULL)
    {
        return false;
    }

if(cart_Q_spades == NULL || cart_Q_clubs == NULL || cart_Q_hearts == NULL || cart_Q_diamonds == NULL)
    {
        return false;
    }

if(cart_K_spades == NULL || cart_K_clubs == NULL || cart_K_hearts == NULL || cart_K_diamonds == NULL)
    {
        return false;
    }

if(cart_A_spades == NULL || cart_A_clubs == NULL || cart_A_hearts == NULL || cart_A_diamonds == NULL)
    {
        return false;
    }

if(Back_Card == NULL)
    {
        return false;
    }
//--------------CARDS--------------------

    if(background == NULL)
    {
        return false;
    }
    //-----------------------------
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048)==-1)
    {
        return false;
    }
    //-----------------------------
    if(!loadMedia())
        return false;

    return true;
}
bool CApp::loadMedia()
{
    snd_draw = Mix_LoadWAV("Music/Draw.wav");
    snd_lose = Mix_LoadWAV("Music/Lose.wav");
    snd_place = Mix_LoadWAV("Music/Place.wav");
    snd_win = Mix_LoadWAV("Music/Win.wav");

    if(snd_draw == NULL || snd_lose == NULL || snd_place == NULL || snd_win == NULL)
        return false;

    //--------------------------------
    if(TTF_Init()== -1)
        return false;

    font = TTF_OpenFont("Fonts/RobotoCondensed-Italic.ttf",24);
    if(!font)
        return false;

    return true;
}

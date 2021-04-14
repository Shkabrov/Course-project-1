#include "CApp.h"

void CApp::onQuit()
{
    TTF_CloseFont(font);
    font = NULL;

    Mix_FreeChunk(snd_draw);
    snd_draw = NULL;

    Mix_FreeChunk(snd_lose);
    snd_lose = NULL;

    Mix_FreeChunk(snd_place);
    snd_place = NULL;

    Mix_FreeChunk(snd_win);
    snd_win = NULL;

    SDL_FreeSurface(screen);
    screen = NULL;

    SDL_FreeSurface(background);
    background = NULL;

    SDL_DestroyWindow(window);
    window = NULL;

    //--------------CARDS--------------------
    SDL_FreeSurface(cart_2_spades);
    cart_2_spades = NULL;

    SDL_FreeSurface(cart_2_clubs);
    cart_2_clubs = NULL;

    SDL_FreeSurface(cart_2_hearts);
    cart_2_hearts = NULL;

    SDL_FreeSurface(cart_2_diamonds);
    cart_2_diamonds = NULL;

    SDL_FreeSurface(cart_3_spades);
    cart_3_spades = NULL;

    SDL_FreeSurface(cart_3_clubs);
    cart_3_clubs = NULL;

    SDL_FreeSurface(cart_3_hearts);
    cart_3_hearts = NULL;

    SDL_FreeSurface(cart_3_diamonds);
    cart_3_diamonds = NULL;

    SDL_FreeSurface(cart_4_spades);
    cart_4_spades = NULL;

    SDL_FreeSurface(cart_4_clubs);
    cart_4_clubs = NULL;

    SDL_FreeSurface(cart_4_hearts);
    cart_4_hearts = NULL;

    SDL_FreeSurface(cart_4_diamonds);
    cart_4_diamonds = NULL;

    SDL_FreeSurface(cart_5_spades);
    cart_5_spades = NULL;

    SDL_FreeSurface(cart_5_clubs);
    cart_5_clubs = NULL;

    SDL_FreeSurface(cart_5_hearts);
    cart_5_hearts = NULL;

    SDL_FreeSurface(cart_5_diamonds);
    cart_5_diamonds = NULL;

    SDL_FreeSurface(cart_6_spades);
    cart_6_spades = NULL;

    SDL_FreeSurface(cart_6_clubs);
    cart_6_clubs = NULL;

    SDL_FreeSurface(cart_6_hearts);
    cart_6_hearts = NULL;

    SDL_FreeSurface(cart_6_diamonds);
    cart_6_diamonds = NULL;

    SDL_FreeSurface(cart_7_spades);
    cart_7_spades = NULL;

    SDL_FreeSurface(cart_7_clubs);
    cart_7_clubs = NULL;

    SDL_FreeSurface(cart_7_hearts);
    cart_7_hearts = NULL;

    SDL_FreeSurface(cart_7_diamonds);
    cart_7_diamonds = NULL;

    SDL_FreeSurface(cart_8_spades);
    cart_8_spades = NULL;

    SDL_FreeSurface(cart_8_clubs);
    cart_8_clubs = NULL;

    SDL_FreeSurface(cart_8_hearts);
    cart_8_hearts = NULL;

    SDL_FreeSurface(cart_8_diamonds);
    cart_8_diamonds = NULL;

    SDL_FreeSurface(cart_9_spades);
    cart_9_spades = NULL;

    SDL_FreeSurface(cart_9_clubs);
    cart_9_clubs = NULL;

    SDL_FreeSurface(cart_9_hearts);
    cart_9_hearts = NULL;

    SDL_FreeSurface(cart_9_diamonds);
    cart_9_diamonds = NULL;

    SDL_FreeSurface(cart_10_spades);
    cart_10_spades = NULL;

    SDL_FreeSurface(cart_10_clubs);
    cart_10_clubs = NULL;

    SDL_FreeSurface(cart_10_hearts);
    cart_10_hearts = NULL;

    SDL_FreeSurface(cart_10_diamonds);
    cart_10_diamonds = NULL;

    SDL_FreeSurface(cart_J_spades);
    cart_J_spades = NULL;

    SDL_FreeSurface(cart_J_clubs);
    cart_J_clubs = NULL;

    SDL_FreeSurface(cart_J_hearts);
    cart_J_hearts = NULL;

    SDL_FreeSurface(cart_J_diamonds);
    cart_J_diamonds = NULL;

    SDL_FreeSurface(cart_Q_spades);
    cart_Q_spades = NULL;

    SDL_FreeSurface(cart_Q_clubs);
    cart_Q_clubs = NULL;

    SDL_FreeSurface(cart_Q_hearts);
    cart_Q_hearts = NULL;

    SDL_FreeSurface(cart_Q_diamonds);
    cart_Q_diamonds = NULL;

    SDL_FreeSurface(cart_K_spades);
    cart_K_spades = NULL;

    SDL_FreeSurface(cart_K_clubs);
    cart_K_clubs = NULL;

    SDL_FreeSurface(cart_K_hearts);
    cart_K_hearts = NULL;

    SDL_FreeSurface(cart_K_diamonds);
    cart_K_diamonds = NULL;

    SDL_FreeSurface(cart_A_spades);
    cart_A_spades = NULL;

    SDL_FreeSurface(cart_A_clubs);
    cart_A_clubs = NULL;

    SDL_FreeSurface(cart_A_hearts);
    cart_A_hearts = NULL;

    SDL_FreeSurface(cart_A_diamonds);
    cart_A_diamonds = NULL;
//--------------CARDS--------------------

    Mix_Quit();
    TTF_Quit();
    SDL_Quit();
}

#ifndef CEVENT_H_INCLUDED
#define CEVENT_H_INCLUDED


#include <SDL2/SDL.h>

class CEvent
{
public:
    CEvent();
    virtual ~CEvent();

    virtual void onEvent(SDL_Event* e);
    virtual void  onExit();
    virtual void onKeyDown(SDL_Keycode sym, Uint16 mod, Uint16 scancode);
    virtual void onKeyUp(SDL_Keycode sym, Uint16 mod, Uint16 scancode);
    virtual void onLButtonDown(int xm,int ym);
    virtual void onRButtonDown(int xm,int ym);
    virtual void onMButtonDown(int xm,int ym);
    virtual void onMouseMove(int xm, int ym, int relx, int rely, bool left, bool right, bool middle);
    virtual void onLButtonUp(int xm,int ym);
    virtual void onRButtonUp(int xm,int ym);
    virtual void onMButtonUp(int xm,int ym);
    virtual void onWindowShown(int winId);
    virtual void onWindowHidden(int winId);
    virtual void onWindowResized(int winId, int data1, int data2);
    virtual void onWindowSizeChanged(int winId, int data1, int data2);
    virtual void onWindowExposed();
    virtual void onWindowMove(int winId, int data1, int data2);
    virtual void onWindowMinimize(int winId, int data1, int data2);
    virtual void onWindowMaximize(int winId, int data1, int data2);
    virtual void onTakeFocus();
    virtual void onWindowRestored();
    virtual void onInputFocus();
    virtual void onInputFocusLost();
    virtual void onMouseEnter();
    virtual void onMouseLeave();
    virtual void onUser(Uint8 type, int code, void* data1, void* data2);

private:



};
#endif // CEVENT_H_INCLUDED

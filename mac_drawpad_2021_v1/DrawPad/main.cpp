#include "DrawPad.hpp"
#include <math.h>

void DrawMain()
{
    Clear(kColorBlack);//画面を黒くする

    DrawLine(-320, 0, 319, 0, kColorGray);
    DrawLine(0, -240, 0, 239, kColorGray);

    for (int i = 0; i < 5; i++) {
        FillCircle(i*100-200, -190, 30, kColorBlue, M_PI/6+i*M_PI/2, -M_PI/6+i*M_PI/2);//円をを描く
    }

    for (int x = -100; x <= 100; x+=10) {
        DrawCircle(x, 0, 150, kColorBlue);//円をを描く
    }

    for (int x = -250; x < -50; x+=10) {
        Paint(x+5, 0, kColorDarkBlue, kColorBlue);//円をを描く
    }
    for (int x = 50; x < 250; x+=10) {
        Paint(x+5, 0, kColorDarkBlue, kColorBlue);//円をを描く
    }

    DrawText("Hello, world!!", -12*14/2, 44, kColorWhite);//白色でHello, world!!と描画
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, 22, kColorYellow);//黄色でHello, world!!と描画
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, 0, kColorGreen);//緑色でHello, world!!と描画
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, -22, kColorBlue);//青色でHello, world!!と描画
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, -44, kColorRed);//赤色でHello, world!!と描画
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, -66, kColorGray);//灰色でHello, world!!と描画
}


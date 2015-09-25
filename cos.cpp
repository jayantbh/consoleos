#include"cos.h"

int X=0,Y=0;

void noaccess()
{
   settextstyle(0,0,3);
	RefreshPrompt();
   outtextxy(60,100,"THIS APP REQUIRES");
   outtextxy(55,180,"SUPERUSER PRIVILEGES");
   outtextxy(50,260,"OR IS BEING DEVELOPED");
}
class ruler
{
	public:
	void x();
	void y();
   /*
	void all()
	{
		x();
		y();
	}
   */
};
void ruler::x()
{
	setcolor(WHITE);
   for(int i=0;i<=400;i+=100)
	{
		line(0,i-15,0,i+15);
		line(100,i-15,100,i+15);
		line(200,i-15,200,i+15);
		line(300,i-15,300,i+15);
		line(400,i-15,400,i+15);
		line(500,i-15,500,i+15);
		line(600,i-15,600,i+15);
	}
}
void ruler::y()
{
	setcolor(WHITE);
	for(int i=0;i<=600;i+=100)
	{
		line(i-15,0,i+15,0);
		line(i-15,100,i+15,100);
		line(i-15,200,i+15,200);
		line(i-15,300,i+15,300);
		line(i-15,400,i+15,400);
	}
}
void startup::drawtext_consoleos::c()
{
	circle(100,200,50);
	delay(120);
	circle(100,200,35);
	delay(120);
	floodfill(60,200,WHITE);
	delay(120);
	setcolor(BLACK);
	for(int i=175;i<225;i++)
	line(100,i,150,i);
	delay(120);
}
void startup::drawtext_consoleos::o()
{
	setcolor(WHITE);
	circle(165,200,25);
	delay(120);
	circle(165,200,15);
	delay(120);
	floodfill(185,200,WHITE);
	delay(120);
}
void startup::drawtext_consoleos::n()
{
	rectangle(198,175,208,225);
   delay(120);
   rectangle(228,175,238,225);
   delay(120);
   line(198,175,228,225);
   delay(120);
   line(208,175,238,225);
   delay(120);
   floodfill(200,177,WHITE);
   delay(120);
   floodfill(207,224,WHITE);
   delay(120);
   floodfill(210,180,WHITE);
   delay(120);
   floodfill(236,223,WHITE);
   delay(120);
	floodfill(229,176,WHITE);
   delay(120);
}
void startup::drawtext_consoleos::s()
{
	arc(260,190,15,270,15);
   delay(120);
   arc(260,190,40,270,5);
   delay(120);
   arc(260,210,195,90,15);
   delay(120);
   arc(260,210,205,90,5);
   delay(120);
   line(264,187,274,187);
   delay(120);
   line(245,213,256,213);
   delay(120);
   floodfill(260,180,WHITE);
   delay(120);
}
void startup::drawtext_consoleos::o_()
{
  	circle(305,200,25);
   delay(120);
   circle(305,200,15);
   delay(120);
   floodfill(325,200,WHITE);
   delay(120);
}
void startup::drawtext_consoleos::l()
{
	rectangle(335,175,345,225);
	delay(120);
	floodfill(336,176,WHITE);
	delay(120);
	rectangle(335,215,365,225);
	delay(120);
	floodfill(364,224,WHITE);
	delay(120);
}
void startup::drawtext_consoleos::e()
{
   rectangle(370,175,380,225);
   delay(120);
   floodfill(371,176,WHITE);
   delay(120);
   rectangle(370,215,400,225);
   delay(120);
   floodfill(399,224,WHITE);
   delay(120);
   rectangle(370,175,400,185);
   delay(120);
   floodfill(399,184,WHITE);
   delay(120);
   rectangle(370,195,400,205);
   delay(120);
   floodfill(398,202,WHITE);
   delay(120);
}
void startup::drawtext_consoleos::O()
{
	circle(460,200,50);
   delay(120);
   circle(460,200,35);
   delay(120);
   floodfill(420,200,WHITE);
   delay(120);
}
void startup::drawtext_consoleos::S()
{
   arc(550,180,15,270,29);
   delay(120);
   arc(550,180,25,270,14);
   delay(120);
   arc(550,223,195,90,14);
   delay(120);
   arc(550,223,185,90,29);
   delay(120);
   line(563,174,578,174);
   delay(120);
   line(521,226,536,226);
   delay(120);
   floodfill(524,229,WHITE);
   delay(120);
}
void startup::drawtext_consoleos::revolution()
{
   settextstyle(10,0,0);
   outtextxy(350,235,"R          ");
   delay(50);
   outtextxy(355,235," E         ");
   delay(50);
   outtextxy(360,235,"  V        ");
   delay(50);
   outtextxy(367,235,"   O       ");
   delay(50);
   outtextxy(373,235,"    L      ");
   delay(50);
   outtextxy(375,235,"     U     ");
   delay(50);
   outtextxy(381,235,"      T    ");
   delay(50);
   outtextxy(386,235,"       I   ");
   delay(50);
   outtextxy(375,235,"        O  ");
   delay(50);
   outtextxy(381,235,"         N ");
   delay(50);
   outtextxy(387,235,"          !");
   delay(50);
   settextstyle(0,0,0);
}
void tiles::COS(int x,int y)
{
	setcolor(WHITE);
   //TOP
	line(x+95,y+90,x+95,y+15);         //standing line
	line(x+95,y+15,x+(95+33),y+(90-19));   //upper line
	line(x+95,y+90,x+(95+33),y+(90-19));   //lower line
	//LEFT
	line(x+15,y+95,x+90,y+95);
	line(x+15,y+95,x+(90-19),y+(95-33));
	line(x+90,y+95,x+(90-19),y+(95-33));
	//BOTTOM
	line(x+95,y+100,x+95,y+175);
	line(x+95,y+100,x+(95-33),y+(100+19));
	line(x+95,y+175,x+(95-33),y+(100+19));
	//RIGHT
	line(x+100,y+95,x+175,y+95);     //straight
	line(x+100,y+95,x+119,y+(95+33));
	line(x+175,y+95,x+(19+100),y+(95+33));

	setfillstyle(1,LIGHTGRAY);
	floodfill(x+100,y+80,WHITE);   //TOP
	floodfill(x+90,y+110,WHITE);   //BOTTOM
	floodfill(x+110,y+100,WHITE);   //RIGHT
	floodfill(x+80,y+80,WHITE);    //LEFT
}
void tiles::APPS(int a, int b)
{
   setcolor(WHITE);
	rectangle(a+50,b+30,a+110,b+90);
	rectangle(a+100,b+50,a+160,b+110);
	rectangle(a+80,b+100,a+140,b+160);
	rectangle(a+30,b+80,a+90,b+140);
	setfillstyle(1,BLUE);
	floodfill(a+52,b+32,WHITE);
	setfillstyle(1,GREEN);
	floodfill(a+158,b+108,WHITE);
	setfillstyle(1,YELLOW);
	floodfill(a+138,b+158,WHITE);
	setfillstyle(1,RED);
	floodfill(a+32,b+82,WHITE);
}
void tiles::GAME(int a,int b)
{
	setcolor(BROWN);         //draw color = green
	circle(a+58,b+60,30);    //left big circle
	setfillstyle(1,BROWN);   //fill color = green
   floodfill(a+58,b+60,BROWN);     //fills left big circle
   circle(a+132,b+60,30);   //right big circle
  	floodfill(a+135,b+60,BROWN);    //fills right big circle
	//handle 1 codes
   circle(a+25,b+150,20);         //down left circle
   floodfill(a+25,b+150,BROWN);   //floodfill for handle 1 circle
	line(a+27,b+60,a+5,b+150);      //first handle left line
   line(a+85,b+66,a+45,b+155);    //1st hndl rt line
   floodfill(a+33,b+110,BROWN);   //fills handle 1 handle
   //handle 2 codes
   circle(a+165,b+150,20);        //down rt circle
	floodfill(a+165,b+150,BROWN);  //fills handle 2 circle
   line(a+162,b+61,a+185,b+153);  //2nd hndl lt line
   line(a+104,b+69,a+145,b+154);  //2nd hndl rt line
   floodfill(a+165,b+120,BROWN);  //fills handle 2 handle
   //center bar codes
   rectangle(a+58,b+40,a+132,b+90);   //center bar
	floodfill(a+95,b+60,BROWN);         //fills centerbar
   //left controller codes
   setcolor(BLACK);                    //draw color = blue
	rectangle(a+53,b+45,a+63,b+75);    //tall rectangle
   rectangle(a+43,b+55,a+73,b+65);    //wide rectangle
	setfillstyle(1,BLUE);              //fill color = blue
   floodfill(a+45,b+57,BLACK);         //fill left space with blue
	setfillstyle(1,RED);              //fill color = red
	floodfill(a+71,b+63,BLACK);         //fill right space with red
   setfillstyle(1,YELLOW);              //fill color = yellow
   floodfill(a+55,b+47,BLACK);         //fill up space with yellow
	setfillstyle(1,GREEN);              //fill color = magenta
	floodfill(a+55,b+67,BLACK);         //fill down space with magenta
	setfillstyle(1,BLACK);              //fill color = black
	floodfill(a+55,b+57,BLACK);         //fill down space with black
	//right controller codes     | center : (a+132,b+60) | draw color = black | fill color = light blue
   circle(a+132,b+50,5);        //up circle
   setfillstyle(1,YELLOW);      //fill color = yellow
   floodfill(a+132,b+50,BLACK); //coloring circle
   circle(a+132,b+70,5);        //down circle
	setfillstyle(1,GREEN);       //fill color = BROWN
   floodfill(a+132,b+70,BLACK); //coloring circle
   circle(a+122,b+60,5);        //right circle
   setfillstyle(1,BLUE);        //fill color = BLUE
   floodfill(a+122,b+60,BLACK); //coloring circle
   circle(a+142,b+60,5);        //left circle
   setfillstyle(1,RED);         //fill color = RED
   floodfill(a+142,b+60,BLACK); //coloring circle
}
void tiles::XTRA(int x, int y)
{   //x=r+220,y=130
	line(x-71,y+15,x-59,y+40);//outer straight line
	line(x-96,y+40,x-74,y+70);//inner slanting line
	line(x-74,y+70,x-16,y+70);//inner straight line
	line(x+21,y+40,x+6,y+173);//right slanting line
	line(x-16,y+70,x+6,y+170);//inner slanting line
	line(x-59,y+40,x+21,y+40);//above straight line
	line(x-124,y+15,x-120,y+40);//2nd left slanting line
	line(x-135,y+40,x-96,y+40);//inner small line
	line(x-124,y+15,x-71,y+15);//above small line
	line(x-89,y+173,x+6,y+173);//lower straight line
	line(x-135,y+40,x-89,y+173);//1st left slanting line
	setfillstyle(1,YELLOW);//inner fold color
	floodfill(x-64,y+40,WHITE);//inner fold
	setfillstyle(1,BROWN);//outer fold color
	floodfill(x-64,y+100,WHITE);//outer fold
}
void ConsoleOS_Operating_System_Core::COStiles::about(int x, int y)
{
  	setcolor(BLUE);
	circle(x+95,y+95,80);
  	setcolor(LIGHTBLUE);
   setfillstyle(1,BLUE);
   floodfill(x+95,y+95,BLUE);
	circle(x+95,y+95,81);
   setcolor(WHITE);
   settextstyle(0,0,11);
   outtextxy(x+40,y+60,"i");
}
void ConsoleOS_Operating_System_Core::COStiles::team(int x, int y)
{
	x=x+200-50;
	y=y-4;
	circle(x-84,y+70,30);//1st head
	line(x-111,y+85,x-144,y+100);//1st slanting line1
	line(x-59,y+85,x-21,y+100);// 1st slanting line2
	line(x-21,y+100,x-21,y+190);//1st straight line
	circle(x-6,y+40,30);//2nd head
	line(x-25,y+61,x-44,y+92);
	line(x+34,y+85,x+16,y+61);
	line(x+35,y+190,x+35,y+85);
	line(x-144,y+100,x-144,y+190);
	line(x-144,y+190,x+35,y+190);
	setfillstyle(1,BROWN);
	floodfill(x-114,y+100,WHITE);
	setfillstyle(1,RED);
	floodfill(x+6,y+90,WHITE);
	setfillstyle(1,WHITE);
	floodfill(x-84,y+70,WHITE);
	floodfill(x-6,y+40,WHITE);
}
void ConsoleOS_Operating_System_Core::COStiles::repository(int x, int y)
{
   setcolor(DARKGRAY);
   x=x+2;
	line(x+40,y+20,x+80,y+20);
   line(x+40,y+20,x+5,y+95);
   line(x+80,y+20,x+45,y+95);
   line(x+5,y+95,x+45,y+95);
   line(x+5,y+95,x+40,y+170);
   line(x+40,y+170,x+80,y+170);
   line(x+45,y+95,x+80,y+170);
	line(x+105,y+20,x+145,y+20);
   line(x+105,y+20,x+140,y+95);
   line(x+145,y+20,x+180,y+95);
   line(x+140,y+95,x+180,y+95);
   line(x+140,y+95,x+105,y+170);
   line(x+105,y+170,x+145,y+170);
   line(x+180,y+95,x+145,y+170);

   setfillstyle(1,BLUE);
   floodfill(x+40,y+40,DARKGRAY);
   setfillstyle(1,GREEN);
   floodfill(x+40,y+135,DARKGRAY);
   setfillstyle(1,YELLOW);
   floodfill(x+145,y+40,DARKGRAY);
   setfillstyle(1,RED);
   floodfill(x+145,y+135,DARKGRAY);
   setcolor(WHITE);
}
void clriconscr()
{
   setfillstyle(1,BLACK);
   bar(0,128,640,322);
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::init_game()
{
    int i;
    for(i = 0; i < NUM_SQUARES; i++)
    {
        game.pos[i] = UNASSIGNED;
    }
    setfillstyle(SOLID_FILL,GREEN);
    bar(0, 0, 639, 479);
    setcolor(WHITE);
    rectangle(0, 0, 639, 479);
}

int ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::draw_gameboard()
{
    int index = 0;
    int i, j;
    int xpos, ypos;
    char buf[32];
    int num = 1;

    xpos = left;
    for(i = 0; i < 3; i++)
    {
        ypos = top;
        for(j = 0; j < 3; j++)
        {
      		rectangle(xpos, ypos, xpos + size, ypos + size);
            rectangle(xpos + size - 30, ypos + size - 15, xpos + size, ypos + size);
            sprintf(buf, "F%d", num++);
            outtextxy(xpos + size - 22, ypos + size - 10, buf);
            if(game.pos[index] == PLAYER)
            {
                setcolor(RED);
            	 settextstyle(0,0,10);
            	 outtextxy(xpos + 9, ypos + 9, "X");
                settextstyle(0,0,0);
                setcolor(WHITE);
            }
            else if(game.pos[index] == COMPUTER)
            {
                setcolor(YELLOW);
                settextstyle(0,0,10);
            	 outtextxy(xpos + 9, ypos + 9, "O");
                settextstyle(0,0,0);
                setcolor(WHITE);
            }
            else
            {
                setfillstyle(SOLID_FILL, BLUE);
                floodfill(xpos + 1, ypos + 1, WHITE);
            }
            index++;
            ypos += size;
        }
        xpos += size;
    }
    setfillstyle(SOLID_FILL,GREEN);
    return is_game_over();
}

void ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::draw_patterline(int patternidx)
{
    int xpos, ypos;
    int i, j, k, p, index = 0;
 
    for(k = 0; k < 3; k++)
    {
        index = 0;
        p = pattern[patternidx][k];
        xpos = left;
        for(i = 0; i < 3; i++)
        {
            ypos = top;
            for(j = 0; j < 3; j++)
            {
                if(index == p)
                {
                    line(xpos,  ypos, xpos + size, ypos + size);
                    line(xpos + size, ypos, xpos, ypos + size);
                }
                ypos += size;
                index++;
            }
            xpos += size;
        }
    }
}

int ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::valid_selection(int index)
{
    if(index < 0 || index > 8)
    {
        return -1;
    }
    if(game.pos[index] != UNASSIGNED)
        return -2;
    game.pos[index] = PLAYER;
    return 0;
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::computer_move()
{
    int i = 0;
    if(game.pos[4] == UNASSIGNED)
    {
            game.pos[4] = COMPUTER;
            return;
    }
    // Add more intelligent
    for(i = 0; i < NUM_SQUARES; i++)
    {
        if(game.pos[i] == UNASSIGNED)
        {
            game.pos[i] = COMPUTER;
            break;
        }
    }
}
 
int ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::handle_key(int key)
{
    int errcode = 0;
    if( (key & 0x00FF) > 0)
        key = key & 0x00FF;
    else
        key = (key & 0xFF00) >> 8;
    errcode = valid_selection(key - F1_KEY);
    switch(errcode)
    {
        case -1:
            outtextxy(left, bottom + 20, "Invalid Key Pressed - Select F1 - F9");
            break;
        case -2:
            outtextxy(left, bottom + 20, "This position is already selected, try other option");
            break;
        default:
            bar(1, bottom + 20, 638, bottom + 60);
            break;
    }
    return errcode;
}
 
int ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::is_game_over()
{
    int i, p1, p2, p3;
    int patternidx;
    WINNER winner = UNASSIGNED;
    // check the winner
    for(i = 0; i < 8; i++)
    {
        p1 = pattern[i][0];
        p2 = pattern[i][1];
        p3 = pattern[i][2];
        if(game.pos[p1] == COMPUTER &&
            game.pos[p2] == COMPUTER &&
            game.pos[p3] == COMPUTER)
        {
            winner = COMPUTER;
            break;
        }
        if(game.pos[p1] == PLAYER &&
            game.pos[p2] == PLAYER &&
            game.pos[p3] == PLAYER)
        {
            winner = PLAYER;
            break;
        }
    }
    patternidx = i;

    if(winner == UNASSIGNED)
    {
        for(i = 0; i < NUM_SQUARES; i++)
        {
            if(game.pos[i] == UNASSIGNED)
                return 0;
        }
    }

    switch(winner)
    {
        case UNASSIGNED:
            outtextxy(left, bottom + 20, "Game is Tie.");
            break;
        case PLAYER:
            draw_patterline(patternidx);
            outtextxy(left, bottom + 20, "Congrats! You have won...!");
            break;
        case COMPUTER:
            draw_patterline(patternidx);
            outtextxy(left, bottom + 20, "Computer Win! Better Luck Next Time...!");
            break;
    }
    outtextxy(left, bottom + 40, "Press any key to contine!");
    getch();
    return 1;
}
void RefreshPrompt()
{

   setcolor(BLACK);
   for(int p=0;p<getmaxy();p++)
   line(0,p,640,p);
   outtextxy(150,150,"App is closed. Power off or Return to Home Screen");

	//REFRESH NAVICON
   setcolor(LIGHTBLUE);
	setfillstyle(1,LIGHTBLUE);
	circle(300,460,15);    //refresh navicon
	floodfill(300,460,LIGHTBLUE);

   //POWER OFF NAVICON LOGO
	setcolor(WHITE);
	arc(300,400,120,420,15);
	arc(300,400,120,420,20);
	line(292,387,290,384);
	line(308,387,310,383);
	setfillstyle(1,WHITE);
	floodfill(300,417,WHITE);
	rectangle(297,376,303,393);
	floodfill(300,383,WHITE);
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::TTTAPP::TTT()
{
    int whoplays = 0; // 0 for player plays first
    char ch;
    int key = 0;

    rectangle(left, top, right, bottom);
    while(1)
    {
        init_game();
        while(1)
        {
            if(draw_gameboard() == 1)
                break;
            if(whoplays == 0)
            {
                key = bioskey(0);
                while(handle_key(key) < 0)
                {
                    key = bioskey(0);
                    if(draw_gameboard() == 1)
                        break;
                }
                if(draw_gameboard() == 1)
                    break;
                computer_move();
            }
            else
            {
                computer_move();
                key = bioskey(0);
                while(handle_key(key) < 0)
                {
                    key = bioskey(0);
                    if(draw_gameboard() == 1)
                        break;
                }
                if(draw_gameboard() == 1)
                    break;
            }
        }
        init_game();
        draw_gameboard();
        outtextxy(left, bottom + 20, "Play again (Y/N)?");
        ch = getch();
        if(ch == 'y' || ch == 'Y')
        {
        		for(int i = 0; i < NUM_SQUARES; i++)
            {
        			game.pos[i] = UNASSIGNED;
    			}

            if(whoplays == 0)
                whoplays = 1;
            else
                whoplays = 0;
            continue;
        }
        else
        {
            RefreshPrompt();
				break;
        }
    }
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::typeit (int x,int y,int spacing,char string[])
{
	char temp[2];
	for (int i=0;i<strlen(string);i++)
	{
		 delay(100);
		 temp[0]=string[i];
		 temp[1]='\0';
		 outtextxy(x+(i+1)*spacing,y,temp);
	}//endfor
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::button_3d(int x1,int y1,int x2,int y2,int check,char* text,int color)
{
	int up,low;
	setfillstyle(1,7);
	bar(x1,y1,x2,y2);
	if(check==0)    //Unclicked
	up=15,low=8;
	else
	up=8,low=15;     //Clicked
	setcolor(low);
	line(x2,y1,x2,y2);
	line(x2-1,y1,x2-1,y2);
   line(x1,y2,x2,y2);
	line(x1+1,y2-1,x2,y2-1);

	setcolor(up);
	line(x1,y1,x2,y1);
	line(x1+1,y1+1,x2-1,y1+1);
	line(x1,y1,x1,y2);
	line(x1+1,y1+1,x1+1,y2-1);
	setcolor(color);

	settextjustify(CENTER_TEXT,CENTER_TEXT);
	outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);
}
void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::screen(int x1, int y1, int x2, int y2)
 {
   setlinestyle(0,0,1);
   setfillstyle(SOLID_FILL, 8);
   bar(x1, y1, x2, y2);
   setfillstyle(SOLID_FILL, BLACK);
   bar(x1+1, y1+1, x2-1, y2-1);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
	setcolor(15);
   line(x1+1, y1+1, x1+1, y2-1);
   line(x1+1, y1+1, x2-1, y1+1);
	line(x1+2, y1+2, x1+2, y2-2);
	line(x1+2, y1+2, x2-2, y1+2);
 	setcolor(8);
   line(x1+1, y2-1, x2-1, y2-1);
   line(x2-1, y1+1, x2-1, y2-1);
   line(x1+2, y2-2, x2-2, y2-2);
   line(x2-2, y1+2, x2-2, y2-2);
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::hide_mouse()
{
	union REGS ioRegs;
	ioRegs.x.ax=2;
	int86(0x33,&ioRegs,&ioRegs);
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::show_mouse()
{
	union REGS ioRegs;
	ioRegs.x.ax=1;
	int86(0x33,&ioRegs,&ioRegs);
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::structure()
{
	setbkcolor(0);
	cleardevice();
	//**********************************************************
	//   Buttons Making

	settextstyle(2,0,4);
	button_3d(50,20,600,400,UNCLICKED,"",1);     // main box
	screen(100,50,545,120);	  // screen

	setfillstyle(1,8);
	bar(52,22,598,42);
	button_3d(575,23,595,40,UNCLICKED,"x",0);
	setcolor(0);
	outtextxy(120,30,"ConsoleOS SciCalc v3.0");
	button_3d(108,140,208,160,UNCLICKED,"DEC",15); // box of decimal
	button_3d(218,140,318,160,UNCLICKED,"OCT",0); // box of octal
	button_3d(328,140,428,160,UNCLICKED,"HEx",0); // box of hexal
	button_3d(438,140,538,160,UNCLICKED,"BIN",0); // box of binary

	button_3d(350,205,380,225,UNCLICKED,"7",0);  // Box Of 7
	button_3d(390,205,420,225,UNCLICKED,"8",0);  // Box Of 8
	button_3d(430,205,460,225,UNCLICKED,"9",0);  // Box Of 9

	button_3d(350,230,380,250,UNCLICKED,"4",0);   // Box Of 4
	button_3d(390,230,420,250,UNCLICKED,"5",0);   // Box Of 5
	button_3d(430,230,460,250,UNCLICKED,"6",0);   // Box Of 6

	button_3d(480,230,510,250,UNCLICKED,"*",0);   // Box Of *
	button_3d(515,230,545,250,UNCLICKED,"/",0);   // Box Of \
	button_3d(480,205,510,225,UNCLICKED,"AC",4);	//Box Of AllClear (AC)
	button_3d(515,205,545,225,UNCLICKED,"CE",4);	//Box Of Clear (C)

	button_3d(350,255,380,275,UNCLICKED,"1",0);   // Box Of 1
	button_3d(390,255,420,275,UNCLICKED,"2",0);   // Box Of 2
	button_3d(430,255,460,275,UNCLICKED,"3",0);   // Box Of 3

	button_3d(350,280,380,300,UNCLICKED,"0",0);   // Box Of Zero (0)
	button_3d(390,280,420,300,UNCLICKED,".",0);   // Box Of Period (.)
	button_3d(430,280,460,300,UNCLICKED,"pi",0); // Box Of PhiFunction

	button_3d(480,255,510,275,UNCLICKED,"-",0);   //  Box Of -
	button_3d(515,255,545,275,UNCLICKED,"+",0);   //  Box Of +
	button_3d(350,305,460,325,UNCLICKED,"=",0);   // Box Of Equality
	button_3d(480,305,545,325,UNCLICKED,"shift",BLUE);   // Box Of shift

	button_3d(480,280,510,300,UNCLICKED,"sqrt",0);     //Box of x^n
	button_3d(515,280,545,300,UNCLICKED,"inv",0);      //box of 1/x

	button_3d(100,205,150,230,UNCLICKED,"Sin",0);	  // Box OfSin Function
	button_3d(160,205,210,230,UNCLICKED,"Cos",0);     // Box Of CosFunction
	button_3d(220,205,270,230,UNCLICKED,"Tan",0);	  // Box Of Tan Function

	button_3d(100,250,150,275,UNCLICKED,"sin^-1",0);    // Box Of sin^-1
	button_3d(160,250,210,275,UNCLICKED,"cos^-1",0);    // Box Of cos^-1
	button_3d(220,250,270,275,UNCLICKED,"tan^-1",0);    // Box Of tan^-1

	button_3d(100,300,150,325,UNCLICKED,"ln",0);    // Box Of ln
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	setcolor(BLUE);
	settextstyle(2,0,4);
	outtextxy(125,290,"e");
	outtextxy(185,290,"10^x");
	outtextxy(245,290,"x^3");
	button_3d(160,300,210,325,UNCLICKED,"log",0);    // Box Of log
	button_3d(220,300,270,325,UNCLICKED,"x^2",0);    // Box Of x^2

	button_3d(100,350,150,370,UNCLICKED,"deg",15);
	button_3d(160,350,210,370,UNCLICKED,"rad",0);
	button_3d(220,350,270,370,UNCLICKED,"gra",0);
	button_3d(480,350,545,370,UNCLICKED,"Off",4);

	button_3d(350,350,380,370,UNCLICKED,"M+",0);
	button_3d(390,350,420,370,UNCLICKED,"M-",0);
	button_3d(430,350,460,370,UNCLICKED,"MR",0);
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::SCICALC()
{
	cleardevice();
	double y=0,z=0,pnt,pnt1=0,x=0,r=0;
	int gdriver = DETECT, gmode, errorcode;
	int i;
	initgraph(&gdriver, &gmode, "C:/BC5/BGI");
	midx=getmaxx()/2;midy=getmaxy()/2;
	structure();
	gotoxy(row,col);
	cout<<"\t\t\t\t\t";
	gotoxy(row,col);
	cout<<"0";
	mem=(float*)malloc(y*sizeof(float));
	while( ch!=27&&ch1!=27)   //While Escape is not pressed
	{                                      //and if base is not 10
   	pnt1=0;//no doubleing point entered yet
		ch2='0';
		//  for(int a=0;ch!=27;a++)//a indicates whether a no. has been entered or not
		while(ch2!=27)
		//a=0 means that no no. has been entered yet
  		{
  			if(bflagp!='u')
       	{
	 			//gotoxy(row,col);
	 			dummy=input();
	 			if(dummy!='o')
            {
					 gotoxy(row,col);
					 cout<<"Calculator is under development. Sorry.";
					 input();
					 gotoxy(row,col);
					 printf("\t\t\t\t\t\t");
					// ch='0';
            }
		  		y=0;z=0;ch='0';
				gotoxy(row,col);
				printf("\t\t\t\t\t\t");
			  	gotoxy(row,col);
				printf("0");
				// bflagp='u';
         }
		   ch=input();
		   if(ch=='`')
		   goto OutOfCalc;
		   if(ch=='>'||ch=='<'||ch=='?')
		   {
         	sflag=0;
				if(ch=='>')   //M+
				*mem+=y;
				if(ch=='<')   //M-
				*mem-=y;
			   if(ch=='?')    //MR
			   {
				   y=*mem;
				   gotoxy(row,col);
				   printf("\t\t\t\t\t\t");
				   gotoxy(row,col);
               printf("%g",y);
			   }
			   if(*mem==0)
			   mflag=0;
			   if(*mem!=0)
            mflag=1;
		  	}
		  	if(mflag==0)
		  	{
			  	gotoxy(row,7);
           	printf(" ");
		  	}
		  	if(mflag!=0)
	     	{
			  	gotoxy(row,7);
			  	printf("M");
		  	}
		  	gotoxy(row,col);
	     	if(ch=='a')
        	{
           	sflag=0;
           	y=0;
           	gotoxy(row,col);
           	printf("\t\t\t\t\t");
           	gotoxy(row,col);
           	printf("0");
        }

        if(ch=='o')
        //for clearing the screen of the calculater
        {
        		sflag=0;
       		y=0;z=0;
       		gotoxy(row,col);
       		cout<<"\t\t\t\t    ";
       		gotoxy(row,col);
       		printf("0");
       		gotoxy(row,col);
       		break;
       	}

   	if(ch=='q')
     	{
       	sflag=0;
       	y=sqrt(y);
       	gotoxy(row,col);
       	printf("\t\t\t\t    ");
       	gotoxy(row,col);
       	printf("%g",y);
     	}
   	if(ch=='m')
   	{
			sflag=0;
			y=1/y;
         gotoxy(row,col);
       	printf("\t\t\t\t    ");
       	gotoxy(row,col);
       	printf("%g",y);
     	}
   	if(ch=='+'||ch=='-'||ch=='/'||ch=='\\'||ch=='='||ch=='*')
      {
       	sflag=0;
       	break;
      }
   	if(ch=='.') //case for a decimal point
      {
       	sflag=0;
       	if(pnt1==0) //ie no decimal has been entered yet
			{
	 			gotoxy(row,col);
	 			printf("\t\t\t\t    ");//         double
	 			gotoxy(row,col);
	 			printf("%g.",y);
	 			pnt1=.1;   //ie one decimal point no has been entered
	 			continue;  //go back to the begining and get the next number
			}
       	else     //decimal point has alredy been entered and thus no change in the screen
			{
	 			sflag=0;
	 			continue; //go back to the begining
		  	}
   	}//out of the '.' condition

 		if(pnt1!=0)  //ie we have a doubleing point
      {
      	sflag=0;
   		if(ch<='9'&&ch>='0') //input integer
   		{
   			x=(double)ch;//type cast the character into double to perforn further operations
   			x-=48;      //since character digit indoubleing -48 gives the corresponding ASCII
   			x=x*pnt1;   //make it a decimal
   			y=x+y;      //add it in result
   			pnt1*=.1;   //shift to the second doubleing point
   			gotoxy(row,col);
   			printf("%g",y);
   			gotoxy(row,col);
   			continue;   //back to the top
   		}
  		}
   	//if no decimal point number then proceed

  		if(ch<='9'&&ch>='0')
  		{
       	sflag=0;
   		x=(double)ch;     //typecast to double
   		x-=48;           //get corresponding ASCII
   		y=(y*10)+x;      //add to right of result
   		gotoxy(row,col);  //go back to start of the calc screen
   		printf("\t\t\t\t    ");  //clear the screen
   		gotoxy(row,col);
   		printf("%g",y);  //print the number
  		}
 		if(ch=='u'||ch=='v'||ch=='w'||ch=='x')
  		{
      	sflag=0;
  			if(bflagp==bflag&&bflag=='u')
  			continue;
  			else
  			basecng(y,pnt1);
  		}
      if(ch=='d'||ch=='r'||ch=='g')
   	{
      	sflag=0;
    		y=angle_conv(y);
    		gotoxy(row,col);
    		printf("\t\t\t\t    ");
    		gotoxy(row,col);
    		printf("%g",y);
  			//  gotoxy(row,col);
 			//   printf("%g",y);
  			//  continue;
   	}
  		if(ch=='s'||ch=='c'||ch=='t'||ch=='i'||ch=='j'||ch=='k'||ch=='n'||ch=='l'||ch=='p'||ch=='h')
  		//ie the user opted for a function
  		{
    		if(ch=='s'||ch=='c'||ch=='t')  //sin  /cos/tan
   		{
         	sflag=0;
    			if(flag!='r')
    			{
    				flagp=flag;
    				flag='r';
    				y=angle_conv(y);
    				flag=flagp;
    			}
    			switch(ch)
    			{
    				case 's':	y=sin(y);  break;
    				case 'c':   y=cos(y);  break;
    				case 't':  	y=tan(y);  break;
    			}
   		}
   		if(ch=='i'||ch=='j'||ch=='k')
    		{
         	sflag=0;
    			if(flag!='r')
     			{
      			flagp='r';
     			}
    			switch(ch)
    			{
    				case 'i':   y=asin(y);  break;
    				case 'j':	y=acos(y);  break;
    				case 'k':	y=atan(y);  break;
    			}
    			if(flag!='r')
    			y=angle_conv(y);
   		}
   		else if(ch=='n')
			{
				if(sflag==1)
				{
					y=exp(y);
					sflag=0;
				}
				else
				y=log(y);     //ln
			}
   		else if(ch=='l')
			{
				if(sflag==1)
				{
	 				y=pow(10,y);
	 				sflag=0;
				}
				else
				y=log10(y);    //log
			}
   		else if(ch=='p')
			{
				if(sflag==1)
				{
				 	y=pow(y,3);
			  	 	sflag=0;
				}
				else
				y=pow(y,2);    //square
			}
   		else if(ch=='h')
         {
				sflag=0;
				y=PI;          //pi
			}

         gotoxy(row,col);
   		cout<<"\t\t\t\t    ";//Clear the screen
   		gotoxy(row,col);
   		printf("%g",y);
  		}//else condition
	}//out of second condition  ie we now have the first no. or function or operater

 	for(;ch!=27&&ch1!='='&&ch!='=';)//ie the characters input are not ESCAPE or Equal to
	{
		pnt1=0;z=0;
		if(ch=='o'||ch1=='o')     // For Clear The Screen
		{

			sflag=0;
			y=0;z=0;
			gotoxy(row,col);
			printf("\t\t\t\t    ");
			gotoxy(row,col);
			printf("0");
			gotoxy(row,col);
			break;
		}
		for(;ch1!=27;)
		{
			gotoxy(row,col);
      	// 	printf("%g",z);
       	//	z=0;
			ch1=input();
			if(ch1=='>'||ch1=='<'||ch1=='?')
     		{
     			if(ch1=='>')   //M+
     			*mem+=z;
     			if(ch1=='<')   //M-
    			*mem-=z;
    			if(ch1=='?')    //MR
    			{
    				z=*mem;
    				gotoxy(row,col);
    				printf("\t\t\t\t    ");
    				gotoxy(row,col);
    				printf("%g",z);
    			}
    			if(*mem==0)
    			mflag=0;
    			if(*mem!=0)
    			mflag=1;
   		}
   		if(mflag==0)
   		{
   			gotoxy(row,7);
   			printf(" ");
   		}
   		if(mflag!=0)
   		{
   			gotoxy(row,7);
   			printf("M");
   		}
   		gotoxy(row,col);
			if(ch1=='a')
			{
				z=0;
	 			gotoxy(row,col);
	 			printf("\t\t\t\t  ");
	 			gotoxy(row,col);
	 			printf("0");
   		}
			if(ch=='o'||ch1=='o')     // For Clear The Screen
			{
				y=0;z=0;
				gotoxy(row,col);
				cout<<"\t\t\t\t    ";
				gotoxy(row,col);
				cout<<"0";
				gotoxy(row,col);
				break;
			}
			if(ch1=='q')
     		{
       		z=sqrt(z);
       		gotoxy(row,col);
       		printf("\t\t\t\t    ");
       		gotoxy(row,col);
       		printf("%g",z);
     		}
   		if(ch1=='m')
   		{
				z=1/z;
				gotoxy(row,col);
       		printf("\t\t\t\t    ");
       		gotoxy(row,col);
       		printf("%g",z);
         }
			if(ch1=='.')
			{
				if(pnt1==0)
				{
					gotoxy(row,col);
					printf("\t\t\t\t    ");
					gotoxy(row,col);
					printf("%g.",z);
					pnt1=.1;
					continue;
				}
				else
				{
					continue;
				}
			}
			if(pnt1!=0)
			{
				if(ch1<='9'&&ch1>='0')
				{
					x=(double)ch1;
					x-=48;
					x=x*pnt1;
					z=x+z;
					pnt1=pnt1*.1;
					gotoxy(row,col);
					printf("\t\t\t\t    ");
					gotoxy(row,col);
					printf("%g",z);
					continue;
            }
			}
			if(ch1=='+'||ch1=='-'||ch1=='*'||ch1=='/'||ch1=='=')
			break;
			if(ch1>='0'&&ch1<='9')
			{
				x=(double)ch1;
				x=x-48;
				gotoxy(row,col);
				printf("\t\t\t\t    ");
				gotoxy(row,col);
				z=(z*10)+x;
				printf("%g",z);
			}
         if(ch=='u')
				if(ch=='d'||ch=='r'||ch=='g')
				{
	 				z=angle_conv(z);
	 				gotoxy(row,col);
	 				printf("\t\t\t\t    ");
	 				gotoxy(row,col);
	 				printf("%g",z);
				}
				if(ch1=='s'||ch1=='c'||ch1=='t'||ch1=='i'||ch1=='j'||ch1=='k'||ch1=='n'||ch1=='l'||ch1=='p'||ch1=='h')
	  			//ie the user opted for a function
	  			{
	         	if(ch1=='s'||ch1=='c'||ch1=='t')  //sin
	            {
	    				if(flag!='r')
	     				{
	      				flagp=flag;
	      				flag='r';
	      				angle_conv(z);
	                  flag=flagp;
	     				}
	    				switch(ch1)
	    				{
	    					case 's':   z=sin(z);  break;
	    					case 'c':	z=cos(z);  break;
	    					case 't':	z=tan(z);  break;
	    				}
	   			}
					if(ch1=='i'||ch1=='j'||ch1=='k')
	   			{
	   				if(flag!='r')
	     				{
	      				flagp='r';
	     				}
	   				switch(ch1)
	    				{
	    					case 'i':   z=asin(z);  break;
	    					case 'j':	z=acos(z);  break;
	    					case 'k':	z=atan(z);  break;
	    				}
	   				z=angle_conv(z);
	   			}
	  				else if(ch1=='l')
					{
						z=log10(z);    //log
					}
	            else if(ch1=='p')
					{
						z=pow(z,2);    //square
					}
	   			else if(ch1=='h')
					{
						z=PI;          //pi
					}
	   			gotoxy(row,col);
	   			printf("\t\t\t\t    ");
	   			gotoxy(row,col);
	   			printf("%g",z);
	   			gotoxy(row,col);
				}
			}
			if(ch1=='+'||ch1=='-'||ch1=='=')
			{
				y=add(y,z,ch);
				if(ch2!='0')
				{
					y=add(r,y,ch2);
					ch2='0';
				}
			}
			else
			{
				if(ch=='*'||ch=='/')
	         y=add(y,z,ch);
				else
	         {
					ch2=ch;
					r=y;
					y=z;
				}
			}
			gotoxy(row,col);
			printf("\t\t\t\t    ");
			gotoxy(row,col);
			printf("%g",y);
			ch=ch1;
			ch1='0';
			if(ch=='='||ch1=='=')
			break;
		}
		if(ch=='o'||ch1=='o')     // For Clear The Screen
		{
	   	y=0;z=0;
			gotoxy(row,col);
			printf("\t\t\t\t    ");
			gotoxy(row,col);
			printf("0");
			gotoxy(row,col);
			continue;
		}
		gotoxy(row,col);
		printf("\t\t\t\t    ");
		gotoxy(row,col);
		printf("%g",y);
		z=0;
	}
   OutOfCalc:
   RefreshPrompt();
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::mouse()
{
	int button,x1,y1;
	union REGS iregs, oregs;

	iregs.x.ax = 3;
	int86 (0x33, &iregs ,&oregs);

	button = oregs.x.bx & 3;
	x1 = oregs.x.cx;
	y1 = oregs.x.dx;

	if(oregs.x.bx & 1)
	{
		X = x1 ; Y = y1;
	}

	if(button == 3)
		exit(0);
}
char ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::input()
{
	X=0;Y=0;
   char ch;
   show_mouse();
   if(bflag!='u')
   {
	 	button_3d(108,140,208,160,UNCLICKED,"DEC",15);
	 	button_3d(218,140,318,160,UNCLICKED,"OCT",0);
	 	button_3d(328,140,428,160,UNCLICKED,"HEX",0);
	 	button_3d(438,140,538,160,UNCLICKED,"BIN",0);
	  	bflag='u';
   }
   do
	{
	  	mouse();
	  	if (X>=350 && X<=380 && Y>=205 && Y<=225) // Condition For 7
	  	{
	  		hide_mouse();
	  		button_3d(350,205,380,225,CLICKED,"7",0);
	  		show_mouse();
	  		delay(250);
	  		hide_mouse();
	  		button_3d(350,205,380,225,UNCLICKED,"7",0);
	  		show_mouse();
	  		ch='7';
	  		return ch;
	  	}
	 	if (X>=390 && X<=420 && Y>=205 && Y<=225) // Condition For 8
	 	{
	 		hide_mouse();
	 		button_3d(390,205,420,225,CLICKED,"8",0);
	 		show_mouse();
	 		delay(250);
	 		hide_mouse();
	 		button_3d(390,205,420,225,UNCLICKED,"8",0);
	 		show_mouse();
	 		ch='8';
	 		return ch;
	 	}
	 	if (X>=430 && X<=460 && Y>=205 && Y<=225) // Condition For 9
	 	{
	 		hide_mouse();
	 		button_3d(430,205,460,225,CLICKED,"9",0);
	 		show_mouse();
	 		delay(250);
	 		hide_mouse();
	 		button_3d(430,205,460,225,UNCLICKED,"9",0);
	 		show_mouse();
	 		ch='9';
	 		return ch;
	 	}
	 	if (X>=350 && X<=380 && Y>=230 && Y<=250) // Condition For 4
	 	{
	 		hide_mouse();
	 		button_3d(350,230,380,250,CLICKED,"4",0);
	 		show_mouse();
         delay(250);
	 		hide_mouse();
	 		button_3d(350,230,380,250,UNCLICKED,"4",0);
	 		show_mouse();
	 		ch='4';
	 		return ch;
	 	}
      if (X>=390 && X<=420 && Y>=230 && Y<=250) // Condition For 5
		{
			hide_mouse();
			button_3d(390,230,420,250,CLICKED,"5",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(390,230,420,250,UNCLICKED,"5",0);
			show_mouse();
			ch='5';
			return ch;
		}


		//***********************************

		if (X>=430 && X<=460 && Y>=230 && Y<=250) // Condition For 6
		{
			hide_mouse();
			button_3d(430,230,460,250,CLICKED,"6",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(430,230,460,250,UNCLICKED,"6",0);
			show_mouse();
			ch='6';
			return ch;
		}


		//***********************************

		if (X>=480 && X<=510 && Y>=230 && Y<=250) // Condition For *
		{
			hide_mouse();
			button_3d(480,230,510,250,CLICKED,"*",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(480,230,510,250,UNCLICKED,"*",0);
			show_mouse();
			ch='*';
			return ch;
		}
       //***********************************

		if (X>=515 && X<=545 && Y>=230 && Y<=250) // Condition For /
		{
			hide_mouse();
			button_3d(515,230,545,250,CLICKED,"/",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(515,230,545,250,UNCLICKED,"/",0);
			show_mouse();
			ch='/';
			return ch;
		}

		//***********************************
		int  a,b;
		if (X>=350 && X<=380 && Y>=255 && Y<=275) // Condition For 1
		{
			hide_mouse();
			button_3d(350,255,380,275,CLICKED,"1",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(350,255,380,275,UNCLICKED,"1",0);
			show_mouse();
			ch='1';
			return ch;
		}

		   // *************************************

		if (X>=390 && X<=420 && Y>=255 && Y<=275) // Condition For 2
		{
			hide_mouse();
			button_3d(390,255,420,275,CLICKED,"2",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(390,255,420,275,UNCLICKED,"2",0);
			show_mouse();
			ch='2';
			return ch;
		}

		   // *************************************

		if (X>=430 && X<=460 && Y>=255 && Y<=275) // Condition For 3
		{
			hide_mouse();
			button_3d(430,255,460,275,CLICKED,"3",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(430,255,460,275,UNCLICKED,"3",0);
			show_mouse();
			ch='3';
			return ch;
		}

		   // *************************************

		if (X>=350 && X<=380 && Y>=280 && Y<=300) // Condition For 0
		{
			hide_mouse();
			button_3d(350,280,380,300,CLICKED,"0",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(350,280,380,300,UNCLICKED,"0",0);
			show_mouse();
			ch='0';
			return ch;
		}

		   // *************************************

		if (X>=390 && X<=420 && Y>=280 && Y<=300) // Condition For .
		{
			hide_mouse();
			button_3d(390,280,420,300,CLICKED,".",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(390,280,420,300,UNCLICKED,".",0);
			show_mouse();
			ch='.';
			return ch;
		}

		//**********************************************

		if (X>=430 && X<=460 && Y>=280 && Y<=300) // Condition For pi
		{
			hide_mouse();
			button_3d(430,280,460,300,CLICKED,"pi",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(430,280,460,300,UNCLICKED,"pi",0);
			show_mouse();
			ch='h';
			return ch;
		}

		 //***********************************************

		if (X>=480 && X<=510 && Y>=255 && Y<=275) // Condition For -
		{
			hide_mouse();
			button_3d(480,255,510,275,CLICKED,"-",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(480,255,510,275,UNCLICKED,"-",0);
			show_mouse();
			ch='-';
			return ch;
		}

		//**************************************************

		if (X>=515 && X<=545 && Y>=255 && Y<=275) // Condition For +
		{
			hide_mouse();
			button_3d(515,255,545,275,CLICKED,"+",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(515,255,545,275,UNCLICKED,"+",0);
			show_mouse();
			ch='+';
			return ch;
		}

		//*****************************************************

		if (X>=350 && X<=460 && Y>=305 && Y<=325) // Condition For =
		{
			hide_mouse();
			button_3d(350,305,460,325,CLICKED,"=",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(350,305,460,325,UNCLICKED,"=",0);
			show_mouse();
			ch='=';
			return ch;
		}

		//*****************************************************

		if (X>=480 && X<=545 && Y>=305 && Y<=325) // Condition For shift
		{
			hide_mouse();
			button_3d(480,305,545,325,CLICKED,"shift",BLUE);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(480,305,545,325,UNCLICKED,"shift",BLUE);
			show_mouse();
			ch='~';
			sflag=1;
			return ch;
		}


		//*************************************

		if (X>=480 && X<=510 && Y>=205 && Y<=225) // Condition For AC
		{
			hide_mouse();
			button_3d(480,205,510,225,CLICKED,"AC",4);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(480,205,510,225,UNCLICKED,"AC",4);
			show_mouse();
			ch='o';
			return ch;
			}
		/********************C*/
		if (X>=515 && X<=545 && Y>=205 && Y<=225) // Condition For C
		{
			hide_mouse();
			button_3d(515,205,545,225,CLICKED,"CE",4);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(515,205,545,225,UNCLICKED,"CE",4);
			show_mouse();
			ch='a';
			return ch;
		}

		  // ****************************************

		if (X>=100 && X<=150 && Y>=205 && Y<=230) // Condition For Sin
		{
			hide_mouse();
			button_3d(100,205,150,230,CLICKED,"Sin",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(100,205,150,230,UNCLICKED,"Sin",0);
			show_mouse();
			ch='s';
			return ch;
		}

		//***********************************

		if (X>=160 && X<=210 && Y>=205 && Y<=230) // Condition For Cos
		{
			hide_mouse();
			button_3d(160,205,210,230,CLICKED,"Cos",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(160,205,210,230,UNCLICKED,"Cos",0);
			show_mouse();
			ch='c';
			return ch;
		}

		 //***********************************

		if(X>=515&&X<=545&&Y>=280&&Y<=300)     //inverse
      {
			hide_mouse();
			button_3d(515,280,545,300,CLICKED,"inv",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(515,280,545,300,UNCLICKED,"inv",0);
			show_mouse();
			ch='m';
			return ch;
		}


		if (X>=220 && X<=270 && Y>=205 && Y<=230) // Condition For Tan
		{
			hide_mouse();
			button_3d(220,205,270,230,CLICKED,"Tan",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(220,205,270,230,UNCLICKED,"Tan",0);
			show_mouse();
			ch='t';
			return ch;
		}

		//***********************************  */


		if (X>=100 && X<=150 && Y>=250 && Y<=275) // Condition For sin^-1
		{
			hide_mouse();
			button_3d(100,250,150,275,CLICKED,"sin^-1",0);
			show_mouse();
			delay(150);
			hide_mouse();
			button_3d(100,250,150,275,UNCLICKED,"sin^-1",0);
			show_mouse();
			ch='i';
			return ch;
		}
				    //**************************

		if (X>=160 && X<=210 && Y>=250 && Y<=275) // Condition For cos^-1
		{
			hide_mouse();
			button_3d(160,250,210,275,CLICKED,"cos^-1",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(160,250,210,275,UNCLICKED,"cos^-1",0);
			show_mouse();
			ch='j';
			return ch;
		}
				    //**************************

		if (X>=430 && X<=460 && Y>=350 && Y<=370) // Condition For MR
		{
			hide_mouse();
			button_3d(430,350,460,370,CLICKED,"MR",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(430,350,460,370,UNCLICKED,"MR",0);
			show_mouse();
			ch='?';
			return ch;
		}
		if (X>=390 && X<=420 && Y>=350 && Y<=370) // Condition For M-
		{
			hide_mouse();
			button_3d(390,350,420,370,CLICKED,"M-",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(390,350,420,370,UNCLICKED,"M-",0);
			show_mouse();
			ch='<';
			return ch;
		}
		if (X>=350 && X<=380 && Y>=350 && Y<=370) // Condition For M+
		{
			hide_mouse();
			button_3d(350,350,380,370,CLICKED,"M+",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(350,350,380,370,UNCLICKED,"M+",0);
			show_mouse();
			ch='>';
			return ch;
		}

		if (X>=220 && X<=270 && Y>=250 && Y<=275) // Condition For tan^-1
		{
			hide_mouse();
			button_3d(220,250,270,275,CLICKED,"tan^-1",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(220,250,270,275,UNCLICKED,"tan^-1",0);
			show_mouse();
			ch='k';
			return ch;
		}
				    //**************************


		if (X>=100 && X<=150 && Y>=300 && Y<=325) // Condition For ln
		{
			hide_mouse();
			button_3d(100,300,150,325,CLICKED,"ln",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(100,300,150,325,UNCLICKED,"ln",0);
			show_mouse();
			ch='n';
			return ch;
		}
				    //**************************

		if (X>=160 && X<=210 && Y>=300 && Y<=325) // Condition For log
		{
			hide_mouse();
			button_3d(160,300,210,325,CLICKED,"log",0);
			show_mouse();
			delay(150);
			hide_mouse();
			button_3d(160,300,210,325,UNCLICKED,"log",0);
			show_mouse();
			ch='l';
			return ch;
		}
				    //**************************

		if (X>=220 && X<=270 && Y>=300 && Y<=325) // Condition For X^2
		{
			hide_mouse();
			button_3d(220,300,270,325,CLICKED,"x^2",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(220,300,270,325,UNCLICKED,"x^2",0);
			show_mouse();
			ch='p';
			return ch;
		}
		if (X>=100 && X<=150 && Y>=350 && Y<=370) // Condition For deg
		{
			hide_mouse();
			button_3d(100,350,150,370,CLICKED,"deg",15);
			button_3d(160,350,210,370,UNCLICKED,"rad",0);
			button_3d(220,350,270,370,UNCLICKED,"gra",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(100,350,150,370,UNCLICKED,"deg",15);
			show_mouse();
			ch='d';
			flagp=flag;
			flag=ch;
			return ch;
		}		    //**************************
		if (X>=160 && X<=210 && Y>=350 && Y<=370) // Condition For rad
		{
			hide_mouse();
			button_3d(100,350,150,370,UNCLICKED,"deg",0);
			button_3d(160,350,210,370,CLICKED,"rad",15);
			button_3d(220,350,270,370,UNCLICKED,"gra",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(160,350,210,370,UNCLICKED,"rad",15);
			show_mouse();
			ch='r';
			flagp=flag;
			flag=ch;

			return ch;
		}
		if (X>=220 && X<=270 && Y>=350 && Y<=370) // Condition For gra
		{
			hide_mouse();
			button_3d(100,350,150,370,UNCLICKED,"deg",0);
			button_3d(160,350,210,370,UNCLICKED,"rad",0);
			button_3d(220,350,270,370,CLICKED,"gra",15);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(220,350,270,370,UNCLICKED,"gra",15);
			show_mouse();
			ch='g';
			flagp=flag;
			flag=ch;
			return ch;

		}
		if ((X>=480 && X<=545 &&Y>=350 &&Y <=370)||(X>=575&&X<=595&&Y>=23&&Y<=40))   //OFF
		{
			free(mem);
   		return '`';
		}
		if (X>=108 && X<=208 && Y>=140 && Y<=160) // Condition For dec
		{
			hide_mouse();
			button_3d(108,140,208,160,CLICKED,"DEC",15);
			button_3d(218,140,318,160,UNCLICKED,"OCT",0);
			button_3d(328,140,428,160,UNCLICKED,"HEX",0);
			button_3d(438,140,538,160,UNCLICKED,"BIN",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(108,140,208,160,UNCLICKED,"DEC",15);
			show_mouse();
			ch='u';
			bflagp=bflag;
			bflag=ch;
			return ch;
		}
		if (X>=218 && X<=318 && Y>=140 && Y<=160) // Condition For oct
		{
			hide_mouse();
			button_3d(108,140,208,160,UNCLICKED,"DEC",0);
			button_3d(218,140,318,160,CLICKED,"OCT",15);
			button_3d(328,140,428,160,UNCLICKED,"HEX",0);
			button_3d(438,140,538,160,UNCLICKED,"BIN",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(218,140,318,160,UNCLICKED,"OCT",15);
			show_mouse();
			ch='v';
			bflagp=bflag;
			bflag=ch;
			return ch;
		}
		if (X>=328 && X<=428 && Y>=140 && Y<=160) // Condition For hex
		{
			hide_mouse();
			button_3d(108,140,208,160,UNCLICKED,"DEC",0);
			button_3d(218,140,318,160,UNCLICKED,"OCT",0);
			button_3d(328,140,428,160,CLICKED,"HEX",15);
			button_3d(438,140,538,160,UNCLICKED,"BIN",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(328,140,428,160,UNCLICKED,"HEX",15);
			show_mouse();
			ch='w';
			bflagp=bflag;
			bflag=ch;
			return ch;
      }
      if (X>=438 && X<=538 && Y>=140 && Y<=160) // Condition For dec
      {
      	hide_mouse();
			button_3d(108,140,208,160,UNCLICKED,"DEC",0);
			button_3d(218,140,318,160,UNCLICKED,"OCT",0);
			button_3d(328,140,428,160,UNCLICKED,"HEX",0);
			button_3d(438,140,538,160,CLICKED,"BIN",15);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(438,140,538,160,UNCLICKED,"BIN",15);
			show_mouse();
			ch='x';
			bflagp=bflag;
			bflag=ch;
			return ch;
      }
		if(X>=480&&X<=510&&Y>=280&&Y<=300)
		{
			hide_mouse();
			button_3d(480,280,510,300,CLICKED,"sqrt",0);
			show_mouse();
			delay(250);
			hide_mouse();
			button_3d(480,280,510,300,UNCLICKED,"sqrt",0);
			show_mouse();
			ch='q';
			return ch;
		}

   }while(kbhit() == 0);
	ch=getch();
	return ch;
}

/*************************************************************************/
/*																		 */
/*			This function performs the Calculations			 */
/*									 */
/*************************************************************************/
 double add(double x,double y,char ch)
{
	switch(ch)
	{
		case '+':
		y=x+y;
		break;
		case '-':
		y=x-y;
		break;
		case '*':
		y=x*y;
		break;
		case '/':
		y=x/y;
   }
	return y;
}

double  angle_conv(double no)
{
 	if(flagp=='d')
 	{
   	if(flag=='r')
  		{
      	no=no*PI/180;
  		}
  		if(flag=='g')
  		{
  			no=no*1.1111111;
  		}
 	}
	else if(flagp=='r')
 	{
  		if(flag=='d')
  		{
  			no=no*180/PI;
  		}
  		if(flag=='g')
  		{
  			no=no*180/PI*1.1111111;
  		}
 	}
	else if(flagp=='g')
 	{
  		if(flag=='r')
  		{
  			no=no/(180*1.1111111)*PI;
      }
  		if(flag=='d')
  		{
  			no=no/1.1111111;
  		}
   }
 	return(no);
}

double ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::add(double x,double y,char ch)
{
	switch(ch)
	{
		case '+':
		y=x+y;
		break;
		case '-':
		y=x-y;
		break;
		case '*':
		y=x*y;
		break;
		case '/':
		y=x/y;
	}
	return y;
}

double ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::angle_conv(double no)
{
 	if(flagp=='d')
 	{
  		if(flag=='r')
  		{
   		no=no*PI/180;
  		}
  		if(flag=='g')
  		{
  			no=no*1.1111111;
  		}
 	}
   else if(flagp=='r')
   {
  		if(flag=='d')
  		{
  			no=no*180/PI;
  		}
  		if(flag=='g')
  		{
  			no=no*180/PI*1.1111111;
  		}
 	}
	else if(flagp=='g')
 	{
  		if(flag=='r')
  		{
  			no=no/(180*1.1111111)*PI;
  		}
  		if(flag=='d')
  		{
  			no=no/1.1111111;
  		}
 	}
 	return(no);
}

void ConsoleOS_Operating_System_Core::APPAPPS::CALCAPP::basecng(double y,double pnt1)
{
 	char str[17];
 	if(pnt1!=0)
 	{
  		gotoxy(row,col);
  		cout<<"Incomplete Feature - Calculator Under Development.";
  		getch();
  		bflag='u';
  		bflagp='0';
      //main();
 	}
 	if(bflagp!='u')
 	{
  		gotoxy(row,col);
  		cout<<"Incomplete Feature - Calculator Under Development.";
  		getch();
 		bflagp='0';
 		bflag='u';
  		//main();
 	}
 	switch(bflag)
 	{
 		case 'v':
 		itoa(y,str,8);
 		gotoxy(row,col);
 		printf("\t\t\t\t    ");
 		gotoxy(row,col);
 		printf("%s",str);
 		bflagp='0';
 		break;

 		case 'w':
 		itoa(y,str,16);
 		gotoxy(row,col);
 		printf("\t\t\t\t    ");
 		gotoxy(row,col);
 		printf("%s",str);
 		bflagp='0';
 		break;

 		case 'x':
 		itoa(y,str,2);
 		gotoxy(row,col);
 		printf("\t\t\t\t    ");
 		gotoxy(row,col);
 		printf("%s",str);
		// getch();
 		bflagp='0';
 		break;
 	}
	bflag='u';
}


void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::PAINTMAIN()
{
	cleardevice();
	int graphdriver, graphmode, errorcode;
	fp = fopen("C:\\logging.cpp","a+");
	if(fp == NULL)
	{
		cout<<"Error Opening Log File."<<endl;
	}
	detectgraph(&graphdriver, &graphmode);
	graphdriver = DETECT;
	graphmode = DETECT;
	initgraph( &graphdriver, &graphmode,"C:/BC5/BGI");
	/* read result of initialization */
	errorcode = graphresult();
   if (errorcode != grOk)   /* an error occurred */
	{
		fputs("Graphics error\n",fp);  //write to file
		cout<<"Graphics error:"<<endl;
		cout<<"Press any key to halt:"<<endl;
		getch();
		exit(1);                 /* return with error code */
	}
	fputs("Graphics Initialized\n",fp);  //write to log file
	setbkcolor(BLACK);
	Window win;
	win.show_all();
	fputs("Interface Visible\n",fp);  //write to log file
	win.events();
	fputs("Events Visible",fp);  //write to file
	EndOfPaint:
	RefreshPrompt();
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Mouse::initmouse()
{
	i.x.ax = 0;
	int86(0x33, &i, &o);
	return(o.x.ax);
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Mouse::showmouseptr()
{
	i.x.ax = 1;
	int86(0x33, &i, &o);
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Mouse::restrictmouseptr(int x1,int y1,int x2,int y2)
{
	i.x.ax = 7;
	i.x.cx = x1;
	i.x.dx = x2;
	int86(0x33, &i, &o);
	i.x.ax = 8;
	i.x.cx = y1;
	i.x.dx = y2;
	int86(0x33, &i, &o);
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Mouse::getmousepos()
{
	i.x.ax = 3;
	int86(0x33, &i, &o);
	button_left = o.x.bx;
	x = o.x.cx;
	y = o.x.dx;
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Mouse::hidemouseptr()
{
	i.x.ax = 2;
	int86(0x33, &i, &o);
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Mouse::printmousepos()
{
	gotoxy(75, 5);
	cout << "x=";
	cout << setw( 3 ) << x;          //these are co-ordinates display
	gotoxy(75, 6);
	cout << "y=";
	cout<<setw(3)<<y ;  //using manipulators for 3-character display
}
ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Shape::Shape()
{
	x_initial = 0;
	y_initial = 0;
}

ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Shape::Shape(int a, int b)
{
	x_initial = a;
	y_initial = b;
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Shape::set_xy(int a, int b)
{
	x_initial = a;
	y_initial = b;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Shape::get_x()
{
	return x_initial;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Shape::get_y()
{
	return y_initial;
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Shape::print(int x, int y, char s1[])
{
	outtextxy(x, y, s1);
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Circle::set_radius(int r)
{
	radius = r;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Circle::get_radius( )
{
	return radius;
}

int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Circle::get_color()
{
	return color;
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Circle::set_color(int c)
{
	color = c;
	setcolor(color);
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Circle::show()
{
	circle(x_initial, y_initial, radius);
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Circle::draw()
{
	x_initial = 0, y_initial = 0;          // data members of shape as well as circle due to inheritance
	radius = 0;            // data member of circle
	Mouse m; // Mouse Object
	int x_final, y_final, flag = 0;
	int x, y, button_left;
	while(1)
	{
		m.getmousepos();
		x = m.getx(), y = m.gety();
		button_left = m.getbutton();
		if(x>=DRAW_X1 && x<=DRAW_X2 && y>=DRAW_Y1 && y<=DRAW_Y2)
		{
			if(button_left == 1 && flag == 0)   //  flag = 0 means 1st click
			{
				x_initial = x; y_initial = y;
				putpixel(x_initial, y_initial, RED);
				flag = 1;
			}
			m.printmousepos();
			if(button_left == 1 && flag == 1)  //  flag = 1 means 2nd click
			{
				x_final = x; y_final = y;
				radius = (float)sqrt((double) pow((x_final-x_initial), 2) + (double)pow((y_final-y_initial), 2));
				m.showmouseptr();
			}
			if(button_left != 1 && flag==1)
			{
				circle(x_initial, y_initial,  radius);
				flag = 0;
				int p_color = getcolor();
				/*hiding the part of the circle outside drawing area*/
				setcolor(BLACK);
				setfillstyle(SOLID_FILL,BLACK);
				bar3d(MIN_X,MIN_Y,MAX_X,37, 0, 0);
				setfillstyle(SOLID_FILL,BLACK);
				bar3d(MIN_X,461,MAX_X,MAX_Y, 0, 0);
				setfillstyle(SOLID_FILL,BLACK);
				bar3d(590,MIN_Y,MAX_X,MAX_Y, 0, 0);
				setfillstyle(SOLID_FILL,BLACK);
				bar3d(MIN_X,MIN_Y,81,MAX_Y, 0, 0);
				setcolor(WHITE);
				Window w;
				w.show_all();              //display the contents
				setcolor(p_color);       //return back the drawing color
			}
		}// main if ends
		break;
	}//while ends
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::set_length_width(int l, int b)
{
	length = l;
	width = b;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::get_length()
{
	return length;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::get_width()
{
	return width;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::get_color()
{
	return color;
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::set_color(int c)
{
	color = c;
	setcolor(color);
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::show()
{
	rectangle(x_initial, y_initial, length, width);
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::draw()
{
	Mouse m;      // Mouse Object
	x_initial = 0, y_initial = 0;    // data members of shape class and due to inheritance it is member of Rectangle also
	length = 0, width = 0 ;     // data members of Rectangle class
	int x, y, button_left, flag = 0;
	while(1)
	{
		m.getmousepos();
		x = m.getx(), y = m.gety();
		button_left = m.getbutton();
		if(x>=DRAW_X1 && x<=DRAW_X2 && y>=DRAW_Y1 && y<=DRAW_Y2)
		{
			if(button_left == 1 && flag == 0) // flag = 0 determines that its a first click for rectangle
			{
				x_initial = x; y_initial = y;
				flag = 1;
			}
			m.printmousepos();
			if(button_left == 1 && flag == 1) //  flag = 1 means 2nd click
			{
				length = x; width = y;
				m.showmouseptr();
			}
			else if(button_left != 1)
			{
				rectangle(x_initial, y_initial, length, width);
				flag = 0;
			}
		}  // main if ends
		else
		break;
	}  //while ends
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Rectangle::fill(int c)
{
	int border_color = get_color();
	color =  c;
	setfillstyle(SOLID_FILL, color);
	if( (x_initial<length) && (y_initial < width) )
	floodfill(x_initial+2, y_initial+2, border_color); // +2 for inner co-ordinate, reqiured for floodfill
	else if((x_initial>length) && (y_initial>width) )
	floodfill(x_initial-2, y_initial-2, border_color); // +2 for inner co-ordinate, reqiured for floodfill
	else if( (x_initial<length) && (y_initial> width) )
	floodfill(x_initial+2, y_initial-2, border_color); // +2 for inner co-ordinate, reqiured for floodfill
	else if((x_initial>length) && (y_initial<width) )
	floodfill(x_initial-2, y_initial+2, border_color); // +2 for inner co-ordinate, reqiured for floodfill
	else
	outtextxy(0 ,0,"Error_Square");
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Titlebar::show()
{
	r1.set_xy(0,0);
	r1.set_length_width(MAX_X, MIN_Y+20);
	r1.set_color(WHITE);
	r1.show();
	r1.fill(LIGHTBLUE);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	r1.print(MIN_X+15, MIN_Y+7, "ConsoleOS Draw");
	/* Close Button   */
	setfillstyle(SOLID_FILL,BLUE);
	setcolor(WHITE);
	rectangle(MAX_X-20, MIN_Y+3,MAX_X-5, MIN_Y+17);
	line(MAX_X-20, MIN_Y+3, MAX_X-5, MIN_Y+17);
	line(MAX_X-20, MIN_Y+17,MAX_X-5, MIN_Y+3);
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Colorbox::show()
{
	int start_y,end_y,count,col,color = 0;
	for(col=20;col<80;col+=10)
	{
		for(start_y=190,end_y=200,count=0;count<2 ;count++,start_y=end_y,end_y+=10,color++)
		{
			r.set_xy(MIN_X+col, MIN_Y+start_y);
			r.set_length_width(MIN_X+col+10, MIN_Y+end_y);
			r.set_color(WHITE);
			r.show();
			r.fill(color);
			settextstyle(SMALL_FONT,HORIZ_DIR,4);
		}//inner for ends
	}//outer for ends
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Toolbox::show()
{
	int start_y,end_y,count;
	for(start_y=70,end_y=90,count=0;count<5 ;count++,start_y=end_y,end_y+=20 )
	{
		r.set_xy(MIN_X+20, MIN_Y+start_y);
		r.set_length_width(MIN_X+80, MIN_Y+end_y);
		r.set_color(WHITE);
		r.show();
		r.fill(9);
		settextstyle(SMALL_FONT,HORIZ_DIR,4);
		if(start_y == 70)
		outtextxy(MIN_X+25, MIN_Y+start_y,"Clear");
		else if(start_y == 90)
		outtextxy(MIN_X+25, MIN_Y+start_y,"Pencil");
		else if(start_y == 110)
		outtextxy(MIN_X+25, MIN_Y+start_y,"Circle");
		else if(start_y == 130)
		outtextxy(MIN_X+25, MIN_Y+start_y,"Rectangle");
		else if(start_y == 150)
		outtextxy(MIN_X+25, MIN_Y+start_y,"Eraser");
	}//for ends
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Statusbox::show()
{
	int start_y,end_y,count;
	for(start_y=240, end_y=280, count=0; count<2 ; count++, start_y = end_y, end_y+=40 )
	{
		r.set_xy(MIN_X+20, MIN_Y+start_y);
		r.set_length_width(MIN_X+80, MIN_Y+end_y);
		r.set_color(WHITE);
		r.show();
		r.fill(9);
		settextstyle(SMALL_FONT,HORIZ_DIR,4);
		if(start_y == 240)
			outtextxy(MIN_X+25, MIN_Y+start_y,"Tool");
		else if(start_y == 280)
			outtextxy(MIN_X+25, MIN_Y+start_y,"Color");
	}//for ends
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Window::show_all()
{
	obj_Titlebar.show();
	obj_colorbox.show();
	obj_Toolbox.show();
	obj_Statusbox.show();
	setcolor(BLUE);
	setlinestyle(DOTTED_LINE,BLUE,3);
	rectangle(82,38,590,460);
	setlinestyle(SOLID_LINE,WHITE,1);
	fputs("Titlebar,Colorbar,Toolbar,Statusbar and Drawing Area visible \n",fp);   //write to log file
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Window::show_titlebar()
{
	obj_Titlebar.show();
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Window::show_colorbox()
{
	obj_colorbox.show();
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Window::show_toolbox()
{
	obj_Toolbox.show();
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Window::events()
{
	Mouse m;    // Mouse Object
	int choice = 0, choice_1;
	int x , y, button_left;
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	settextstyle(SMALL_FONT, HORIZ_DIR, 4);
	while(1)
	{
		x = m.getx(), y = m.gety();
		button_left = m.getbutton();
		m.showmouseptr();
		m.restrictmouseptr(MIN_X,MIN_Y,MAX_X,MAX_Y);
		m.getmousepos();     // whenever you write getmousepos(),the current co-ordinates are sent to x and y declared globally.You can pass them to your function.
		m.printmousepos();  // moreover whenever you want to use see if the mouse is clicked ,on right click button_right=1 and on left click button_left=1
		Freehand F;
		Rectangle R;
		Circle C;
		Eraser E;
		if(x>=20 && x<=30 && y>=190 && y<=200 && button_left == 1) //  For colorbox events
		{
			fputs("Color Choice made BLACK \n",fp);   //write to log file
			choice_1 = 1;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "BLACK");
		}
		else if(x>=30 && x<=40 && y>=190 && y<=200 && button_left == 1)
		{
			fputs("Color Choice made LIGHT GREEN \n",fp);   //write to log file
			choice_1 = 2;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "GREEN");
		}
		else if(x>=40 && x<=50 && y>=190 && y<=200 && button_left == 1)
		{
			fputs("Color choice made RED  \n",fp);   //write to log file
			choice_1 = 3;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "RED");
		}
		else if(x>=50 && x<=60 && y>=190 && y<=200 && button_left == 1)
		{
			fputs("Color choice made BROWN  \n",fp);   //write to log file
			choice_1 = 4;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "BROWN");
		}
		else if(x>=60 && x<=70 && y>=190 && y<=200 && button_left == 1)
		{
			fputs("Color choice made HIGH-GRAY  \n",fp);   //write to log file
			choice_1 = 5;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "HIGH-GRAY");
		}
		else if(x>=70 && x<=80 && y>=190 && y<=200 && button_left == 1)
		{
			fputs("Color choice made LOW-GRAY  \n",fp);   //write to log file
			choice_1 = 6;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "LOW-GREEN");
		}
		else if(x>=20 && x<=30 && y>=200 && y<=210 && button_left == 1)
		{
			fputs("Color choice made BLUE  \n",fp);   //write to log file
			choice_1 = 7;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "BLUE");
		}
		else if(x>=30 && x<=40 && y>=200 && y<=210 && button_left == 1)
		{
			fputs("Color choice made CYAN  \n",fp);   //write to log file
			choice_1 = 8;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "CYAN");
		}
		else if(x>=40 && x<=50 && y>=200 && y<=210 && button_left == 1)
		{
			fputs("Color choice made MAGENTA  \n",fp);   //write to log file
			choice_1 = 9;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "MAGENTA");
		}
		else if(x>=50 && x<=60 && y>=200 && y<=210 && button_left == 1)
		{
			fputs("Color choice made LOW-GRAY  \n",fp);   //write to log file
			choice_1 = 10;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "LOW-GRAY");
		}
		else if(x>=60 && x<=70 && y>=200 && y<=210 && button_left == 1)
		{
			fputs("Color choice made LOW-BLUE  \n",fp);   //write to log file
			choice_1 = 11;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "LOW-BLUE");
		}
		else if(x>=70 && x<=80 && y>=200 && y<=210 && button_left == 1)
		{
			fputs("Color choice made LOW-CYAN  \n",fp);   //write to log file
			choice_1 = 12;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 295, 78, 310);
			outtextxy(25, 298, "LOW-CYAN");
		}
		/* for toolbox events*/
		/* for Clear */
		if(x>=20 && x<=80 && y>=70 && y<=90 && button_left == 1)
		{
			setfillstyle(SOLID_FILL, BLACK);
			bar(83, 39, 589, 459);
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 255, 78, 270); // to clear tool status
			bar(22, 295, 78, 310); // to clear color status
			choice = 1;
		}
		/* for pencil or freehand */
		else if(x>=20 && x<=80 && y>=90 && y<=110 && button_left == 1)
		{
			fputs("Pencil Selected  \n",fp);   //write to log file
			choice = 2;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 255, 78, 270);
			outtextxy(25, 258, " Pencil");
		}
		/* for circle */
		else if(x>=20 && x<=80 && y>=110 && y<=130 && button_left == 1)
		{
			fputs("Circle Selected  \n",fp);   //write to log file
			choice = 3;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 255, 78, 270);
			outtextxy(25, 258, " Circle");
		}
		/* for rectangle  */
		else if(x>=20 && x<=80 && y>=130 && y<=150 && button_left == 1)
		{
			fputs("Rectangle Selected  \n",fp);   //write to log file
			choice = 4;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 255, 78, 270);
			outtextxy(25, 258, "Rectangle");
		}
		/* for Eraser */
		else if(x>=20 && x<=80 && y>=150 && y<=170 && button_left == 1)
		{
			fputs("Eraser Selected \n",fp);   //write to log file
			choice = 5;
			setfillstyle(SOLID_FILL, LIGHTBLUE);
			bar(22, 255, 78, 270);
			outtextxy(25, 258, " Eraser");
		}
		switch(choice_1)
		{
			case 1 : setcolor(BLACK);   break;
			case 2 : setcolor(GREEN);   break;
			case 3 : setcolor(RED);   break;
			case 4 : setcolor(BROWN);   break;
			case 5 : setcolor(DARKGRAY);  break;
			case 6 : setcolor(LIGHTGREEN);   break;
			case 7  : setcolor(BLUE);   break;
			case 8  : setcolor(CYAN);   break;
			case 9  : setcolor(MAGENTA);   break;
			case 10 : setcolor(LIGHTGRAY);   break;
			case 11 : setcolor(LIGHTBLUE);   break;
			case 12 : setcolor(LIGHTCYAN);   break;
		}
		/* For toolbox */
		switch(choice)
		{
			case 1 : choice = 0; break;
			case 2 : F.draw(); break;
			case 3 : C.draw(); break;
			case 4 : R.draw(); break;
			case 5 : E.eraser(); break;
		}
		/* for exit cross button on titile bar */
		if(x>=620 && x<=632 && y>=2 && y<=18 && button_left == 1)
		{
			fputs("Exit Button Clicked  \n",fp);   //write to log file
			break;
		}
	}
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Eraser::eraser()
{
	Mouse m; // Mouse Object
	int x, y, button_left;
	color = BLACK;
   while(1)
	{
		m.getmousepos();
		x = m.getx(), y = m.gety();
		button_left = m.getbutton();
		if(x>=85 && x<=570 && y>=40 && y<=440)
		{
			m.printmousepos();
			if(button_left == 1)
			{
				m.hidemouseptr();
				for(i=y; i<=y+16; i++)
				for(j=x; j<=x+16; j++)
				putpixel(j,i, color);
			}
			m.showmouseptr();
		}
		else
		break;
	}// WHILE ENDS
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Freehand::set_xfyf(int xf, int yf)   //mutator function of x_final, y_final
{
	x_final = xf;
	y_final = yf;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Freehand::get_xf()
{
	return x_final;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Freehand::get_yf()
{
	return y_final;
}
int ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Freehand::get_color()
{
	return color;
}

void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Freehand::set_color(int c)
{
	color =c;
	setcolor(color);
}
void ConsoleOS_Operating_System_Core::APPAPPS::PAINTAPP::Freehand::draw()
{
	Mouse m; // Mouse Object
	int previous_x = 1, previous_y = 1, flag=0;
	int x, y, button_left;
	while(1)
	{
		m.getmousepos();
		x = m.getx(), y = m.gety();
		button_left = m.getbutton();
		if(x>=85 && x<=580 && y>=40 && y<=450)
		{
			m.printmousepos();
			if(button_left == 1)
			{
				if(flag == 0)
				{
					m.hidemouseptr();
					flag=1;
				}
				else
				line(previous_x, previous_y, x, y);
			}
			else if(button_left != 1)
			{
				m.showmouseptr();
				flag = 0;
			}
			previous_x = x;
			previous_y = y;
		}// main if ends
		else
		{
			m.showmouseptr();
			break;
		}
	}//While ends
}












































ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::BRICKMAIN()
{
   union REGS ii, oo ;
   closegraph();
   int graphmode = CGAHI, graphdriver = CGA, level;
   int BallX, BallY, Base1, Base2, dx = 1, dy = -1, OldX, OldY ;
   int totallayer[5] = { 10, 20, 30, 40, 50 }, max = 50, layer = 4 ;
   int i, flag = 0, speed = 25, score = 0, chance = 4, areareq ;

   char *m1, *m2 ;

   /* Function to initialise the graphics mode */
   initgraph ( &graphdriver, &graphmode, "C:/BC5/BGI" ) ;
   mainscreen();
   initgraph ( &graphdriver, &graphmode, "C:/BC5/BGI" ) ;
   /* get the maximum value of x and y coordinates of the screen */
   MaxX = getmaxx() ;
   MaxY = getmaxy() ;
   /* finding the center of the screen */
   MidX = MaxX / 2 ;
   MidY = MaxY / 2 ;


   /* create opening  screen and accept the level of the  player's  */
   level = screen() ;

   /* assign the  speed to ball as per the level chosen */
   switch ( level )
   {
      case 'M' :
      case 'm' :
         speed = 15 ;
         break ;

      case 'F' :
      case 'f' :
         speed = 10 ;
   }

   /* draw the four layer of bricks, the paddle and the ball */
   rectangle ( 0, 0, MaxX, MaxY - 12 ) ;
   bricks() ;
   rectangle ( MidX - 25, MaxY - 7 - 12, MidX + 25, MaxY - 12 ) ;
   floodfill ( MidX, MaxY - 1 - 12, 12 ) ;
   circle ( MidX, MaxY - 13 - 12, 12 ) ;
   floodfill ( MidX, MaxY - 10 - 12, 12 ) ;

   /* memory allocation for storing the image of the paddle */
   areareq = imagesize ( MidX - 12, MaxY - 18, MidX + 12, MaxY - 8 ) ;
   m1 =((char*) malloc ( areareq )) ;

   /* memory allocation for storing the image of the ball */
   areareq = imagesize ( MidX - 25, MaxY - 7, MidX + 25, MaxY - 1 ) ;
   m2 =((char *) malloc ( areareq ) );

   /* if unable to alloacte the memory  */
   if ( m1 == NULL || m2 == NULL )
   {
      puts ( "Not Enough memory!!" ) ;
      goto EndOfBricks;
   }

   /* image of the paddle and the ball is stored into allocated memory */
   getimage ( MidX - 12, MaxY - 7 - 12 - 12 + 1, MidX + 12, MaxY - 8 - 12,
m1 ) ;
   getimage ( MidX - 25, MaxY - 7 - 12, MidX + 25, MaxY - 1 - 12, m2 ) ;

   /* store current position of the paddle and ball */
   Base1 = MidX - 25 ;
   Base2 = MaxY - 7 - 12 ;
   BallX = MidX - 12 ;
   BallY = MaxY - 7 - 12 + 1 - 12 ;

   /* display balls remaining ( initially 3 ) */
   gotoxy ( 45, 25 ) ;
   cout<< "Balls :"  ;
   for ( i = 0 ; i < 3 ; i++ )
   {
      circle ( 515 + i * 35, MaxY - 5, 12 ) ;
      floodfill ( 515 + i * 35, MaxY - 5, 12 ) ;
   }

   /* display starting score */
   gotoxy ( 1, 25 ) ;
   cout<< "Score:   ";
   gotoxy(16,25);
   cout<<score;

   /* select font and alignment for displaying text */
   settextjustify ( CENTER_TEXT, CENTER_TEXT ) ;
   changetextstyle ( 3, HORIZ_DIR, 4 ) ;

   while ( 1 )
   {
      flag = 0 ;

      /* saving current x and y coordinates of the ball */
      OldX = BallX ;
      OldY = BallY ;

      /* update ballx and bally to move the ball in correct direction */
      BallX = BallX + dx ;
      BallY = BallY + dy ;

      /* according to the position of ball the layer of bricks is determined
*/
      if ( BallY > 40 )
      {
         max = 50 ;
         layer = 4 ;
      }
      else
      {
         if ( BallY > 30 )
         {
            max = 40 ;
            layer = 3 ;
         }
         else
         {
            if ( BallY > 20 )
            {
               max = 30 ;
               layer = 2 ;
            }
            else
            {
               if ( BallY > 10 )
               {
                  max = 20 ;
                  layer = 1 ;
               }
               else
               {
                  max = 10 ;
                  layer = 0 ;
               }
            }
         }
      }

      /* if the ball hits the right boundary, move it to the left */
      if ( BallX > ( MaxX - 24 - 1 ) )
      {
         bell ( 5 ) ;
         BallX = MaxX - 24 - 1 ;
         dx = -dx ;
      }

      /* if the ball hits the left boundary, move it to the right */
      if ( BallX < 1 )
      {
         bell ( 5 ) ;
         BallX = 1 ;
         dx = -dx ;
      }

      /* if the ball hits the top boundary, move it down */
      if ( BallY < 1 )
      {
         bell (  5 ) ;
         BallY = 1 ;
         dy = -dy ;
      }

      /* if the ball is in the area of the bricks */
      if ( BallY < max )
      {
         /* if there is no brick  at the top of the ball */
         if ( bri[layer][ ( BallX + 10 ) / 32 ] == 1 )
         {
            /*  if the ball touches a brick */
            for ( i = 1 ; i <= 6 ; i++ )
            {
               /* check whether there is a brick to the right of the ball */
               if ( bri[layer][ ( BallX + i + 10 ) / 32 ] == 0 )
               {
                  /* if there is a brick */
                  BallX = BallX + i ;
                  flag = 1 ;
                  break ;
               }

               /* check whether there is a brick to the left of the ball */
               if ( bri[layer][ ( BallX - i + 10 ) / 32 ] == 0 )
               {
                  BallX = BallX - i ;
                  flag = 1 ;
                  break ;
               }
            }

            /* if the ball does not touch a brick at the top, left or right */
            if ( !flag )
            {
               /* check if the ball has moved above the current layer */
               if ( BallY < totallayer[layer - 1] )
               {
                  /* if so, change current layer appropriately */
                  layer-- ;
                  max = totallayer[layer] ;
               }

               /* restore the image of the ball at the old coordinates */
               putimage ( OldX, OldY, m1, OR_PUT ) ;

               /* erase the image at the old coordinates */
               putimage ( OldX, OldY, m1, XOR_PUT ) ;

               /* place the image of the ball at the new coordinates */
               putimage ( BallX, BallY, m1, XOR_PUT ) ;

               /*  delay for fewseconds*/
               delay ( speed ) ;

               /* carry on moving the ball */
               continue ;
            }
         }

         /* when ball touch the brick control comes to this point */
         bell ( 5 ) ;  /* play music */

         /* erase the touched brick  */
         delbrick ( ( BallX + 10 ) / 32, layer ) ;

         /* if the brick hit is on the extreme right */
         if ( ( BallX + 10 ) / 32 == 19 )
            line ( MaxX, 0, MaxX, 50 ) ;  /* redraw right boundary */

         /* if the brick hit is on the extreme left */
         if ( ( BallX + 10 ) / 32 == 0 )
            line ( 0, 0, 0, 50 ) ;  /* redraw left boundary */

         /* if the brick hit is in the topmost layer */
         if ( layer == 0 )
            line ( 0, 0, MaxX, 0 ) ;  /* redraw top boundary */

         /* set appropriate array element to 1 to indicate absence of brick */
         bri[layer][ ( BallX + 10 ) / 32 ] = 1 ;

         BallY = BallY + 1 ;  /* update the y coordinate */
         dy = -dy ;  /* change the current direction of the ball */
         score += 10 ;  /* increment the score by 10 */
         gotoxy ( 16, 25 ) ;
         cout<< score;  /* display latest score */

         /* if the first brick is hit during a throw*/
      }


      /* if  ball reached the bottom */
      if ( BallY > 180 - 12 )
      {

         /* if paddle missed the ball */
         if ( BallX < Base1 - 20 || BallX > Base1 + 50 )
         {
            /* continue the decrement of the ball */
            while ( BallY < 177 )
            {
               /* erase the image of the ball at the old coordinates */
               putimage ( OldX, OldY, m1, XOR_PUT ) ;

               /* put the image of the ball at the new coordinates */
               putimage ( BallX, BallY, m1, XOR_PUT ) ;

               /* introduce delay for fewseconds */
               delay ( speed ) ;

               /* saveing current x and y coordinates of the ball */
               OldX = BallX ;
               OldY = BallY ;

               /* update ballx and bally to move the ball in correct direction */
               BallX = BallX + dx ;
               BallY = BallY + dy ;
            }

            chance-- ;  /* decrement the total number of chances */
            score -= 10 ;  /* decrement 10 points for each ball lost */
            gotoxy ( 16, 25 ) ;
            cout<< score;  /* display latest score */
				bell ( 1 ) ;
            /* erase one  of the available balls */
            if ( chance )
					putimage ( 515 + ( chance - 1 ) * 35 - 12 , MaxY - 10, m1, XOR_PUT );
            /* if the last ball is being played */
            if ( chance == 1 )
            {
               gotoxy ( 45, 25 ) ;
               cout<< "Last ball... careful!";
				}
            /* if all the balls are lost */
            if ( !chance )
            {
               gotoxy ( 45, 25 ) ;
               cout<<"Press any key to continue ...              " ;
               outtextxy ( MidX, MidY, "Better luck next time" ) ;
					bell ( 2 ) ;
               goto EndOfBricks;
            }
			}
         /* if ball is collected on paddle */
         bell ( 4 ) ;
         BallY = 180 - 12 ;  /* restore the y coordinate of ball */
         dy = -dy ;  /* move the ball upwards */
		}
      /* put the image of the ball at the old coordinates */
		putimage ( OldX, OldY, m1, OR_PUT ) ;
      /* erase the image of the ball at the old coordinates */
		putimage ( OldX, OldY, m1, XOR_PUT ) ;
      /* put the image of the ball at the upadted coordinates */
		putimage ( BallX, BallY, m1, XOR_PUT ) ;
      /* if all the bricks have been knockout */
      if ( score == 500 - ( ( 4 - chance ) * 20 ) )
      {
         outtextxy ( MidX, MidY, "Winner !!" ) ;
         bell ( 2 ) ;
         closegraph() ;
         goto EndOfBricks;
		}
      /* introduce delay for few seconds */
		delay ( speed ) ;
      /* if the key is pressed to move the paddle */
      if ( kbhit() )
      {
         /* interrupt issue to obtain the ascii and scan codes of key hit */
         ii.h.ah = 0 ;
         int86 ( 22, &ii, &oo ) ;

         /* put the image of the paddle at the old coordinates */
         putimage ( Base1, Base2, m2, OR_PUT ) ;

         /* erase the image of the paddle at the old coordinates */
         putimage ( Base1, Base2, m2, XOR_PUT ) ;

         /* if Esc key has been pressed */
         if ( oo.h.ah == 1 )
            goto EndOfBricks;

         /* right arrow key */
         if ( oo.h.ah == 75 )
            Base1 = Base1 - 25 ;

         /* left arrow key */
         if ( oo.h.ah == 77 )
            Base1= Base1 + 25 ;

         /* if paddle goes beyond left boundary */
         if ( Base1 < 0 )
            Base1 = 0 ;

         /* if paddle goes beyond right boundary */
         if ( Base1 > 589 )
            Base1 = 589 ;

         /* put the image of the paddle at the proper position */
         putimage ( Base1, Base2, m2, XOR_PUT ) ;
		}
	}
   EndOfBricks:
   cleardevice();
   closegraph();
   int gmode=DETECT,gdr=DETECT;
   initgraph(&gmode,&gdr,"C:/BC5/BGI");
	RefreshPrompt();
	showmouseptr();
}
/* This function creates the opening screen and
displyed instruction related to the game */
ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::screen()
{
	int i, j, lx = 0, ly = 0, ch ;
	int graphmode = CGAHI, graphdriver = CGA, level;
	rectangle(1,1,600,195);
	setbkcolor(0);
	/* set the textstyle for displaying instruction */
	changetextstyle ( DEFAULT_FONT, HORIZ_DIR, 0 ) ;
	outtextxy ( 150, 55, "         Instructions        " ) ;
	changetextstyle (3, HORIZ_DIR, 5 );
	outtextxy ( 130, 0, " B R I C K S" ) ;
	changetextstyle ( DEFAULT_FONT, HORIZ_DIR, 0 ) ;
	outtextxy ( 30, 68, "Use left and right arrow keys to move paddle." ) ;
	outtextxy ( 30, 88, "If you don't collect the ball on the paddle, you lose the ball." ) ;
	outtextxy ( 30, 108, "On loosing a ball you loose 20 points." ) ;
	outtextxy ( 30, 128, "On taking a brick you gain 5 points." ) ;
	changetextstyle(7, HORIZ_DIR, 3);
	outtextxy ( 100, 148, "Press any key to continue ..." ) ;
	bell ( 3 ) ;  /* ring music */
	fflush ( stdin ) ;
	closegraph();
	initgraph ( &graphdriver, &graphmode, "C:/BC5/BGI" ) ;
	rectangle(2,2,620,195);
	setbkcolor(0);
   /* display the main menu */
   while ( 1 )
	{
      changetextstyle(3,HORIZ_DIR,5);
      outtextxy ( 60, 8, "Options Available:" ) ;
      outtextxy ( 150, 55, "Play ( P )" ) ;
      outtextxy ( 150, 125, "Exit ( E )" ) ;

      ch = 0 ;

      /* continue untill you select the correct choice  */
      while ( ! ( ch == 'E' ||   ch == 'P' ) )
      {
         fflush ( stdin ) ;

         /* if a special key is hit, flush the keyboard buffer */
         if ( ( ch = getch() ) == 0 )
            getch() ;
         else
            ch = toupper ( ch ) ;    /* store the uppercase of the choice made*/
		}
      if ( ch == 'P' )
         break ;
      if (ch == 'E')
			exit(1);
	}
   setviewport ( 1, 125 - 12, MaxX - 1, MaxY - 1, 1 ) ;
   clearviewport() ;
   closegraph();
   initgraph ( &graphdriver, &graphmode, "C:/BC5/BGI" ) ;
   rectangle(2,2,620,195);
	setbkcolor(0);
   /* display menu for the diffrent levels */
   changetextstyle(3,HORIZ_DIR,3);
   outtextxy ( 60, 8, "Select the level for play:" ) ;
   outtextxy ( 150,50, "Slow ( S )" ) ;
   outtextxy ( 150, 100, "Medium ( M )" ) ;
	outtextxy ( 150, 150, "Fast ( F )" ) ;
   /* accept user's choice */
   fflush ( stdin ) ;
	if ((ch=getch())==0)
	getch() ;
	clearviewport() ;
   /* return the choice selected by the user */
   return ( ch ) ;
}
/* This function draws bricks at the start of the game.There are four layers of the bricks  */
ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::bricks()
{
	int i, j, lx = 0, ly = 0 ;
   for ( i = 0 ; i < 5 ; i++ )  /* 5 rows */
   {
      for ( j = 0 ; j < 30 ; j++ )  /* 20 columns */
      {
         /* draw a brick at appropriate coordinates */
         rectangle ( lx, ly, lx + 20, ly + 7 ) ;
			floodfill ( lx + 1, ly + 1, 2 ) ;
         lx = lx + 32 ;
		}
      lx = 0 ;
      ly = ly + 10 ;
   }
}
/* This function erases the  brick which is knock by the ball */
ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::delbrick ( int b, int l )
{
	/* b - brick number, l - layer */
   setcolor ( BLACK ) ;
   rectangle ( b * 32, l * 10, ( b * 32 ) + 20 , ( l * 10 ) + 7 );
   rectangle ( b * 32 + 1, l * 10, ( b * 32 ) + 20 - 1, ( l * 10 ) + 7 - 1 );
   rectangle ( b * 32 + 2, l * 10, ( b * 32 ) + 20 - 2, ( l * 10 ) + 7 - 2 );
   rectangle ( b * 32 + 3, l * 10, ( b * 32 ) + 20 - 3, ( l * 10 ) + 7 - 3 );
   rectangle ( b * 32 + 4, l * 10, ( b * 32 ) + 20 - 4, ( l * 10 ) + 7 - 4 );
   rectangle ( b * 32 + 5, l * 10, ( b * 32 ) + 20 - 5, ( l * 10 ) + 7 - 5 );
   rectangle ( b * 32 + 6, l * 10, ( b * 32 ) + 20 - 6, ( l * 10 ) + 7 - 6 );
   setcolor ( CGA_YELLOW ) ;
}
/* plays different types of music */
ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::bell ( int m_no )
{
   /* natural frequencies of 7 notes */
   float wave[6] = { 120.81, 136.83, 144.81, 154.61, 216, 240 } ;
	int n, i ;
   switch ( m_no )
   {
      case 1 :
         for ( i = 0 ; i < 6 ; i++ )
         {
            sound ( wave[i] * 1 ) ;
            delay ( 30 ) ;
         }
         nosound() ;
         break ;

      case 2 :
         for ( i = 0 ; i < 15 ; i++ )
         {
            n = random ( 6 ) ;
            sound ( wave[n] * 2 ) ;
            delay ( 100 ) ;
         }
         nosound() ;
         break ;

      case 3 :
         while ( !kbhit() )
         {
            n = random ( 6 ) ;
            sound ( wave[n] * 2 ) ;
            delay ( 100 ) ;
         }
         nosound() ;

         /* flush the keyboard buffer */
         if ( getch() == 0 )
            getch() ;

         break ;

      case 4 :
         for ( i = 5 ; i >= 0 ; i-- )
         {
            sound ( wave[i] * 4 ) ;
            delay ( 15 ) ;
         }
         nosound() ;
         break ;

		case 5 :
         sound ( wave[2] * 5 ) ;
         delay ( 50 ) ;
         nosound() ;
   }
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::Initialize(void)
{
	int xasp, yasp;         /* Used to read the aspect ratio*/
	closegraph();
	GraphMode = CGAHI;
	GraphDriver = CGA;       /* Request auto-detection   */
	initgraph( &GraphMode, &GraphDriver, "C:/BC5/BGI" );
	ErrorCode = graphresult();      /* Read result of initialization*/
	if( ErrorCode != grOk )
	{      /* Error occured during init   */
		printf(" Graphics System Error: %s", grapherrormsg( ErrorCode ) );
		getch();
		exit( 1 );
	}
	getpalette( &palette );      /* Read the palette from board   */
	MaxColors = getmaxcolor() + 1;   /* Read maximum number of colors*/
	MaxXX = getmaxx();
	MaxYY = getmaxy();         /* Read size of screen      */
	getaspectratio( &xasp, &yasp );   /* read the hardware aspect   */
	AspectRatio = (double)xasp / (double)yasp; /* Get correction factor   */
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::SayGoodbye(void)
{
	struct viewporttype viewinfo;    /* Structure to read viewport   */
	int h, w;
	MainWindow( "== Finale ==" );
	getviewsettings( &viewinfo );    /* Read viewport settings   */
	changetextstyle( TRIPLEX_FONT, HORIZ_DIR, 4 );
	settextjustify( CENTER_TEXT, CENTER_TEXT );
	h = viewinfo.bottom - viewinfo.top;
	w = viewinfo.right  - viewinfo.left;
	outtextxy( w/2, h/2, "That's all, folks!" );
	StatusLine("Press any key to EXIT");
	getch();
	cleardevice();         /* Clear the graphics screen   */
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::MainWindow( char *header )
{
	int height;
	cleardevice();         /* Clear graphics screen   */
	setcolor( MaxColors - 1 );      /* Set current color to white   */
	setviewport( 0, 0, MaxXX, MaxYY, 1 );   /* Open port to full screen   */
	height = textheight( "H" );           /* Get basic text height        */
	changetextstyle( DEFAULT_FONT, HORIZ_DIR, 1 );
	settextjustify( CENTER_TEXT, TOP_TEXT );
	outtextxy( MaxXX/2, 2, header );
	setviewport( 0, height+4, MaxXX, MaxYY-(height+4), 1 );
	DrawBorder();
	setviewport( 1, height+5, MaxXX-1, MaxYY-(height+5), 1 );
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::StatusLine( char *msg )
{
	int height;
	setviewport( 0, 0, MaxXX, MaxYY, 1 );   /* Open port to full screen   */
	setcolor( MaxColors - 1 );      /* Set current color to white   */
	changetextstyle( DEFAULT_FONT, HORIZ_DIR, 1 );
	settextjustify( CENTER_TEXT, TOP_TEXT );
	setlinestyle( SOLID_LINE, 0, NORM_WIDTH );
	setfillstyle( EMPTY_FILL, 0 );
	height = textheight( "H" );           /* Detemine current height      */
	bar( 0, MaxYY-(height+4), MaxXX, MaxYY );
	rectangle( 0, MaxYY-(height+4), MaxXX, MaxYY );
	outtextxy( MaxXX/2, MaxYY-(height+2), msg );
	setviewport( 1, height+5, MaxXX-1, MaxYY-(height+5), 1 );
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::DrawBorder(void)
{
	struct viewporttype vp;
	setcolor( MaxColors - 1 );      /* Set current color to white   */
	setlinestyle( SOLID_LINE, 0, NORM_WIDTH );
	getviewsettings( &vp );
	rectangle( 0, 0, vp.right-vp.left, vp.bottom-vp.top );
}
void ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::changetextstyle(int font, int direction, int charsize)
{
	int ErrorCode;
	graphresult();         /* clear error code      */
	settextstyle(font, direction, charsize);
	ErrorCode = graphresult();      /* check result       */
	if( ErrorCode != grOk ){      /* if error occured      */
		closegraph();
		printf(" Graphics System Error: %s ", grapherrormsg( ErrorCode ) );
		getch();
		exit(1);
	}
}
ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::mainscreen()
{
	int maxx, maxy, in, area;
	// get maximum x, y coordinates of the screen
	maxx = getmaxx();
	maxy = getmaxy();
	// setbkcolor sets the current background color using the palette
	setbkcolor(BLACK);
	// Draws a rectangle (graphics mode)
	rectangle(0, 0, maxx, maxy);
	// sets the line style and text justification in screen
	changetextstyle(1, HORIZ_DIR, 3);
	outtextxy(220, 20, "ConsoleOS");
	changetextstyle(1, HORIZ_DIR, 9);
	outtextxy(240,20,"BRICKS!");
	changetextstyle(7, HORIZ_DIR, 3);
	bell(3);
	outtextxy(110, 150, "Press any key to continue...");
   // Flushes the standard input device
	fflush(stdin);

}
void ConsoleOS_Operating_System_Core::GAMEAPPS::BRICKAPP::showmouseptr()
{
	i.x.ax = 1;
	int86(0x33, &i, &o);
}

////////////////////////////////////////
//INDENTED
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::file()
{
	cleardevice();
	setbkcolor(0);
   setfillstyle(1,BLUE);
   bar3d(10,10,310,230,5,5);
   setfillstyle(1,LIGHTBLUE);
   bar3d(10,250,310,470,5,5);
   setfillstyle(1,GREEN);
   bar3d(330,10,630,470,5,5);
   settextstyle(3,0,7);
   outtextxy(60,35,"Create");
   outtextxy(100,105,"New");
   outtextxy(100,270,"Open");
   outtextxy(55,340,"Existing");
   outtextxy(410,150,"Text");
   outtextxy(420,200,"Edit");
   outtextxy(400,250,"Apps");
}
int ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::clickwithin(int sx,int sy,int ex,int ey)
{
	if(x>=sx && y>=sy && x<=ex && y<=ey && click==1)
   return 1;
   else
   return 0;
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::mouse_option_selection()
{
   while(1)
   {
      mouseposi(x,y,click);
		if(clickwithin(10,10,310,230))
	   {
      	newfile();
      	break;
      }
	   if(clickwithin(10,250,310,470))
	   {
      	openfile();
	   	break;
      }
      if(clickwithin(330,10,630,470))
	   {
      	file_apps();
   		break;
      }
   }
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::cross(int x,int y)
{
	setfillstyle(1,RED);
   bar(x,y,x+20,y+20);
   setcolor(WHITE);
   line(x,y,x+20,y+20);
   line(x,y+20,x+20,y);
   setcolor(BROWN);
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::newfile()
{
	cleardevice();
   cross(619,1);
   int yc=4;
   setcolor(BROWN);
   rectangle(20,20,620,460);
   settextstyle(8,0,2);
   outtextxy(20,15,"Enter text. Your file will be saved as 'COSText.txt'");
   remove("COSText.txt");
   while(1)
   {
		mouseposi(x,y,click);
      if(clickwithin(610,1,639,30)==1)
      break;
      if(y>41)
      {
         gotoxy(4,yc);
         yc++;
      	char TEXTED[200];
 			gets(TEXTED);
		   TEXTED[strlen(TEXTED)]='\n';
		   ofstream file("COSText.txt",ios::app);
		   file.write((char*)&TEXTED,strlen(TEXTED));
		   file.close();
         *TEXTED=NULL;
      }
   }
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::openfile()
{
	cleardevice();
   cross(619,1);
   int yc=4,once=1;
   setcolor(BROWN);
   rectangle(20,20,620,460);
   settextstyle(8,0,2);
   ifstream file("COSText.txt");
   outtextxy(20,15,"Reading 'COSText.txt'");
   while(1)
   {
		mouseposi(x,y,click);
      if(clickwithin(610,1,639,30)==1)
      break;
      if(once--)
      {
		   char TEXTED[200];
         gotoxy(4,yc);
         ifstream file("COSText.txt");
         file.read((char*)&TEXTED,sizeof(TEXTED));
         file.close();
         cout<<TEXTED;
         *TEXTED=NULL;
      }
   }
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::filelogo(int x, int y)
{
	setcolor(YELLOW);
   line(x+20,y,x+100,y);    //top line
   line(x,y+20,x,y+150);    //1st standing line
   line(x+20,y,x,y+20);   //slanting line
   line(x+100,y,x+100,y+150);   //2nd standing line
   line(x,y+150,x+100,y+150);   //bottom line
   setfillstyle(1,YELLOW);
   floodfill(x+50,y+50,YELLOW);
   setcolor(BROWN);
   line(x+15,y+25,x+85,y+25);   //page lines
   line(x+15,y+55,x+85,y+55);
   line(x+15,y+85,x+85,y+85);
   line(x+15,y+115,x+85,y+115);
   setcolor(WHITE);
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::splash()
   {
      setbkcolor(BROWN);
      settextstyle(0,0,5);
      outtextxy(50,200,"Text Edit");
      filelogo(480,150);
      delay(1500);
      cleardevice();
   }
int ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::clickwithinbar3d(int sx,int sy,int ex,int ey,int ext1,int ext2)
{
	if(x>=sx && y>=sy && x<=ex && y<=ey && click==2)
   return 1;
   else
   return 0;
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::file_apps()
{
	cleardevice();
   char txt[200];
   ifstream file("COSText.txt");
   file.read((char*)&txt,sizeof(txt));
   file.close();
   if(txt[0]=='\0')
   {
   	cout<<"No Text File Detected!";
   }
   else
   {
      setfillstyle(1,GREEN);

      bar3d(6,10,122,235,5,5);
      bar3d(133+1,10,249+1,235,5,5);
      bar3d(259+3,10,375+3,235,5,5);
      bar3d(390,10,501+5,235,5,5);
      bar3d(511+7,10,627+7,235,5,5);

      bar3d(6,245,122,470,5,5);
      bar3d(133+1,245,249+1,470,5,5);
      bar3d(259+3,245,375+3,470,5,5);
      bar3d(385+5,245,501+5,470,5,5);
      bar3d(511+7,245,627+7,470,5,5);

      settextstyle(8,0,1);

      outtextxy(19,20,"Count");
      outtextxy(19,40,"all");
      outtextxy(19,60,"different");
      outtextxy(19,80,"types");
      outtextxy(19,100,"of");
      outtextxy(19,120,"chars.");

      outtextxy(147,20,"Count");
      outtextxy(147,40,"words");
      outtextxy(147,60,"starting");
      outtextxy(147,80,"with");
      outtextxy(147,100,"a ");
      outtextxy(147,120,"definable");
      outtextxy(147,140,"char.");

      outtextxy(273,20,"Count");
      outtextxy(273,40,"words");
      outtextxy(273,60,"ending");
      outtextxy(273,80,"with");
      outtextxy(273,100,"a ");
      outtextxy(273,120,"definable");
      outtextxy(273,140,"char.");

      outtextxy(403,20,"Count");
      outtextxy(403,40,"sentences");
      outtextxy(403,60,"starting");
      outtextxy(403,80,"with");
      outtextxy(403,100,"a ");
      outtextxy(403,120,"definable");
      outtextxy(403,140,"char.");

      outtextxy(531,20,"Count");
      outtextxy(531,40,"sentences");
      outtextxy(531,60,"ending");
      outtextxy(531,80,"with");
      outtextxy(531,100,"a ");
      outtextxy(531,120,"definable");
      outtextxy(531,140,"char.");

      outtextxy(19,255,"Count");
      outtextxy(19,275,"number");
      outtextxy(19,295,"of");
      outtextxy(19,315,"definable");
      outtextxy(19,335,"chars.");

      outtextxy(147,255,"Count");
      outtextxy(147,275,"number");
      outtextxy(147,295,"of");
      outtextxy(147,315,"single");
      outtextxy(147,335,"lettered");
      outtextxy(147,355,"words.");

      outtextxy(273,255,"Count");
      outtextxy(273,275,"definable");
      outtextxy(273,295,"number");
      outtextxy(273,315,"length");
      outtextxy(273,335,"words");

      outtextxy(403,255,"Revert");
      outtextxy(403,275,"Entire");
      outtextxy(403,295,"String.");

      outtextxy(531,255,"Revert");
      outtextxy(531,275,"Each");
      outtextxy(531,295,"Word.");
      int te;
      while(1)
      {
         mouseposi(x,y,click);
         if(clickwithinbar3d(6,10,122,235,5,5))
         {
         	te='1';
         	break;
         }
         if(clickwithinbar3d(133+1,10,249+1,235,5,5))
         {
         	te='2';
            break;
         }
         if(clickwithinbar3d(259+3,10,375+3,235,5,5))
         {
         	te='3';
            break;
         }
         if(clickwithinbar3d(390,10,501+5,235,5,5))
         {
         	te='4';
            break;
         }
         if(clickwithinbar3d(511+7,10,627+7,235,5,5))
         {
         	te='5';
            break;
         }

         if(clickwithinbar3d(6,245,122,470,5,5))
         {
         	te='6';
            break;
         }
         if(clickwithinbar3d(133+1,245,249+1,470,5,5))
         {
         	te='7';
            break;
         }
         if(clickwithinbar3d(259+3,245,375+3,470,5,5))
         {
         	te='8';
            break;
         }
         if(clickwithinbar3d(385+5,245,501+5,470,5,5))
         {
         	te='9';
            break;
         }
         if(clickwithinbar3d(511+7,245,627+7,470,5,5))
         {
         	te='0';
            break;
         }
      }
      cleardevice();
	  	if(te=='1')
	  	{
			for(i=0;txt[i]!='\0';i++)
			{
				if(isupper(txt[i]))
				upp++;
				else if(islower(txt[i]))
				low++;
				else if(isdigit(txt[i]))
				dig++;
				else
				spl++;
			}
			for(i=0;txt[i]!='\0';i++)
			{
				if(txt[i]=='A' || txt[i]=='a' || txt[i]=='I' || txt[i]=='i' || txt[i]=='E' || txt[i]=='e' || txt[i]=='O' || txt[i]=='o' || txt[i]=='U' || txt[i]=='u')
				vow++;
				else if(txt[i]=='B' || txt[i]=='b' || txt[i]=='C' || txt[i]=='c' || txt[i]=='D' || txt[i]=='d' || txt[i]=='F' || txt[i]=='f' || txt[i]=='G' || txt[i]=='g' || txt[i]=='H' || txt[i]=='h' || txt[i]=='J' || txt[i]=='j' || txt[i]=='K' || txt[i]=='k' || txt[i]=='L' || txt[i]=='l' || txt[i]=='M' || txt[i]=='m' || txt[i]=='N' || txt[i]=='n' || txt[i]=='P' || txt[i]=='p' || txt[i]=='Q' || txt[i]=='q' || txt[i]=='R' || txt[i]=='r' || txt[i]=='S' || txt[i]=='s' || txt[i]=='T' || txt[i]=='t' || txt[i]=='V' || txt[i]=='v' || txt[i]=='W' || txt[i]=='w' || txt[i]=='X' || txt[i]=='x' || txt[i]=='Y' || txt[i]=='y' || txt[i]=='Z' || txt[i]=='z')
				con++;
			}
			for(i=0;txt[i]!='\0';i++)
			{
				if(txt[i]==' ')
				spc++;
			}
			wrd=spc+1;
			cout<<"\n\nYour choice was \"1. Count no. of Uppercase, Lowercase, Vowels, Consonants, Digits and Special Characters.\"\n\nUpperCase Characters = "<<upp<<"\nLowerCase Characters = "<<low<<"\nVowels = "<<vow<<"\nConsonants = "<<con<<"\nDigits = "<<dig<<"\nSpecial Characters = "<<spl<<"\nSpaces = "<<spc<<"\nWords = "<<wrd;
			cout<<"\nYour Text was: "<<txt;
			vow=con=dig=spl=upp=low=0;
		}
		else if(te=='2')
		{
			def=0;
			cout<<"\n\nYour choice was \"2. Count no. of words starting with a definable character.\"\n\nEnter the character(single) you wish to look for before some words(Search is case sensitive): ";
			gets(de);
			if(de[0]==txt[0])
			def++;
			for(i=0;txt[i]!='\0';i++)
			{
				if(txt[i]==' ')
				{
					if(txt[i+1]==de[0])
					def++;
				}
			}
			cout<<"No. of sentences starting with \""<<de[0]<<"\" are "<<def;
		}
		else if(te=='3')
		{
			def=0;
			cout<<"\n\nYour choice was \"3. Count no. of words ending with a definable character.\"\n\nEnter the character(single) you wish to look for after some words(Search is case sensitive): ";
			gets(de);
			if(de[0]==txt[(strlen(txt))-2])
			def++;
			for(i=0;txt[i]!='\0';i++)
			{
				if(txt[i]==' ')
				{
					if(txt[i-1]==de[0])
					def++;
				}
			}
			cout<<"No. of words ending with \""<<de[0]<<"\" are "<<def;
		}
		else if(te=='4')
		{
			cout<<"\n\nYour choice was \"4. Count no. of sentences starting with a definable character.\"\n\nEnter the character(single) you wish to look for before some sentences(Search is case sensitive): ";
			def=0;
			gets(de);
			if(de[0]==txt[0])
			def++;
			for(i=0;txt[i]!='\0';i++)
			{
				if(txt[i]=='.')
				{
					if(txt[i+2]==de[0])
					def++;
				}
			}
			cout<<"No. of sentences starting with \""<<de[0]<<"\" are "<<def;
		}
		else if(te=='5')
		{
			cout<<"\n\nYour choice was \"5. Count no. of sentences ending with a definable character.\"\n\nEnter the character(single) you wish to look for after some sentences(Search is case sensitive): ";
			def=0;
			gets(de);
			if(de[0]==txt[(strlen(txt))-2])
			def++;
			for(i=0;txt[i]!='\0';i++)
			{
				if(txt[i]=='.' || txt[i]=='?' || txt[i]=='!' || txt[i]==':')
				{
					if(txt[i-1]==de[0])
					def++;
				}
			}
			cout<<"No. of sentences starting with \""<<de[0]<<"\" are "<<def;
		}
		else if(te=='6')
		{
			char a;
			cout<<"Enter character to be searched: ";
			cin>>a;
			int chk=0;
			for(int i=0;txt[i]!='\0';i++)
			{
				if(a==txt[i])
				{
					cout<<"The char is at "<<(i+1)<<endl;
					chk++;
				}
			}
			if(chk==0)
			cout<<"Char not found! HAHAHAHAHAHA!!!";
		}
		else if(te=='9')
		{
			cout<<"\n\nYour Chose to \"9. Revert entire string.\"\n\n";
			apt=strlen(txt);
			for(apt;apt>=0;apt--)
			{
				cout<<txt[apt];
			}
		}
		else if(te=='0')
		{
			cout<<"You chose to \"10. Revert each word in a string individually.\"\n\n";
			int strni,strnk=0;
			char word[101];
			strcat(txt," ");
			for(strni=0;txt[strni]!='\0';strni++)
			{
				if(txt[strni]!=' ')
				{
					word[strnk]=txt[strni];
					strnk++;
				}
				else
  				{
					while(strnk>0)
					{
						cout<<word[--strnk];
					}
					cout<<txt[strni];
				}
			}
		}
      gotoxy(10,20);
      cout<<"Press any key to continue.";
      getch();
      RefreshPrompt();
	}
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::mouseposi(int &xpos,int &ypos,int &click)
{
	in.x.ax=3;
   int86(51,&in,&out);
   click=out.x.bx;
   xpos=out.x.cx;
   ypos=out.x.dx;
}
int ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::setposi(int &xpos,int &ypos)
{
	in.x.ax=4;
	in.x.cx=xpos;
	in.x.dx=ypos;
	int86(51,&in,&out);
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::initialization()
{
   x=320,y=240;
	setposi(x,y);
	callmouse();
}
void ConsoleOS_Operating_System_Core::APPAPPS::TEXTAPP::TEXTMAIN()
{
	int a=DETECT,b=DETECT;
   initgraph(&a,&b,"C:/BC5/BGI");
   initialization();
   splash();
   file();
   mouse_option_selection();
}


void ConsoleOS_Operating_System_Core::COSAPPS::ABOUTAPP::aboutdata()
{
   setbkcolor(BLACK);
	cleardevice();
   char txt[1000];
   ifstream f("FILES//about.txt");
   f.read((char*)&txt,sizeof(txt));
   gotoxy(1,1);
   cout<<txt;
   f.close();
}
void ConsoleOS_Operating_System_Core::COSAPPS::ABOUTAPP::ABOUTMAIN()
{
	splash();
   delay(1500);
   aboutdata();
   gotoxy(1,24);
   cout<<"Slam the KB to move on!";
   getch();
   RefreshPrompt();
}
void ConsoleOS_Operating_System_Core::COSAPPS::ABOUTAPP::splash()
{
   cleardevice();
	setbkcolor(BLUE);
   setcolor(WHITE);
   settextstyle(0,0,2);
   outtextxy(60,200,"ABOUT");
   settextstyle(0,0,8);
   outtextxy(60,250,"ConsoleOS");
}

int ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::clickwithincircle(int cx,int cy,int cr)
{
	if(x>=(cx-cr) && y>=(cy-cr) && x<=(cx+cr) && y<=(cy+cr) && click==1)
   return 1;
   else
   return 0;
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::mouseposi(int &xpos,int &ypos,int &click)
{
	in.x.ax=3;
   int86(51,&in,&out);
   click=out.x.bx;
   xpos=out.x.cx;
   ypos=out.x.dx;
}
int ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::setposi(int &xpos,int &ypos)
{
	in.x.ax=4;
	in.x.cx=xpos;
	in.x.dx=ypos;
	int86(51,&in,&out);
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::initialization()
{
   x=320,y=240;
	setposi(x,y);
	callmouse();
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::TEAMMAIN()
{
	initialization();
   splash();
   mem=9;
   memberselectionloop();
   cleardevice();
   RefreshPrompt();
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::splash()
{
	setbkcolor(RED);
   cleardevice();
   setcolor(WHITE);
   settextstyle(0,0,3);
   outtextxy(40,200,"TEAM");
	settextstyle(0,0,7);
   outtextxy(40,250,"ConsoleOS");
   delay(1500);

}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::members()
{
	setbkcolor(BLACK);
   cleardevice();

   setcolor(WHITE);       //BKP
   setfillstyle(1,WHITE);
   circle(100,160,98);
   floodfill(100,160,WHITE);

   setcolor(RED);         //JB
   setfillstyle(1,RED);
   circle(300,160,98);
   floodfill(300,160,RED);

   setcolor(BROWN);       //SG
   setfillstyle(1,BROWN);
   circle(500,160,98);
   floodfill(500,160,BROWN);

   setcolor(LIGHTRED);    //SaG
   setfillstyle(1,LIGHTRED);
   circle(200,360,98);
   floodfill(200,360,LIGHTRED);

   setcolor(GREEN);			//SB
   setfillstyle(1,GREEN);
   circle(400,360,98);
   floodfill(400,360,GREEN);

   setcolor(BLACK);
   settextstyle(0,0,1);
   outtextxy(90,160,"BKP");
   outtextxy(290,160,"JB");
   outtextxy(490,160,"SG");
   outtextxy(190,360,"SG");
   outtextxy(390,360,"SB");
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::cross(int x,int y)
{
	setfillstyle(1,RED);
   bar(x,y,x+20,y+20);
   setcolor(WHITE);
   line(x,y,x+20,y+20);
   line(x,y+20,x+20,y);
   setcolor(BROWN);
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::memberselectionloop()
{
	while(mem!=0)
   {
   	memberselection();
   }
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::memberselection()
{
   members();
   cross(619,1);
	while(1)
	{
   	mouseposi(x,y,click);
      if(clickwithincircle(100,160,98))
      {
      	mem=1;
         break;
      }
      else if(clickwithincircle(300,160,98))
      {
      	mem=2;
         break;
      }
      else if(clickwithincircle(500,160,98))
      {
      	mem=3;
         break;
      }
      else if(clickwithincircle(200,360,98))
      {
      	mem=4;
         break;
      }
      else if(clickwithincircle(400,360,98))
      {
      	mem=5;
         break;
      }
      else if(clickwithincircle(630,10,20))
      {
      	mem=0;
         break;
      }
   }
   if(mem==1)
   BKP();
   if(mem==2)
	JB();
   if(mem==3)
   SG();
   if(mem==4)
   SaG();
   if(mem==5)
   SB();
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::BKP()
{
	cleardevice();
   char txt1[500];
   ifstream f1("FILES//BKP.txt");
   f1.read((char*)&txt1,sizeof(txt1));
   gotoxy(1,1);
   cout<<txt1;
   f1.close();
   gotoxy(1,25);
   cout<<"BANG your KB to GTFO!";
   getch();
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::JB()
{
   cleardevice();
   char txt2[500];
   ifstream f2("FILES//JB.txt");
   f2.read((char*)&txt2,sizeof(txt2));
   gotoxy(1,1);
   cout<<txt2;
   f2.close();
   gotoxy(1,25);
   cout<<"BANG your KB to GTFO!";
   getch();
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::SG()
{
	cleardevice();
   char txt3[500];
   ifstream f3("FILES//SG.txt");
   f3.read((char*)&txt3,sizeof(txt3));
   gotoxy(1,1);
   cout<<txt3;
   f3.close();
   gotoxy(1,25);
   cout<<"BANG your KB to GTFO!";
   getch();
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::SaG()
{
	cleardevice();
   char txt4[500];
   ifstream f4("FILES//SaG.txt");
   f4.read((char*)&txt4,sizeof(txt4));
   gotoxy(1,1);
   cout<<txt4;
   f4.close();
   gotoxy(1,25);
   cout<<"BANG your KB to GTFO!";
   getch();
}
void ConsoleOS_Operating_System_Core::COSAPPS::TEAMAPP::SB()
{
	cleardevice();
   char txt5[500];
   ifstream f5("FILES//SB.txt");
   f5.read((char*)&txt5,sizeof(txt5));
   gotoxy(1,1);
   cout<<txt5;
   f5.close();
   gotoxy(1,25);
   cout<<"BANG your KB to GTFO!";
   getch();
}


void ConsoleOS_Operating_System_Core::COSAPPS::REPOAPP::logo()
{
   setcolor(DARKGRAY);
   //RIGHT
	line(400,100,450,100);
   line(400,100,350,200);
   line(350,200,400,200);
   line(350,200,400,300);
   line(450,100,400,200);
   line(400,200,450,300);
   line(400,300,450,300);
   //LEFT
   line(500,100,550,100);
   line(500,100,550,200);
   line(550,100,600,200);
   line(550,200,600,200);
   line(550,200,500,300);
   line(500,300,550,300);
   line(600,200,550,300);
   setfillstyle(1,BLUE);
   floodfill(400,150,DARKGRAY);
   setfillstyle(1,GREEN);
   floodfill(400,250,DARKGRAY);
   setfillstyle(1,YELLOW);
   floodfill(550,150,DARKGRAY);
   setfillstyle(1,RED);
   floodfill(550,250,DARKGRAY);

   setcolor(WHITE);
}
void ConsoleOS_Operating_System_Core::COSAPPS::REPOAPP::repodata()
{
   setbkcolor(BLACK);
	cleardevice();
   char txt[1000];
   ifstream f("FILES//repo.txt");
   f.read((char*)&txt,sizeof(txt));
   cout<<txt;
   logo();
   f.close();
}
void ConsoleOS_Operating_System_Core::COSAPPS::REPOAPP::REPOMAIN()
{
	splash();
   delay(1500);
   repodata();
   gotoxy(1,24);
   cout<<"Shell the KB to go ahead!";
   getch();
   cleardevice();
   RefreshPrompt();
}
void ConsoleOS_Operating_System_Core::COSAPPS::REPOAPP::splash()
{
   cleardevice();
	setbkcolor(GREEN);
   settextstyle(0,0,2);
   outtextxy(40,200,"ConsoleOS");
   settextstyle(0,0,7);
   outtextxy(40,250,"REPOSITORY");
}

void ConsoleOS_Operating_System_Core::XTRASAPPS::LCAPP::entry()
{
   like=0;
   sm=0;
   sure='y';
   gotoxy(1,1);
	cout<<"Welcome to the LOVE CALCULATOR!!!\n\nUse it for a really efficient HEADACHE!!!\n\n\n";
		while(sure=='Y' || sure=='y')
   	{
         cout<<"\n\nEnter first name of first partner(All UPPERCASE): ";
			cin>>name1;
			cout<<"\nEnter gender of first partner(M/F): ";
     		cin>>gen1;
			cout<<"\nEnter first name of second partner(All UPPERCASE): ";
  	   	cin>>name2;
  	   	cout<<"\nEnter gender of second partner(M/F): ";
     		cin>>gen2;
			if(gen1==gen2 && gen2=='M')
			{
        		cout<<"\nWhat!!! You are calculating GAY love out here? Cmon! You serious?(Y/N): ";
         	cin>>sure;
			}
      	else if(gen1==gen2 && gen2=='F')
			{
       		cout<<"\nWhat!!! You are calculating LESBIAN love out here? Cmon! You serious?(Y/N): ";
				cin>>sure;
      	}
      	cout<<"\nDo you want to change data?(Y/N): ";
      	cin>>sure;
		}
   	nml1=strlen(name1);              //nml=name length     nmt=name length total
   	nml2=strlen(name2);              //lr==loop rough      sm=same   rp=rough percentage
		cleardevice();
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::LCAPP::accuracyselection()
{
	setfillstyle(1,GREEN);
   bar3d(10,100,210,340,5,5);
	setfillstyle(1,YELLOW);
   bar3d(220,100,430,340,5,5);
	setfillstyle(1,RED);
   bar3d(440,100,650,340,5,5);
   settextstyle(0,0,1);
   outtextxy(100,220,"LOW");
   outtextxy(310,220,"MEDIUM");
   outtextxy(530,220,"HIGH");
   while(1)
   {
   	mouseposi(x,y,click);
      if(clickwithinbar3d(10,100,210,340,5,5))
      {
      	a=1;
         break;
      }
      if(clickwithinbar3d(220,100,430,340,5,5))
      {
      	a=2;
         break;
      }
      if(clickwithinbar3d(440,100,650,340,5,5))
	   {
         a=3;
         break;
      }
   }
}
int ConsoleOS_Operating_System_Core::XTRASAPPS::LCAPP::clickwithinbar3d(int sx,int sy,int ex,int ey,int ext1,int ext2)
{
	if(x>=sx && y>=sy && x<=ex && y<=ey && click==1)
   return 1;
   else
   return 0;
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::LCAPP::mouseposi(int &xpos,int &ypos,int &click)
{
	in.x.ax=3;
   int86(51,&in,&out);
   click=out.x.bx;
   xpos=out.x.cx;
   ypos=out.x.dx;
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::LCAPP::calculation()
{
	if(a==1)
 		{
			cleardevice();
   		for(lr1=0;lr1<nml1;lr1++)
      	{
				for(lr2=0;lr2<nml2;lr2++)
				{
         		if(name1[lr1]==name2[lr2])
					{
            		sm++;
						break;
            	}
				}
      	}
			nmt=(nml1+nml2)/2;
      	rp=(sm/nmt)*100;
			cout<<"Well, you guys are "<<rp<<"% in LoVe!!!";
   	}
		else if(a==2)
		{
      	cleardevice();
   		cout<<"\nEnter D.O.B for "<<name1<<" (dd mm yyyy): ";
			cin>>dob1>>mob1>>yob1;
   		cout<<"\nEnter D.O.B for "<<name2<<" (dd mm yyyy): ";
			cin>>dob2>>mob2>>yob2;
      	dobt1=dob1+mob1+yob1;
			dobt2=dob2+mob2+yob2;
			dobr=dobt1-dobt2;
      	dobr=sqrt(dobr*dobr);
   		for(lr1=0;lr1<nml1;lr1++)
			{
      		for(lr2=0;lr2<nml2;lr2++)
         	{
         		if(name1[lr1]==name2[lr2])
					{
            		sm++;
						break;
            	}
				}
      	}
      	nmt=(nml1+nml2)/2;
			nmt=dobr+nmt;
			sm=dobr+sm;
      	rp=(sm/nmt)*100;
      	cout<<"Well, you guys are "<<rp<<"% in LoVe!!!";
   	}
		else if(a==3)
   	{
			cleardevice();
			cout<<"\nEnter D.O.B for "<<name1<<" (dd mm yyyy): ";
			cin>>dob1>>mob1>>yob1;
   		cout<<"\nEnter D.O.B for "<<name2<<" (dd mm yyyy): ";
			cin>>dob2>>mob2>>yob2;
      	dobt1=dob1+mob1+yob1;
			dobt2=dob2+mob2+yob2;
      	dobr=dobt1-dobt2;
      	dobr=sqrt(dobr*dobr);
   		for(lr1=0;lr1<nml1;lr1++)
			{
      		for(lr2=0;lr2<nml2;lr2++)
				{
         		if(name1[lr1]==name2[lr2])
					{
						sm++;
               	break;
            	}
				}
      	}
      	dob=dob1-dob2;
      	dob=sqrt(dob*dob);
			nmt=(nml1+nml2)/2;
			nmt=dobr+nmt+dob;
			sm=dobr+sm+dob;
      	rp=(sm/nmt)*100;
			cout<<"Well, you guys are "<<rp<<"% in LoVe!!!";
   	}
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::LCAPP::LCMAIN()
{
	cleardevice();
   entry();
   accuracyselection();
   calculation();
   gotoxy(1,25);
   cout<<"Give up your false hopes and hit the KB.";
   getch();
   RefreshPrompt();

}







void ConsoleOS_Operating_System_Core::XTRASAPPS::BLOOPERAPP::blooperdata()
{
   setbkcolor(BLACK);
	cleardevice();
   char txt[1000];
   ifstream f("FILES//blooper.txt");
   f.read((char*)&txt,sizeof(txt));
   cout<<txt;
   f.close();
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::BLOOPERAPP::BLOOMAIN()
{
	splash();
   delay(1500);
   blooperdata();
   gotoxy(1,24);
   cout<<"Slam the KB to move on!";
   getch();
	RefreshPrompt();
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::BLOOPERAPP::splash()
{
   cleardevice();
	setbkcolor(YELLOW);
   setcolor(DARKGRAY);
   settextstyle(0,0,2);
   outtextxy(30,200,"ConsoleOS");
   settextstyle(0,0,8);
   outtextxy(30,250,"8100PER5!");
}

void ConsoleOS_Operating_System_Core::GAMEAPPS::HANGAPP::hang()
	{
      cleardevice();
		setbkcolor(GREEN);
      settextstyle(0,0,2);
      outtextxy(40,200,"ConsoleOS");
      settextstyle(0,0,8);
      outtextxy(40,250,"HANGMAN!");
      delay(1500);
      setbkcolor(BLACK);
      cleardevice();
      randomize();
      char word[][50]={"HANGMAN","PARIS","FACEBOOK","GOOGLE","FRAMEWORK","ASYNCHRONOUS","ASPHYXIATION","DEVELOPER","FUNCTION","BACKSPACE","ALPHANUMERIC","CATACLYSMIC","JAYANT","VISION","FUSION","BROWSABLE","ARCHIVES","COLLECTOR","INSPIRON","IMPOSSIBLE","CRYSIS","CYBEROM","CRYSIS","BATTLEFIELD","DEVASTATION"};
   	char wordfind[][50]={"_A___A_","_A_I_","_A_E_OO_","_OO__E","__A_E_O__","A______O_OU_","A_____IA_IO_","_E_E_O_E_","_U___IO_","_A____A_E","A___A_U_E_I_","_A_A_____I_","_A_A__","_I_IO_","_U_I__","__O__A__E","A___I_E_","_O__E__O_","I___I_O_","I__O__I__E","____I_","___E_O_","____I_","_A___E__E__","_E_A__A_IO_"};
	   char input,ch;
      int reduct;
      char hint[100];
   	int counter,m,n,randcheck[25],vow=0,chk;
   	for(m=0;m<=24;m++)
	   {
         reduct=12;
	   	while(strcmpi(word[m],wordfind[m])!=0)
   		{
   		   cleardevice();
            if(m==0)
            {
               strcpy(hint, "                                                                                                   ");
            	strcpy(hint, "The name of this GAME you are playing right now!");
            }
            else if(m==1)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "We celebrate MR. Gustav's memory! The WORLD FAMOUS TOWER is \"HERE\"");
            }
            else if(m==2)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Im the SECOND most popular WEBSITE and WORD! :P");
            }
            else if(m==3)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Im the WORLD's BIGGEST, MOST POPULAR, and THE BEST MISTAKE and WEBSITE!");
            }
            else if(m==4)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "You need to edit my .jar file to CUSTOMIZE a ROM! Im a building block of anything!");
            }
            else if(m==5)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "The method by which the TERACOPY APP uses to copy files...");
            }
            else if(m==6)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "You will hate it when im with you. Im the ENEMY OF BREATHING!");
            }
            else if(m==7)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Jayant can be described as an Aspiring _this_. People like him do all the coding n programming");
            }
            else if(m==8)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "C++ has a hell lot of ME!");
            }
            else if(m==9)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Im on different sizes on the keyboard or a 15.6 inch LAPTOP and a 14.1 inch LAPTOP.");
            }
            else if(m==10)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "T9 keyboards are related to me!");
            }
            else if(m==11)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Something ending in a disastrously unexpected way.");
            }
            else if(m==12)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "MEEEEEEEEEE!!!!!");
            }
            else if(m==(12+1))
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Sight. OR Graphics Range of AMD APU's.");
            }
            else if(m==14)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Codename for AMD APU's.");
            }
            else if(m==15)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Which you can browse through.");
            }
            else if(m==16)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "In every COLLECTORS EDITION OF DIGIT, you will get a hundred of ME!!!");
            }
            else if(m==17)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "You are one of ME if you collect something!");
            }
            else if(m==18)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Hahaha! Dell I___I_O_ 15R!");
            }
            else if(m==19)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Mission I__O__I__E: GHOST PROTOCOL! Hehehehe!");
            }
         	else if(m==20)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "Jayant's Fav FPS GAME! :P");
            }
            else if(m==21)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "The name of my FIRST ROM, and my LAPPYs Password! :P");
            }
            else if(m==22)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "If you know about NOMAD, PROPHET and PSYCHO, you know this word, AND YOU ARE AWESOME!");
            }
            else if(m==23)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "A DAMN COOL GAME with awesome GAMEPLAY EXPERIENCE. Its an FPS. N its 3rd installment is awesome!");
            }
            else if(m==24)
            {
               strcpy(hint, "                                                                                                   ");
               strcpy(hint, "I used to play this after FAKE PERFECT WORLD with ANKAN. Its a PERFECT WORLD MMORPG TOO! :P ");
            }
            cleardevice();
            gotoxy(1,1);
   			cout<<wordfind[m]<<" Enter letter[Uppercase ONLY!] ENTRIES left: "<<reduct<<"\n\n**ENTRIES refers to the total no. of input chances available.\n\nHINT: "<<hint<<"\n\nEnter Character: ";
	   	   cin>>input;
   		   for(n=0;word[m][n]!='\0';n++)
      		{
      			if(word[m][n]==input)
	            {
   	      		wordfind[m][n]=input;
      	      }
       		}
            if(word[m][n]!=input)
            reduct--;
            if(reduct==0)
            goto done;
	   	}
         cleardevice();
         if(strcmpi(word[m],wordfind[m])==0)
	   	cout<<"\nCorrect word!: "<<wordfind[m];
      	cout<<"\n\nExit Hangman [X]\nContinue [N]: ";
         ch=getch();
         if(ch=='x' || ch=='X')
         goto quit;
   	}
      gotoxy(1,1);
      cleardevice();
      done:
      if(reduct!=0)
	   cout<<"\nYou win!";
      else if(reduct==0)
      cout<<"YOU LOSE! Improve ur English...";
      cout<<"\n\nNow smash em up ur KB to continue!";
      getch();
      quit:
      RefreshPrompt();
   }


void ConsoleOS_Operating_System_Core::XTRASAPPS::DIARYAPP::diarydata()
{
   setbkcolor(BLACK);
	cleardevice();
   char txt[1000];
   ifstream f("FILES//DIARY.txt");
   f.read((char*)&txt,sizeof(txt));
   cout<<txt;
   f.close();
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::DIARYAPP::DIARYMAIN()
{
	splash();
   delay(1500);
   diarydata();
   gotoxy(1,24);
   cout<<"Slam the KB to move on!";
   getch();
   RefreshPrompt();
}
void ConsoleOS_Operating_System_Core::XTRASAPPS::DIARYAPP::splash()
{
   cleardevice();
	setbkcolor(MAGENTA);
   setcolor(WHITE);
   settextstyle(0,0,2);
   outtextxy(30,200,"ConsoleOS");
   settextstyle(0,0,6);
   outtextxy(30,250,"DEVELOPER");
   settextstyle(0,0,6);
   outtextxy(30,310,"DIARY");
}
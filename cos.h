#pragma once
#ifndef _cos_h
#define _cos_h

#include<graphics.h>
#include<iomanip.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<bios.h>
#include<math.h>
#include<ctype.h>
#include<fstream.h>

#define NULL 0
#define YES 1
#define NO 0

#define MAX_X getmaxx()
#define MAX_Y getmaxy()
#define MIN_X  0
#define MIN_Y  0
#define DRAW_X1 85
#define DRAW_X2 580
#define DRAW_Y1 40
#define DRAW_Y2 450

#define NUM_SQUARES  9
#define ESC 0x1b
#define F1_KEY 0x3b
#define F2_KEY 0x3c
#define F3_KEY 0x3d
#define F4_KEY 0x33
#define F5_KEY 0x3f
#define F6_KEY 0x40
#define F7_KEY 0x41
#define F8_KEY 0x42
#define F9_KEY 0x43


# define UNCLICKED 0
# define CLICKED 1
# define PI 3.14159


void clriconscr();
void RefreshPrompt();
void noaccess();

static int dig=0,vow=0,con=0,upp=0,low=0,spl=0,spc=0,wrd=0,def=0,i,apt;
static char de[100],v;

static FILE *fp;
static int row=17,col=5;
static char flag='d',flagp='0';
static char bflag='u',bflagp='u';
static int mflag=0;
static int sflag=0;

typedef enum _OWNER
{
	UNASSIGNED, COMPUTER, PLAYER
}OWNER, WINNER;
static int pattern[8][3] =
			{
    			{ 0, 1, 2 },
    			{ 3, 4, 5 },
    			{ 6, 7, 8 },
    			{ 0, 3, 6 },
    			{ 1, 4, 7 },
    			{ 2, 5, 8 },
    			{ 0, 4, 8 },
    			{ 2, 4, 6 }
			};
typedef struct Square
			{
    			OWNER pos[NUM_SQUARES];
			}TicTacToe;
static TicTacToe game;
const int left = 105;
const int right = 375;
const int top = 45;
const int bottom = 315;
const int size = 90;

class startup
{
	public:
	class drawtext_consoleos
	{
  	   public:
		void c();
		void o();
		void n();
		void s();
		void o_();
		void l();
		void e();
		void O();
		void S();
	   void revolution();
	};
	class bootanimation
	{
	   public:
	   drawtext_consoleos letter,word;
	   void introanim()
	   {
			for(int x=640,y=80,m=0,n=400,p=0,q=0;x>=80;x--,y++,m++,n--,p++,q++)
			{
				setcolor(BLUE);
				line(x,y,x,y+45);
				setcolor(BROWN);
				line(x,y+50,x,y+80);
				setcolor(RED);
				line(x,y+90,x,y+150);
				setcolor(MAGENTA);
				line(x,y+160,x,y+185);
				setcolor(LIGHTGREEN);
				line(m,n,m,n+40);
				setcolor(RED);
				line(m,n+50,m,n+100);
				setcolor(LIGHTBLUE);
				line(p,q,p+55,q);
				setcolor(GREEN);
				line(p,q+210,p,q+270);
				setcolor(YELLOW);
				line(p+340,q,p+400,q);
				delay(5);
			}
			setcolor(WHITE);
		}
		void bootanim()
		{
			letter.c();
			letter.o();
			letter.n();
			letter.s();
			letter.o_();
			letter.l();
			letter.e();
			letter.O();
			letter.S();
	      word.revolution();
		}
	   bootanimation()
	   {
	      delay(2000);
	   	introanim();
	      bootanim();
	   }
	};
};

class ConsoleOS_Operating_System_Core
{
	public:
   class COS_NBar
   {
      public:
		char* loc_time()
		{
			time_t rawtime;
			struct tm * timeinfo;
   		time ( &rawtime );
			timeinfo = localtime ( &rawtime );
			return asctime(timeinfo);
		}
		void timeview()
		{
			settextstyle(6,0,2);
			outtextxy(370,1,loc_time());
			settextstyle(0,0,0);
		}
		void unavailable_mark(int x,int y)
		{
			setcolor(RED);
			line(x-4,2,x+4,2);
			line(x-4,2,x,20);
			line(x+4,2,x,20);
			rectangle(x-2,22,x+2,26);
			setfillstyle(1,RED);
			floodfill(x,4,RED);
			floodfill(x,24,RED);
		}
		void nofile()
		{
			setcolor(YELLOW);
			rectangle(1,1,24,29);
			setcolor(YELLOW);
			setfillstyle(2,YELLOW);
			floodfill(5,5,YELLOW);
			setcolor(RED);
			line(8,2,16,2);
			line(8,2,12,20);
			line(16,2,12,20);
			rectangle(10,22,14,26);
			setfillstyle(1,RED);
			floodfill(12,4,RED);
			floodfill(12,24,RED);
		}
		void nomusic()
		{
			setcolor(DARKGRAY);
			circle(40,15,14);
			circle(40,15,2);
			setfillstyle(1,LIGHTGRAY);
			floodfill(35,15,DARKGRAY);
			setcolor(RED);
			line(43,14,52,10);
			line(43,14,52,11);
			line(43,14,52,12);
			setcolor(GREEN);
			line(38,12,34,3);
			line(38,12,33,3);
			line(38,12,35,4);
			setcolor(BLUE);
			line(40,17,35,27);
			line(40,17,37,27);
			line(40,17,36,27);
			setcolor(RED);
			line(36,2,44,2);
			line(36,2,40,20);
			line(44,2,40,20);
			rectangle(38,22,42,26);
			setfillstyle(1,RED);
			floodfill(40,4,RED);
			floodfill(40,24,RED);
		}
		void nonet()
		{
			setcolor(LIGHTBLUE);
			int x=70,y=24;
         circle(x,y,0);
			circle(x,y,1);
			circle(x,y,2);
			int a=50,b=130;
			arc(x,y,a,b,6);
			arc(x,y,a,b,7);
			arc(x,y,a,b,8);
			arc(x,y,a,b,12);
			arc(x,y,a,b,13);
			arc(x,y,a,b,14);
			arc(x,y,a,b,18);
			arc(x,y,a,b,19);
			arc(x,y,a,b,20);
			unavailable_mark(x,y);
		}
		void iconset()
		{
			nofile();
			nomusic();
			nonet();
		}
		void n_bar()
		{
	      setcolor(BLACK);
			settextstyle(2,0,6);
			for(int y=0;y<30;y++)
	      line(350,y,640,y);
	      setcolor(WHITE);
			outtextxy(390,0,loc_time());
			iconset();
		}
		void LINE()
		{
			line(0,30,640,30);
		}
	};
	class tiles         //contains logos
   {
      public:     //all icons made here
      void COS(int,int);
      void APPS(int,int);
      void GAME(int,int);
      void XTRA(int,int);
      void HELP(int,int);
   };
	class APPStiles     //contains apps logos
	{
		public:
      void TTT(int,int);
      void COSSciCalc(int,int);
      void TE(int,int);
	};
	class APPSIconSet
	{
		public:
		class MoveAPPStoRight
		{
			public:
			
         void TE(int);
         void COSSciCalc(int);
         void TTT(int);
		};
		class MoveAPPStoLeft
		{
			public:
         
         void TE(int);
         void COSSciCalc(int);
         void TTT(int);
      };
		MoveAPPStoRight MAR;
		MoveAPPStoLeft MAL;
	};
	class COStiles
	{
		public:
      void about(int, int);
      void team(int, int);
      void repository(int, int);
	};
	class COSIconSet
	{
		public:
		class MoveCOStoRight
		{
			public:

         void about(int);
         void team(int);
         void repository(int);
		};
		class MoveCOStoLeft
		{
			public:

         void about(int);
         void team(int);
         void repository(int);
		};
		MoveCOStoRight Cright;
		MoveCOStoLeft Cleft;
	};
   class IconSet
   {
      public:
		class MoveToRight
      {
         public:
         tiles logo;
			   //clearing inside icon area
			void COS(int);      //center
			void APPS(int);     //left of center
			void GAME(int);      //right of center
			void HELP(int);     //further left
			void XTRA(int);     //further right
		};
		class MoveToLeft
		{
			public:
			tiles logo;
			   //clearing inside icon area
			void COS(int);      //center
			void APPS(int);     //left of center
			void GAME(int);      //right of center
			void HELP(int);     //further left
			void XTRA(int);     //further right
		};
		MoveToRight right;
		MoveToLeft left;
	};
   class Settingstiles
   {
   	public:
      void reset(int,int);       //to be defined in cos_2
      void changeBG(int,int);    //to be defined in cos_2
      void passwords(int,int);   //to be defined in cos_2
   };
   class SettingsIconSet
   {
   	public:
      class MoveSetToRight
      {
      	public:
         Settingstiles Slogo;
         void reset(int);       //to be defined in cos_2
      	void changeBG(int);    //to be defined in cos_2
      	void passwords(int);   //to be defined in cos_2
      };
      class MoveSetToLeft
      {
      	public:
         Settingstiles Slogo;
         void reset(int);       //to be defined in cos_2
      	void changeBG(int);    //to be defined in cos_2
      	void passwords(int);   //to be defined in cos_2
		};
      MoveSetToRight Sright;
		MoveSetToLeft Sleft;
   };
   class XTRAStiles
   {
      public:
      void InTheDiary(int,int);       //to be defined in cos_2
      void TheBloopers(int,int);    //the errors we faced along the way
      void LC(int,int);   //LC systems
   };
   class XTRASIconSet
   {
   	public:
      class MoveXToRight
      {
      	public:
         XTRAStiles Xlogo;

         void InTheDiary(int);
      	void TheBloopers(int);         //to be defined
      	void LC(int);                  //to be defined
      };
      class MoveXToLeft
      {
      	public:
         XTRAStiles Xlogo;

         void InTheDiary(int);            //to be defined
      	void TheBloopers(int);         //to be defined
      	void LC(int);
		};
      MoveXToRight Xright;
		MoveXToLeft Xleft;
   };
   class GAMEtiles
   {
   	public:
      void TTT(int,int);
      void CosMine(int,int);
      void LUDO(int,int);
   };
   class GAMEIconSet
   {
   	public:
      class MoveGAMEToRight
      {
      	public:
         GAMEtiles Glogo;

         void TTT(int);       //to be defined in cos_2
      	void CosMine(int);    //to be defined in cos_2
      	void LUDO(int);   //to be defined in cos_2
      };
      class MoveGAMEToLeft
      {
      	public:
         GAMEtiles Glogo;

         void TTT(int);       //to be defined in cos_2
      	void CosMine(int);    //to be defined in cos_2
      	void LUDO(int);   //to be defined in cos_2
		};
      MoveGAMEToRight Gright;
		MoveGAMEToLeft Gleft;
   };
   class COSAPPS
   {
   	public:
      class ABOUTAPP
      {
      	public: 
         void splash();
         void ABOUTMAIN();
         void aboutdata();
      };
      ABOUTAPP ABT;
      class TEAMAPP
      {
      	public:
         union REGS in,out;
         int x,y,click,mem;
         void splash();
         void TEAMMAIN();
         void members();
         void memberselectionloop();
         void memberselection();
         void setposi(int&,int&);
         int clickwithincircle(int,int,int);
         void mouseposi(int&,int&,int&);
         int callmouse();
         void initialization();
         void JB();
         void BKP();
         void SG();
         void SaG();
         void SB();
         void cross(int,int);
      };
      TEAMAPP TEAM;
      class REPOAPP
      {
      	public:
         void splash();
         void REPOMAIN();
         void repodata();
         void logo();
      };
      REPOAPP RAP;
   };
   class GAMEAPPS
   {
      public:
   	class TTTAPP
      {
         public:
         int is_game_over();
         void init_game();
         int draw_gameboard();
         void draw_patterline(int);
         int valid_selection(int);
         void computer_move();
         int handle_key(int);
         void TTT();
      };
      TTTAPP TA;
      class BRICKAPP
      {
      	public:
			union  REGS i,o;
         int MaxX, MaxY, MidX, MidY ;
			int bri[5][20] ;
			int    GraphDriver; /* The Graphics device driver      */
			int    GraphMode;  /* The Graphics mode value      */
			double AspectRatio; /* Aspect ratio of a pixel on the screen*/
			int    MaxXX, MaxYY; /* The maximum resolution of the screen */
			int    MaxColors;  /* The maximum # of colors available   */
			int    ErrorCode;  /* Reports any graphics errors      */
			struct palettetype palette;  /* Used to read palette info*/
			void Initialize(void);
			void SayGoodbye(void);
			void MainWindow(char *header);
			void StatusLine(char *msg);
			void DrawBorder(void);
			void changetextstyle(int font, int direction, int charsize);
			mainscreen();
			screen();
			bricks();
			delbrick(int,int);
			bell(int);
			BRICKMAIN();
         void showmouseptr();
      };
      BRICKAPP BA;
      class HANGAPP
      {
      	public:
         void hang();

      };
      HANGAPP HAP;
   };
   class APPAPPS
   {
   	public:
      class TEXTAPP
		{
			public:
		   union REGS in,out;
		   int x,y,click;
		   int kgmcforTE();
		   void file();
		   void filelogo(int,int);
		   void splash();
		   void file_apps();
		   void cross(int,int);
			int clickwithin(int,int,int,int);
			int clickwithinbar3d(int,int,int,int,int,int);
		   void mouse_option_selection();
		   void newfile();
		   void openfile();
		   int callmouse();
		   void setposi(int&,int&);
		   void mouseposi(int&,int&,int&);
		   void initialization();
         void TEXTMAIN();
		};
      TEXTAPP TXTA;
      class CALCAPP
      {
      	public:
         float *mem;
			char dummy;
			char ch,ch1,ch2;
			int midx,midy;
         void typeit(int,int,int,char[]);
			char input();
			double add(double,double,char);
			double angle_conv(double);
			void basecng(double,double);
         void button_3d(int,int,int,int,int,char*,int);
         void screen(int,int,int,int);
         void hide_mouse();
         void show_mouse();
         void structure();
         void mouse();
         void SCICALC();
      };
      CALCAPP CA;
      class PAINTAPP
      {
      	public:
			class Mouse    //Class of mouse,hardware interfacing
			{

				protected:
				int    gd, button_left, x, y;
				union  REGS i,o;

				public:
				Mouse(): gd(DETECT), button_left(0), x(0), y(0) { }
				Mouse(int g, int button, int a, int b): gd(DETECT), button_left(button), x(a), y(b) { }
				int getx() { return x; }
				int gety() { return y; }
				int getbutton() { return button_left; }
				int initmouse();
            void showmouseptr();
				void restrictmouseptr(int, int, int, int);
				void getmousepos();
				void hidemouseptr();
				void printmousepos();
			};
			class Shape    //Base class Shape
			{
				protected:
				int x_initial, y_initial;
				public:
				Shape();
				Shape(int a, int b);
				void set_xy(int a, int b);
				int get_x();
				int get_y();
				void print(int x, int y, char *s1);
				~Shape(){ ; }
         };
         class Eraser    //Eraser class
			{
				private:
				int i, j;
				int color;
				public:
				Eraser(int a = 0, int b = 0, int c = 0): i(a), j(b), color(c){ }
				void set_color(int c) { color = c; setcolor(color); }
				int get_color() { return color; }
				void eraser();
				~Eraser()
				{ ; }
			};
         class Freehand : public Shape  //Freehand class derived publically from shape
         {
				private:
				int x_final, y_final;// inntial x, y are inherited from shape
				int color;
				public:
				Freehand(): Shape()
				{ x_final = 0; y_final = 0; color = WHITE; setcolor(color); }
				Freehand(int xf, int yf, int a, int b, int c) : Shape(a, b)
				{ x_final = xf; y_final = yf; color = c; setcolor(color); }
				void set_xfyf(int xf, int yf); //mutator function of x_final, y_final
				int get_xf();
				int get_yf();
				int get_color();
				void set_color(int c);
				void draw();
  				~Freehand()
  				{ ; }
			};
			class Circle : public Shape  //Cirlce class derived publically from shape
			{
				private:
				int radius;
				int color;
				public:
				Circle(): Shape()
				{ radius = 0; color = WHITE; setcolor(color); }
				Circle(int r, int a, int b, int c) : Shape(a, b)
				{ radius = r; color = c; setcolor(color); }
				void set_radius(int r);
				int get_radius();
				int get_color();
				void set_color(int c);
				void show();
				void draw();
				~Circle()
				{ ; }
			};
			class Rectangle : public Shape  //Rectangle class derived publically from shape
			{
				protected:
				int length, width;
				int color;
				public:
				Rectangle(): Shape()
				{ length = 0; width = 0; color = WHITE; setcolor(color); }
				Rectangle(int l, int w, int a, int b, int c) : Shape(a, b)
				{ length = l; width = w; color = c; setcolor(color); }
				void set_length_width(int l, int b);
				int get_color();
				void set_color(int c);
				int get_length();
				int get_width();
				void show();
				void draw();
				void fill(int c);
				~Rectangle()
				{ ; }
			};
  			class Titlebar     //Displays the title bar
			{
				private:
			   Rectangle r1,r2,r3;
				public:
				void show();
			};
			class Toolbox     //Displays the basic tools
			{
				private:
				Rectangle r;
				public:
				void show();
			};
			class Statusbox     //Displays the current tool and color selected
			{
				private:
				Rectangle r;
				public:
				void show();
			};
			class Colorbox     //Displays available color
			{
				private:
				Rectangle r;
				public:
				void show();
			};
			class Window     //A class containing All the display Objects(Aggregation)
			{
				private:
				Titlebar obj_Titlebar;
				Colorbox obj_colorbox;
				Toolbox obj_Toolbox;
				Statusbox obj_Statusbox;

				public:
				void show_all();
				void show_titlebar();
				void show_toolbar();
				void show_colorbox();
				void show_toolbox();
				void show_statusbox();
				void show_textbox();
				void events();
			};
         void PAINTMAIN();
      }; //PAINTAPP CLASS ENDS HERE
      PAINTAPP PA;
   }; //APPAPPS CLASS ENDS HERE

   class XTRASAPPS
   {
   	public:
   	class LCAPP
      {
      	public:
			int x,y,click;
			union REGS in,out;
         double a,nml1,nml2,rp,sm,nmt;
      	int like,dob,lr1,lr2,dob1,mob1,yob1,dob2,mob2,yob2,dobt1,dobt2,dobr;char name1[15],name2[15],gen1,gen2,sure;
         void entry();
         void accuracyselection();
         void mouseposi(int&,int&,int&);
         void LCMAIN();
         void calculation();
         int clickwithinbar3d(int,int,int,int,int,int);
      };
      LCAPP LCA;
      class BLOOPERAPP
      {
      	public:
         void splash();
         void BLOOMAIN();
         void blooperdata();
      };
      BLOOPERAPP BAP;
      class DIARYAPP
      {
      	public:
         void splash();
         void DIARYMAIN();
         void diarydata();
      };
      DIARYAPP DAP;
   };

	class DynamicGraphix
	{
		public:
      COSAPPS CApps;
   	GAMEAPPS GApps;
      APPAPPS AApps;
      XTRASAPPS XApps;
		tiles logo;
		IconSet icon;
		COSIconSet CIS;
		APPSIconSet AIS;
      SettingsIconSet SIS;
      GAMEIconSet GIS;
      XTRASIconSet XIS;
		COStiles coslogo;
		APPStiles appslogo;
      Settingstiles setlogo;
      GAMEtiles gamelogo;
      XTRAStiles xtraslogo;
		COS_NBar NBar;
		void NavIcons();
		void HOME(int &, int &, int &, int, int);
		void REFRESHintoCOS(int &, int &, int &, int,int);
		void REFRESHintoAPPS(int &, int &, int &, int, int);
   	void REFRESHintoSet(int &, int &, int &, int, int);
   	void REFRESHintoGAME(int &, int &, int &, int, int);
   	void REFRESHintoX(int &, int &, int &, int, int);
   	void arc_up(int);
		void arc_down(int);
		void initdraw();
		void mousecontrolledUI();
		void COSicons(int);
		void APPSicons(int);
		void Settingsicons(int);
		void GAMEicons(int);
		void XTRASicons(int);
		void icons(int);
		char* loctimeret();
      int kgmc(void);
	};
	class COS_Revolution_UserInterface
	{
      public:
		COS_NBar NBar;
      DynamicGraphix DGfx;
		void COS_ActiveGFX();
		void COS_DS_UI();
		void mouseposi(int &,int &,int &);
   };
   COS_Revolution_UserInterface cosrui;
};
class MouseControl
{
   public:
	int callmouse();
	void setposi(int &,int &);
   void initialization();
};

#endif
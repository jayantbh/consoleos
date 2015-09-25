#include"cos.h"
union REGS in,out;
int arcu=270,arcd=90,x,y,click,baseflag=0;
char ch;
int r=224;

ConsoleOS_Operating_System_Core::COStiles CT;
void ConsoleOS_Operating_System_Core::COSIconSet::MoveCOStoRight::about(int r)
{

	setcolor(WHITE);                  //fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r-1,130,r-1,320);            //black to overdraw white drag lines of icon box
	line(r+189,130,r+189,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
	CT.about(r,130);
}
void ConsoleOS_Operating_System_Core::COSIconSet::MoveCOStoRight::team(int r)
{

	setcolor(WHITE);                   //fixed
	rectangle(r-220,130,r-30,320);     //left of center
	setcolor(BLACK);
	line(r-221,130,r-221,320);
	line(r-31,130,r-31,320);
	setcolor(WHITE);
	CT.team(r-220,130);
}
void ConsoleOS_Operating_System_Core::COSIconSet::MoveCOStoRight::repository(int r)
{

	setcolor(WHITE);                  	  //fixed
	rectangle(r+220,130,r+410,320);       //right of center
	setcolor(BLACK);
	line(r+219,130,r+219,320);
	line(r+409,130,r+409,320);
	setcolor(WHITE);
	CT.repository(r+220,130);
}
void ConsoleOS_Operating_System_Core::COS_Revolution_UserInterface::mouseposi(int &xpos,int &ypos,int &click)
{
	in.x.ax=3;
   int86(51,&in,&out);
   click=out.x.bx;
   xpos=out.x.cx;
   ypos=out.x.dx;
}
void ConsoleOS_Operating_System_Core::COSIconSet::MoveCOStoLeft::about(int r)
{

	setcolor(WHITE);                  //fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r+1,130,r+1,320);            //black to overdraw white drag lines of icon box
	line(r+191,130,r+191,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
	CT.about(r,130);
}
void ConsoleOS_Operating_System_Core::COSIconSet::MoveCOStoLeft::team(int r)
{
	
	setcolor(WHITE);                   //fixed
	rectangle(r-220,130,r-30,320);     //left of center
	setcolor(BLACK);
	line(r-219,130,r-219,320);
	line(r-29,130,r-29,320);
	setcolor(WHITE);
	CT.team(r-220,130);
}
void ConsoleOS_Operating_System_Core::COSIconSet::MoveCOStoLeft::repository(int r)
{
	
	setcolor(WHITE);                  	  //fixed
	rectangle(r+220,130,r+410,320);       //right of center
	setcolor(BLACK);
	line(r+221,130,r+221,320);
	line(r+411,130,r+411,320);
	setcolor(WHITE);
	CT.repository(r+220,130);
}
void ConsoleOS_Operating_System_Core::IconSet::MoveToRight::COS(int)
{

   setcolor(WHITE);                  //fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r-1,130,r-1,320);            //black to overdraw white drag lines of icon box
	line(r+189,130,r+189,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
	logo.COS(r,130);
}
void ConsoleOS_Operating_System_Core::IconSet::MoveToRight::APPS(int r)
{

		setcolor(WHITE); //fixed
		rectangle(r-220,130,r-30,320);     //left of center
		setcolor(BLACK);
		line(r-221,130,r-221,320);
		line(r-31,130,r-31,320);
		setcolor(WHITE);
		logo.APPS(r-220,130);
}

void ConsoleOS_Operating_System_Core::IconSet::MoveToRight::GAME(int r)
{

		setcolor(WHITE);	  //fixed
		rectangle(r+220,130,r+410,320);       //right of center
		setcolor(BLACK);
		line(r+219,130,r+219,320);
		line(r+409,130,r+409,320);
		setcolor(WHITE);
		logo.GAME(r+220,130);
}

void ConsoleOS_Operating_System_Core::IconSet::MoveToRight::HELP(int r)
{

		setcolor(WHITE);//fixed
		rectangle(r-440,130,r-250,320);   //further left
		setcolor(BLACK);
		line(r-441,130,r-441,320);
		line(r-251,130,r-251,320);
		setcolor(WHITE);
		logo.HELP(r-440,133);

}
void ConsoleOS_Operating_System_Core::IconSet::MoveToRight::XTRA(int r)
{
		setcolor(WHITE);        	  //fixed
		rectangle(r+440,130,r+630,320);       //further right
		setcolor(BLACK);
		line(r+439,130,r+439,320);
		line(r+629,130,r+629,320);
		setcolor(WHITE);
		logo.XTRA(r+590,130);

}
void ConsoleOS_Operating_System_Core::IconSet::MoveToLeft::COS(int r)
{
		setcolor(WHITE);//fixed
		rectangle(r,130,r+190,320);       //center
		setcolor(BLACK);
		line(r+1,130,r+1,320);   //black to overdraw white drag lines of icon box
		line(r+191,130,r+191,320);        //black to overdraw white drag lines of icon box
		setcolor(WHITE);
		logo.COS(r,130);

}
void ConsoleOS_Operating_System_Core::IconSet::MoveToLeft::APPS(int r)
{
		setcolor(WHITE); //fixed
		rectangle(r-220,130,r-30,320);     //left of center
		setcolor(BLACK);
		line(r-219,130,r-219,320);
		line(r-29,130,r-29,320);
		setcolor(WHITE);
		logo.APPS(r-220,130);

}
void ConsoleOS_Operating_System_Core::IconSet::MoveToLeft::GAME(int r)
{
		
		setcolor(WHITE);//fixed
		rectangle(r+220,130,r+410,320);       //right of center
		setcolor(BLACK);
		line(r+221,130,r+221,320);
		line(r+411,130,r+411,320);
		setcolor(WHITE);
		logo.GAME(r+220,130);

}
void ConsoleOS_Operating_System_Core::IconSet::MoveToLeft::HELP(int r)
{

		setcolor(WHITE); //fixed
		rectangle(r-440,130,r-250,320);    //further left
		setcolor(BLACK);
		line(r-439,130,r-439,320);
		line(r-249,130,r-249,320);
		setcolor(WHITE);
      logo.HELP(r-440,133);

}
void ConsoleOS_Operating_System_Core::IconSet::MoveToLeft::XTRA(int r)
{
		setcolor(WHITE);//fixed
		rectangle(r+440,130,r+630,320);       //further right
		setcolor(BLACK);
		line(r+441,130,r+441,320);
		line(r+631,130,r+631,320);
		setcolor(WHITE);
		logo.XTRA(r+590,130);

}
void ConsoleOS_Operating_System_Core::DynamicGraphix::NavIcons()
{
	//rule.all();   //disable during development
	//NAVICONS DO NOT ON ISOLATABLE CODE, EXAMINE CODE BEFORE COPYING

	//LEFT NAVICON
	setfillstyle(1,WHITE);
	setcolor(WHITE);
	circle(200,400,30);    //left navicon
	floodfill(200,400,WHITE);

	//RIGHT NAVICON
	circle(400,400,30);    //right navicon
	floodfill(400,400,WHITE);
	setfillstyle(1,RED);
	setcolor(RED);

	//POWER OFF NAVICON
	circle(300,400,30);    //power off
	floodfill(300,400,RED);

	//LEFT NAVICON LOGO
	setcolor(BLACK);
	line(180,400,210,415); //lower line
	line(210,385,210,415); //standing line
	line(180,400,210,385); //upper line

	//RIGHT NAVICON LOGO
	line(390,415,420,400); //lower line
	line(390,385,390,415); //standing line
	line(390,385,420,400); //upper line

	//NAVICON LOGO FILLS
	setfillstyle(1,BLACK);
	floodfill(200,400,BLACK);
	floodfill(400,400,BLACK);
	setcolor(LIGHTBLUE);

	//REFRESH NAVICON
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

	/////////////////////////////////////////
	//JUMP TILE NAVICONS
	/////////////////////////////////////////

	setcolor(LIGHTGRAY);
	setfillstyle(1,LIGHTGRAY);

	if(baseflag==0)
  	{
		circle(200,60,10);
		floodfill(200,60,LIGHTGRAY);
	}
   if(baseflag!=0)
  	{

		setcolor(DARKGRAY);
		setfillstyle(1,BLACK);
		circle(200,60,10);
		floodfill(200,60,DARKGRAY);
	}

	circle(250,60,10);
	floodfill(250,60,LIGHTGRAY);

	circle(300,60,10);
	floodfill(300,60,LIGHTGRAY);

	circle(350,60,10);
	floodfill(350,60,LIGHTGRAY);

	if(baseflag==0)
	{
		circle(400,60,10);
		floodfill(400,60,LIGHTGRAY);
	}
   if(baseflag!=0)
  	{

		setcolor(DARKGRAY);
		setfillstyle(1,BLACK);
		circle(400,60,10);
		floodfill(400,60,DARKGRAY);
	}

	setcolor(WHITE);
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::HOME(int &a, int &b, int &c, int x=1, int y=1)
{
	a=224,b=270,c=90;
	if(x>190 && y>50 && x<210 && y<70 && click==1)
	{
   	a=224+440;
      clriconscr();
   }
	if(x>240 && y>50 && x<260 && y<70 && click==1)
	{
   	a=224+220;
   	clriconscr();
   }
	if(x>290 && y>50 && x<310 && y<70 && click==1)
	{
   	a=224;
      clriconscr();
   }
	if(x>340 && y>50 && x<360 && y<70 && click==1)
	{
   	a=224-220;
      clriconscr();
   }
	if(x>390 && y>50 && x<410 && y<70 && click==1)
	{
   	a=224-440;
      clriconscr();
   }
	icon.right.XTRA(a);
	icon.right.GAME(a);
	icon.right.COS(a);
	icon.right.APPS(a);
	icon.right.HELP(a);
	arc_up(b);
	arc_down(c);
	setcolor(WHITE);
	line(0,30,640,30);
	NBar.n_bar();
	NBar.LINE();
	NavIcons();
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::REFRESHintoCOS(int &a, int &b, int &c, int x=1, int y=1)
{
	a=224,b=270,c=90;
	if(x>240 && y>50 && x<260 && y<70 && click==1)
	{
   	a=224+220;
   	clriconscr();
   }
	if(x>290 && y>50 && x<310 && y<70 && click==1)
	{
   	a=224;
      clriconscr();
   }
	if(x>340 && y>50 && x<360 && y<70 && click==1)
	{
   	a=224-220;
      clriconscr();
   }
	if(x>240 && y>50 && x<260 && y<70 && click==1)
	a=224+220;
	if(x>290 && y>50 && x<310 && y<70 && click==1)
	a=224;
	if(x>340 && y>50 && x<360 && y<70 && click==1)
	a=224-220;
	CIS.Cright.about(a);
	CIS.Cright.team(a);
	CIS.Cright.repository(a);
	arc_up(b);
	arc_down(c);
	setcolor(WHITE);
	line(0,30,640,30);
	NBar.n_bar();
	NBar.LINE();
	NavIcons();
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::REFRESHintoAPPS(int &a, int &b, int &c, int x=1, int y=1)
{
	a=224,b=270,c=90;
	if(x>240 && y>50 && x<260 && y<70 && click==1)
	{
   	a=224+220;
   	clriconscr();
   }
	if(x>290 && y>50 && x<310 && y<70 && click==1)
	{
   	a=224;
      clriconscr();
   }
	if(x>340 && y>50 && x<360 && y<70 && click==1)
	{
   	a=224-220;
      clriconscr();
   }
	AIS.MAR.TE(a);
	AIS.MAR.COSSciCalc(a);
	AIS.MAR.TTT(a);
	arc_up(b);
	arc_down(c);
	setcolor(WHITE);
	line(0,30,640,30);
	NBar.n_bar();
	NBar.LINE();
	NavIcons();
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::REFRESHintoSet(int &a, int &b, int &c, int x=1, int y=1)
{
	a=224,b=270,c=90;          //a=r. b=arcu, c=arcd
	if(x>240 && y>50 && x<260 && y<70 && click==1)
	{
   	a=224+220;
   	clriconscr();
   }
	if(x>290 && y>50 && x<310 && y<70 && click==1)
	{
   	a=224;
      clriconscr();
   }
	if(x>340 && y>50 && x<360 && y<70 && click==1)
	{
   	a=224-220;
      clriconscr();
   }
	SIS.Sright.reset(a);
	SIS.Sright.changeBG(a);
	SIS.Sright.passwords(a);
	arc_up(b);
	arc_down(c);
	setcolor(WHITE);
	line(0,30,640,30);
	NBar.n_bar();
	NBar.LINE();
	NavIcons();
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::REFRESHintoGAME(int &a, int &b, int &c, int x=1, int y=1)
{
	a=224,b=270,c=90;          //a=r. b=arcu, c=arcd
	if(x>240 && y>50 && x<260 && y<70 && click==1)
	{
   	a=224+220;
   	clriconscr();
   }
	if(x>290 && y>50 && x<310 && y<70 && click==1)
	{
   	a=224;
      clriconscr();
   }
	if(x>340 && y>50 && x<360 && y<70 && click==1)
	{
   	a=224-220;
      clriconscr();
   }
	GIS.Gright.TTT(a);
	GIS.Gright.CosMine(a);
	GIS.Gright.LUDO(a);
	arc_up(b);
	arc_down(c);
	setcolor(WHITE);
	line(0,30,640,30);
	NBar.n_bar();
	NBar.LINE();
	NavIcons();
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::REFRESHintoX(int &a, int &b, int &c, int x=1, int y=1)
{
	a=224,b=270,c=90;          //a=r. b=arcu, c=arcd
	if(x>240 && y>50 && x<260 && y<70 && click==1)
	{
   	a=224+220;
   	clriconscr();
   }
	if(x>290 && y>50 && x<310 && y<70 && click==1)
	{
   	a=224;
      clriconscr();
   }
	if(x>340 && y>50 && x<360 && y<70 && click==1)
	{
   	a=224-220;
      clriconscr();
   }
   XIS.Xright.InTheDiary(a);
	XIS.Xright.TheBloopers(a);
	XIS.Xright.LC(a);
	arc_up(b);
	arc_down(c);
	setcolor(WHITE);
	line(0,30,640,30);
	NBar.n_bar();
	NBar.LINE();
	NavIcons();
}
 void ConsoleOS_Operating_System_Core::DynamicGraphix::arc_up(int arcr)
{
	setcolor(RED);
	arc(320,-1600,arcr+15,arcr+30,1700);
	setcolor(GREEN);
	arc(320,-1600,arcr,arcr+15,1700);
	setcolor(YELLOW);
	arc(320,-1600,arcr-15,arcr,1700);
	setcolor(BLUE);
	arc(320,-1600,arcr-30,arcr-15,1700);
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::arc_down(int arcr)
{
	setcolor(RED);
	arc(320,2050,arcd+15,arcd+30,1700);
	setcolor(GREEN);
	arc(320,2050,arcd,arcd+15,1700);
	setcolor(YELLOW);
	arc(320,2050,arcd-15,arcd,1700);
	setcolor(BLUE);
	arc(320,2050,arcd-30,arcd-15,1700);
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::initdraw()
{

	setcolor(WHITE);
	rectangle(r,130,r+190,320);
	rectangle(r-220,130,r-30,320);
	rectangle(r-440,130,r-250,320);
	rectangle(r+220,130,r+410,320);
	rectangle(r+440,130,r+630,320);
	logo.COS(r,130);
	logo.APPS(r-220,130);
	logo.GAME(r+220,130);
	arc_up(arcu);
	arc_down(arcd);
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::mousecontrolledUI()
{
	if(x>370 && y>370 && x<430 && y<430 && click==1)   //to the right
	{
		r++;
		arcu++;
		arcd++;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		icon.right.XTRA(r);
		icon.right.GAME(r);
		icon.right.COS(r);
		icon.right.APPS(r);
		icon.right.HELP(r);
	}
	else if(x>170 && y>370 && x<230 && y<430 && click==1)        //to the left
	{
		r--;
		arcu--;
		arcd--;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		icon.left.XTRA(r);
		icon.left.GAME(r);
		icon.left.COS(r);
		icon.left.APPS(r);
		icon.left.HELP(r);
	}
	else if(x>270 && y>370 && x<330 && y<430 && click==1)
	exit(1);
	else if(x>285 && y>445 && x<315 && y<475 && click==1)
	{
		cleardevice();
		HOME(r,arcu,arcd,1,1);
	}
	else if(click==1)
	{
		HOME(r,arcu,arcd,x,y);      //REFRESH FN WORKS WHEN THE LMB IS DOWN
	}
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::COSicons(int r)
{
	setcolor(WHITE);  
   clriconscr();
	rectangle(r,130,r+190,320);
	rectangle(r-220,130,r-30,320);
	rectangle(r+220,130,r+410,320);
	coslogo.about(r,130);
	coslogo.team(r-220,130);
	coslogo.repository(r+220,130);
	arc_up(arcu);
	arc_down(arcd);
	if(x>370 && y>370 && x<430 && y<430 && click==1)   //to the right  //RIGHT NAVICON COORDINATES
	{
		r++;
		arcu++;
		arcd++;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		CIS.Cright.about(r);
		CIS.Cright.team(r);
		CIS.Cright.repository(r);
	}
	else if(x>170 && y>370 && x<230 && y<430 && click==1)        //to the left   //LEFT NAVICON COORDINATES
	{
		r--;
		arcu--;
		arcd--;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		CIS.Cleft.about(r);
		CIS.Cleft.team(r);
		CIS.Cleft.repository(r);
	}
   else if(x>=r && y>=130 && x<=(r+190) && y<=(130+190) && click==2)        //TE App call, TE TILE COORDS
	{
      CApps.ABT.ABOUTMAIN();
	}
   else if(x>=(r-220) && y>=130 && x<=(r+190-220) && y<=(130+190) && click==2)        //Calc App call, Calc TILE COORDS
	{
      CApps.TEAM.TEAMMAIN();
	}
   else if(x>=(r+220) && y>=130 && x<=(r+190+220) && y<=(130+190) && click==2)        //LUDO App call, LUDO TILE COORDS
	{
      CApps.RAP.REPOMAIN();
	}
	else if(x>270 && y>370 && x<330 && y<430 && click==1)    //POWER BUTTON COORDINATES
	exit(1);
	else if(x>285 && y>445 && x<315 && y<475 && click==1)    //REFRESH BUTTON COORDINATE
	{
		baseflag=0;
      cleardevice();
		HOME(r,arcu,arcd,1,1);
	}
	else if(click==1)
	{
		REFRESHintoCOS(r,arcu,arcd,x,y);      //REFRESHES INTO COS TILE SCREEN
	}
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::APPSicons(int r)
{
	setcolor(WHITE);
   clriconscr();
	rectangle(r,130,r+190,320);
	rectangle(r-220,130,r-30,320);
	rectangle(r+220,130,r+410,320);
	appslogo.TE(r,130);
	appslogo.COSSciCalc(r-220,130);
	appslogo.TTT(r+220,130);
	arc_up(arcu);
	arc_down(arcd);
	if(x>370 && y>370 && x<430 && y<430 && click==1)   //to the right  //RIGHT NAVICON COORDINATES
	{
		r++;
		arcu++;
		arcd++; 
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		AIS.MAR.TE(r);
		AIS.MAR.COSSciCalc(r);
		AIS.MAR.TTT(r);
	}
	else if(x>170 && y>370 && x<230 && y<430 && click==1)        //to the left   //LEFT NAVICON COORDINATES
	{
		r--;
		arcu--;
		arcd--; 
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		AIS.MAL.TE(r);
		AIS.MAL.COSSciCalc(r);
		AIS.MAL.TTT(r);
	}                                      
   else if(x>=r && y>=130 && x<=(r+190) && y<=(130+190) && click==2)        //TE App call, TE TILE COORDS
	{
      AApps.TXTA.TEXTMAIN();
	}
   else if(x>=(r-220) && y>=130 && x<=(r+190-220) && y<=(130+190) && click==2)        //Calc App call, Calc TILE COORDS
	{
      AApps.CA.SCICALC();
	}
   else if(x>=(r+220) && y>=130 && x<=(r+190+220) && y<=(130+190) && click==2)        //LUDO App call, LUDO TILE COORDS
	{
      AApps.PA.PAINTMAIN();
	}
	else if(x>270 && y>370 && x<330 && y<430 && click==1)    //POWER BUTTON COORDINATES
	exit(1);
	else if(x>285 && y>445 && x<315 && y<475 && click==1)    //REFRESH BUTTON COORDINATE
	{
		baseflag=0;
      cleardevice();
		HOME(r,arcu,arcd,1,1);
	}
	else if(click==1)
	{
		REFRESHintoAPPS(r,arcu,arcd,x,y);      //REFRESHES INTO COS TILE SCREEN
	}
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::Settingsicons(int r)
{
	setcolor(WHITE);                          
   clriconscr();
	rectangle(r,130,r+190,320);
	rectangle(r-220,130,r-30,320);
	rectangle(r+220,130,r+410,320);
	setlogo.reset(r-220,130);
	setlogo.changeBG(r,130);
	setlogo.passwords(r+220,130);
	arc_up(arcu);
	arc_down(arcd);
	if(x>370 && y>370 && x<430 && y<430 && click==1)   //to the right  //RIGHT NAVICON COORDINATES
	{
		r++;
		arcu++;
		arcd++;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		SIS.Sright.reset(r);
		SIS.Sright.changeBG(r);
		SIS.Sright.passwords(r);
	}
	else if(x>170 && y>370 && x<230 && y<430 && click==1)        //to the left   //LEFT NAVICON COORDINATES
	{
		r--;
		arcu--;
		arcd--; 
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		SIS.Sleft.reset(r);
		SIS.Sleft.changeBG(r);
		SIS.Sleft.passwords(r);
	}                                      
   else if(x>=r && y>=130 && x<=(r+190) && y<=(130+190) && click==2)        //TE App call, TE TILE COORDS
	{
		noaccess();
	}
   else if(x>=(r-220) && y>=130 && x<=(r+190-220) && y<=(130+190) && click==2)        //Calc App call, Calc TILE COORDS
	{
		noaccess();
	}
   else if(x>=(r+220) && y>=130 && x<=(r+190+220) && y<=(130+190) && click==2)        //LUDO App call, LUDO TILE COORDS
	{
		noaccess();
	}
	else if(x>270 && y>370 && x<330 && y<430 && click==1)    //POWER BUTTON COORDINATES
	exit(1);
	else if(x>285 && y>445 && x<315 && y<475 && click==1)    //REFRESH BUTTON COORDINATE
	{
		baseflag=0;
      cleardevice();
		HOME(r,arcu,arcd,1,1);
	}
	else if(click==1)
	{
		REFRESHintoSet(r,arcu,arcd,x,y);      //REFRESHES INTO SETTINGS TILE SCREEN
	}
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::GAMEicons(int r)
{
	setcolor(WHITE);
   clriconscr();
	rectangle(r,130,r+190,320);
	rectangle(r-220,130,r-30,320);
	rectangle(r+220,130,r+410,320);
	gamelogo.TTT(r,130);
	gamelogo.CosMine(r-220,130);
	gamelogo.LUDO(r+220,130);
	arc_up(arcu);
	arc_down(arcd);
	if(x>370 && y>370 && x<430 && y<430 && click==1)   //to the right  //RIGHT NAVICON COORDINATES
	{
		r++;
		arcu++;
		arcd++;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		GIS.Gright.TTT(r);
		GIS.Gright.CosMine(r);
		GIS.Gright.LUDO(r);
	}
	else if(x>170 && y>370 && x<230 && y<430 && click==1)        //to the left   //LEFT NAVICON COORDINATES
	{
		r--;
		arcu--;
		arcd--;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		GIS.Gleft.TTT(r);
		GIS.Gleft.CosMine(r);
		GIS.Gleft.LUDO(r);
	}
   else if(x>=r && y>=130 && x<=(r+190) && y<=(130+190) && click==2)        //TTT App call, TTT TILE COORDS
	{
   	GApps.TA.TTT();
	}
   else if(x>=(r-220) && y>=130 && x<=(r+190-220) && y<=(130+190) && click==2)        //BRICKS App call, BRICKS TILE COORDS
	{
      GApps.BA.BRICKMAIN();
	}
   else if(x>=(r+220) && y>=130 && x<=(r+190+220) && y<=(130+190) && click==2)        //LUDO App call, LUDO TILE COORDS
	{
      GApps.HAP.hang();
	}
	else if(x>270 && y>370 && x<330 && y<430 && click==1)    //POWER BUTTON COORDINATES
	exit(1);
	else if(x>285 && y>445 && x<315 && y<475 && click==1)    //REFRESH BUTTON COORDINATE
	{
		baseflag=0;
      cleardevice();
		HOME(r,arcu,arcd,1,1);
	}
	else if(click==1)
	{
		REFRESHintoGAME(r,arcu,arcd,x,y);      //REFRESHES INTO SETTINGS TILE SCREEN
	}
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::XTRASicons(int r)
{
	setcolor(WHITE); 
   clriconscr();
	rectangle(r,130,r+190,320);
	rectangle(r-220,130,r-30,320);
	rectangle(r+220,130,r+410,320);
	xtraslogo.TheBloopers(r,130);
	xtraslogo.InTheDiary(r-220,130);
	xtraslogo.LC(r+220,130);
	arc_up(arcu);
	arc_down(arcd);
	if(x>370 && y>370 && x<430 && y<430 && click==1)   //to the right  //RIGHT NAVICON COORDINATES
	{
		r++;
		arcu++;
		arcd++;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		XIS.Xright.TheBloopers(r);
		XIS.Xright.InTheDiary(r);
		XIS.Xright.LC(r);
	}
	else if(x>170 && y>370 && x<230 && y<430 && click==1)        //to the left   //LEFT NAVICON COORDINATES
	{
		r--;
		arcu--;
		arcd--;
      clriconscr();
		arc_up(arcu);
		arc_down(arcd);
		XIS.Xleft.TheBloopers(r);
		XIS.Xleft.InTheDiary(r);
		XIS.Xleft.LC(r);
	}
   else if(x>=r && y>=130 && x<=(r+190) && y<=(130+190) && click==2)        //TTT App call, TTT TILE COORDS
	{
      XApps.BAP.BLOOMAIN();
	}
   else if(x>=(r-220) && y>=130 && x<=(r+190-220) && y<=(130+190) && click==2)        //CosMine App call, CosMine TILE COORDS
	{
      XApps.DAP.DIARYMAIN();
	}
   else if(x>=(r+220) && y>=130 && x<=(r+190+220) && y<=(130+190) && click==2)        //LUDO App call, LUDO TILE COORDS
	{
      XApps.LCA.LCMAIN();
	}
	else if(x>270 && y>370 && x<330 && y<430 && click==1)    //POWER BUTTON COORDINATES
	exit(1);
	else if(x>285 && y>445 && x<315 && y<475 && click==1)    //REFRESH BUTTON COORDINATE
	{
		baseflag=0;
      cleardevice();
		HOME(r,arcu,arcd,1,1);
	}
	else if(click==1)
	{
		REFRESHintoX(r,arcu,arcd,x,y);      //REFRESHES INTO SETTINGS TILE SCREEN
	}
}
void ConsoleOS_Operating_System_Core::DynamicGraphix::icons(int r)
{
   //this function executes only when a mouse activity occurs
   if(baseflag==0)
	{
		initdraw();
		mousecontrolledUI();
	}
	if(baseflag==1 || (x>=r && y>=130 && x<=(r+190) && y<=(130+190) && click==1))
	{
		baseflag=1;
		COSicons(r);
	}
	if(baseflag==2 || (x>=(r-220) && y>=130 && x<=(r+190-220) && y<=(130+190) && click==1))
	{
		baseflag=2;
		APPSicons(r);
	}
   if(baseflag==3 || (x>=(r-440) && y>=130 && x<=(r+190-440) && y<=(130+190) && click==1))
	{
		baseflag=3;
		Settingsicons(r);
	}
   if(baseflag==4 || (x>=(r+220) && y>=130 && x<=(r+190+220) && y<=(130+190) && click==1))
	{
		baseflag=4;
		GAMEicons(r);
	}
   if(baseflag==5 || (x>=(r+440) && y>=130 && x<=(r+190+440) && y<=(130+190) && click==1))
	{
		baseflag=5;
		XTRASicons(r);
	}
}
void ConsoleOS_Operating_System_Core::COS_Revolution_UserInterface::COS_ActiveGFX()//mouse coordinate action control
{  //icons redraws itself from here || check here if shit goes wrong
	while(1)
	{
		mouseposi(x,y,click);
		gotoxy(1,4);
		cout<<x<<" "<<y<<" "<<click<<"r = "<<r<<endl;
		gotoxy(20,1);
		cout<<"Baseflag="<<baseflag;
		if(DGfx.kgmc() && baseflag==0)
		DGfx.icons(r);    //will be called only on any user activity
      if(DGfx.kgmc() && baseflag==1)
		DGfx.COSicons(r);
      if(DGfx.kgmc() && baseflag==2)
		DGfx.APPSicons(r);
      if(DGfx.kgmc() && baseflag==3)
		DGfx.Settingsicons(r);
      if(DGfx.kgmc() && baseflag==4)
		DGfx.GAMEicons(r);
      if(DGfx.kgmc() && baseflag==5)
		DGfx.XTRASicons(r);
	}
}
char* ConsoleOS_Operating_System_Core::DynamicGraphix::loctimeret()
{
	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	return asctime(timeinfo);
}
int ConsoleOS_Operating_System_Core::DynamicGraphix::kgmc(void)       //_kbhit(), _getch(), _mouseposi() combo
{
	if(kbhit()?ch=getch():0 || click!=0)
	{
		return 1;
	}
	else
	return 0;
	//return kbhit()?ch=getch():0;    //keep this code... its been useful for now...
}
void ConsoleOS_Operating_System_Core::COS_Revolution_UserInterface::COS_DS_UI()
{
   cleardevice();
	setbkcolor(BLACK);
	//ruler();
	setcolor(WHITE);
	line(0,30,640,30);
	NBar.n_bar();
	NBar.LINE();        //initial draw
	DGfx.icons(r);       //initial draw
	DGfx.NavIcons();    //initial draw
	COS_ActiveGFX();    //actual program affecting code
}
int MouseControl::callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
void MouseControl::setposi(int &xpos,int &ypos)
{
	in.x.ax=4;
	in.x.cx=xpos;
	in.x.dx=ypos;
	int86(51,&in,&out);
}
void MouseControl::initialization()
{
   x=550,y=400;
   MouseControl mouse;
	setposi(x,y);
	callmouse();
}

ConsoleOS_Operating_System_Core::APPStiles AT;
void ConsoleOS_Operating_System_Core::APPSIconSet::MoveAPPStoRight::TE(int r)
{

	setcolor(WHITE);//fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r-1,130,r-1,320);   //black to overdraw white drag lines of icon box
	line(r+189,130,r+189,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
	AT.TE(r,130);
}
void ConsoleOS_Operating_System_Core::APPSIconSet::MoveAPPStoRight::COSSciCalc(int r)
{

		setcolor(WHITE); //fixed
		rectangle(r-220,130,r-30,320);     //left of center
		setcolor(BLACK);
		line(r-221,130,r-221,320);
		line(r-31,130,r-31,320);
		setcolor(WHITE);
		AT.COSSciCalc(r-220,130);
}
void ConsoleOS_Operating_System_Core::APPSIconSet::MoveAPPStoRight::TTT(int r)
{

		setcolor(WHITE);	  //fixed
		rectangle(r+220,130,r+410,320);       //right of center
		setcolor(BLACK);
		line(r+219,130,r+219,320);
		line(r+409,130,r+409,320);
		setcolor(WHITE);
		AT.TTT(r+220,130);
}

void ConsoleOS_Operating_System_Core::APPSIconSet::MoveAPPStoLeft::TE(int r)
{

		setcolor(WHITE);//fixed
		rectangle(r,130,r+190,320);       //center
		setcolor(BLACK);
		line(r+1,130,r+1,320);   //black to overdraw white drag lines of icon box
		line(r+191,130,r+191,320);        //black to overdraw white drag lines of icon box
		setcolor(WHITE);
		AT.TE(r,130);
}
void ConsoleOS_Operating_System_Core::APPSIconSet::MoveAPPStoLeft::COSSciCalc(int r)
{

		setcolor(WHITE); //fixed
		rectangle(r-220,130,r-30,320);     //left of center
		setcolor(BLACK);
		line(r-219,130,r-219,320);
		line(r-29,130,r-29,320);
		setcolor(WHITE);
		AT.COSSciCalc(r-220,130);
}
void ConsoleOS_Operating_System_Core::APPSIconSet::MoveAPPStoLeft::TTT(int r)
{

		setcolor(WHITE);	  //fixed
		rectangle(r+220,130,r+410,320);       //right of center
		setcolor(BLACK);
		line(r+221,130,r+221,320);
		line(r+411,130,r+411,320);
		setcolor(WHITE);
		AT.TTT(r+220,130);
}
void tiles::HELP(int x,int y)
{
	int ri=122,ro=142;
	//DARKGRAY LAYER || Outer layer
	setcolor(DARKGRAY);
	//GEAR INNER ARC
	arc(r-437,316,0,9,ri);
	arc(r-437,316,23,29,ri);
	arc(r-437,316,43,49,ri);
	arc(r-437,316,63,69,ri);
	arc(r-437,316,83,90,ri);
	//GEAR OUTER ARC
	arc(r-437,316,9,23,ro);
	arc(r-437,316,29,43,ro);
	arc(r-437,316,49,63,ro);
	arc(r-437,316,69,83,ro);
	//GEAR LINES
	for(int rad=122;rad<=142;rad++)
	{
		arc(r-437,316,8,9,rad);
		arc(r-437,316,22,23,rad);
		arc(r-437,316,28,29,rad);
		arc(r-437,316,42,43,rad);
		arc(r-437,316,48,49,rad);
		arc(r-437,316,62,63,rad);
		arc(r-437,316,68,69,rad);
		arc(r-437,316,82,83,rad);
	}
	int rli=ri-4,rlo=ro-4;
	//LIGHTGRAY LAYER || Inner layer
	//setcolor(LIGHTGRAY);
	//GEAR INNER ARC
	arc(r-437,316,0,11,rli);
	arc(r-437,316,21,31,rli);
	arc(r-437,316,41,51,rli);
	arc(r-437,316,61,71,rli);
	arc(r-437,316,81,90,rli);
	//GEAR OUTER ARC
	arc(r-437,316,11,21,rlo);
	arc(r-437,316,31,41,rlo);
	arc(r-437,316,51,61,rlo);
	arc(r-437,316,71,81,rlo);
	//GEAR LINES
	for(int rd=119;rd<=139;rd++)
	{
		arc(r-437,316,10,11,rd);
		arc(r-437,316,20,21,rd);
		arc(r-437,316,30,31,rd);
		arc(r-437,316,40,41,rd);
		arc(r-437,316,50,51,rd);
		arc(r-437,316,60,61,rd);
		arc(r-437,316,70,71,rd);
		arc(r-437,316,80,81,rd);
	}

	arc(r-437,316,0,90,50);
	arc(r-437,316,0,90,40);

	line(r-437,316,r-437,194);
	line(r-437,316,r-315,316);

	//THE FILLERS
  	setfillstyle(1,DARKGRAY);
	floodfill(r-317,313,DARKGRAY);
	setfillstyle(1,LIGHTGRAY);
   floodfill(r-321,313,DARKGRAY);
   setfillstyle(1,DARKGRAY);
   floodfill(r-389,313,DARKGRAY);
   setcolor(WHITE);
}
void APPStiles::TE(int x, int y)
{
   x=x+45;
   y=y+20;
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
void ConsoleOS_Operating_System_Core::APPStiles::COSSciCalc(int x, int y)
{
   x=x+145;
	rectangle(x-124,y+20,x-54,y+90);//1st small rectangle
	rectangle(x-124,y+100,x-54,y+170);//2nd small rectangle
	rectangle(x-44,y+20,x+26,y+170);// big rectangle
	settextstyle(0,0,10);// setting text style
	outtextxy(x-118,y+20,"+");//++++++++++++
	outtextxy(x-118,y+100,"-");//-----------
	outtextxy(x-38,y+60,"=");//=============
	setfillstyle(1,BLUE);
	floodfill(x-123,y+21,WHITE);
	setfillstyle(1,RED);
	floodfill(x-123,y+101,WHITE);
	setfillstyle(1,GREEN);
	floodfill(x-43,y+21,WHITE);
}
void ConsoleOS_Operating_System_Core::APPStiles::TTT(int x, int y)
{
	circle(x+95,y+95,90);
   circle(x+95,y+30,20);
   circle(x+50,y+50,20);
   circle(x+30,y+98,20);
   circle(x+53,y+143,20);
   circle(x+140,y+50,20);
   circle(x+125,y+125,40);
   setfillstyle(1,WHITE);
   floodfill(x+95,y+95,WHITE);
	setfillstyle(1,RED);
   floodfill(x+95,y+30,WHITE);
   setfillstyle(1,BLUE);
   floodfill(x+50,y+50,WHITE);
	setfillstyle(1,GREEN);
   floodfill(x+30,y+98,WHITE);
   setfillstyle(1,YELLOW);
   floodfill(x+53,y+143,WHITE);
	setfillstyle(1,BROWN);
   floodfill(x+140,y+50,WHITE);
}

void ConsoleOS_Operating_System_Core::Settingstiles::reset(int x,int y)
{
	setcolor(WHITE);
   setfillstyle(1,WHITE);
   pieslice(x+95,y+80,0,360,30);
   line(x+95,y+95,x+5,y+115);
   line(x+95,y+95,x+185,y+115);
   line(x+185,y+115,x+185,y+185);
   line(x+5,y+115,x+5,y+185);
   line(x+185,y+185,x+5,y+185);
   setfillstyle(6,RED);
   floodfill(x+180,y+180,WHITE);
}
void ConsoleOS_Operating_System_Core::Settingstiles::changeBG(int x,int y)
{
   setcolor(RED);
   settextstyle(0,0,4);
   outtextxy(x+20,y+10,"P @ 5");
   outtextxy(x+20,y+80,"5 W 0");
   outtextxy(x+20,y+150,"R D 5");
}
void ConsoleOS_Operating_System_Core::Settingstiles::passwords(int x,int y)
{
	setfillstyle(1,RED);
   bar(x+9,y+10,x+(9+43),y+180);
   setfillstyle(1,YELLOW);
   bar(x+(9+43),y+10,x+(9+43+43),y+180);
   setfillstyle(1,GREEN);
   bar(x+(9+43+43),y+10,x+(9+43+43+43),y+180);
   setfillstyle(1,BLUE);
   bar(x+(9+43+43+43),y+10,x+(9+43+43+43+43),y+180);
}


void ConsoleOS_Operating_System_Core::SettingsIconSet::MoveSetToRight::reset(int r)
{

   setcolor(WHITE);	  //fixed
   rectangle(r-220,130,r-30,320);     //left of center
	setcolor(BLACK);
	line(r+219,130,r+219,320);
	line(r+409,130,r+409,320);
	setcolor(WHITE);
   Slogo.reset(r-220,130);
}
void ConsoleOS_Operating_System_Core::SettingsIconSet::MoveSetToRight::changeBG(int r)
{

	setcolor(WHITE);//fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r-1,130,r-1,320);   //black to overdraw white drag lines of icon box
	line(r+189,130,r+189,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
   Slogo.changeBG(r,130);
}
void ConsoleOS_Operating_System_Core::SettingsIconSet::MoveSetToRight::passwords(int r)
{

	setcolor(WHITE);	  //fixed
	rectangle(r+220,130,r+410,320);       //right of center
	setcolor(BLACK);
	line(r+219,130,r+219,320);
	line(r+409,130,r+409,320);
	setcolor(WHITE);
   Slogo.passwords(r+220,130);
}










void ConsoleOS_Operating_System_Core::SettingsIconSet::MoveSetToLeft::reset(int r)
{

		setcolor(WHITE);//fixed
		rectangle(r,130,r+190,320);       //center
		setcolor(BLACK);
		line(r+1,130,r+1,320);   //black to overdraw white drag lines of icon box
		line(r+191,130,r+191,320);        //black to overdraw white drag lines of icon box
		setcolor(WHITE);
      Slogo.reset(r-220,130);
}
void ConsoleOS_Operating_System_Core::SettingsIconSet::MoveSetToLeft::changeBG(int r)
{

		setcolor(WHITE); //fixed
		rectangle(r-220,130,r-30,320);     //left of center
		setcolor(BLACK);
		line(r-219,130,r-219,320);
		line(r-29,130,r-29,320);
		setcolor(WHITE);
		Slogo.changeBG(r,130);
}
void ConsoleOS_Operating_System_Core::SettingsIconSet::MoveSetToLeft::passwords(int r)
{

		setcolor(WHITE);	  //fixed
		rectangle(r+220,130,r+410,320);       //right of center
		setcolor(BLACK);
		line(r+221,130,r+221,320);
		line(r+411,130,r+411,320);
		setcolor(WHITE);
      Slogo.passwords(r+220,130);
}













void ConsoleOS_Operating_System_Core::GAMEtiles::TTT(int x,int y)
{
   x=x+145;
	setlinestyle(0,0,0);
	setlinestyle(0,2,3);
	line(x-80,y+20,x-80,y+170);
	line(x-15,y+20,x-15,y+170);
	line(x-130,y+60,x+30,y+60);
	line(x-130,y+130,x+30,y+130);
	settextstyle(0,0,8);// setting text style
	setcolor(RED);
	outtextxy(x-75,y+65,"X");//XXXXXXXXXXX
	setcolor(YELLOW);
	settextstyle(0,0,7);// setting text style
	outtextxy(x-135,y+8,"O");//OOOOOOOOOO
   outtextxy(x-10,y+135,"O");//OOOOOOOOOO
	setcolor(WHITE);
	setlinestyle(0,0,0);
	settextstyle(0,0,0);
}

void ConsoleOS_Operating_System_Core::GAMEtiles::CosMine(int x,int y)
{
	setfillstyle(1,RED);

	bar3d(x+10,y+10,x+60,y+30,5,5);
	bar3d(x+70,y+10,x+120,y+30,5,5);
	bar3d(x+130,y+10,x+180,y+30,5,5);

   bar3d(x+40,y+40,x+90,y+60,5,5);
   bar3d(x+100,y+40,x+150,y+60,5,5);

	bar3d(x+10,y+70,x+60,y+90,5,5);
	bar3d(x+70,y+70,x+120,y+90,5,5);
	bar3d(x+130,y+70,x+180,y+90,5,5);

   setcolor(RED);
   pieslice(x+50,y+140,0,360,15);
   setcolor(WHITE);
   bar3d(x+30,y+170,x+100,y+180,5,5);
}

void ConsoleOS_Operating_System_Core::GAMEtiles::LUDO(int x,int y)
{
	circle(x+50,y+40,25);
   line(x+50,y+65,x+50,y+130);
   line(x+10,y+85,x+90,y+85);
   line(x+50,y+130,x+10,y+180);
   line(x+50,y+130,x+90,y+180);
   line(x+100,y+120,x+120,y+120);
   line(x+130,y+120,x+150,y+120);
   line(x+160,y+120,x+180,y+120);
   settextstyle(0,0,2);
   outtextxy(x+134,y+105,"A");
}


void ConsoleOS_Operating_System_Core::GAMEIconSet::MoveGAMEToRight::TTT(int r)
{

	setcolor(WHITE);                  //fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r-1,130,r-1,320);            //black to overdraw white drag lines of icon box
	line(r+189,130,r+189,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
	Glogo.TTT(r,130);
}
void ConsoleOS_Operating_System_Core::GAMEIconSet::MoveGAMEToRight::CosMine(int r)
{

	setcolor(WHITE);                   //fixed
	rectangle(r-220,130,r-30,320);     //left of center
	setcolor(BLACK);
	line(r-221,130,r-221,320);
	line(r-31,130,r-31,320);
	setcolor(WHITE);
	Glogo.CosMine(r-220,130);
}
void ConsoleOS_Operating_System_Core::GAMEIconSet::MoveGAMEToRight::LUDO(int r)
{

	setcolor(WHITE);                  	  //fixed
	rectangle(r+220,130,r+410,320);       //right of center
	setcolor(BLACK);
	line(r+219,130,r+219,320);
	line(r+409,130,r+409,320);
	setcolor(WHITE);
	Glogo.LUDO(r+220,130);
}

void ConsoleOS_Operating_System_Core::GAMEIconSet::MoveGAMEToLeft::TTT(int r)
{

	setcolor(WHITE);                  //fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r+1,130,r+1,320);            //black to overdraw white drag lines of icon box
	line(r+191,130,r+191,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
	Glogo.TTT(r,130);
}
void ConsoleOS_Operating_System_Core::GAMEIconSet::MoveGAMEToLeft::CosMine(int r)
{

	setcolor(WHITE);                   //fixed
	rectangle(r-220,130,r-30,320);     //left of center
	setcolor(BLACK);
	line(r-219,130,r-219,320);
	line(r-29,130,r-29,320);
	setcolor(WHITE);
	Glogo.CosMine(r-220,130);
}
void ConsoleOS_Operating_System_Core::GAMEIconSet::MoveGAMEToLeft::LUDO(int r)
{

	setcolor(WHITE);                  	  //fixed
	rectangle(r+220,130,r+410,320);       //right of center
	setcolor(BLACK);
	line(r+221,130,r+221,320);
	line(r+411,130,r+411,320);
	setcolor(WHITE);
	Glogo.LUDO(r+220,130);
}



























void ConsoleOS_Operating_System_Core::XTRAStiles::InTheDiary(int x, int y)
{
   setcolor(WHITE);
   line(x+10,y+10,x+95,y+50);
   line(x+180,y+10,x+95,y+50);

   line(x+10,y+120,x+95,y+170);
   line(x+180,y+120,x+95,y+170);

   line(x+10,y+130,x+95,y+180);
   line(x+180,y+130,x+95,y+180);

   line(x+10,y+10,x+10,y+130);
   line(x+180,y+10,x+180,y+130);

   setfillstyle(1,BROWN);
   floodfill(x+60,y+60,WHITE);

   setfillstyle(9,BROWN);
   floodfill(x+95,y+175,WHITE);

   line(x+95,y+50,x+95,y+180);
}
void ConsoleOS_Operating_System_Core::XTRAStiles::TheBloopers(int x, int y)
{
	setfillstyle(1,BLUE);
   bar(x+10,y+10,x+180,y+180);
   settextstyle(10,0,4);
   setcolor(WHITE);
   outtextxy(x+25,y+60,"O0P5!");
}
void ConsoleOS_Operating_System_Core::XTRAStiles::LC(int x, int y)
{
	x=x+145;
	setcolor(RED);
	circle(x-84,y+70,28);
	line(x-110,y+80,x-56,y+170);
	circle(x-28,y+70,28);
	line(x-2,y+80,x-56,y+170);
	setfillstyle(1,RED);
	floodfill(x-84,y+70,RED);
	floodfill(x-28,y+70,RED);
	floodfill(x-56,y+169,RED);
	setcolor(WHITE);
	settextstyle(0,0,8);// setting text style
	outtextxy(x-35,y+33,"+");//+++
}





void ConsoleOS_Operating_System_Core::XTRASIconSet::MoveXToRight::InTheDiary(int r)
{

   setcolor(WHITE);	  //fixed
   rectangle(r-220,130,r-30,320);     //left of center
	setcolor(BLACK);
	line(r+219,130,r+219,320);
	line(r+409,130,r+409,320);
	setcolor(WHITE);
   Xlogo.InTheDiary(r-220,130);
}
void ConsoleOS_Operating_System_Core::XTRASIconSet::MoveXToRight::TheBloopers(int r)
{

	setcolor(WHITE);//fixed
	rectangle(r,130,r+190,320);       //center
	setcolor(BLACK);
	line(r-1,130,r-1,320);   //black to overdraw white drag lines of icon box
	line(r+189,130,r+189,320);        //black to overdraw white drag lines of icon box
	setcolor(WHITE);
   Xlogo.TheBloopers(r,130);
}
void ConsoleOS_Operating_System_Core::XTRASIconSet::MoveXToRight::LC(int r)
{

	setcolor(WHITE);	  //fixed
	rectangle(r+220,130,r+410,320);       //right of center
	setcolor(BLACK);
	line(r+219,130,r+219,320);
	line(r+409,130,r+409,320);
	setcolor(WHITE);
   Xlogo.LC(r+220,130);
}

void ConsoleOS_Operating_System_Core::XTRASIconSet::MoveXToLeft::InTheDiary(int r)
{

		setcolor(WHITE);//fixed
		rectangle(r,130,r+190,320);       //center
		setcolor(BLACK);
		line(r+1,130,r+1,320);   //black to overdraw white drag lines of icon box
		line(r+191,130,r+191,320);        //black to overdraw white drag lines of icon box
		setcolor(WHITE);
      Xlogo.InTheDiary(r-220,130);
}
void ConsoleOS_Operating_System_Core::XTRASIconSet::MoveXToLeft::TheBloopers(int r)
{

		setcolor(WHITE); //fixed
		rectangle(r-220,130,r-30,320);     //left of center
		setcolor(BLACK);
		line(r-219,130,r-219,320);
		line(r-29,130,r-29,320);
		setcolor(WHITE);
		Xlogo.TheBloopers(r,130);
}
void ConsoleOS_Operating_System_Core::XTRASIconSet::MoveXToLeft::LC(int r)
{

		setcolor(WHITE);	  //fixed
		rectangle(r+220,130,r+410,320);       //right of center
		setcolor(BLACK);
		line(r+221,130,r+221,320);
		line(r+411,130,r+411,320);
		setcolor(WHITE);
      Xlogo.LC(r+220,130);
}

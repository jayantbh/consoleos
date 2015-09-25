#include"cos.h"
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<process.h>
class preinitialization
{
	public:
	void transition()
	{
		setcolor(BLACK);
		for(int i=0,j=640,k=0;k<=480;k++)
		{
			line(i,k,j,k);
			delay(2);
		}
		setcolor(WHITE);
	}
   preinitialization()
   {
   	int g_dr,g_mode;
		g_dr=DETECT;
		initgraph(&g_dr,&g_mode,"C:/BC5/BGI");      //alter it to your bgi directory
		delay(3);                                   //delay to suit BGI MODE startup lag
		startup::bootanimation bootanim;            //bootanim constructor
		MouseControl mouse;                         //mouse init constructor
		transition();                               //post bootani transition
		mouse.initialization();                     //mouse initializer final
		ConsoleOS_Operating_System_Core cosc;       //COS Startup object
		cosc.cosrui.COS_DS_UI();                    //Homescreen call
		getch();
   }
};
void main()
{
	preinitialization ConsoleOSRevolution;
}
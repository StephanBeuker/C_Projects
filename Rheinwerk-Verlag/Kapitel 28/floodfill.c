long int FloodCnt=0;
void _FloodFill(long int x, long int y, long int OldColor, long int NewColor) {
	FloodCnt++;
	if ((Point_Front(x,y)!=OldColor)&&(Point_Front(x,y)!=NewColor)&&(x>=0)&&(x<XRES)&&(y>=0)&&(y<YRES)&&(FloodCnt<1000000))
	{
		PSet(x,y,NewColor);
		_FloodFill(x,y+1,OldColor,NewColor);
		_FloodFill(x,y-1,OldColor,NewColor);
		_FloodFill(x-1,y,OldColor,NewColor);
		_FloodFill(x+1,y,OldColor,NewColor);
	}
}

void FloodFill(long int x, long int y, long int BorderColor, long int FillColor) {
	FloodCnt=0; _FloodFill(x,y,BorderColor,FillColor);
	if (FloodCnt>=1000000) { Rectangle(0,0,XRES-1,YRES 1,FillColor,FillColor); }
}

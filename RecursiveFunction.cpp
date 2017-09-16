#include <iostream>
#include <iomanip>
using namespace std;

int fun(int x,int y)
{
	if( x == 0)return (y + 1)%1000;
	if( x > 0 && y == 0 )
	{
		return fun( x-1 , 1)%1000;
	}
	else if( x>0 && y>0 )
	{
		return fun(x-1 , fun(x,y-1) );
	}
	
	
}

int main()
{
int x,y;
cin>>x>>y;

cout<<setw(3)<<setfill('0')<<fun(x,y);


    return 0;
}

/*

F(x, y) = {
y + 1 when x = 0,
F(x - 1, 1) when x > 0 and y = 0,
F(x - 1, F(x, y - 1)) when x > 0 and y > 0
}

*/
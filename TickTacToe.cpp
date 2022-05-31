#include<iostream>
using namespace std;
#define R 3
#define C 3

void assign(char aa[][C], char turn, bool& nn);
void check(char aaa[][C], bool& nnn);
void display(char a[][C]);
void verify1(char aaa[][C], int chh);
void verify2(int chh);

int main()
{
	char  a[R][C] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
	int ch;
	
	cout<<"\n\t\t\tT i c k  C r o s s  G a m e\n";
	display(a);
	
	char turn;
	bool n = true;
	
	do
	{
		turn = 'X';
		cout<<"\n\t\t\t\tPlayer1[X] Turn\n";
		assign(a, turn, n);
		if(n)
		{
			turn = 'O';
			cout<<"\n\t\t\t\tPlayer2[O] Turn\n";
			assign(a, turn, n);	
		}
	}
	while(n);
	

	
	return 0;
	
}
void assign(char aa[][C], char turn, bool& nn)
{
	int ch;
	cout<<"\nEnter Your Choice: ";
	cin>>ch;
	verify2(ch);
	verify1(aa, ch);
	switch(ch)
	{
		case 1:
			aa[0][0] = turn;
			check(aa, nn);
			if(nn)
				display(aa);
			break;
		case 2:
			aa[0][1] = turn;
			check(aa, nn);
			if(nn)
				display(aa);
			break;
		
		case 3:
			aa[0][2] = turn;
			check(aa, nn);
			if(nn)
				display(aa);
			break;
		
		case 4:
			aa[1][0] = turn;
			check(aa, nn);
			if(nn)
				display(aa);
			break;
		
		case 5:
			aa[1][1] = turn;
			check(aa, nn);
			if(nn)
				display(aa);
			break;
		
		case 6:
			aa[1][2] = turn;
			if(nn)
				check(aa, nn);
			display(aa);
			break;
		
		case 7:
			aa[2][0] = turn;
			if(nn)
				check(aa, nn);
			display(aa);
			break;
		
		case 8:
			aa[2][1] = turn;
			check(aa, nn);
			if(nn)
				display(aa);
			break;
		
		case 9:
			aa[2][2] = turn;
			check(aa, nn);
			if(nn)
				display(aa);
			break;
											
	}	
}

void check(char aaa[][C], bool& nnn)
{
	
	//R1
	if((aaa[0][0] == 'X') && (aaa[0][1] == 'X') && (aaa[0][2] == 'X'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[0][0] == 'O') && (aaa[0][1] == 'O') && (aaa[0][2] == 'O'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	//R2
	else if((aaa[1][0] == 'X') && (aaa[1][1] == 'X') && (aaa[1][2] == 'X'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[1][0] == 'O') && (aaa[1][1] == 'O') && (aaa[1][2] == 'O'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	
	//R3
	else if((aaa[2][0] == 'X') && (aaa[2][1] == 'X') && (aaa[2][2] == 'X'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[2][0] == 'O') && (aaa[2][1] == 'O') && (aaa[2][2] == 'O'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
		
	//C1
	else if((aaa[0][0] == 'X') && (aaa[1][0] == 'X') && (aaa[2][0] == 'X'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[0][0] == 'O') && (aaa[1][0] == 'O') && (aaa[2][0] == 'O'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	
	//C2
	else if((aaa[0][1] == 'X') && (aaa[1][1] == 'X') && (aaa[2][1] == 'X'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[0][1] == 'O') && (aaa[1][1] == 'O') && (aaa[2][1] == 'O'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	
	//C3
	else if((aaa[0][2] == 'X') && (aaa[1][2] == 'X') && (aaa[2][2] == 'X'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[0][2] == 'O') && (aaa[1][2] == 'O') && (aaa[2][2] == 'O'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	//D1
	else if((aaa[0][0] == 'X') && (aaa[1][1] == 'X') && (aaa[2][2] == 'X'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[0][2] == 'O') && (aaa[1][1] == 'O') && (aaa[2][0] == 'O'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	//D2
	else if((aaa[0][0] == 'O') && (aaa[1][1] == 'O') && (aaa[2][2] == 'O'))
	{
		cout<<"\n\t\t\t Player1 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
	else if((aaa[0][2] == 'X') && (aaa[1][1] == 'X') && (aaa[2][0] == 'X'))
	{
		cout<<"\n\t\t\t Player2 WON the GAME! Game Over!!!!wOOOOOOoooooh\n\n";
		nnn = false;
		return ;
	}
}
void display(char a[][C])
{
	
	cout<<"\n\t\t  \t\tPlayer1[X] \n";
	cout<<"\t\t\t\t  Player2[O] \n";
	
	cout<<"\t\t\t           |            |          \n";
	cout<<"\t\t\t     "<<a[0][0]<<"     |     "<<a[0][1]<<"      |     "<<a[0][2]<<"    \n";
	cout<<"\t\t\t___________|____________|__________\n";
	cout<<"\t\t\t           |            |          \n";
	cout<<"\t\t\t     "<<a[1][0]<<"     |     "<<a[1][1]<<"      |     "<<a[1][2]<<"    \n";
	cout<<"\t\t\t___________|____________|__________\n";
	cout<<"\t\t\t           |            |          \n";
	cout<<"\t\t\t     "<<a[2][0]<<"     |     "<<a[2][1]<<"      |     "<<a[2][2]<<"    \n";
	cout<<"\t\t\t           |            |          \n";			
}
void verify1(char aaa[][C], int chh)
{
	
	int counter = 1;
	bool con = true;
	
	while(con)
	{
		con = false;	
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
					
				if((aaa[i][j] == 'X') || (aaa[i][j] == 'O'))
				{
					if(counter == chh)
					{
						con = true;
					}
				
				}
				counter++;
			}
		}
		if(con)
		{
			cout<<"\nBOX is Already filled\nEnter Choice Again: ";
			cin>>chh;
		}
		
	}
	
}
void verify2(int chh)
{

	bool con = true;
	
	while(con)
	{
		con = false;
		if((chh<1) || (chh>9))
		{
			con = true;
		}
		
		if(con)
		{
			cout<<"\nYour Choice is Out of Range\nEnter Choice Again: ";
			cin>>chh;
		}		
	}
	
}

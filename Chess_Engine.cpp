#include <iostream>
#include <string>
#include <windows.h>
#include <dos.h>


using namespace std;

void S_print(string str, int s){for(int i=0; i<str.length(); i++){cout<<str[i]; Sleep(s*10);}  } //just to make it pretty

 string c[64] = {"Wr","Wn","Wb","Wk","Wq","Wb","Wn","Wr",
	"Wp","Wp","Wp","Wp","Wp","Wp","Wp","Wp" ,
	"  ","  ","  ","  ","  ","  ","  ","  ",
	"  ","  ","  ","  ","  ","  ","  ","  ",
	"  ","  ","  ","  ","  ","  ","  ","  ",
	"  ","  ","  ","  ","  ","  ","  ","  ",
	"Bp","Bp","Bp","Bp","Bp","Bp","Bp","Bp",
	"Br","Bn","Bb","Bk","Bq","Bb","Bn","Br"};

void print(int board[]) {
	
	int i=0;

	
	
	//defining the side and abovepart of the board that consist of every cell coordination within the board
		
	char cha = 'A';
	cout<<endl;
	for(int i=1; i<9; i++)
	{
		cout<<"  "<<i<<"  ";
	}
	cout<<endl;
	
    //First line
    {

        cout << char(218);

        int aa = 7;
        while (aa--) {
            int a = 4;
            while (a--) { 
                cout << char(196); 
            }
        cout << char(194);
        }

        int a = 4;
        while (a--) {
            cout << char(196);
        }
        cout << char(191);
    }
    cout << endl;
    int b = 3;

    while(b--){
        //Second line
        {
        int aa = 4;
        cout << char(179);
        while (aa--) {
            int a = 4;

            while (a--) {
                cout << char(178);
            }

            cout << char(179);
            a = 4;
            while (a--) {
                cout << char(176);
            }

            cout << char(179);
        }
    }
        cout << endl;
        //Third line
        {
            cout << char(179);
            int aa = 4;
            while (aa--) {
                cout << char(178) << c[board[i++]] << char(178) << char(179);
                cout << char(176) << c[board[i++]] << char(176) << char(179);
            }
        }
        cout<<"  "<<cha++;        
        cout << endl;
        //repeate of the second line(4th lline)
        {
            cout << char(179);
            int aa = 4;
            while (aa--) {

                int a = 4;
                while (a--) {
                    cout << char(178);
                }

                cout << char(179);
                a = 4;
                while (a--) {
                    cout << char(176);
                }

                cout << char(179);
            }
        }
        cout << endl;
        //closing line
        {
            cout << char(195);
            int a = 7;
            while (a--) {
                cout << char(196) << char(196) << char(196) << char(196) << char(197);
            }
            cout << char(196) << char(196) << char(196) << char(196) << char(180);
        }
        cout << endl;
        //repeate of the second line by changing 8's to 6 and 6's to 8
        {
            cout << char(179);
            int aa = 4;
            while (aa--) {

                int a = 4;
                while (a--) {
                    cout << char(176);
                }

                cout << char(179);
                a = 4;
                while (a--) {
                    cout << char(178);
                }

                cout << char(179);
            }
        }
        cout << endl;
        //repeate of the third line and changing 8's to 6 an 6's to 8
        {
            cout << char(179);
            int aa = 4;
            while (aa--) {
                cout << char(176) << c[board[i++]] << char(176) << char(179);
                cout << char(178) << c[board[i++]] << char(178) << char(179);
            }
        }
        cout<<"  "<<cha++;        
        cout << endl;
        //repeate of the 4th line and changing 8's to 6 and 6's to 8
        {
            cout << char(179);
            int aa = 4;
            while (aa--) {

                int a = 4;
                while (a--) {
                    cout << char(176);
                }

                cout << char(179);
                a = 4;
                while (a--) {
                    cout << char(178);
                }

                cout << char(179);
            }
        }
        cout << endl;
        //repeating the closing line
        {
            cout << char(195);
            int a = 7;
            while (a--) {
                cout << char(196) << char(196) << char(196) << char(196) << char(197);
            }
            cout << char(196) << char(196) << char(196) << char(196) << char(180);
        }
        cout << endl;
    }
	
	//the last row of the board is manual
	//second line (again)
    {   
        cout << char(179);
        int aa = 4;
        while (aa--) {

            int a = 4;
            while (a--) {
                cout << char(178);
            }

            cout << char(179);
            a = 4;
            while (a--) {
                cout << char(176);
            }

            cout << char(179);
        }
    }
    cout << endl;
    //third line(again)
    {
        cout << char(179);
        int aa = 4;
        while (aa--) {
            cout << char(178) << c[board[i++]] << char(178) << char(179);
            cout << char(176) << c[board[i++]] << char(176) << char(179);
        }
    }
    cout<<"  "<<cha++;
    cout << endl;
    //repeat of the second line(4th line)(again)
    {
        cout << char(179);
        int aa = 4;
        while (aa--) {

            int a = 4;
            while (a--) {
                cout << char(178);
            }

            cout << char(179);
            a = 4;
            while (a--) {
                cout << char(176);
            }

            cout << char(179);
        }
    }
    cout << endl;
    //closing line(again)
    {
        cout << char(195);
        int a = 7;
        while (a--) {
            cout << char(196) << char(196) << char(196) << char(196) << char(197);
        }
        cout << char(196) << char(196) << char(196) << char(196) << char(180);
    }
    cout << endl;
    //repeate of the second line by changing 8's to 6 and 6's to 8(again)
    {
        cout << char(179);
        int aa = 4;
        while (aa--) {

            int a = 4;
            while (a--) {
                cout << char(176);
            }

            cout << char(179);
            a = 4;
            while (a--) {
                cout << char(178);
            }

            cout << char(179);
        }
    }
    cout << endl;
    //repeate of the third line and changing 8's to 6 an 6's to 8(again)
    {
        cout << char(179);
        int aa = 4;
        while (aa--) {
            cout << char(176) << c[board[i++]] << char(176) << char(179);
            cout << char(178) << c[board[i++]] << char(178) << char(179);
        }
    }
    cout<<"  "<<cha++;    
    cout << endl;
    //repeate of the 4th line and changing 8's to 6 and 6's to 8(again)
    {
        cout << char(179);
        int aa = 4;
        while (aa--) {

            int a = 4;
            while (a--) {
                cout << char(176);
            }

            cout << char(179);
            a = 4;
            while (a--) {
                cout << char(178);
            }

            cout << char(179);
        }
    }
    cout << endl;
    //last closingg line
    {
        cout << char(192);

        int aa = 7;
        while (aa--) {
            int a = 4;
            while (a--) { cout << char(196); }
            cout << char(193);
        }

        int a = 4;
        while (a--) {
            cout << char(196);
        }
        cout << char(217);
    }
    cout << endl;
}

/// all the pices are quite the same (their rules of moving) except the pawn which is one bach moves from up to down and another moves from down to up
//Piece Defining:
  
bool Wknight(int board[],int i, int j)// the knight with the  'Wn' in the main array   //upper knights
{
	if(board[j] > 15)
	{
	
		if ((i + 16) + 1 == j)
		{	
			return 1;
		}
		if ((i + 16) - 1 == j)
		{
			return 1;
		}
		if ((i - 16) + 1 == j)
		{
			return 1;
		}
		if ((i - 16) - 1 == j)
		{
			return 1;
		}
		if((i + 2) + 8 == j)
		{
			return 1;
		}
		if((i + 2) - 8 == j)
		{
			return 1;
		}
		if((i - 2) + 8 == j)
		{
			return 1;
		}	
		if((i - 2) - 8 == j)
		{
			return 1;
		}
	}
	else{
		return 0;
	}
}

bool Bknight(int board[],int i, int j) //the knight with the  'Bn' in the main array    //down knights
{
	if(board[j] < 48)
	{
	
		if ((i + 16) + 1 == j)
		{	
			return 1;
		}
		if ((i + 16) - 1 == j)
		{
			return 1;
		}
		if ((i - 16) + 1 == j)
		{
			return 1;
		}
		if ((i - 16) - 1 == j)
		{
			return 1;
		}
		if((i + 2) + 8 == j)
		{
			return 1;
		}
		if((i + 2) - 8 == j)
		{
			return 1;
		}
		if((i - 2) + 8 == j)
		{
			return 1;
		}	
		if((i - 2) - 8 == j)
		{
			return 1;
		}
	}
	else{
		return 0;
	}
}

bool Wpown(int board[], int i, int j)//the pawns with 'Wp' //the upper pawns
{
	
	//for just moving of the pawns
	if (board[j] > 15 || board[j] < 48){

		if (i + 8 == j)
		{
			return 1;
		}
		if (i / 8 == 1 && i + 16 == j)//if pawns are located in their first row they can move one or two blocks
		{
			return 1;
		}
	}	
	//for diagnol movements of pawns
	if(i + 7 == j && board[j] > 47)
	{
		return 1;
	}
	if (i + 9 == j && board[j] > 47)
	{
		return 1;
	}
	return 0;
}

bool Bpown(int board[], int i, int j)//the pawns with 'Bp' //the down pawns
{
	//for just moving of the pawns
	if (board[j] > 15 || board[j] < 48){

		if (i - 8 == j)
		{
			return 1;
		}
		if (i / 8 == 6 && i - 16 == j)//if pawns are located in their first row they can move one or two blocks
		{
			return 1;
		}
	}	
	//for diagnol movements of pawns
	if(i - 7 == j && board[j] < 16)
	{
		return 1;
	}
	if (i - 9 == j && board[j] < 16)
	{
		return 1;
	}
	return 0;
}

bool Wrook(int board[], int i, int j)//upper rooks with 'Wr'
{
    if((i/8==j/8)&& i>j){ //left movement
    	while(i>j){
		i--;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i/8==j/8)&& i<j){//right movement
    	while(i<j){
		i++;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i>j){//up movement
    	while(i>j){
		i -= 8;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i<j){//down movement
    	while(i<j){
		i += 8;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
		
}

bool Brook(int board[], int i, int j)//down rooks with 'Br'
{
	if((i/8==j/8)&& i>j){//left movement
    	while(i>j){
		i--;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i/8==j/8)&& i<j){//right movement
    	while(i<j){
		i++;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i>j){//down movement
    	while(i>j){
		i -= 8;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i<j){//up movement
    	while(i<j){
		i += 8;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
}

bool Wbishop(int board[], int i, int j)	//white bishop 'Wb"
{
   // if(((i-j)%7==0) || ((i-j)%9==0) || ((j-i)%7==0) || ((j-i)%9==0)){return 1;} 	
   if((i-j)>0 && (i-j)%7==0){
   	while(i>j){
	   i-=7;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	
	if((i-j)>0 && (i-j)%9==0){
   	while(i>j){
	   i-=9;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%7==0){
   	while(i<j){
	   i+=7;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%9==0){
   	while(i<j){
	   i+=9;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }
	    }
   }  

bool Bbishop(int board[], int i, int j)	//down bishops 'Bb'
{
    if((i-j)>0 && (i-j)%7==0){
   	while(i>j){
	   i-=7;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	
	if((i-j)>0 && (i-j)%9==0){
   	while(i>j){
	   i-=9;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%7==0){
   	while(i<j){
	   i+=7;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%9==0){
   	while(i<j){
	   i+=9;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }
	    }
}

bool Wqueen(int board[], int i, int j)//uppeer queen 'Wq'
{
    if((i/8==j/8)&& i>j){
    	while(i>j){
		i--;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i/8==j/8)&& i<j){
    	while(i<j){
		i++;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i>j){
    	while(i>j){
		i -= 8;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i<j){
    	while(i<j){
		i += 8;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i-j)>0 && (i-j)%7==0){
   	while(i>j){
	   i-=7;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	
	if((i-j)>0 && (i-j)%9==0){
   	while(i>j){
	   i-=9;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%7==0){
   	while(i<j){
	   i+=7;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%9==0){
   	while(i<j){
	   i+=9;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }
	    }
	
		
}

bool Bqueen(int board[], int i, int j)//down queen 'Bq'
{
    if((i-j)>0 && (i-j)%7==0){
   	while(i>j){
	   i-=7;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	
	if((i-j)>0 && (i-j)%9==0){
   	while(i>j){
	   i-=9;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%7==0){
   	while(i<j){
	   i+=7;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%9==0){
   	while(i<j){
	   i+=9;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }
	    }
	 
	if((i/8==j/8)&& i>j){
    	while(i>j){
		i--;
		if(i==j && board[i]<18){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i/8==j/8)&& i<j){
    	while(i<j){
		i++;
		if(i==j && board[i]<18){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i>j){
    	while(i>j){
		i -= 8;
		if(i==j && board[i]<18){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i<j){
    	while(i<j){
		i += 8;
		if(i==j && board[i]<18){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}   
	    

}

bool Wking(int board[], int i, int j)//upper king 'Wk'
{
	//like rooks
	if((i/8==j/8)&& i>j){ //left movement
    	while(i>j){
		i--;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i/8==j/8)&& i<j){//right movement
    	while(i<j){
		i++;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i>j){//up movement
    	while(i>j){
		i -= 8;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i<j){//down movement
    	while(i<j){
		i += 8;
		if(i==j && board[i]>16){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	//like bishops
	if((i-j)>0 && (i-j)%7==0){
   	while(i>j){
	   i-=7;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	
	if((i-j)>0 && (i-j)%9==0){
   	while(i>j){
	   i-=9;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%7==0){
   	while(i<j){
	   i+=7;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%9==0){
   	while(i<j){
	   i+=9;
	   if(i==j && (board[i]>16)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }
	    }
}

bool Bking(int board[], int i, int j)//down king ''
{
	//like rooks
	if((i/8==j/8)&& i>j){//left movement
    	while(i>j){
		i--;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i/8==j/8)&& i<j){//right movement
    	while(i<j){
		i++;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i>j){//down movement
    	while(i>j){
		i -= 8;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	
	if((i%8==j%8) && i<j){//up movement
    	while(i<j){
		i += 8;
		if(i==j && board[i]<47){return 1;}
		else if(board[i]==17){continue;}
		else if(board[i] !=17){return 0;}
	 }
	}
	//like bishops
	if((i-j)>0 && (i-j)%7==0){
   	while(i>j){
	   i-=7;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	
	if((i-j)>0 && (i-j)%9==0){
   	while(i>j){
	   i-=9;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%7==0){
   	while(i<j){
	   i+=7;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }  
	   }
	   
	if((i-j)<0 && (i-j)%9==0){
   	while(i<j){
	   i+=9;
	   if(i==j && (board[i]<18)){return 1;}
	   else if(board[i]<16){return 0;}
	   else if(board[i]==17){continue;}
	   else if(board[i]>47){return 0;}
	     }
	    }
}



int main() { 


    int b1=0,b2=0,b3=0; 
    int score1=0,score2=0;
    string in;
    bool p1_end_line=false, p2_end_line=false;
    
    bool turn=true; //true means white turn and false means black turn
    
	//assigning numbers to each piece based on their starting position 
	int a[64];
	for (int i=0; i<64; i++){a[i] = i;}
	for(int i=16; i<48; i++){a[i] = 17;}
	for(int i=48; i<64; i++){a[i] = i;}
	

	cout<<"============================ Chess Engine 2023 ============================";
	Sleep(1500);
	cout<<endl<<endl;
	S_print("Rules are mostly the same as normal chess except for...", 5);
	cout<<endl<<endl;
	Sleep(1500);	
	S_print("1.No Checkmate",5);
	Sleep(1500);
	cout<<endl;
	S_print("2.The game ends if one palyer reaches the other side of the board by his powns", 5);
	Sleep(1500);
	cout<<endl;
	S_print("3.The game ends if one player losses all his powns",5);
	Sleep(5000);
	cout<<endl<<endl;
	S_print("(S)tart?",5);
	
	while(in !="s" && in !="S"){cin>>in;}
	
	system("cls");
    print(a);
    
    //This loop is for changing the position of the pieces by the command of the user
    while(1)
    {
    	bool check = 0; //to give the order of the movement
 
    	//first string that user define that which piece he/she wants to move
    	string str1,str2;
    	cout<<"Choose Piece To Be Moved example(a1 or b1): ";
    	cin>>str1;
    	cout<<endl;
    	int initial_p = ((str1[0] - 97)*8) + ((str1[1] - 48)-1);// finding the position of the defined piece in the board

    	//second string is for placing the picked piece in a new coordination by the user command
    	cout<<"Move to: ";
    	cin>>str2;
    	
    	int secondary_p=0;
    	
    	secondary_p = ((str2[0] - 97)*8) + ((str2[1] - 48)-1);// finding the position of the defined place to be moved inn the board
    	//cout<<"initial_p: "<<initial_p<<" secondary_p: "<<secondary_p;
    	
    	//checking...
    	
    	//first checking turns
    	if((turn && a[initial_p]<16) || (!turn && a[initial_p]>47)) {}
    	else{cout<<"Not Your Turn! "<<endl; continue;}
    	
			
    	//check the validity of Wknights (upper) moves
    	if (a[initial_p] == 1 || a[initial_p] == 6)
    	{
    		if (Wknight(a, initial_p, secondary_p) == 1)
    		{
    			check = 1;
			}
		}
		//check the validity of Bknights (down) moves
    	if (a[initial_p] == 57 || a[initial_p] == 62)
    	{
    		if (Bknight(a, initial_p, secondary_p) == 1)
    		{
    			check = 1;
			}
		}
		
		//check the validity of Wpown (upper powns)
		if(a[initial_p] < 16 && a[initial_p] > 7)
		{
			if (Wpown(a,initial_p,secondary_p) == 1)
			{
				check = 1;
			if(secondary_p<64 && secondary_p>55){p1_end_line=true;}//if any of the pawns reach to the end of the board the game will be finished
		    }
		}
		
		//check the validity of Bpown (down powns)
		if(a[initial_p] < 56 && a[initial_p] > 47)
		{
			if (Bpown(a,initial_p,secondary_p) == 1)
			{
				check = 1;
			if(secondary_p<8 && secondary_p>=0){p2_end_line=true;}//if any of the pawns reach to the end of the board the game will be finished
			}
		}
		//check the validity of the upper rooks 'Wr' movements
		if (a[initial_p] == 0 || a[initial_p] == 7)
		{
			if (Wrook(a,initial_p,secondary_p) == 1)
			{
				check = 1; 
			}
		}
		//check the validity of the down rooks 'Br' movements
		if(a[initial_p] == 56 || a[initial_p] == 63)
		{
			if (Brook(a,initial_p,secondary_p) == 1)
			{
				check = 1;
			}
		}
		
		//check the validity of the upper Wbishops 'Wb' movements
		if (a[initial_p] == 2 || a[initial_p] == 5)
		{
			if (Wbishop(a,initial_p,secondary_p) == 1)
			{
				check = 1; 
			}
		}
		//check the validity of the down Bbishops 'Bb' movements
		if(a[initial_p] == 58 || a[initial_p] == 61)
		{
			if (Bbishop(a,initial_p,secondary_p) == 1)
			{
				check = 1;
			}
		}
		
		//check the validity of kings1 'Wk' movements (it's a mixture of bishop's and rooks' movements)
		if (a[initial_p] == 3)
		{
			if (Wking(a,initial_p,secondary_p) == 1)
			{
				check = 1; 						
			}
		}
		//check the validity of Bkings 'Bk' movements(it's mixture of bishop's and rooks' movements)
		if(a[initial_p] == 59)
		{
			if (Bking(a,initial_p,secondary_p) == 1)
			{
				check = 1;							
			}
		}
		
		//check the validity of Wqueen 'Wq' movements
		if (a[initial_p] == 4)
		{
			if (Wqueen(a,initial_p,secondary_p) == 1)
			{
				check = 1; 						
			} 
		}
		//check the validity of Bqueen 'Bq' movements
		if(a[initial_p] == 60)
		{
			if (Bqueen(a,initial_p,secondary_p) == 1)
			{
				check = 1;							
			}
		}
    
		
		
    	//changing the place of the two coordination by it's piece
    	if (check == 1)
    	{
    		//how many white powns are down
    		if(a[secondary_p]==8){b1++;}
    		else if(a[secondary_p]==9){b1++;}
    		else if(a[secondary_p]==10){b1++;}
    		else if(a[secondary_p]==11){b1++;}
    		else if(a[secondary_p]==13){b1++;}
    		else if(a[secondary_p]==14){b1++;}
    		else if(a[secondary_p]==15){b1++;}
    		if(b1==8){cout<<"Black Ended the Game by eliminating Powns"; break;}
    		
    		//how many black powns are down
    	    if(a[secondary_p]==48){b2++;}
    	    else if(a[secondary_p]==49){b2++;}
    	    else if(a[secondary_p]==50){b2++;}
    	    else if(a[secondary_p]==51){b2++;}
    	    else if(a[secondary_p]==52){b2++;}
    	    else if(a[secondary_p]==53){b2++;}
    	    else if(a[secondary_p]==54){b2++;}
    	    else if(a[secondary_p]==55){b2++;}
    	    if(b2==8){cout<<"White Ended the Game by eliminating Powns";break;}
    	    
    	    
    	    //score system
    	    if(a[secondary_p]==0){score1 += 5;} //rook
    	    else if(a[secondary_p]==1){score1 += 3;} // knight
    	    else if(a[secondary_p]==2){score1 += 3;} // bishop
    	    else if(a[secondary_p]==3){score1 += 8;} // king (originally king's score is 1 since no one can kill him and he is sort of useles but we assign to add a bit of intesity to the game
    	    else if(a[secondary_p]==4){score1 += 9;} // queen
    	    else if(a[secondary_p]==5){score1 += 3;} // other bishop
    	    else if(a[secondary_p]==6){score1 += 3;} // other knight
    	    else if(a[secondary_p]==7){score1 += 5;} // other rook
    	    
    	    //white
    	    else if(a[secondary_p]==56){score2 += 5;} //white rook
    	    else if(a[secondary_p]==57){score2 += 3;} //white knight
    	    else if(a[secondary_p]==58){score2 += 3;} //white bishop
    	    else if(a[secondary_p]==59){score2 += 8;} //white king
    	    else if(a[secondary_p]==60){score2 += 9;} //white queen
    	    else if(a[secondary_p]==61){score2 += 3;} //other white bihop
    	    else if(a[secondary_p]==62){score2 += 3;} //other white knight
    	    else if(a[secondary_p]==63){score2 += 5;} //other white ro0k
    	     //we didnt calculate the score taken from killing pown since we have the number of them and their score is one so we just need to add it app to score
    	    
    	    if(a[secondary_p] != 17)
    	    {
    	    	a[secondary_p] = 17;
			}
    	    
    		int tmp = a[initial_p];
    		a[initial_p] = a[secondary_p];
    		a[secondary_p] = tmp;
    	
    		if(a[initial_p] < 16 || a[secondary_p] > 47)//should be known
    		{
    			a[initial_p] = 16;
			}
    	
    		system("cls"); // This command is for updating the board after each move
    		
    		cout<<"Eliminated White Powns: "<<b1<<"  "<<"Eliminated Black Powns: "<<b2<<endl;
    	    
    		cout<<"White's score is: "<<score1+b2<<"  "<<"Black's Score is: "<<score2+b1<<endl;
    		
    		print(a);
    		
    		turn = !turn;//shifting the turns after each move
    	}
    	else if(check == 0){
    		cout<<"Invalide move, try again"<<endl;}
    		
    	if(p1_end_line){cout<<"White Ended the Game by Reaching the Other side";break;}
		if(p2_end_line){cout<<"Black Ended the Game by Reaching the Other side";break;}	
	}
	///Giving the result of the game
	if((score1+b2)==(score2+b1)){cout<<endl<<"EVEN";}
	else if((score1+b2)>(score2+b1)){cout<<endl<<"White Wins With: "<<score1+b2<<" Score";}
	else if((score1+b2)<(score2+b1)){cout<<endl<<"Black Wins With: "<<score2+b1<<" Score";}
	else{cout<<endl<<"Riddle me this, What just happened? O_O ";}	
}








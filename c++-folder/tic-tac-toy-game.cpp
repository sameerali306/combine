#include<iostream>
using namespace std;

char CurrentPlayer;
char CurrentMarker;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void drawboard(){
    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
    cout<<"---|---|---"<<endl;

    cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
    cout<<"---|---|---"<<endl;

    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;

}

 bool placeMarker(int slot){
        int row = (slot-1)/3;
        int col =(slot-1)%3;

        if (board[row][col]!='X' && board[row][col]!='O')
        {
           board[row][col]=CurrentMarker;
           return true;
        }else{
            return false;
        }

        
        
    }

    int winner(){
            for (int i = 0; i < 3; i++)
            {
               if (board[i][0]==board[i][1]==board[i][2])
               {
                return CurrentPlayer;
               }
                
            }

            for (int i = 0; i < 3; i++)
            {
               if (board[0][i]==board[1][i]==board[2][i])
               {
                return CurrentPlayer;
               }
                
            }

            if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
            {
              return CurrentPlayer;  
            }

            if (board[0][2]==board[1][1] && board[1][1]==board[0][2])
            {
                return CurrentPlayer;
            }
        return 0;
            
            
            
        }

        void swabPlayerandMarker(){
            if (CurrentPlayer=='X')
            {
                CurrentMarker='O';
            }else
            {
                CurrentMarker='X';
            }
            
            if (CurrentPlayer==1)
            {
                CurrentPlayer=2;
            }
            else{
                {
                CurrentPlayer=1;
            }
            }
            
        }

void game(){
    cout<<"Player 1 choice your marker : X O :";
    char marker1;
    cin>>marker1;

    CurrentPlayer-1;
    CurrentMarker-marker1;

    drawboard();

    int playerwon;
    for (int i = 0; i < 9; i++)
    {
       cout<<"its player"<<CurrentPlayer<<"'s turn Enter you slot :";
       int slot;
       cin>>slot;

       if (slot<1 || slot>9)
       {
        cout<<"it is not a valid slot . you ma try again ";
        i--;
        continue;
       }
       if (!placeMarker(slot))
       {
        cout<<"place accupies . try again..\n";
        i--;
        continue;
       }
       drawboard();

       playerwon=winner();
       if (playerwon==1)
       {
        cout<<"player 1 is winner...";
        break;
       }
       if (playerwon==2)
       {
        cout<<"player 2 is winner...";
        break;
       }
       swabPlayerandMarker();

       if (playerwon==0)
       {
       cout<<"it is a tie game ....";
       }
       
       
       
    }
    
}

int main(){
    game();
    return 0;
}
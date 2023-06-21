// 8_Queens_Problem_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "includes.h"
#include "TIME_DATE_SHOW.cpp"





#define SIZE 8
#define SIZE_H 128
#define WHITE_SQUARE 0xDB
#define BLACK_SQUARE 0xFF



//enum CHESS_H { O, a8,b8,c8,d8,e8,f8,g8,h8,
//    a7, b7, c7, d7, e7, f7, g7, h7,
//    a6,b6, c6, d6, e6, f6, g6, h6 ,
//    a5, b5, c5, d5, e5, f5, g5,h5 ,
//    a4, b4, c4, d4, e4, f4, g4, h4,
//    a3, b3, c3, d3, e3, f3, g3, h3,
//    a2, b2, c2, d2, e2, f2, g2, h2
//    , a1, b1, c1, d1, e1, f1, g1, h1
//
//};

enum  CHESS_P {E1,Q};

int ChessBoard[SIZE][SIZE] = {CHESS_P::E1,CHESS_P::E1,CHESS_P::E1,CHESS_P::E1,CHESS_P::E1,CHESS_P::E1,CHESS_P::E1,CHESS_P::E1,
CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, 
CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, 
CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, 
CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, 
CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1,
CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, 
CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, CHESS_P::E1, };
                       



using namespace std;

class Chess {
public :

    void PrintBoard(int n); // Method for printing the chess board 
    bool isSafe(int col, int row, int n); //Method for checking if the position is safe for pacing the Queen or not
    bool solutions(int , int );
   



};



int main()
{

    TIME_DATE();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // make output larger
    static CONSOLE_FONT_INFOEX  fontex;
    fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetCurrentConsoleFontEx(hOut, 0, &fontex);
    fontex.FontWeight = 666;
    fontex.dwFontSize.X = 36;
    fontex.dwFontSize.Y = 36;
    SetCurrentConsoleFontEx(hOut, NULL, &fontex);
    //

    char Ch;
    int sw=0;
    int n;
    Chess object_Q;
    do
    {
        cout << "START : [1] \n";
        cout << "Exit  : [0] \n";
        cin >> sw;
        switch (sw)
        {
        case 1: {
            cout << "\t\t\t((HINT : The [0] is 'Empty squares' and [1] is 'Queen' ))" << endl;
            cout << "\n\t\t\t\t_________CHESS Coordinates________" << endl;
            cout << "\n \t\t\t\t 8|  a8  b8  c8  d8  e8  f8  g8  h8 | "
                "\n \t\t\t\t 7|  a7  b7  c7  d7  e7  f7  g7  h7 | "
                "\n \t\t\t\t 6|  a6  b6  c6  d6  e6  f6  g6  h6 | "
                "\n \t\t\t\t 5|  a5  b5  c5  d5  e5  f5  g5  h5 | "
                "\n \t\t\t\t 4|  a4  b4  c4  d4  e4  f4  g4  h4 | "
                "\n \t\t\t\t 3|  a3  b3  c3  d3  e3  f3  g3  h3 | "
                "\n \t\t\t\t 2|  a2  b2  c2  d2  e2  f2  g2  h2 | "
                "\n \t\t\t\t 1|  a1  b1  c1  d1  e1  f1  g1  h1 |\n";
            cout << "\t\t\t\t_____A___B___C____D___E___F___G___H______\n";
            cout << "Enter number of Queens" << endl;

            cout << ">>"; cin >> n;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    ChessBoard[i][j] = E1;

                }

            }
            bool result = object_Q.solutions(n, 0);
            if (result == false)
            {
                cout << "\a The Solution dose not exist \a" << endl;
            }
            else
            {
                cout << endl;
            }
            cout << "\n\t\t\t\t_________CHESS Coordinates________" << endl;
            cout << "\n \t\t\t\t 8|  a8  b8  c8  d8  e8  f8  g8  h8 | "
                "\n \t\t\t\t 7|  a7  b7  c7  d7  e7  f7  g7  h7 | "
                "\n \t\t\t\t 6|  a6  b6  c6  d6  e6  f6  g6  h6 | "
                "\n \t\t\t\t 5|  a5  b5  c5  d5  e5  f5  g5  h5 | "
                "\n \t\t\t\t 4|  a4  b4  c4  d4  e4  f4  g4  h4 | "
                "\n \t\t\t\t 3|  a3  b3  c3  d3  e3  f3  g3  h3 | "
                "\n \t\t\t\t 2|  a2  b2  c2  d2  e2  f2  g2  h2 | "
                "\n \t\t\t\t 1|  a1  b1  c1  d1  e1  f1  g1  h1 |\n";
            cout << "\t\t\t\t_____A___B___C____D___E___F___G___H______\n";


            cout << "\n___________________________________________________________\n";
            system("pause");
            system("cls");
            cout << "See Extra!! : ['E']\n ";
            cout << "Continue    : ['C']\n ";
         
            cout << ">>"; cin >> Ch;
            switch (Ch) //case 2 
            {
            case 'E':
            case 'e': {

                system(" start  IMAGES.bat");

                break;
            }

            case 'C':
            case 'c': {

                break;
            }

            default:{
                cout << "\a INVALID_INPUT \a" << endl;
                break; }
                
            }// end of case 2 
            

            break;// end of case 1
        }
        case 0:
        {
            sw = 0;
            break; 
        }
         
        default :{ 
            cout << "\a INVALID_INPUT \a" << endl;
            break; }
        
        
        }
    
  
    } while (sw!=0);
   
    return 0;
}




void Chess::PrintBoard(int n) {

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
           
          cout << ChessBoard[i][j] << "   ";
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;

   

}

bool Chess::isSafe(int col, int row, int n)
{
    for (int i = 0; i < row; i++)
    {
        if (ChessBoard[i][col]) {
            return false;
        }
    }
    for (int i =row , j=col ; i>=0 && j>=0;i--,j--)
    {
        if (ChessBoard[i][j])
        {
            return false;
        }
    }
    
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) 
    {
        if (ChessBoard[i][j]) 
        {
            return false;
        }

    }

    return true;
}

bool Chess::solutions(int n , int row)
{
    if (n == row)
    {
        PrintBoard(n);
        return true;
    }
    bool result = false;
    for (int i = 0; i <= n-1; i++)
    {
        if (isSafe(i,row,n))
        {
            ChessBoard[row][i] = 1;
            result = solutions(n, row + 1) || result;
            ChessBoard[row][i] = 0;
        }
    }



    return result;
}


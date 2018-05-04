#include <iostream>
#include <fstream>

using namespace std;
ifstream in("excel1.in");
ofstream out("");

int main()
{int col,lin;char ch,col_input,lin_input,ch2,col_input2,lin_input2;
    in>>col>>lin;
    int table[col][lin];
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<lin;j++)
        {
            in>>ch;
            if(ch == '=')
            {
                in>>col_input>>lin_input;
                in>>ch2;
                if(ch2 == '+')
                {
                    in>>col_input2>>lin_input2;
                    table[i][j] = table[col_input][lin_input] + table[col_input2][lin_input2];
                }
            }
        }
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<lin;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

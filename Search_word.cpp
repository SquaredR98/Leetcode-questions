// https://www.geeksforgeeks.org/search-a-word-in-a-2d-grid-of-characters/

#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > vec = {{-1,-1}, {-1,0}, {1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};

char grid[3][13] = {{'G', 'E', 'E', 'K', 'S', 'F', 'O', 'R', 'G', 'E', 'E', 'K', 'S'}, 
                     {'G', 'E', 'E', 'K', 'Q', 'U', 'I', 'Z', 'G', 'E', 'E', 'K', 'S'},
                     {'G', 'E', 'E', 'K', 'S', 'F', 'O', 'R', 'G', 'E', 'E', 'K', 'S'}};

bool cell_search(int r, int c, int x, int y, string word) // given (x,y) cell
{
    int i,j,x_c, y_c, x_limit, y_limit;
    int n = word.length();
    // In all directions
    for(i = 0; i < 8; i++)
    {
        int flag = 0;
        x_limit = x + vec[i].first*(n-1);
        y_limit = y + vec[i].second*(n-1);
        // check legality of this direction for the word
        if(x_limit>=0 && x_limit<r && y_limit>=0 && y_limit<c)
        {
            for(j = 0; j < n; j++)
            {
                x_c = x + vec[i].first;
                y_c = y + vec[i].second;
                if(word[j] != grid[x_c][y_c])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0)
            return true;
    }
    return false;
}

int main()
{
    int r = 3, c = 13;
    int i,j;
    string word = "GEEKS";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(cell_search(r, c, i, j, word)==true)
            {
                cout<<"Word Found"<<endl;
                return 0;
            }
        }
    }
}

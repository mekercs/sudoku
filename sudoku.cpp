#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int MERET = 9;

    int szar[MERET][MERET] =
        {{3, 0, 6, 5, 0, 8, 4, 0, 0},
         {5, 2, 0, 0, 0, 0, 0, 0, 0},
         {0, 8, 7, 0, 0, 0, 0, 3, 1},
         {0, 0, 3, 0, 1, 0, 0, 8, 0},
         {9, 0, 0, 8, 6, 3, 0, 0, 5},
         {0, 5, 0, 0, 9, 0, 6, 0, 0},
         {1, 3, 0, 0, 0, 0, 2, 5, 0},
         {0, 0, 0, 0, 0, 0, 0, 7, 4},
         {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    int szamok[MERET] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int kezdo = 0;
    int vegzo = 3;
    int random;
for (size_t i = 0; i < MERET; i++) {
        for (size_t y = 0; y < MERET; y++) {
            if (szar[i][y] == 0) {
                int random;
                bool szarszam;
                do {
                    random = szamok[rand() % 9];
                    szarszam = true;

                    int sor = (i / 3) * 3;
                    int oszlop = (y / 3) * 3;

                    for (int kurva = 0; kurva < 3; kurva++) {
                        for (int fasz = 0; fasz < 3; fasz++) {
                            if (szar[sor + kurva][oszlop + fasz] == random) {
                                szarszam = false;  
                                break;
                            }
                        }
                        if (!szarszam) break;  
                    }

                } while (!szarszam);  
                szar[i][y] = random;
            }
        }
    }
    /*  // while (true) {
      for (size_t i = 0; i < MERET; i++)
      {
          for (size_t j = 0; j < MERET; j++)
          {
              if (szar[i][j] == 0)
              {
                  if (szar[i][j] == szamok[j + 1] && szar[i][j] == szamok[i + 1])
                  {
                  }
                  else
                  {
                      szar[i][j] = szamok[rand() % 9];
                  }

              }
          }
      }
  */
    for (size_t i = 0; i < MERET; i++)
    {
        for (size_t j = 0; j < MERET; j++)
        {
            if (j % 3 == 0 && j != 0)
            {
                cout << "  ";
            }
            cout << szar[i][j] << " ";
        }
        if (i == 2 || i == 5 || i == 8)
        {
            cout << "\n";
        }
        cout << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int Deg;
  double Dis;
  cin >> Deg >> Dis;

  // W
  int dis = round(Dis / 6);
  int W;
  if (dis <= 2)
    W = 0;
  else if (dis <= 15)
    W = 1;
  else if (dis <= 33)
    W = 2;
  else if (dis <= 54)
    W = 3;
  else if (dis <= 79)
    W = 4;
  else if (dis <= 107)
    W = 5;
  else if (dis <= 138)
    W = 6;
  else if (dis <= 171)
    W = 7;
  else if (dis <= 207)
    W = 8;
  else if (dis <= 244)
    W = 9;
  else if (dis <= 284)
    W = 10;
  else if (dis <= 326)
    W = 11;
  else
    W = 12;

  // Dir
  string Dir;
  if (W == 0)
    Dir = "C";
  else if (Deg <= 112)
    Dir = "N";
  else if (Deg <= 337)
    Dir = "NNE";
  else if (Deg <= 562)
    Dir = "NE";
  else if (Deg <= 787)
    Dir = "ENE";
  else if (Deg <= 1012)
    Dir = "E";
  else if (Deg <= 1237)
    Dir = "ESE";
  else if (Deg <= 1462)
    Dir = "SE";
  else if (Deg <= 1687)
    Dir = "SSE";
  else if (Deg <= 1912)
    Dir = "S";
  else if (Deg <= 2137)
    Dir = "SSW";
  else if (Deg <= 2362)
    Dir = "SW";
  else if (Deg <= 2587)
    Dir = "WSW";
  else if (Deg <= 2812)
    Dir = "W";
  else if (Deg <= 3037)
    Dir = "WNW";
  else if (Deg <= 3262)
    Dir = "NW";
  else if (Deg <= 3487)
    Dir = "NNW";
  else
    Dir = "N";

  cout << Dir << " " << W << "\n";

  return 0;
}
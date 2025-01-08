#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aaaaaaaa;
   int _bbbbbbbb;
   int _xxxxxxxx;
   int _yyyyyyyy;
   printf("Enter _aaaaaaaa:");
   scanf("%d", &_aaaaaaaa);
   printf("Enter _bbbbbbbb:");
   scanf("%d", &_bbbbbbbb);
   printf("%d\n", (_aaaaaaaa + _bbbbbbbb));
   printf("%d\n", (_aaaaaaaa - _bbbbbbbb));
   printf("%d\n", (_aaaaaaaa * _bbbbbbbb));
   printf("%d\n", (_aaaaaaaa / _bbbbbbbb));
   printf("%d\n", (_aaaaaaaa % _bbbbbbbb));
   _xxxxxxxx = (((_aaaaaaaa - _bbbbbbbb) * 10) + ((_aaaaaaaa + _bbbbbbbb) / 10));
   _yyyyyyyy = (_xxxxxxxx + (_xxxxxxxx % 10));
   printf("%d\n", _xxxxxxxx);
   printf("%d\n", _yyyyyyyy);
   system("pause");
    return 0;
}
